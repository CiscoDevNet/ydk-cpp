
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_5.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_rsvp_oper {

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::UnnumberedRroSubObject()
    :
    interface_address{YType::str, "interface-address"},
    interface_id{YType::uint32, "interface-id"}
    	,
    flags(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags>())
{
    flags->parent = this;
    children["flags"] = flags;

    yang_name = "unnumbered-rro-sub-object"; yang_parent_name = "rro";
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::~UnnumberedRroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::has_data() const
{
    return interface_address.is_set
	|| interface_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_address.operation)
	|| is_set(interface_id.operation)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-rro-sub-object";

    return path_buffer.str();

}

EntityPath Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/rro/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_address.is_set || is_set(interface_address.operation)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flags")
    {
        if(flags != nullptr)
        {
            children["flags"] = flags;
        }
        else
        {
            flags = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags>();
            flags->parent = this;
            children["flags"] = flags;
        }
        return children.at("flags");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::get_children()
{
    if(children.find("flags") == children.end())
    {
        if(flags != nullptr)
        {
            children["flags"] = flags;
        }
    }

    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-address")
    {
        interface_address = value;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::Flags()
    :
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_id{YType::boolean, "is-node-id"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"}
{
    yang_name = "flags"; yang_parent_name = "unnumbered-rro-sub-object";
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::~Flags()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::has_data() const
{
    return is_bandwidth_protected.is_set
	|| is_node_id.is_set
	|| is_node_protection_available.is_set
	|| is_protection_available.is_set
	|| is_protection_in_use.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_bandwidth_protected.operation)
	|| is_set(is_node_id.operation)
	|| is_set(is_node_protection_available.operation)
	|| is_set(is_protection_available.operation)
	|| is_set(is_protection_in_use.operation);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";

    return path_buffer.str();

}

EntityPath Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/rro/unnumbered-rro-sub-object/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.operation)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.operation)) leaf_name_data.push_back(is_node_id.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.operation)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_protection_available.is_set || is_set(is_protection_available.operation)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.operation)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::get_children()
{
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
    }
    if(value_path == "is-protection-available")
    {
        is_protection_available = value;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use = value;
    }
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::SrlgRroSubObject()
    :
    srl_gs{YType::uint32, "srl-gs"}
{
    yang_name = "srlg-rro-sub-object"; yang_parent_name = "rro";
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::~SrlgRroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::has_data() const
{
    for (auto const & leaf : srl_gs.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::has_operation() const
{
    for (auto const & leaf : srl_gs.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(srl_gs.operation);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-rro-sub-object";

    return path_buffer.str();

}

EntityPath Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/rro/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto srl_gs_name_datas = srl_gs.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srl_gs_name_datas.begin(), srl_gs_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::get_children()
{
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srl-gs")
    {
        srl_gs.append(value);
    }
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::RsbInfo()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label{YType::uint32, "backup-label"},
    destination_address{YType::str, "destination-address"},
    is_flow_spec_valid{YType::boolean, "is-flow-spec-valid"},
    is_rro_valid{YType::boolean, "is-rro-valid"},
    is_valid{YType::boolean, "is-valid"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"}
    	,
    flow_spec(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec>())
	,generic_flow_spec(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec>())
	,generic_out_label(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel>())
{
    flow_spec->parent = this;
    children["flow-spec"] = flow_spec;

    generic_flow_spec->parent = this;
    children["generic-flow-spec"] = generic_flow_spec;

    generic_out_label->parent = this;
    children["generic-out-label"] = generic_out_label;

    yang_name = "rsb-info"; yang_parent_name = "psb-rsb-info";
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::~RsbInfo()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::has_data() const
{
    for (std::size_t index=0; index<rro.size(); index++)
    {
        if(rro[index]->has_data())
            return true;
    }
    return backup_interface.is_set
	|| backup_label.is_set
	|| destination_address.is_set
	|| is_flow_spec_valid.is_set
	|| is_rro_valid.is_set
	|| is_valid.is_set
	|| out_interface.is_set
	|| out_label.is_set
	|| (flow_spec !=  nullptr && flow_spec->has_data())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_data())
	|| (generic_out_label !=  nullptr && generic_out_label->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::has_operation() const
{
    for (std::size_t index=0; index<rro.size(); index++)
    {
        if(rro[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(backup_interface.operation)
	|| is_set(backup_label.operation)
	|| is_set(destination_address.operation)
	|| is_set(is_flow_spec_valid.operation)
	|| is_set(is_rro_valid.operation)
	|| is_set(is_valid.operation)
	|| is_set(out_interface.operation)
	|| is_set(out_label.operation)
	|| (flow_spec !=  nullptr && flow_spec->has_operation())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_operation())
	|| (generic_out_label !=  nullptr && generic_out_label->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsb-info";

    return path_buffer.str();

}

EntityPath Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.operation)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label.is_set || is_set(backup_label.operation)) leaf_name_data.push_back(backup_label.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (is_flow_spec_valid.is_set || is_set(is_flow_spec_valid.operation)) leaf_name_data.push_back(is_flow_spec_valid.get_name_leafdata());
    if (is_rro_valid.is_set || is_set(is_rro_valid.operation)) leaf_name_data.push_back(is_rro_valid.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.operation)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-spec")
    {
        if(flow_spec != nullptr)
        {
            children["flow-spec"] = flow_spec;
        }
        else
        {
            flow_spec = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec>();
            flow_spec->parent = this;
            children["flow-spec"] = flow_spec;
        }
        return children.at("flow-spec");
    }

    if(child_yang_name == "generic-flow-spec")
    {
        if(generic_flow_spec != nullptr)
        {
            children["generic-flow-spec"] = generic_flow_spec;
        }
        else
        {
            generic_flow_spec = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec>();
            generic_flow_spec->parent = this;
            children["generic-flow-spec"] = generic_flow_spec;
        }
        return children.at("generic-flow-spec");
    }

    if(child_yang_name == "generic-out-label")
    {
        if(generic_out_label != nullptr)
        {
            children["generic-out-label"] = generic_out_label;
        }
        else
        {
            generic_out_label = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel>();
            generic_out_label->parent = this;
            children["generic-out-label"] = generic_out_label;
        }
        return children.at("generic-out-label");
    }

    if(child_yang_name == "rro")
    {
        for(auto const & c : rro)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro>();
        c->parent = this;
        rro.push_back(std::move(c));
        children[segment_path] = rro.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::get_children()
{
    if(children.find("flow-spec") == children.end())
    {
        if(flow_spec != nullptr)
        {
            children["flow-spec"] = flow_spec;
        }
    }

    if(children.find("generic-flow-spec") == children.end())
    {
        if(generic_flow_spec != nullptr)
        {
            children["generic-flow-spec"] = generic_flow_spec;
        }
    }

    if(children.find("generic-out-label") == children.end())
    {
        if(generic_out_label != nullptr)
        {
            children["generic-out-label"] = generic_out_label;
        }
    }

    for (auto const & c : rro)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
    }
    if(value_path == "backup-label")
    {
        backup_label = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "is-flow-spec-valid")
    {
        is_flow_spec_valid = value;
    }
    if(value_path == "is-rro-valid")
    {
        is_rro_valid = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GenericOutLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;
    children["generalized-label"] = generalized_label;

    yang_name = "generic-out-label"; yang_parent_name = "rsb-info";
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::~GenericOutLabel()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(generic_label_type.operation)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-out-label";

    return path_buffer.str();

}

EntityPath Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.operation)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generalized-label")
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
        else
        {
            generalized_label = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel>();
            generalized_label->parent = this;
            children["generalized-label"] = generalized_label;
        }
        return children.at("generalized-label");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::get_children()
{
    if(children.find("generalized-label") == children.end())
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
    }

    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
    }
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{
    yang_name = "generalized-label"; yang_parent_name = "generic-out-label";
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";

    return path_buffer.str();

}

EntityPath Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/generic-out-label/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::get_children()
{
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::FlowSpec()
    :
    flow_average_rate{YType::uint64, "flow-average-rate"},
    flow_max_burst{YType::uint64, "flow-max-burst"},
    flow_max_unit{YType::uint32, "flow-max-unit"},
    flow_min_unit{YType::uint32, "flow-min-unit"},
    flow_peak_rate{YType::uint64, "flow-peak-rate"},
    flow_qos{YType::enumeration, "flow-qos"},
    flow_requested_rate{YType::uint64, "flow-requested-rate"},
    flow_slack{YType::uint32, "flow-slack"}
{
    yang_name = "flow-spec"; yang_parent_name = "rsb-info";
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::~FlowSpec()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::has_data() const
{
    return flow_average_rate.is_set
	|| flow_max_burst.is_set
	|| flow_max_unit.is_set
	|| flow_min_unit.is_set
	|| flow_peak_rate.is_set
	|| flow_qos.is_set
	|| flow_requested_rate.is_set
	|| flow_slack.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_average_rate.operation)
	|| is_set(flow_max_burst.operation)
	|| is_set(flow_max_unit.operation)
	|| is_set(flow_min_unit.operation)
	|| is_set(flow_peak_rate.operation)
	|| is_set(flow_qos.operation)
	|| is_set(flow_requested_rate.operation)
	|| is_set(flow_slack.operation);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-spec";

    return path_buffer.str();

}

EntityPath Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_average_rate.is_set || is_set(flow_average_rate.operation)) leaf_name_data.push_back(flow_average_rate.get_name_leafdata());
    if (flow_max_burst.is_set || is_set(flow_max_burst.operation)) leaf_name_data.push_back(flow_max_burst.get_name_leafdata());
    if (flow_max_unit.is_set || is_set(flow_max_unit.operation)) leaf_name_data.push_back(flow_max_unit.get_name_leafdata());
    if (flow_min_unit.is_set || is_set(flow_min_unit.operation)) leaf_name_data.push_back(flow_min_unit.get_name_leafdata());
    if (flow_peak_rate.is_set || is_set(flow_peak_rate.operation)) leaf_name_data.push_back(flow_peak_rate.get_name_leafdata());
    if (flow_qos.is_set || is_set(flow_qos.operation)) leaf_name_data.push_back(flow_qos.get_name_leafdata());
    if (flow_requested_rate.is_set || is_set(flow_requested_rate.operation)) leaf_name_data.push_back(flow_requested_rate.get_name_leafdata());
    if (flow_slack.is_set || is_set(flow_slack.operation)) leaf_name_data.push_back(flow_slack.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::get_children()
{
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-average-rate")
    {
        flow_average_rate = value;
    }
    if(value_path == "flow-max-burst")
    {
        flow_max_burst = value;
    }
    if(value_path == "flow-max-unit")
    {
        flow_max_unit = value;
    }
    if(value_path == "flow-min-unit")
    {
        flow_min_unit = value;
    }
    if(value_path == "flow-peak-rate")
    {
        flow_peak_rate = value;
    }
    if(value_path == "flow-qos")
    {
        flow_qos = value;
    }
    if(value_path == "flow-requested-rate")
    {
        flow_requested_rate = value;
    }
    if(value_path == "flow-slack")
    {
        flow_slack = value;
    }
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::GenericFlowSpec()
    :
    flow_spec_type{YType::enumeration, "flow-spec-type"}
    	,
    g709otn_flow_spec(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec>())
{
    g709otn_flow_spec->parent = this;
    children["g709otn-flow-spec"] = g709otn_flow_spec;

    yang_name = "generic-flow-spec"; yang_parent_name = "rsb-info";
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::~GenericFlowSpec()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::has_data() const
{
    return flow_spec_type.is_set
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_spec_type.operation)
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-flow-spec";

    return path_buffer.str();

}

EntityPath Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_spec_type.is_set || is_set(flow_spec_type.operation)) leaf_name_data.push_back(flow_spec_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "g709otn-flow-spec")
    {
        if(g709otn_flow_spec != nullptr)
        {
            children["g709otn-flow-spec"] = g709otn_flow_spec;
        }
        else
        {
            g709otn_flow_spec = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec>();
            g709otn_flow_spec->parent = this;
            children["g709otn-flow-spec"] = g709otn_flow_spec;
        }
        return children.at("g709otn-flow-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::get_children()
{
    if(children.find("g709otn-flow-spec") == children.end())
    {
        if(g709otn_flow_spec != nullptr)
        {
            children["g709otn-flow-spec"] = g709otn_flow_spec;
        }
    }

    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type = value;
    }
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::G709OtnFlowSpec()
    :
    flow_bit_rate{YType::uint64, "flow-bit-rate"},
    flow_multiplier{YType::uint16, "flow-multiplier"},
    flow_nvc{YType::uint16, "flow-nvc"},
    flow_signal_type{YType::uint8, "flow-signal-type"}
{
    yang_name = "g709otn-flow-spec"; yang_parent_name = "generic-flow-spec";
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::~G709OtnFlowSpec()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::has_data() const
{
    return flow_bit_rate.is_set
	|| flow_multiplier.is_set
	|| flow_nvc.is_set
	|| flow_signal_type.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_bit_rate.operation)
	|| is_set(flow_multiplier.operation)
	|| is_set(flow_nvc.operation)
	|| is_set(flow_signal_type.operation);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-flow-spec";

    return path_buffer.str();

}

EntityPath Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/generic-flow-spec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_bit_rate.is_set || is_set(flow_bit_rate.operation)) leaf_name_data.push_back(flow_bit_rate.get_name_leafdata());
    if (flow_multiplier.is_set || is_set(flow_multiplier.operation)) leaf_name_data.push_back(flow_multiplier.get_name_leafdata());
    if (flow_nvc.is_set || is_set(flow_nvc.operation)) leaf_name_data.push_back(flow_nvc.get_name_leafdata());
    if (flow_signal_type.is_set || is_set(flow_signal_type.operation)) leaf_name_data.push_back(flow_signal_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::get_children()
{
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-bit-rate")
    {
        flow_bit_rate = value;
    }
    if(value_path == "flow-multiplier")
    {
        flow_multiplier = value;
    }
    if(value_path == "flow-nvc")
    {
        flow_nvc = value;
    }
    if(value_path == "flow-signal-type")
    {
        flow_signal_type = value;
    }
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Rro()
    :
    rro_type{YType::enumeration, "rro-type"}
    	,
    ipv4rro_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject>())
	,label_rro_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject>())
	,srlg_rro_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject>())
	,unnumbered_rro_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject>())
{
    ipv4rro_sub_object->parent = this;
    children["ipv4rro-sub-object"] = ipv4rro_sub_object;

    label_rro_sub_object->parent = this;
    children["label-rro-sub-object"] = label_rro_sub_object;

    srlg_rro_sub_object->parent = this;
    children["srlg-rro-sub-object"] = srlg_rro_sub_object;

    unnumbered_rro_sub_object->parent = this;
    children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;

    yang_name = "rro"; yang_parent_name = "rsb-info";
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::~Rro()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::has_data() const
{
    return rro_type.is_set
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_data())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_data())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_data())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::has_operation() const
{
    return is_set(operation)
	|| is_set(rro_type.operation)
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_operation())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_operation())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_operation())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro";

    return path_buffer.str();

}

EntityPath Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_type.is_set || is_set(rro_type.operation)) leaf_name_data.push_back(rro_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4rro-sub-object")
    {
        if(ipv4rro_sub_object != nullptr)
        {
            children["ipv4rro-sub-object"] = ipv4rro_sub_object;
        }
        else
        {
            ipv4rro_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject>();
            ipv4rro_sub_object->parent = this;
            children["ipv4rro-sub-object"] = ipv4rro_sub_object;
        }
        return children.at("ipv4rro-sub-object");
    }

    if(child_yang_name == "label-rro-sub-object")
    {
        if(label_rro_sub_object != nullptr)
        {
            children["label-rro-sub-object"] = label_rro_sub_object;
        }
        else
        {
            label_rro_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject>();
            label_rro_sub_object->parent = this;
            children["label-rro-sub-object"] = label_rro_sub_object;
        }
        return children.at("label-rro-sub-object");
    }

    if(child_yang_name == "srlg-rro-sub-object")
    {
        if(srlg_rro_sub_object != nullptr)
        {
            children["srlg-rro-sub-object"] = srlg_rro_sub_object;
        }
        else
        {
            srlg_rro_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject>();
            srlg_rro_sub_object->parent = this;
            children["srlg-rro-sub-object"] = srlg_rro_sub_object;
        }
        return children.at("srlg-rro-sub-object");
    }

    if(child_yang_name == "unnumbered-rro-sub-object")
    {
        if(unnumbered_rro_sub_object != nullptr)
        {
            children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;
        }
        else
        {
            unnumbered_rro_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject>();
            unnumbered_rro_sub_object->parent = this;
            children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;
        }
        return children.at("unnumbered-rro-sub-object");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::get_children()
{
    if(children.find("ipv4rro-sub-object") == children.end())
    {
        if(ipv4rro_sub_object != nullptr)
        {
            children["ipv4rro-sub-object"] = ipv4rro_sub_object;
        }
    }

    if(children.find("label-rro-sub-object") == children.end())
    {
        if(label_rro_sub_object != nullptr)
        {
            children["label-rro-sub-object"] = label_rro_sub_object;
        }
    }

    if(children.find("srlg-rro-sub-object") == children.end())
    {
        if(srlg_rro_sub_object != nullptr)
        {
            children["srlg-rro-sub-object"] = srlg_rro_sub_object;
        }
    }

    if(children.find("unnumbered-rro-sub-object") == children.end())
    {
        if(unnumbered_rro_sub_object != nullptr)
        {
            children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;
        }
    }

    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rro-type")
    {
        rro_type = value;
    }
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Ipv4RroSubObject()
    :
    rro_address{YType::str, "rro-address"}
    	,
    flags(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags>())
{
    flags->parent = this;
    children["flags"] = flags;

    yang_name = "ipv4rro-sub-object"; yang_parent_name = "rro";
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::~Ipv4RroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::has_data() const
{
    return rro_address.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(rro_address.operation)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4rro-sub-object";

    return path_buffer.str();

}

EntityPath Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_address.is_set || is_set(rro_address.operation)) leaf_name_data.push_back(rro_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flags")
    {
        if(flags != nullptr)
        {
            children["flags"] = flags;
        }
        else
        {
            flags = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags>();
            flags->parent = this;
            children["flags"] = flags;
        }
        return children.at("flags");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::get_children()
{
    if(children.find("flags") == children.end())
    {
        if(flags != nullptr)
        {
            children["flags"] = flags;
        }
    }

    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rro-address")
    {
        rro_address = value;
    }
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::Flags()
    :
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_id{YType::boolean, "is-node-id"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"}
{
    yang_name = "flags"; yang_parent_name = "ipv4rro-sub-object";
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::~Flags()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::has_data() const
{
    return is_bandwidth_protected.is_set
	|| is_node_id.is_set
	|| is_node_protection_available.is_set
	|| is_protection_available.is_set
	|| is_protection_in_use.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_bandwidth_protected.operation)
	|| is_set(is_node_id.operation)
	|| is_set(is_node_protection_available.operation)
	|| is_set(is_protection_available.operation)
	|| is_set(is_protection_in_use.operation);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";

    return path_buffer.str();

}

EntityPath Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/ipv4rro-sub-object/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.operation)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.operation)) leaf_name_data.push_back(is_node_id.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.operation)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_protection_available.is_set || is_set(is_protection_available.operation)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.operation)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::get_children()
{
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
    }
    if(value_path == "is-protection-available")
    {
        is_protection_available = value;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use = value;
    }
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::LabelRroSubObject()
    :
    is_label_variable_length{YType::boolean, "is-label-variable-length"},
    label{YType::uint32, "label"},
    variable_length_label{YType::uint32, "variable-length-label"}
    	,
    flags(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags>())
{
    flags->parent = this;
    children["flags"] = flags;

    yang_name = "label-rro-sub-object"; yang_parent_name = "rro";
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::~LabelRroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::has_data() const
{
    for (auto const & leaf : variable_length_label.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_label_variable_length.is_set
	|| label.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::has_operation() const
{
    for (auto const & leaf : variable_length_label.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(is_label_variable_length.operation)
	|| is_set(label.operation)
	|| is_set(variable_length_label.operation)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-rro-sub-object";

    return path_buffer.str();

}

EntityPath Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_label_variable_length.is_set || is_set(is_label_variable_length.operation)) leaf_name_data.push_back(is_label_variable_length.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());

    auto variable_length_label_name_datas = variable_length_label.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), variable_length_label_name_datas.begin(), variable_length_label_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flags")
    {
        if(flags != nullptr)
        {
            children["flags"] = flags;
        }
        else
        {
            flags = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags>();
            flags->parent = this;
            children["flags"] = flags;
        }
        return children.at("flags");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::get_children()
{
    if(children.find("flags") == children.end())
    {
        if(flags != nullptr)
        {
            children["flags"] = flags;
        }
    }

    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "variable-length-label")
    {
        variable_length_label.append(value);
    }
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::Flags()
    :
    is_global_label{YType::boolean, "is-global-label"}
{
    yang_name = "flags"; yang_parent_name = "label-rro-sub-object";
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::~Flags()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::has_data() const
{
    return is_global_label.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_global_label.operation);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";

    return path_buffer.str();

}

EntityPath Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/label-rro-sub-object/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_global_label.is_set || is_set(is_global_label.operation)) leaf_name_data.push_back(is_global_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::get_children()
{
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-global-label")
    {
        is_global_label = value;
    }
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::UnnumberedRroSubObject()
    :
    interface_address{YType::str, "interface-address"},
    interface_id{YType::uint32, "interface-id"}
    	,
    flags(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags>())
{
    flags->parent = this;
    children["flags"] = flags;

    yang_name = "unnumbered-rro-sub-object"; yang_parent_name = "rro";
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::~UnnumberedRroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::has_data() const
{
    return interface_address.is_set
	|| interface_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_address.operation)
	|| is_set(interface_id.operation)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-rro-sub-object";

    return path_buffer.str();

}

EntityPath Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_address.is_set || is_set(interface_address.operation)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flags")
    {
        if(flags != nullptr)
        {
            children["flags"] = flags;
        }
        else
        {
            flags = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags>();
            flags->parent = this;
            children["flags"] = flags;
        }
        return children.at("flags");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::get_children()
{
    if(children.find("flags") == children.end())
    {
        if(flags != nullptr)
        {
            children["flags"] = flags;
        }
    }

    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-address")
    {
        interface_address = value;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::Flags()
    :
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_id{YType::boolean, "is-node-id"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"}
{
    yang_name = "flags"; yang_parent_name = "unnumbered-rro-sub-object";
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::~Flags()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::has_data() const
{
    return is_bandwidth_protected.is_set
	|| is_node_id.is_set
	|| is_node_protection_available.is_set
	|| is_protection_available.is_set
	|| is_protection_in_use.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_bandwidth_protected.operation)
	|| is_set(is_node_id.operation)
	|| is_set(is_node_protection_available.operation)
	|| is_set(is_protection_available.operation)
	|| is_set(is_protection_in_use.operation);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";

    return path_buffer.str();

}

EntityPath Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/unnumbered-rro-sub-object/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.operation)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.operation)) leaf_name_data.push_back(is_node_id.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.operation)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_protection_available.is_set || is_set(is_protection_available.operation)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.operation)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::get_children()
{
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
    }
    if(value_path == "is-protection-available")
    {
        is_protection_available = value;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use = value;
    }
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::SrlgRroSubObject()
    :
    srl_gs{YType::uint32, "srl-gs"}
{
    yang_name = "srlg-rro-sub-object"; yang_parent_name = "rro";
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::~SrlgRroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::has_data() const
{
    for (auto const & leaf : srl_gs.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::has_operation() const
{
    for (auto const & leaf : srl_gs.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(srl_gs.operation);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-rro-sub-object";

    return path_buffer.str();

}

EntityPath Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto srl_gs_name_datas = srl_gs.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srl_gs_name_datas.begin(), srl_gs_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::get_children()
{
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srl-gs")
    {
        srl_gs.append(value);
    }
}

Rsvp::HelloInstanceDetails::HelloInstanceDetails()
{
    yang_name = "hello-instance-details"; yang_parent_name = "rsvp";
}

Rsvp::HelloInstanceDetails::~HelloInstanceDetails()
{
}

bool Rsvp::HelloInstanceDetails::has_data() const
{
    for (std::size_t index=0; index<hello_instance_detail.size(); index++)
    {
        if(hello_instance_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::HelloInstanceDetails::has_operation() const
{
    for (std::size_t index=0; index<hello_instance_detail.size(); index++)
    {
        if(hello_instance_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rsvp::HelloInstanceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-instance-details";

    return path_buffer.str();

}

EntityPath Rsvp::HelloInstanceDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::HelloInstanceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hello-instance-detail")
    {
        for(auto const & c : hello_instance_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rsvp::HelloInstanceDetails::HelloInstanceDetail>();
        c->parent = this;
        hello_instance_detail.push_back(std::move(c));
        children[segment_path] = hello_instance_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::HelloInstanceDetails::get_children()
{
    for (auto const & c : hello_instance_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rsvp::HelloInstanceDetails::set_value(const std::string & value_path, std::string value)
{
}

Rsvp::HelloInstanceDetails::HelloInstanceDetail::HelloInstanceDetail()
    :
    destination_address{YType::str, "destination-address"},
    source_address{YType::str, "source-address"},
    communication_lost_hello_missed{YType::uint16, "communication-lost-hello-missed"},
    communication_lost_interface_down{YType::uint16, "communication-lost-interface-down"},
    communication_lost_neighbor_disabled_hello{YType::uint16, "communication-lost-neighbor-disabled-hello"},
    communication_lost_reason{YType::enumeration, "communication-lost-reason"},
    communication_lost_wrong_destination_inst{YType::uint16, "communication-lost-wrong-destination-inst"},
    communication_lost_wrong_source_inst{YType::uint16, "communication-lost-wrong-source-inst"},
    destination_address_xr{YType::str, "destination-address-xr"},
    destination_instance{YType::uint32, "destination-instance"},
    hello_instance_owner{YType::enumeration, "hello-instance-owner"},
    hello_interface{YType::str, "hello-interface"},
    hello_interval{YType::uint32, "hello-interval"},
    hello_messages_received{YType::uint64, "hello-messages-received"},
    hello_messages_sent{YType::uint64, "hello-messages-sent"},
    hello_request_suppressed{YType::uint64, "hello-request-suppressed"},
    instance_type{YType::enumeration, "instance-type"},
    missed_acks_allowed{YType::uint32, "missed-acks-allowed"},
    neighbor_hello_state{YType::enumeration, "neighbor-hello-state"},
    source_address_xr{YType::str, "source-address-xr"},
    source_instance{YType::uint32, "source-instance"},
    total_communication_lost{YType::uint16, "total-communication-lost"}
    	,
    communication_lost_time(std::make_shared<Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime>())
	,up_time(std::make_shared<Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime>())
{
    communication_lost_time->parent = this;
    children["communication-lost-time"] = communication_lost_time;

    up_time->parent = this;
    children["up-time"] = up_time;

    yang_name = "hello-instance-detail"; yang_parent_name = "hello-instance-details";
}

Rsvp::HelloInstanceDetails::HelloInstanceDetail::~HelloInstanceDetail()
{
}

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::has_data() const
{
    return destination_address.is_set
	|| source_address.is_set
	|| communication_lost_hello_missed.is_set
	|| communication_lost_interface_down.is_set
	|| communication_lost_neighbor_disabled_hello.is_set
	|| communication_lost_reason.is_set
	|| communication_lost_wrong_destination_inst.is_set
	|| communication_lost_wrong_source_inst.is_set
	|| destination_address_xr.is_set
	|| destination_instance.is_set
	|| hello_instance_owner.is_set
	|| hello_interface.is_set
	|| hello_interval.is_set
	|| hello_messages_received.is_set
	|| hello_messages_sent.is_set
	|| hello_request_suppressed.is_set
	|| instance_type.is_set
	|| missed_acks_allowed.is_set
	|| neighbor_hello_state.is_set
	|| source_address_xr.is_set
	|| source_instance.is_set
	|| total_communication_lost.is_set
	|| (communication_lost_time !=  nullptr && communication_lost_time->has_data())
	|| (up_time !=  nullptr && up_time->has_data());
}

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(source_address.operation)
	|| is_set(communication_lost_hello_missed.operation)
	|| is_set(communication_lost_interface_down.operation)
	|| is_set(communication_lost_neighbor_disabled_hello.operation)
	|| is_set(communication_lost_reason.operation)
	|| is_set(communication_lost_wrong_destination_inst.operation)
	|| is_set(communication_lost_wrong_source_inst.operation)
	|| is_set(destination_address_xr.operation)
	|| is_set(destination_instance.operation)
	|| is_set(hello_instance_owner.operation)
	|| is_set(hello_interface.operation)
	|| is_set(hello_interval.operation)
	|| is_set(hello_messages_received.operation)
	|| is_set(hello_messages_sent.operation)
	|| is_set(hello_request_suppressed.operation)
	|| is_set(instance_type.operation)
	|| is_set(missed_acks_allowed.operation)
	|| is_set(neighbor_hello_state.operation)
	|| is_set(source_address_xr.operation)
	|| is_set(source_instance.operation)
	|| is_set(total_communication_lost.operation)
	|| (communication_lost_time !=  nullptr && communication_lost_time->has_operation())
	|| (up_time !=  nullptr && up_time->has_operation());
}

std::string Rsvp::HelloInstanceDetails::HelloInstanceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-instance-detail" <<"[destination-address='" <<destination_address <<"']" <<"[source-address='" <<source_address <<"']";

    return path_buffer.str();

}

EntityPath Rsvp::HelloInstanceDetails::HelloInstanceDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/hello-instance-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (communication_lost_hello_missed.is_set || is_set(communication_lost_hello_missed.operation)) leaf_name_data.push_back(communication_lost_hello_missed.get_name_leafdata());
    if (communication_lost_interface_down.is_set || is_set(communication_lost_interface_down.operation)) leaf_name_data.push_back(communication_lost_interface_down.get_name_leafdata());
    if (communication_lost_neighbor_disabled_hello.is_set || is_set(communication_lost_neighbor_disabled_hello.operation)) leaf_name_data.push_back(communication_lost_neighbor_disabled_hello.get_name_leafdata());
    if (communication_lost_reason.is_set || is_set(communication_lost_reason.operation)) leaf_name_data.push_back(communication_lost_reason.get_name_leafdata());
    if (communication_lost_wrong_destination_inst.is_set || is_set(communication_lost_wrong_destination_inst.operation)) leaf_name_data.push_back(communication_lost_wrong_destination_inst.get_name_leafdata());
    if (communication_lost_wrong_source_inst.is_set || is_set(communication_lost_wrong_source_inst.operation)) leaf_name_data.push_back(communication_lost_wrong_source_inst.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.operation)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (destination_instance.is_set || is_set(destination_instance.operation)) leaf_name_data.push_back(destination_instance.get_name_leafdata());
    if (hello_instance_owner.is_set || is_set(hello_instance_owner.operation)) leaf_name_data.push_back(hello_instance_owner.get_name_leafdata());
    if (hello_interface.is_set || is_set(hello_interface.operation)) leaf_name_data.push_back(hello_interface.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (hello_messages_received.is_set || is_set(hello_messages_received.operation)) leaf_name_data.push_back(hello_messages_received.get_name_leafdata());
    if (hello_messages_sent.is_set || is_set(hello_messages_sent.operation)) leaf_name_data.push_back(hello_messages_sent.get_name_leafdata());
    if (hello_request_suppressed.is_set || is_set(hello_request_suppressed.operation)) leaf_name_data.push_back(hello_request_suppressed.get_name_leafdata());
    if (instance_type.is_set || is_set(instance_type.operation)) leaf_name_data.push_back(instance_type.get_name_leafdata());
    if (missed_acks_allowed.is_set || is_set(missed_acks_allowed.operation)) leaf_name_data.push_back(missed_acks_allowed.get_name_leafdata());
    if (neighbor_hello_state.is_set || is_set(neighbor_hello_state.operation)) leaf_name_data.push_back(neighbor_hello_state.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.operation)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());
    if (source_instance.is_set || is_set(source_instance.operation)) leaf_name_data.push_back(source_instance.get_name_leafdata());
    if (total_communication_lost.is_set || is_set(total_communication_lost.operation)) leaf_name_data.push_back(total_communication_lost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::HelloInstanceDetails::HelloInstanceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "communication-lost-time")
    {
        if(communication_lost_time != nullptr)
        {
            children["communication-lost-time"] = communication_lost_time;
        }
        else
        {
            communication_lost_time = std::make_shared<Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime>();
            communication_lost_time->parent = this;
            children["communication-lost-time"] = communication_lost_time;
        }
        return children.at("communication-lost-time");
    }

    if(child_yang_name == "up-time")
    {
        if(up_time != nullptr)
        {
            children["up-time"] = up_time;
        }
        else
        {
            up_time = std::make_shared<Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime>();
            up_time->parent = this;
            children["up-time"] = up_time;
        }
        return children.at("up-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::HelloInstanceDetails::HelloInstanceDetail::get_children()
{
    if(children.find("communication-lost-time") == children.end())
    {
        if(communication_lost_time != nullptr)
        {
            children["communication-lost-time"] = communication_lost_time;
        }
    }

    if(children.find("up-time") == children.end())
    {
        if(up_time != nullptr)
        {
            children["up-time"] = up_time;
        }
    }

    return children;
}

void Rsvp::HelloInstanceDetails::HelloInstanceDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "communication-lost-hello-missed")
    {
        communication_lost_hello_missed = value;
    }
    if(value_path == "communication-lost-interface-down")
    {
        communication_lost_interface_down = value;
    }
    if(value_path == "communication-lost-neighbor-disabled-hello")
    {
        communication_lost_neighbor_disabled_hello = value;
    }
    if(value_path == "communication-lost-reason")
    {
        communication_lost_reason = value;
    }
    if(value_path == "communication-lost-wrong-destination-inst")
    {
        communication_lost_wrong_destination_inst = value;
    }
    if(value_path == "communication-lost-wrong-source-inst")
    {
        communication_lost_wrong_source_inst = value;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
    }
    if(value_path == "destination-instance")
    {
        destination_instance = value;
    }
    if(value_path == "hello-instance-owner")
    {
        hello_instance_owner = value;
    }
    if(value_path == "hello-interface")
    {
        hello_interface = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "hello-messages-received")
    {
        hello_messages_received = value;
    }
    if(value_path == "hello-messages-sent")
    {
        hello_messages_sent = value;
    }
    if(value_path == "hello-request-suppressed")
    {
        hello_request_suppressed = value;
    }
    if(value_path == "instance-type")
    {
        instance_type = value;
    }
    if(value_path == "missed-acks-allowed")
    {
        missed_acks_allowed = value;
    }
    if(value_path == "neighbor-hello-state")
    {
        neighbor_hello_state = value;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
    }
    if(value_path == "source-instance")
    {
        source_instance = value;
    }
    if(value_path == "total-communication-lost")
    {
        total_communication_lost = value;
    }
}

Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::UpTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{
    yang_name = "up-time"; yang_parent_name = "hello-instance-detail";
}

Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::~UpTime()
{
}

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up-time";

    return path_buffer.str();

}

EntityPath Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpTime' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::get_children()
{
    return children;
}

void Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::CommunicationLostTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{
    yang_name = "communication-lost-time"; yang_parent_name = "hello-instance-detail";
}

Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::~CommunicationLostTime()
{
}

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "communication-lost-time";

    return path_buffer.str();

}

EntityPath Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommunicationLostTime' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::get_children()
{
    return children;
}

void Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetails()
{
    yang_name = "global-neighbor-details"; yang_parent_name = "rsvp";
}

Rsvp::GlobalNeighborDetails::~GlobalNeighborDetails()
{
}

bool Rsvp::GlobalNeighborDetails::has_data() const
{
    for (std::size_t index=0; index<global_neighbor_detail.size(); index++)
    {
        if(global_neighbor_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::GlobalNeighborDetails::has_operation() const
{
    for (std::size_t index=0; index<global_neighbor_detail.size(); index++)
    {
        if(global_neighbor_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rsvp::GlobalNeighborDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-neighbor-details";

    return path_buffer.str();

}

EntityPath Rsvp::GlobalNeighborDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global-neighbor-detail")
    {
        for(auto const & c : global_neighbor_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail>();
        c->parent = this;
        global_neighbor_detail.push_back(std::move(c));
        children[segment_path] = global_neighbor_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::GlobalNeighborDetails::get_children()
{
    for (auto const & c : global_neighbor_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rsvp::GlobalNeighborDetails::set_value(const std::string & value_path, std::string value)
{
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborDetail()
    :
    neighbor_address{YType::str, "neighbor-address"},
    hello_interval{YType::uint32, "hello-interval"},
    interface_neighbor{YType::str, "interface-neighbor"},
    is_gr_enabled{YType::boolean, "is-gr-enabled"},
    is_recovery_timer_running{YType::boolean, "is-recovery-timer-running"},
    is_restart_timer_running{YType::boolean, "is-restart-timer-running"},
    local_node_address{YType::str, "local-node-address"},
    lost_communication_reason{YType::enumeration, "lost-communication-reason"},
    lost_communication_total{YType::uint16, "lost-communication-total"},
    missed_hellos{YType::uint8, "missed-hellos"},
    neighbor_hello_state{YType::enumeration, "neighbor-hello-state"},
    node_address{YType::str, "node-address"},
    pending_states{YType::uint32, "pending-states"},
    recovery_time{YType::uint32, "recovery-time"},
    restart_state{YType::enumeration, "restart-state"},
    restart_time{YType::uint32, "restart-time"}
    	,
    global_neighbor_flags(std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags>())
	,recovery_time_left(std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft>())
	,recovery_timer_exp_time(std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime>())
	,restart_time_left(std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft>())
	,restart_timer_expiry_time(std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime>())
{
    global_neighbor_flags->parent = this;
    children["global-neighbor-flags"] = global_neighbor_flags;

    recovery_time_left->parent = this;
    children["recovery-time-left"] = recovery_time_left;

    recovery_timer_exp_time->parent = this;
    children["recovery-timer-exp-time"] = recovery_timer_exp_time;

    restart_time_left->parent = this;
    children["restart-time-left"] = restart_time_left;

    restart_timer_expiry_time->parent = this;
    children["restart-timer-expiry-time"] = restart_timer_expiry_time;

    yang_name = "global-neighbor-detail"; yang_parent_name = "global-neighbor-details";
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::~GlobalNeighborDetail()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::has_data() const
{
    for (std::size_t index=0; index<lost_communication_time.size(); index++)
    {
        if(lost_communication_time[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<up_time.size(); index++)
    {
        if(up_time[index]->has_data())
            return true;
    }
    for (auto const & leaf : interface_neighbor.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : local_node_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lost_communication_reason.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lost_communication_total.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : neighbor_hello_state.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return neighbor_address.is_set
	|| hello_interval.is_set
	|| is_gr_enabled.is_set
	|| is_recovery_timer_running.is_set
	|| is_restart_timer_running.is_set
	|| missed_hellos.is_set
	|| node_address.is_set
	|| pending_states.is_set
	|| recovery_time.is_set
	|| restart_state.is_set
	|| restart_time.is_set
	|| (global_neighbor_flags !=  nullptr && global_neighbor_flags->has_data())
	|| (recovery_time_left !=  nullptr && recovery_time_left->has_data())
	|| (recovery_timer_exp_time !=  nullptr && recovery_timer_exp_time->has_data())
	|| (restart_time_left !=  nullptr && restart_time_left->has_data())
	|| (restart_timer_expiry_time !=  nullptr && restart_timer_expiry_time->has_data());
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::has_operation() const
{
    for (std::size_t index=0; index<lost_communication_time.size(); index++)
    {
        if(lost_communication_time[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<up_time.size(); index++)
    {
        if(up_time[index]->has_operation())
            return true;
    }
    for (auto const & leaf : interface_neighbor.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : local_node_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : lost_communication_reason.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : lost_communication_total.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : neighbor_hello_state.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(hello_interval.operation)
	|| is_set(interface_neighbor.operation)
	|| is_set(is_gr_enabled.operation)
	|| is_set(is_recovery_timer_running.operation)
	|| is_set(is_restart_timer_running.operation)
	|| is_set(local_node_address.operation)
	|| is_set(lost_communication_reason.operation)
	|| is_set(lost_communication_total.operation)
	|| is_set(missed_hellos.operation)
	|| is_set(neighbor_hello_state.operation)
	|| is_set(node_address.operation)
	|| is_set(pending_states.operation)
	|| is_set(recovery_time.operation)
	|| is_set(restart_state.operation)
	|| is_set(restart_time.operation)
	|| (global_neighbor_flags !=  nullptr && global_neighbor_flags->has_operation())
	|| (recovery_time_left !=  nullptr && recovery_time_left->has_operation())
	|| (recovery_timer_exp_time !=  nullptr && recovery_timer_exp_time->has_operation())
	|| (restart_time_left !=  nullptr && restart_time_left->has_operation())
	|| (restart_timer_expiry_time !=  nullptr && restart_timer_expiry_time->has_operation());
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-neighbor-detail" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/global-neighbor-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (is_gr_enabled.is_set || is_set(is_gr_enabled.operation)) leaf_name_data.push_back(is_gr_enabled.get_name_leafdata());
    if (is_recovery_timer_running.is_set || is_set(is_recovery_timer_running.operation)) leaf_name_data.push_back(is_recovery_timer_running.get_name_leafdata());
    if (is_restart_timer_running.is_set || is_set(is_restart_timer_running.operation)) leaf_name_data.push_back(is_restart_timer_running.get_name_leafdata());
    if (missed_hellos.is_set || is_set(missed_hellos.operation)) leaf_name_data.push_back(missed_hellos.get_name_leafdata());
    if (node_address.is_set || is_set(node_address.operation)) leaf_name_data.push_back(node_address.get_name_leafdata());
    if (pending_states.is_set || is_set(pending_states.operation)) leaf_name_data.push_back(pending_states.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.operation)) leaf_name_data.push_back(recovery_time.get_name_leafdata());
    if (restart_state.is_set || is_set(restart_state.operation)) leaf_name_data.push_back(restart_state.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.operation)) leaf_name_data.push_back(restart_time.get_name_leafdata());

    auto interface_neighbor_name_datas = interface_neighbor.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_neighbor_name_datas.begin(), interface_neighbor_name_datas.end());
    auto local_node_address_name_datas = local_node_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_node_address_name_datas.begin(), local_node_address_name_datas.end());
    auto lost_communication_reason_name_datas = lost_communication_reason.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lost_communication_reason_name_datas.begin(), lost_communication_reason_name_datas.end());
    auto lost_communication_total_name_datas = lost_communication_total.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lost_communication_total_name_datas.begin(), lost_communication_total_name_datas.end());
    auto neighbor_hello_state_name_datas = neighbor_hello_state.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), neighbor_hello_state_name_datas.begin(), neighbor_hello_state_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global-neighbor-flags")
    {
        if(global_neighbor_flags != nullptr)
        {
            children["global-neighbor-flags"] = global_neighbor_flags;
        }
        else
        {
            global_neighbor_flags = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags>();
            global_neighbor_flags->parent = this;
            children["global-neighbor-flags"] = global_neighbor_flags;
        }
        return children.at("global-neighbor-flags");
    }

    if(child_yang_name == "lost-communication-time")
    {
        for(auto const & c : lost_communication_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime>();
        c->parent = this;
        lost_communication_time.push_back(std::move(c));
        children[segment_path] = lost_communication_time.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "recovery-time-left")
    {
        if(recovery_time_left != nullptr)
        {
            children["recovery-time-left"] = recovery_time_left;
        }
        else
        {
            recovery_time_left = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft>();
            recovery_time_left->parent = this;
            children["recovery-time-left"] = recovery_time_left;
        }
        return children.at("recovery-time-left");
    }

    if(child_yang_name == "recovery-timer-exp-time")
    {
        if(recovery_timer_exp_time != nullptr)
        {
            children["recovery-timer-exp-time"] = recovery_timer_exp_time;
        }
        else
        {
            recovery_timer_exp_time = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime>();
            recovery_timer_exp_time->parent = this;
            children["recovery-timer-exp-time"] = recovery_timer_exp_time;
        }
        return children.at("recovery-timer-exp-time");
    }

    if(child_yang_name == "restart-time-left")
    {
        if(restart_time_left != nullptr)
        {
            children["restart-time-left"] = restart_time_left;
        }
        else
        {
            restart_time_left = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft>();
            restart_time_left->parent = this;
            children["restart-time-left"] = restart_time_left;
        }
        return children.at("restart-time-left");
    }

    if(child_yang_name == "restart-timer-expiry-time")
    {
        if(restart_timer_expiry_time != nullptr)
        {
            children["restart-timer-expiry-time"] = restart_timer_expiry_time;
        }
        else
        {
            restart_timer_expiry_time = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime>();
            restart_timer_expiry_time->parent = this;
            children["restart-timer-expiry-time"] = restart_timer_expiry_time;
        }
        return children.at("restart-timer-expiry-time");
    }

    if(child_yang_name == "up-time")
    {
        for(auto const & c : up_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime>();
        c->parent = this;
        up_time.push_back(std::move(c));
        children[segment_path] = up_time.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::get_children()
{
    if(children.find("global-neighbor-flags") == children.end())
    {
        if(global_neighbor_flags != nullptr)
        {
            children["global-neighbor-flags"] = global_neighbor_flags;
        }
    }

    for (auto const & c : lost_communication_time)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("recovery-time-left") == children.end())
    {
        if(recovery_time_left != nullptr)
        {
            children["recovery-time-left"] = recovery_time_left;
        }
    }

    if(children.find("recovery-timer-exp-time") == children.end())
    {
        if(recovery_timer_exp_time != nullptr)
        {
            children["recovery-timer-exp-time"] = recovery_timer_exp_time;
        }
    }

    if(children.find("restart-time-left") == children.end())
    {
        if(restart_time_left != nullptr)
        {
            children["restart-time-left"] = restart_time_left;
        }
    }

    if(children.find("restart-timer-expiry-time") == children.end())
    {
        if(restart_timer_expiry_time != nullptr)
        {
            children["restart-timer-expiry-time"] = restart_timer_expiry_time;
        }
    }

    for (auto const & c : up_time)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "interface-neighbor")
    {
        interface_neighbor.append(value);
    }
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled = value;
    }
    if(value_path == "is-recovery-timer-running")
    {
        is_recovery_timer_running = value;
    }
    if(value_path == "is-restart-timer-running")
    {
        is_restart_timer_running = value;
    }
    if(value_path == "local-node-address")
    {
        local_node_address.append(value);
    }
    if(value_path == "lost-communication-reason")
    {
        lost_communication_reason.append(value);
    }
    if(value_path == "lost-communication-total")
    {
        lost_communication_total.append(value);
    }
    if(value_path == "missed-hellos")
    {
        missed_hellos = value;
    }
    if(value_path == "neighbor-hello-state")
    {
        neighbor_hello_state.append(value);
    }
    if(value_path == "node-address")
    {
        node_address = value;
    }
    if(value_path == "pending-states")
    {
        pending_states = value;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
    }
    if(value_path == "restart-state")
    {
        restart_state = value;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
    }
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::GlobalNeighborFlags()
    :
    is_application_mpls{YType::boolean, "is-application-mpls"},
    is_application_ouni{YType::boolean, "is-application-ouni"}
{
    yang_name = "global-neighbor-flags"; yang_parent_name = "global-neighbor-detail";
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::~GlobalNeighborFlags()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::has_data() const
{
    return is_application_mpls.is_set
	|| is_application_ouni.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_application_mpls.operation)
	|| is_set(is_application_ouni.operation);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-neighbor-flags";

    return path_buffer.str();

}

EntityPath Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalNeighborFlags' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_application_mpls.is_set || is_set(is_application_mpls.operation)) leaf_name_data.push_back(is_application_mpls.get_name_leafdata());
    if (is_application_ouni.is_set || is_set(is_application_ouni.operation)) leaf_name_data.push_back(is_application_ouni.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::get_children()
{
    return children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-application-mpls")
    {
        is_application_mpls = value;
    }
    if(value_path == "is-application-ouni")
    {
        is_application_ouni = value;
    }
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::RestartTimeLeft()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{
    yang_name = "restart-time-left"; yang_parent_name = "global-neighbor-detail";
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::~RestartTimeLeft()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restart-time-left";

    return path_buffer.str();

}

EntityPath Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RestartTimeLeft' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::get_children()
{
    return children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::RestartTimerExpiryTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{
    yang_name = "restart-timer-expiry-time"; yang_parent_name = "global-neighbor-detail";
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::~RestartTimerExpiryTime()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restart-timer-expiry-time";

    return path_buffer.str();

}

EntityPath Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RestartTimerExpiryTime' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::get_children()
{
    return children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::RecoveryTimeLeft()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{
    yang_name = "recovery-time-left"; yang_parent_name = "global-neighbor-detail";
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::~RecoveryTimeLeft()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-time-left";

    return path_buffer.str();

}

EntityPath Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RecoveryTimeLeft' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::get_children()
{
    return children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::RecoveryTimerExpTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{
    yang_name = "recovery-timer-exp-time"; yang_parent_name = "global-neighbor-detail";
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::~RecoveryTimerExpTime()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-timer-exp-time";

    return path_buffer.str();

}

EntityPath Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RecoveryTimerExpTime' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::get_children()
{
    return children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::UpTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{
    yang_name = "up-time"; yang_parent_name = "global-neighbor-detail";
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::~UpTime()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up-time";

    return path_buffer.str();

}

EntityPath Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpTime' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::get_children()
{
    return children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::LostCommunicationTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{
    yang_name = "lost-communication-time"; yang_parent_name = "global-neighbor-detail";
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::~LostCommunicationTime()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lost-communication-time";

    return path_buffer.str();

}

EntityPath Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LostCommunicationTime' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::get_children()
{
    return children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Rsvp::PsbBriefs::PsbBriefs()
{
    yang_name = "psb-briefs"; yang_parent_name = "rsvp";
}

Rsvp::PsbBriefs::~PsbBriefs()
{
}

bool Rsvp::PsbBriefs::has_data() const
{
    for (std::size_t index=0; index<psb_brief.size(); index++)
    {
        if(psb_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::PsbBriefs::has_operation() const
{
    for (std::size_t index=0; index<psb_brief.size(); index++)
    {
        if(psb_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rsvp::PsbBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psb-briefs";

    return path_buffer.str();

}

EntityPath Rsvp::PsbBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "psb-brief")
    {
        for(auto const & c : psb_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rsvp::PsbBriefs::PsbBrief>();
        c->parent = this;
        psb_brief.push_back(std::move(c));
        children[segment_path] = psb_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::PsbBriefs::get_children()
{
    for (auto const & c : psb_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rsvp::PsbBriefs::set_value(const std::string & value_path, std::string value)
{
}

Rsvp::PsbBriefs::PsbBrief::PsbBrief()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    input_interface{YType::str, "input-interface"},
    p2mp_id{YType::int32, "p2mp-id"},
    protocol{YType::int32, "protocol"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    source_port{YType::int32, "source-port"},
    sub_group_id{YType::int32, "sub-group-id"},
    sub_group_origin{YType::str, "sub-group-origin"},
    vrf_name{YType::str, "vrf-name"}
    	,
    generic_traffic_spec(std::make_shared<Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec>())
	,s2l_sub_lsp(std::make_shared<Rsvp::PsbBriefs::PsbBrief::S2LSubLsp>())
	,session(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session>())
	,session_attribute(std::make_shared<Rsvp::PsbBriefs::PsbBrief::SessionAttribute>())
	,template_(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template_>())
	,traffic_spec(std::make_shared<Rsvp::PsbBriefs::PsbBrief::TrafficSpec>())
{
    generic_traffic_spec->parent = this;
    children["generic-traffic-spec"] = generic_traffic_spec;

    s2l_sub_lsp->parent = this;
    children["s2l-sub-lsp"] = s2l_sub_lsp;

    session->parent = this;
    children["session"] = session;

    session_attribute->parent = this;
    children["session-attribute"] = session_attribute;

    template_->parent = this;
    children["template"] = template_;

    traffic_spec->parent = this;
    children["traffic-spec"] = traffic_spec;

    yang_name = "psb-brief"; yang_parent_name = "psb-briefs";
}

Rsvp::PsbBriefs::PsbBrief::~PsbBrief()
{
}

bool Rsvp::PsbBriefs::PsbBrief::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| extended_tunnel_id.is_set
	|| input_interface.is_set
	|| p2mp_id.is_set
	|| protocol.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set
	|| sub_group_origin.is_set
	|| vrf_name.is_set
	|| (generic_traffic_spec !=  nullptr && generic_traffic_spec->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (session_attribute !=  nullptr && session_attribute->has_data())
	|| (template_ !=  nullptr && template_->has_data())
	|| (traffic_spec !=  nullptr && traffic_spec->has_data());
}

bool Rsvp::PsbBriefs::PsbBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(input_interface.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(protocol.operation)
	|| is_set(session_type.operation)
	|| is_set(source_address.operation)
	|| is_set(source_port.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_origin.operation)
	|| is_set(vrf_name.operation)
	|| (generic_traffic_spec !=  nullptr && generic_traffic_spec->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (session_attribute !=  nullptr && session_attribute->has_operation())
	|| (template_ !=  nullptr && template_->has_operation())
	|| (traffic_spec !=  nullptr && traffic_spec->has_operation());
}

std::string Rsvp::PsbBriefs::PsbBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psb-brief";

    return path_buffer.str();

}

EntityPath Rsvp::PsbBriefs::PsbBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (input_interface.is_set || is_set(input_interface.operation)) leaf_name_data.push_back(input_interface.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_origin.is_set || is_set(sub_group_origin.operation)) leaf_name_data.push_back(sub_group_origin.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generic-traffic-spec")
    {
        if(generic_traffic_spec != nullptr)
        {
            children["generic-traffic-spec"] = generic_traffic_spec;
        }
        else
        {
            generic_traffic_spec = std::make_shared<Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec>();
            generic_traffic_spec->parent = this;
            children["generic-traffic-spec"] = generic_traffic_spec;
        }
        return children.at("generic-traffic-spec");
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp != nullptr)
        {
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
        else
        {
            s2l_sub_lsp = std::make_shared<Rsvp::PsbBriefs::PsbBrief::S2LSubLsp>();
            s2l_sub_lsp->parent = this;
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
        return children.at("s2l-sub-lsp");
    }

    if(child_yang_name == "session")
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
        else
        {
            session = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session>();
            session->parent = this;
            children["session"] = session;
        }
        return children.at("session");
    }

    if(child_yang_name == "session-attribute")
    {
        if(session_attribute != nullptr)
        {
            children["session-attribute"] = session_attribute;
        }
        else
        {
            session_attribute = std::make_shared<Rsvp::PsbBriefs::PsbBrief::SessionAttribute>();
            session_attribute->parent = this;
            children["session-attribute"] = session_attribute;
        }
        return children.at("session-attribute");
    }

    if(child_yang_name == "template")
    {
        if(template_ != nullptr)
        {
            children["template"] = template_;
        }
        else
        {
            template_ = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template_>();
            template_->parent = this;
            children["template"] = template_;
        }
        return children.at("template");
    }

    if(child_yang_name == "traffic-spec")
    {
        if(traffic_spec != nullptr)
        {
            children["traffic-spec"] = traffic_spec;
        }
        else
        {
            traffic_spec = std::make_shared<Rsvp::PsbBriefs::PsbBrief::TrafficSpec>();
            traffic_spec->parent = this;
            children["traffic-spec"] = traffic_spec;
        }
        return children.at("traffic-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::PsbBriefs::PsbBrief::get_children()
{
    if(children.find("generic-traffic-spec") == children.end())
    {
        if(generic_traffic_spec != nullptr)
        {
            children["generic-traffic-spec"] = generic_traffic_spec;
        }
    }

    if(children.find("s2l-sub-lsp") == children.end())
    {
        if(s2l_sub_lsp != nullptr)
        {
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
    }

    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
    }

    if(children.find("session-attribute") == children.end())
    {
        if(session_attribute != nullptr)
        {
            children["session-attribute"] = session_attribute;
        }
    }

    if(children.find("template") == children.end())
    {
        if(template_ != nullptr)
        {
            children["template"] = template_;
        }
    }

    if(children.find("traffic-spec") == children.end())
    {
        if(traffic_spec != nullptr)
        {
            children["traffic-spec"] = traffic_spec;
        }
    }

    return children;
}

void Rsvp::PsbBriefs::PsbBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "input-interface")
    {
        input_interface = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Rsvp::PsbBriefs::PsbBrief::Session::Session()
    :
    rsvp_session(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession>())
{
    rsvp_session->parent = this;
    children["rsvp-session"] = rsvp_session;

    yang_name = "session"; yang_parent_name = "psb-brief";
}

Rsvp::PsbBriefs::PsbBrief::Session::~Session()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool Rsvp::PsbBriefs::PsbBrief::Session::has_operation() const
{
    return is_set(operation)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath Rsvp::PsbBriefs::PsbBrief::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session != nullptr)
        {
            children["rsvp-session"] = rsvp_session;
        }
        else
        {
            rsvp_session = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession>();
            rsvp_session->parent = this;
            children["rsvp-session"] = rsvp_session;
        }
        return children.at("rsvp-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::PsbBriefs::PsbBrief::Session::get_children()
{
    if(children.find("rsvp-session") == children.end())
    {
        if(rsvp_session != nullptr)
        {
            children["rsvp-session"] = rsvp_session;
        }
    }

    return children;
}

void Rsvp::PsbBriefs::PsbBrief::Session::set_value(const std::string & value_path, std::string value)
{
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession>())
	,ipv4_uni_session(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv4_lsp_session->parent = this;
    children["ipv4-lsp-session"] = ipv4_lsp_session;

    ipv4_p2mp_lsp_session->parent = this;
    children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;

    ipv4_uni_session->parent = this;
    children["ipv4-uni-session"] = ipv4_uni_session;

    yang_name = "rsvp-session"; yang_parent_name = "session";
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::~RsvpSession()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data());
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::has_operation() const
{
    return is_set(operation)
	|| is_set(session_type.operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation());
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";

    return path_buffer.str();

}

EntityPath Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session != nullptr)
        {
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
        else
        {
            ipv4_lsp_session = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession>();
            ipv4_lsp_session->parent = this;
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
        return children.at("ipv4-lsp-session");
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session != nullptr)
        {
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
        else
        {
            ipv4_p2mp_lsp_session = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession>();
            ipv4_p2mp_lsp_session->parent = this;
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
        return children.at("ipv4-p2mp-lsp-session");
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session != nullptr)
        {
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
        else
        {
            ipv4_uni_session = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession>();
            ipv4_uni_session->parent = this;
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
        return children.at("ipv4-uni-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv4-lsp-session") == children.end())
    {
        if(ipv4_lsp_session != nullptr)
        {
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
    }

    if(children.find("ipv4-p2mp-lsp-session") == children.end())
    {
        if(ipv4_p2mp_lsp_session != nullptr)
        {
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
    }

    if(children.find("ipv4-uni-session") == children.end())
    {
        if(ipv4_uni_session != nullptr)
        {
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
    }

    return children;
}

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-type")
    {
        session_type = value;
    }
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    protocol{YType::uint8, "protocol"}
{
    yang_name = "ipv4"; yang_parent_name = "rsvp-session";
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(protocol.operation);
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::get_children()
{
    return children;
}

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session";
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";

    return path_buffer.str();

}

EntityPath Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::get_children()
{
    return children;
}

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_address{YType::str, "extended-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session";
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| extended_address.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_address.operation)
	|| is_set(tunnel_id.operation);
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";

    return path_buffer.str();

}

EntityPath Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.operation)) leaf_name_data.push_back(extended_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::get_children()
{
    return children;
}

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session";
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";

    return path_buffer.str();

}

EntityPath Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_children()
{
    return children;
}

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

Rsvp::PsbBriefs::PsbBrief::S2LSubLsp::S2LSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{
    yang_name = "s2l-sub-lsp"; yang_parent_name = "psb-brief";
}

Rsvp::PsbBriefs::PsbBrief::S2LSubLsp::~S2LSubLsp()
{
}

bool Rsvp::PsbBriefs::PsbBrief::S2LSubLsp::has_data() const
{
    return s2l_destination_address.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::S2LSubLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_destination_address.operation);
}

std::string Rsvp::PsbBriefs::PsbBrief::S2LSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";

    return path_buffer.str();

}

EntityPath Rsvp::PsbBriefs::PsbBrief::S2LSubLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.operation)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::S2LSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::PsbBriefs::PsbBrief::S2LSubLsp::get_children()
{
    return children;
}

void Rsvp::PsbBriefs::PsbBrief::S2LSubLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
    }
}

Rsvp::PsbBriefs::PsbBrief::Template_::Template_()
    :
    rsvp_filter(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter>())
{
    rsvp_filter->parent = this;
    children["rsvp-filter"] = rsvp_filter;

    yang_name = "template"; yang_parent_name = "psb-brief";
}

Rsvp::PsbBriefs::PsbBrief::Template_::~Template_()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Template_::has_data() const
{
    return (rsvp_filter !=  nullptr && rsvp_filter->has_data());
}

bool Rsvp::PsbBriefs::PsbBrief::Template_::has_operation() const
{
    return is_set(operation)
	|| (rsvp_filter !=  nullptr && rsvp_filter->has_operation());
}

std::string Rsvp::PsbBriefs::PsbBrief::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";

    return path_buffer.str();

}

EntityPath Rsvp::PsbBriefs::PsbBrief::Template_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rsvp-filter")
    {
        if(rsvp_filter != nullptr)
        {
            children["rsvp-filter"] = rsvp_filter;
        }
        else
        {
            rsvp_filter = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter>();
            rsvp_filter->parent = this;
            children["rsvp-filter"] = rsvp_filter;
        }
        return children.at("rsvp-filter");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::PsbBriefs::PsbBrief::Template_::get_children()
{
    if(children.find("rsvp-filter") == children.end())
    {
        if(rsvp_filter != nullptr)
        {
            children["rsvp-filter"] = rsvp_filter;
        }
    }

    return children;
}

void Rsvp::PsbBriefs::PsbBrief::Template_::set_value(const std::string & value_path, std::string value)
{
}

Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::RsvpFilter()
    :
    filter_type{YType::enumeration, "filter-type"}
    	,
    p2mp_ipv4_session(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session>())
	,udp_ipv4_session(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session>())
{
    p2mp_ipv4_session->parent = this;
    children["p2mp-ipv4-session"] = p2mp_ipv4_session;

    udp_ipv4_session->parent = this;
    children["udp-ipv4-session"] = udp_ipv4_session;

    yang_name = "rsvp-filter"; yang_parent_name = "template";
}

Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::~RsvpFilter()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::has_data() const
{
    return filter_type.is_set
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data());
}

bool Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(filter_type.operation)
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation());
}

std::string Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-filter";

    return path_buffer.str();

}

EntityPath Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/template/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.operation)) leaf_name_data.push_back(filter_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session != nullptr)
        {
            children["p2mp-ipv4-session"] = p2mp_ipv4_session;
        }
        else
        {
            p2mp_ipv4_session = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session>();
            p2mp_ipv4_session->parent = this;
            children["p2mp-ipv4-session"] = p2mp_ipv4_session;
        }
        return children.at("p2mp-ipv4-session");
    }

    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session != nullptr)
        {
            children["udp-ipv4-session"] = udp_ipv4_session;
        }
        else
        {
            udp_ipv4_session = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session>();
            udp_ipv4_session->parent = this;
            children["udp-ipv4-session"] = udp_ipv4_session;
        }
        return children.at("udp-ipv4-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::get_children()
{
    if(children.find("p2mp-ipv4-session") == children.end())
    {
        if(p2mp_ipv4_session != nullptr)
        {
            children["p2mp-ipv4-session"] = p2mp_ipv4_session;
        }
    }

    if(children.find("udp-ipv4-session") == children.end())
    {
        if(udp_ipv4_session != nullptr)
        {
            children["udp-ipv4-session"] = udp_ipv4_session;
        }
    }

    return children;
}

void Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
    }
}

Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session::UdpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"}
{
    yang_name = "udp-ipv4-session"; yang_parent_name = "rsvp-filter";
}

Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session::~UdpIpv4Session()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session::has_data() const
{
    return source_address.is_set
	|| source_port.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session::has_operation() const
{
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(source_port.operation);
}

std::string Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-ipv4-session";

    return path_buffer.str();

}

EntityPath Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/template/rsvp-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session::get_children()
{
    return children;
}

void Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
}

Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session::P2MpIpv4Session()
    :
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    sub_group_id{YType::uint16, "sub-group-id"}
{
    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter";
}

Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session::~P2MpIpv4Session()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session::has_data() const
{
    return p2mp_sub_group_origin.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session::has_operation() const
{
    return is_set(operation)
	|| is_set(p2mp_sub_group_origin.operation)
	|| is_set(source_address.operation)
	|| is_set(source_port.operation)
	|| is_set(sub_group_id.operation);
}

std::string Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-ipv4-session";

    return path_buffer.str();

}

EntityPath Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/template/rsvp-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.operation)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session::get_children()
{
    return children;
}

void Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
}

Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessionAttribute()
    :
    reservation_priority{YType::uint8, "reservation-priority"},
    setup_priority{YType::uint8, "setup-priority"}
    	,
    sess_attribute_flags(std::make_shared<Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags>())
{
    sess_attribute_flags->parent = this;
    children["sess-attribute-flags"] = sess_attribute_flags;

    yang_name = "session-attribute"; yang_parent_name = "psb-brief";
}

Rsvp::PsbBriefs::PsbBrief::SessionAttribute::~SessionAttribute()
{
}

bool Rsvp::PsbBriefs::PsbBrief::SessionAttribute::has_data() const
{
    return reservation_priority.is_set
	|| setup_priority.is_set
	|| (sess_attribute_flags !=  nullptr && sess_attribute_flags->has_data());
}

bool Rsvp::PsbBriefs::PsbBrief::SessionAttribute::has_operation() const
{
    return is_set(operation)
	|| is_set(reservation_priority.operation)
	|| is_set(setup_priority.operation)
	|| (sess_attribute_flags !=  nullptr && sess_attribute_flags->has_operation());
}

std::string Rsvp::PsbBriefs::PsbBrief::SessionAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-attribute";

    return path_buffer.str();

}

EntityPath Rsvp::PsbBriefs::PsbBrief::SessionAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reservation_priority.is_set || is_set(reservation_priority.operation)) leaf_name_data.push_back(reservation_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::SessionAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sess-attribute-flags")
    {
        if(sess_attribute_flags != nullptr)
        {
            children["sess-attribute-flags"] = sess_attribute_flags;
        }
        else
        {
            sess_attribute_flags = std::make_shared<Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags>();
            sess_attribute_flags->parent = this;
            children["sess-attribute-flags"] = sess_attribute_flags;
        }
        return children.at("sess-attribute-flags");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::PsbBriefs::PsbBrief::SessionAttribute::get_children()
{
    if(children.find("sess-attribute-flags") == children.end())
    {
        if(sess_attribute_flags != nullptr)
        {
            children["sess-attribute-flags"] = sess_attribute_flags;
        }
    }

    return children;
}

void Rsvp::PsbBriefs::PsbBrief::SessionAttribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reservation-priority")
    {
        reservation_priority = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
}

Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::SessAttributeFlags()
    :
    is_bandwidth_protect{YType::boolean, "is-bandwidth-protect"},
    is_local_protect{YType::boolean, "is-local-protect"},
    is_node_protect{YType::boolean, "is-node-protect"},
    is_record_labels{YType::boolean, "is-record-labels"},
    is_shared_explicit_requested{YType::boolean, "is-shared-explicit-requested"}
{
    yang_name = "sess-attribute-flags"; yang_parent_name = "session-attribute";
}

Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::~SessAttributeFlags()
{
}

bool Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::has_data() const
{
    return is_bandwidth_protect.is_set
	|| is_local_protect.is_set
	|| is_node_protect.is_set
	|| is_record_labels.is_set
	|| is_shared_explicit_requested.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_bandwidth_protect.operation)
	|| is_set(is_local_protect.operation)
	|| is_set(is_node_protect.operation)
	|| is_set(is_record_labels.operation)
	|| is_set(is_shared_explicit_requested.operation);
}

std::string Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sess-attribute-flags";

    return path_buffer.str();

}

EntityPath Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/session-attribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_protect.is_set || is_set(is_bandwidth_protect.operation)) leaf_name_data.push_back(is_bandwidth_protect.get_name_leafdata());
    if (is_local_protect.is_set || is_set(is_local_protect.operation)) leaf_name_data.push_back(is_local_protect.get_name_leafdata());
    if (is_node_protect.is_set || is_set(is_node_protect.operation)) leaf_name_data.push_back(is_node_protect.get_name_leafdata());
    if (is_record_labels.is_set || is_set(is_record_labels.operation)) leaf_name_data.push_back(is_record_labels.get_name_leafdata());
    if (is_shared_explicit_requested.is_set || is_set(is_shared_explicit_requested.operation)) leaf_name_data.push_back(is_shared_explicit_requested.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::get_children()
{
    return children;
}

void Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-bandwidth-protect")
    {
        is_bandwidth_protect = value;
    }
    if(value_path == "is-local-protect")
    {
        is_local_protect = value;
    }
    if(value_path == "is-node-protect")
    {
        is_node_protect = value;
    }
    if(value_path == "is-record-labels")
    {
        is_record_labels = value;
    }
    if(value_path == "is-shared-explicit-requested")
    {
        is_shared_explicit_requested = value;
    }
}

Rsvp::PsbBriefs::PsbBrief::TrafficSpec::TrafficSpec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"}
{
    yang_name = "traffic-spec"; yang_parent_name = "psb-brief";
}

Rsvp::PsbBriefs::PsbBrief::TrafficSpec::~TrafficSpec()
{
}

bool Rsvp::PsbBriefs::PsbBrief::TrafficSpec::has_data() const
{
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_max_unit.is_set
	|| traffic_min_unit.is_set
	|| traffic_peak_rate.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::TrafficSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(traffic_average_rate.operation)
	|| is_set(traffic_max_burst.operation)
	|| is_set(traffic_max_unit.operation)
	|| is_set(traffic_min_unit.operation)
	|| is_set(traffic_peak_rate.operation);
}

std::string Rsvp::PsbBriefs::PsbBrief::TrafficSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-spec";

    return path_buffer.str();

}

EntityPath Rsvp::PsbBriefs::PsbBrief::TrafficSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_average_rate.is_set || is_set(traffic_average_rate.operation)) leaf_name_data.push_back(traffic_average_rate.get_name_leafdata());
    if (traffic_max_burst.is_set || is_set(traffic_max_burst.operation)) leaf_name_data.push_back(traffic_max_burst.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.operation)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.operation)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.operation)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::TrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::PsbBriefs::PsbBrief::TrafficSpec::get_children()
{
    return children;
}

void Rsvp::PsbBriefs::PsbBrief::TrafficSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate = value;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst = value;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit = value;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit = value;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate = value;
    }
}

Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::GenericTrafficSpec()
    :
    tspec_type{YType::enumeration, "tspec-type"}
    	,
    g709otn_tspec(std::make_shared<Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec>())
	,intsrv_tspec(std::make_shared<Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec>())
{
    g709otn_tspec->parent = this;
    children["g709otn-tspec"] = g709otn_tspec;

    intsrv_tspec->parent = this;
    children["intsrv-tspec"] = intsrv_tspec;

    yang_name = "generic-traffic-spec"; yang_parent_name = "psb-brief";
}

Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::~GenericTrafficSpec()
{
}

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::has_data() const
{
    return tspec_type.is_set
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_data())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_data());
}

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(tspec_type.operation)
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_operation())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_operation());
}

std::string Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-traffic-spec";

    return path_buffer.str();

}

EntityPath Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tspec_type.is_set || is_set(tspec_type.operation)) leaf_name_data.push_back(tspec_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "g709otn-tspec")
    {
        if(g709otn_tspec != nullptr)
        {
            children["g709otn-tspec"] = g709otn_tspec;
        }
        else
        {
            g709otn_tspec = std::make_shared<Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec>();
            g709otn_tspec->parent = this;
            children["g709otn-tspec"] = g709otn_tspec;
        }
        return children.at("g709otn-tspec");
    }

    if(child_yang_name == "intsrv-tspec")
    {
        if(intsrv_tspec != nullptr)
        {
            children["intsrv-tspec"] = intsrv_tspec;
        }
        else
        {
            intsrv_tspec = std::make_shared<Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec>();
            intsrv_tspec->parent = this;
            children["intsrv-tspec"] = intsrv_tspec;
        }
        return children.at("intsrv-tspec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::get_children()
{
    if(children.find("g709otn-tspec") == children.end())
    {
        if(g709otn_tspec != nullptr)
        {
            children["g709otn-tspec"] = g709otn_tspec;
        }
    }

    if(children.find("intsrv-tspec") == children.end())
    {
        if(intsrv_tspec != nullptr)
        {
            children["intsrv-tspec"] = intsrv_tspec;
        }
    }

    return children;
}

void Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tspec-type")
    {
        tspec_type = value;
    }
}

Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec::G709OtnTspec()
    :
    traffic_bit_rate{YType::uint64, "traffic-bit-rate"},
    traffic_multiplier{YType::uint16, "traffic-multiplier"},
    traffic_nvc{YType::uint16, "traffic-nvc"},
    traffic_signal_type{YType::uint8, "traffic-signal-type"}
{
    yang_name = "g709otn-tspec"; yang_parent_name = "generic-traffic-spec";
}

Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec::~G709OtnTspec()
{
}

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec::has_data() const
{
    return traffic_bit_rate.is_set
	|| traffic_multiplier.is_set
	|| traffic_nvc.is_set
	|| traffic_signal_type.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec::has_operation() const
{
    return is_set(operation)
	|| is_set(traffic_bit_rate.operation)
	|| is_set(traffic_multiplier.operation)
	|| is_set(traffic_nvc.operation)
	|| is_set(traffic_signal_type.operation);
}

std::string Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-tspec";

    return path_buffer.str();

}

EntityPath Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/generic-traffic-spec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_bit_rate.is_set || is_set(traffic_bit_rate.operation)) leaf_name_data.push_back(traffic_bit_rate.get_name_leafdata());
    if (traffic_multiplier.is_set || is_set(traffic_multiplier.operation)) leaf_name_data.push_back(traffic_multiplier.get_name_leafdata());
    if (traffic_nvc.is_set || is_set(traffic_nvc.operation)) leaf_name_data.push_back(traffic_nvc.get_name_leafdata());
    if (traffic_signal_type.is_set || is_set(traffic_signal_type.operation)) leaf_name_data.push_back(traffic_signal_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec::get_children()
{
    return children;
}

void Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "traffic-bit-rate")
    {
        traffic_bit_rate = value;
    }
    if(value_path == "traffic-multiplier")
    {
        traffic_multiplier = value;
    }
    if(value_path == "traffic-nvc")
    {
        traffic_nvc = value;
    }
    if(value_path == "traffic-signal-type")
    {
        traffic_signal_type = value;
    }
}

Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::IntsrvTspec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"}
{
    yang_name = "intsrv-tspec"; yang_parent_name = "generic-traffic-spec";
}

Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::~IntsrvTspec()
{
}

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::has_data() const
{
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_max_unit.is_set
	|| traffic_min_unit.is_set
	|| traffic_peak_rate.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::has_operation() const
{
    return is_set(operation)
	|| is_set(traffic_average_rate.operation)
	|| is_set(traffic_max_burst.operation)
	|| is_set(traffic_max_unit.operation)
	|| is_set(traffic_min_unit.operation)
	|| is_set(traffic_peak_rate.operation);
}

std::string Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intsrv-tspec";

    return path_buffer.str();

}

EntityPath Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/generic-traffic-spec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_average_rate.is_set || is_set(traffic_average_rate.operation)) leaf_name_data.push_back(traffic_average_rate.get_name_leafdata());
    if (traffic_max_burst.is_set || is_set(traffic_max_burst.operation)) leaf_name_data.push_back(traffic_max_burst.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.operation)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.operation)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.operation)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::get_children()
{
    return children;
}

void Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate = value;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst = value;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit = value;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit = value;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate = value;
    }
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBriefs()
{
    yang_name = "global-neighbor-briefs"; yang_parent_name = "rsvp";
}

Rsvp::GlobalNeighborBriefs::~GlobalNeighborBriefs()
{
}

bool Rsvp::GlobalNeighborBriefs::has_data() const
{
    for (std::size_t index=0; index<global_neighbor_brief.size(); index++)
    {
        if(global_neighbor_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::GlobalNeighborBriefs::has_operation() const
{
    for (std::size_t index=0; index<global_neighbor_brief.size(); index++)
    {
        if(global_neighbor_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rsvp::GlobalNeighborBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-neighbor-briefs";

    return path_buffer.str();

}

EntityPath Rsvp::GlobalNeighborBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global-neighbor-brief")
    {
        for(auto const & c : global_neighbor_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief>();
        c->parent = this;
        global_neighbor_brief.push_back(std::move(c));
        children[segment_path] = global_neighbor_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::GlobalNeighborBriefs::get_children()
{
    for (auto const & c : global_neighbor_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rsvp::GlobalNeighborBriefs::set_value(const std::string & value_path, std::string value)
{
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborBrief()
    :
    neighbor_address{YType::str, "neighbor-address"},
    is_gr_enabled{YType::boolean, "is-gr-enabled"},
    local_node_address{YType::str, "local-node-address"},
    lost_communication_reason{YType::enumeration, "lost-communication-reason"},
    lost_communication_total{YType::uint16, "lost-communication-total"},
    neighbor_hello_state{YType::enumeration, "neighbor-hello-state"},
    node_address{YType::str, "node-address"},
    restart_state{YType::enumeration, "restart-state"}
    	,
    global_neighbor_flags(std::make_shared<Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags>())
{
    global_neighbor_flags->parent = this;
    children["global-neighbor-flags"] = global_neighbor_flags;

    yang_name = "global-neighbor-brief"; yang_parent_name = "global-neighbor-briefs";
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::~GlobalNeighborBrief()
{
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::has_data() const
{
    for (std::size_t index=0; index<lost_communication_time.size(); index++)
    {
        if(lost_communication_time[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<up_time.size(); index++)
    {
        if(up_time[index]->has_data())
            return true;
    }
    for (auto const & leaf : local_node_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lost_communication_reason.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lost_communication_total.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : neighbor_hello_state.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return neighbor_address.is_set
	|| is_gr_enabled.is_set
	|| node_address.is_set
	|| restart_state.is_set
	|| (global_neighbor_flags !=  nullptr && global_neighbor_flags->has_data());
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::has_operation() const
{
    for (std::size_t index=0; index<lost_communication_time.size(); index++)
    {
        if(lost_communication_time[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<up_time.size(); index++)
    {
        if(up_time[index]->has_operation())
            return true;
    }
    for (auto const & leaf : local_node_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : lost_communication_reason.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : lost_communication_total.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : neighbor_hello_state.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(is_gr_enabled.operation)
	|| is_set(local_node_address.operation)
	|| is_set(lost_communication_reason.operation)
	|| is_set(lost_communication_total.operation)
	|| is_set(neighbor_hello_state.operation)
	|| is_set(node_address.operation)
	|| is_set(restart_state.operation)
	|| (global_neighbor_flags !=  nullptr && global_neighbor_flags->has_operation());
}

std::string Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-neighbor-brief" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/global-neighbor-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (is_gr_enabled.is_set || is_set(is_gr_enabled.operation)) leaf_name_data.push_back(is_gr_enabled.get_name_leafdata());
    if (node_address.is_set || is_set(node_address.operation)) leaf_name_data.push_back(node_address.get_name_leafdata());
    if (restart_state.is_set || is_set(restart_state.operation)) leaf_name_data.push_back(restart_state.get_name_leafdata());

    auto local_node_address_name_datas = local_node_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_node_address_name_datas.begin(), local_node_address_name_datas.end());
    auto lost_communication_reason_name_datas = lost_communication_reason.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lost_communication_reason_name_datas.begin(), lost_communication_reason_name_datas.end());
    auto lost_communication_total_name_datas = lost_communication_total.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lost_communication_total_name_datas.begin(), lost_communication_total_name_datas.end());
    auto neighbor_hello_state_name_datas = neighbor_hello_state.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), neighbor_hello_state_name_datas.begin(), neighbor_hello_state_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global-neighbor-flags")
    {
        if(global_neighbor_flags != nullptr)
        {
            children["global-neighbor-flags"] = global_neighbor_flags;
        }
        else
        {
            global_neighbor_flags = std::make_shared<Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags>();
            global_neighbor_flags->parent = this;
            children["global-neighbor-flags"] = global_neighbor_flags;
        }
        return children.at("global-neighbor-flags");
    }

    if(child_yang_name == "lost-communication-time")
    {
        for(auto const & c : lost_communication_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime>();
        c->parent = this;
        lost_communication_time.push_back(std::move(c));
        children[segment_path] = lost_communication_time.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "up-time")
    {
        for(auto const & c : up_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime>();
        c->parent = this;
        up_time.push_back(std::move(c));
        children[segment_path] = up_time.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::get_children()
{
    if(children.find("global-neighbor-flags") == children.end())
    {
        if(global_neighbor_flags != nullptr)
        {
            children["global-neighbor-flags"] = global_neighbor_flags;
        }
    }

    for (auto const & c : lost_communication_time)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : up_time)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled = value;
    }
    if(value_path == "local-node-address")
    {
        local_node_address.append(value);
    }
    if(value_path == "lost-communication-reason")
    {
        lost_communication_reason.append(value);
    }
    if(value_path == "lost-communication-total")
    {
        lost_communication_total.append(value);
    }
    if(value_path == "neighbor-hello-state")
    {
        neighbor_hello_state.append(value);
    }
    if(value_path == "node-address")
    {
        node_address = value;
    }
    if(value_path == "restart-state")
    {
        restart_state = value;
    }
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::GlobalNeighborFlags()
    :
    is_application_mpls{YType::boolean, "is-application-mpls"},
    is_application_ouni{YType::boolean, "is-application-ouni"}
{
    yang_name = "global-neighbor-flags"; yang_parent_name = "global-neighbor-brief";
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::~GlobalNeighborFlags()
{
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::has_data() const
{
    return is_application_mpls.is_set
	|| is_application_ouni.is_set;
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_application_mpls.operation)
	|| is_set(is_application_ouni.operation);
}

std::string Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-neighbor-flags";

    return path_buffer.str();

}

EntityPath Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalNeighborFlags' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_application_mpls.is_set || is_set(is_application_mpls.operation)) leaf_name_data.push_back(is_application_mpls.get_name_leafdata());
    if (is_application_ouni.is_set || is_set(is_application_ouni.operation)) leaf_name_data.push_back(is_application_ouni.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::get_children()
{
    return children;
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-application-mpls")
    {
        is_application_mpls = value;
    }
    if(value_path == "is-application-ouni")
    {
        is_application_ouni = value;
    }
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::UpTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{
    yang_name = "up-time"; yang_parent_name = "global-neighbor-brief";
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::~UpTime()
{
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up-time";

    return path_buffer.str();

}

EntityPath Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpTime' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::get_children()
{
    return children;
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::LostCommunicationTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{
    yang_name = "lost-communication-time"; yang_parent_name = "global-neighbor-brief";
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::~LostCommunicationTime()
{
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lost-communication-time";

    return path_buffer.str();

}

EntityPath Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LostCommunicationTime' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::get_children()
{
    return children;
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}


}
}

