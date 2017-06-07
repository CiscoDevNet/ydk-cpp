
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_lsd_oper_5.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_lsd_oper {

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::IpSubData()
    :
    out_interface{YType::str, "out-interface"},
    path_flags_decode{YType::str, "path-flags-decode"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"}
{
    yang_name = "ip-sub-data"; yang_parent_name = "moi";
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::~IpSubData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::has_data() const
{
    return out_interface.is_set
	|| path_flags_decode.is_set
	|| table_id.is_set
	|| table_name.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::has_operation() const
{
    return is_set(operation)
	|| is_set(out_interface.operation)
	|| is_set(path_flags_decode.operation)
	|| is_set(table_id.operation)
	|| is_set(table_name.operation);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-sub-data";

    return path_buffer.str();

}

const EntityPath MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_interface.is_set || is_set(out_interface.operation)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.operation)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.operation)) leaf_name_data.push_back(table_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out-interface")
    {
        out_interface = value;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "table-name")
    {
        table_name = value;
    }
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::PseudowireHeadEndData()
    :
    control_word{YType::int32, "control-word"},
    imposition{YType::int32, "imposition"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"},
    path_flags_decode{YType::str, "path-flags-decode"},
    pw_list_id{YType::uint16, "pw-list-id"},
    pwhe_interface{YType::str, "pwhe-interface"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    vctype{YType::uint8, "vctype"}
{
    yang_name = "pseudowire-head-end-data"; yang_parent_name = "moi";
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::~PseudowireHeadEndData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::has_data() const
{
    return control_word.is_set
	|| imposition.is_set
	|| ipv4_next_hop.is_set
	|| out_interface.is_set
	|| out_label.is_set
	|| path_flags_decode.is_set
	|| pw_list_id.is_set
	|| pwhe_interface.is_set
	|| table_id.is_set
	|| table_name.is_set
	|| vctype.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::has_operation() const
{
    return is_set(operation)
	|| is_set(control_word.operation)
	|| is_set(imposition.operation)
	|| is_set(ipv4_next_hop.operation)
	|| is_set(out_interface.operation)
	|| is_set(out_label.operation)
	|| is_set(path_flags_decode.operation)
	|| is_set(pw_list_id.operation)
	|| is_set(pwhe_interface.operation)
	|| is_set(table_id.operation)
	|| is_set(table_name.operation)
	|| is_set(vctype.operation);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-head-end-data";

    return path_buffer.str();

}

const EntityPath MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireHeadEndData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_word.is_set || is_set(control_word.operation)) leaf_name_data.push_back(control_word.get_name_leafdata());
    if (imposition.is_set || is_set(imposition.operation)) leaf_name_data.push_back(imposition.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.operation)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.operation)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.operation)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (pw_list_id.is_set || is_set(pw_list_id.operation)) leaf_name_data.push_back(pw_list_id.get_name_leafdata());
    if (pwhe_interface.is_set || is_set(pwhe_interface.operation)) leaf_name_data.push_back(pwhe_interface.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.operation)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (vctype.is_set || is_set(vctype.operation)) leaf_name_data.push_back(vctype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "control-word")
    {
        control_word = value;
    }
    if(value_path == "imposition")
    {
        imposition = value;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
    }
    if(value_path == "pw-list-id")
    {
        pw_list_id = value;
    }
    if(value_path == "pwhe-interface")
    {
        pwhe_interface = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "table-name")
    {
        table_name = value;
    }
    if(value_path == "vctype")
    {
        vctype = value;
    }
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::PwListData()
    :
    l2_interface{YType::str, "l2-interface"},
    l3_interface{YType::str, "l3-interface"},
    path_flags_decode{YType::str, "path-flags-decode"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"}
{
    yang_name = "pw-list-data"; yang_parent_name = "moi";
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::~PwListData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::has_data() const
{
    return l2_interface.is_set
	|| l3_interface.is_set
	|| path_flags_decode.is_set
	|| table_id.is_set
	|| table_name.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::has_operation() const
{
    return is_set(operation)
	|| is_set(l2_interface.operation)
	|| is_set(l3_interface.operation)
	|| is_set(path_flags_decode.operation)
	|| is_set(table_id.operation)
	|| is_set(table_name.operation);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-list-data";

    return path_buffer.str();

}

const EntityPath MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PwListData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2_interface.is_set || is_set(l2_interface.operation)) leaf_name_data.push_back(l2_interface.get_name_leafdata());
    if (l3_interface.is_set || is_set(l3_interface.operation)) leaf_name_data.push_back(l3_interface.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.operation)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.operation)) leaf_name_data.push_back(table_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2-interface")
    {
        l2_interface = value;
    }
    if(value_path == "l3-interface")
    {
        l3_interface = value;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "table-name")
    {
        table_name = value;
    }
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Stackv4Data()
    :
    owner_application_type{YType::enumeration, "owner-application-type"}
    	,
    inner_stack(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack>())
	,nexthop(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop>())
{
    inner_stack->parent = this;

    nexthop->parent = this;

    yang_name = "stackv4-data"; yang_parent_name = "moi";
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::~Stackv4Data()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::has_data() const
{
    return owner_application_type.is_set
	|| (inner_stack !=  nullptr && inner_stack->has_data())
	|| (nexthop !=  nullptr && nexthop->has_data());
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::has_operation() const
{
    return is_set(operation)
	|| is_set(owner_application_type.operation)
	|| (inner_stack !=  nullptr && inner_stack->has_operation())
	|| (nexthop !=  nullptr && nexthop->has_operation());
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stackv4-data";

    return path_buffer.str();

}

const EntityPath MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stackv4Data' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner_application_type.is_set || is_set(owner_application_type.operation)) leaf_name_data.push_back(owner_application_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inner-stack")
    {
        if(inner_stack == nullptr)
        {
            inner_stack = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack>();
        }
        return inner_stack;
    }

    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop>();
        }
        return nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inner_stack != nullptr)
    {
        children["inner-stack"] = inner_stack;
    }

    if(nexthop != nullptr)
    {
        children["nexthop"] = nexthop;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "owner-application-type")
    {
        owner_application_type = value;
    }
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::Nexthop()
    :
    backup_path_id{YType::uint8, "backup-path-id"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    load_metric{YType::uint32, "load-metric"},
    local_label{YType::uint32, "local-label"},
    next_hop_id{YType::uint32, "next-hop-id"},
    out_interface{YType::str, "out-interface"},
    out_interface_parent{YType::str, "out-interface-parent"},
    out_label{YType::uint32, "out-label"},
    out_label_name{YType::str, "out-label-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    path_id{YType::uint8, "path-id"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "nexthop"; yang_parent_name = "stackv4-data";
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::~Nexthop()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::has_data() const
{
    return backup_path_id.is_set
	|| ipv4_next_hop.is_set
	|| load_metric.is_set
	|| local_label.is_set
	|| next_hop_id.is_set
	|| out_interface.is_set
	|| out_interface_parent.is_set
	|| out_label.is_set
	|| out_label_name.is_set
	|| path_flags_decode.is_set
	|| path_id.is_set
	|| table_id.is_set
	|| table_name.is_set
	|| tunnel_id.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_path_id.operation)
	|| is_set(ipv4_next_hop.operation)
	|| is_set(load_metric.operation)
	|| is_set(local_label.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(out_interface.operation)
	|| is_set(out_interface_parent.operation)
	|| is_set(out_label.operation)
	|| is_set(out_label_name.operation)
	|| is_set(path_flags_decode.operation)
	|| is_set(path_id.operation)
	|| is_set(table_id.operation)
	|| is_set(table_name.operation)
	|| is_set(tunnel_id.operation);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";

    return path_buffer.str();

}

const EntityPath MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nexthop' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_path_id.is_set || is_set(backup_path_id.operation)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.operation)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.operation)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_interface_parent.is_set || is_set(out_interface_parent.operation)) leaf_name_data.push_back(out_interface_parent.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_name.is_set || is_set(out_label_name.operation)) leaf_name_data.push_back(out_label_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.operation)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.operation)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
    }
    if(value_path == "out-interface-parent")
    {
        out_interface_parent = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
    if(value_path == "out-label-name")
    {
        out_label_name = value;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "table-name")
    {
        table_name = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::InnerStack()
    :
    nexthop{YType::str, "nexthop"},
    num_lbls{YType::uint8, "num-lbls"},
    num_nexthops{YType::uint8, "num-nexthops"}
{
    yang_name = "inner-stack"; yang_parent_name = "stackv4-data";
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::~InnerStack()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::has_data() const
{
    for (std::size_t index=0; index<label.size(); index++)
    {
        if(label[index]->has_data())
            return true;
    }
    for (auto const & leaf : nexthop.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return num_lbls.is_set
	|| num_nexthops.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::has_operation() const
{
    for (std::size_t index=0; index<label.size(); index++)
    {
        if(label[index]->has_operation())
            return true;
    }
    for (auto const & leaf : nexthop.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(nexthop.operation)
	|| is_set(num_lbls.operation)
	|| is_set(num_nexthops.operation);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-stack";

    return path_buffer.str();

}

const EntityPath MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InnerStack' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_lbls.is_set || is_set(num_lbls.operation)) leaf_name_data.push_back(num_lbls.get_name_leafdata());
    if (num_nexthops.is_set || is_set(num_nexthops.operation)) leaf_name_data.push_back(num_nexthops.get_name_leafdata());

    auto nexthop_name_datas = nexthop.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nexthop_name_datas.begin(), nexthop_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label")
    {
        for(auto const & c : label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label>();
        c->parent = this;
        label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nexthop")
    {
        nexthop.append(value);
    }
    if(value_path == "num-lbls")
    {
        num_lbls = value;
    }
    if(value_path == "num-nexthops")
    {
        num_nexthops = value;
    }
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::Label()
    :
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_label_str{YType::str, "outgoing-label-str"}
{
    yang_name = "label"; yang_parent_name = "inner-stack";
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::~Label()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::has_data() const
{
    return outgoing_label.is_set
	|| outgoing_label_str.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::has_operation() const
{
    return is_set(operation)
	|| is_set(outgoing_label.operation)
	|| is_set(outgoing_label_str.operation);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";

    return path_buffer.str();

}

const EntityPath MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Label' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outgoing_label.is_set || is_set(outgoing_label.operation)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_label_str.is_set || is_set(outgoing_label_str.operation)) leaf_name_data.push_back(outgoing_label_str.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
    }
    if(value_path == "outgoing-label-str")
    {
        outgoing_label_str = value;
    }
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Stackv6Data()
    :
    inner_stack(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack>())
	,nexthop(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop>())
{
    inner_stack->parent = this;

    nexthop->parent = this;

    yang_name = "stackv6-data"; yang_parent_name = "moi";
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::~Stackv6Data()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::has_data() const
{
    return (inner_stack !=  nullptr && inner_stack->has_data())
	|| (nexthop !=  nullptr && nexthop->has_data());
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::has_operation() const
{
    return is_set(operation)
	|| (inner_stack !=  nullptr && inner_stack->has_operation())
	|| (nexthop !=  nullptr && nexthop->has_operation());
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stackv6-data";

    return path_buffer.str();

}

const EntityPath MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stackv6Data' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inner-stack")
    {
        if(inner_stack == nullptr)
        {
            inner_stack = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack>();
        }
        return inner_stack;
    }

    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop>();
        }
        return nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inner_stack != nullptr)
    {
        children["inner-stack"] = inner_stack;
    }

    if(nexthop != nullptr)
    {
        children["nexthop"] = nexthop;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::set_value(const std::string & value_path, std::string value)
{
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::Nexthop()
    :
    backup_path_id{YType::uint8, "backup-path-id"},
    ipv6_next_hop{YType::str, "ipv6-next-hop"},
    next_hop_id{YType::uint32, "next-hop-id"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"},
    out_label_name{YType::str, "out-label-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    path_id{YType::uint8, "path-id"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"}
{
    yang_name = "nexthop"; yang_parent_name = "stackv6-data";
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::~Nexthop()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::has_data() const
{
    return backup_path_id.is_set
	|| ipv6_next_hop.is_set
	|| next_hop_id.is_set
	|| out_interface.is_set
	|| out_label.is_set
	|| out_label_name.is_set
	|| path_flags_decode.is_set
	|| path_id.is_set
	|| table_id.is_set
	|| table_name.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_path_id.operation)
	|| is_set(ipv6_next_hop.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(out_interface.operation)
	|| is_set(out_label.operation)
	|| is_set(out_label_name.operation)
	|| is_set(path_flags_decode.operation)
	|| is_set(path_id.operation)
	|| is_set(table_id.operation)
	|| is_set(table_name.operation);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";

    return path_buffer.str();

}

const EntityPath MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nexthop' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_path_id.is_set || is_set(backup_path_id.operation)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (ipv6_next_hop.is_set || is_set(ipv6_next_hop.operation)) leaf_name_data.push_back(ipv6_next_hop.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.operation)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_name.is_set || is_set(out_label_name.operation)) leaf_name_data.push_back(out_label_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.operation)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.operation)) leaf_name_data.push_back(table_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
    }
    if(value_path == "ipv6-next-hop")
    {
        ipv6_next_hop = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
    if(value_path == "out-label-name")
    {
        out_label_name = value;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "table-name")
    {
        table_name = value;
    }
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::InnerStack()
    :
    nexthop{YType::str, "nexthop"},
    num_lbls{YType::uint8, "num-lbls"},
    num_nexthops{YType::uint8, "num-nexthops"}
{
    yang_name = "inner-stack"; yang_parent_name = "stackv6-data";
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::~InnerStack()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::has_data() const
{
    for (std::size_t index=0; index<label.size(); index++)
    {
        if(label[index]->has_data())
            return true;
    }
    for (auto const & leaf : nexthop.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return num_lbls.is_set
	|| num_nexthops.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::has_operation() const
{
    for (std::size_t index=0; index<label.size(); index++)
    {
        if(label[index]->has_operation())
            return true;
    }
    for (auto const & leaf : nexthop.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(nexthop.operation)
	|| is_set(num_lbls.operation)
	|| is_set(num_nexthops.operation);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-stack";

    return path_buffer.str();

}

const EntityPath MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InnerStack' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_lbls.is_set || is_set(num_lbls.operation)) leaf_name_data.push_back(num_lbls.get_name_leafdata());
    if (num_nexthops.is_set || is_set(num_nexthops.operation)) leaf_name_data.push_back(num_nexthops.get_name_leafdata());

    auto nexthop_name_datas = nexthop.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nexthop_name_datas.begin(), nexthop_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label")
    {
        for(auto const & c : label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label>();
        c->parent = this;
        label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nexthop")
    {
        nexthop.append(value);
    }
    if(value_path == "num-lbls")
    {
        num_lbls = value;
    }
    if(value_path == "num-nexthops")
    {
        num_nexthops = value;
    }
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::Label()
    :
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_label_str{YType::str, "outgoing-label-str"}
{
    yang_name = "label"; yang_parent_name = "inner-stack";
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::~Label()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::has_data() const
{
    return outgoing_label.is_set
	|| outgoing_label_str.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::has_operation() const
{
    return is_set(operation)
	|| is_set(outgoing_label.operation)
	|| is_set(outgoing_label_str.operation);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";

    return path_buffer.str();

}

const EntityPath MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Label' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outgoing_label.is_set || is_set(outgoing_label.operation)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_label_str.is_set || is_set(outgoing_label_str.operation)) leaf_name_data.push_back(outgoing_label_str.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
    }
    if(value_path == "outgoing-label-str")
    {
        outgoing_label_str = value;
    }
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::TeHeadData()
    :
    flags_decode{YType::str, "flags-decode"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    tunnel_fwd_class{YType::uint8, "tunnel-fwd-class"},
    tunnel_load_metric{YType::uint32, "tunnel-load-metric"},
    tunnel_local_label{YType::uint32, "tunnel-local-label"},
    tunnel_local_label_str{YType::str, "tunnel-local-label-str"}
{
    yang_name = "te-head-data"; yang_parent_name = "moi";
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::~TeHeadData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::has_data() const
{
    return flags_decode.is_set
	|| table_id.is_set
	|| table_name.is_set
	|| tunnel_fwd_class.is_set
	|| tunnel_load_metric.is_set
	|| tunnel_local_label.is_set
	|| tunnel_local_label_str.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::has_operation() const
{
    return is_set(operation)
	|| is_set(flags_decode.operation)
	|| is_set(table_id.operation)
	|| is_set(table_name.operation)
	|| is_set(tunnel_fwd_class.operation)
	|| is_set(tunnel_load_metric.operation)
	|| is_set(tunnel_local_label.operation)
	|| is_set(tunnel_local_label_str.operation);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-head-data";

    return path_buffer.str();

}

const EntityPath MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeHeadData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags_decode.is_set || is_set(flags_decode.operation)) leaf_name_data.push_back(flags_decode.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.operation)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (tunnel_fwd_class.is_set || is_set(tunnel_fwd_class.operation)) leaf_name_data.push_back(tunnel_fwd_class.get_name_leafdata());
    if (tunnel_load_metric.is_set || is_set(tunnel_load_metric.operation)) leaf_name_data.push_back(tunnel_load_metric.get_name_leafdata());
    if (tunnel_local_label.is_set || is_set(tunnel_local_label.operation)) leaf_name_data.push_back(tunnel_local_label.get_name_leafdata());
    if (tunnel_local_label_str.is_set || is_set(tunnel_local_label_str.operation)) leaf_name_data.push_back(tunnel_local_label_str.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flags-decode")
    {
        flags_decode = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "table-name")
    {
        table_name = value;
    }
    if(value_path == "tunnel-fwd-class")
    {
        tunnel_fwd_class = value;
    }
    if(value_path == "tunnel-load-metric")
    {
        tunnel_load_metric = value;
    }
    if(value_path == "tunnel-local-label")
    {
        tunnel_local_label = value;
    }
    if(value_path == "tunnel-local-label-str")
    {
        tunnel_local_label_str = value;
    }
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::DmtcData()
    :
    dmtc_ext_ifh{YType::str, "dmtc-ext-ifh"}
{
    yang_name = "dmtc-data"; yang_parent_name = "moi";
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::~DmtcData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::has_data() const
{
    return dmtc_ext_ifh.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::has_operation() const
{
    return is_set(operation)
	|| is_set(dmtc_ext_ifh.operation);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dmtc-data";

    return path_buffer.str();

}

const EntityPath MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DmtcData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dmtc_ext_ifh.is_set || is_set(dmtc_ext_ifh.operation)) leaf_name_data.push_back(dmtc_ext_ifh.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh = value;
    }
}

MplsLsd::RewriteSummary::RewriteSummary()
    :
    num_dmtctefpi{YType::uint32, "num-dmtctefpi"},
    num_ipv4fpi{YType::uint32, "num-ipv4fpi"},
    num_ipv6fpi{YType::uint32, "num-ipv6fpi"},
    num_label_fpi{YType::uint32, "num-label-fpi"},
    num_pw_list_tefpi{YType::uint32, "num-pw-list-tefpi"},
    num_rewrite{YType::uint32, "num-rewrite"},
    num_rewrite_rpf_neighbors{YType::uint32, "num-rewrite-rpf-neighbors"},
    num_tefpi{YType::uint32, "num-tefpi"},
    total_dmtc_intf{YType::uint32, "total-dmtc-intf"},
    total_forwad_update_message{YType::uint32, "total-forwad-update-message"},
    total_forward_update{YType::uint32, "total-forward-update"},
    total_ip_sub_paths{YType::uint32, "total-ip-sub-paths"},
    total_ipv4rpf_neighbors{YType::uint32, "total-ipv4rpf-neighbors"},
    total_ipv6rpf_neighbors{YType::uint32, "total-ipv6rpf-neighbors"},
    total_paths{YType::uint32, "total-paths"},
    total_pw_paths{YType::uint32, "total-pw-paths"},
    total_t_ev4_paths{YType::uint32, "total-t-ev4-paths"},
    total_te_head_paths{YType::uint32, "total-te-head-paths"},
    vrf_name_xr{YType::str, "vrf-name-xr"}
    	,
    ipv4_paths(std::make_shared<MplsLsd::RewriteSummary::Ipv4Paths>())
	,ipv6_paths(std::make_shared<MplsLsd::RewriteSummary::Ipv6Paths>())
{
    ipv4_paths->parent = this;

    ipv6_paths->parent = this;

    yang_name = "rewrite-summary"; yang_parent_name = "mpls-lsd";
}

MplsLsd::RewriteSummary::~RewriteSummary()
{
}

bool MplsLsd::RewriteSummary::has_data() const
{
    return num_dmtctefpi.is_set
	|| num_ipv4fpi.is_set
	|| num_ipv6fpi.is_set
	|| num_label_fpi.is_set
	|| num_pw_list_tefpi.is_set
	|| num_rewrite.is_set
	|| num_rewrite_rpf_neighbors.is_set
	|| num_tefpi.is_set
	|| total_dmtc_intf.is_set
	|| total_forwad_update_message.is_set
	|| total_forward_update.is_set
	|| total_ip_sub_paths.is_set
	|| total_ipv4rpf_neighbors.is_set
	|| total_ipv6rpf_neighbors.is_set
	|| total_paths.is_set
	|| total_pw_paths.is_set
	|| total_t_ev4_paths.is_set
	|| total_te_head_paths.is_set
	|| vrf_name_xr.is_set
	|| (ipv4_paths !=  nullptr && ipv4_paths->has_data())
	|| (ipv6_paths !=  nullptr && ipv6_paths->has_data());
}

bool MplsLsd::RewriteSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(num_dmtctefpi.operation)
	|| is_set(num_ipv4fpi.operation)
	|| is_set(num_ipv6fpi.operation)
	|| is_set(num_label_fpi.operation)
	|| is_set(num_pw_list_tefpi.operation)
	|| is_set(num_rewrite.operation)
	|| is_set(num_rewrite_rpf_neighbors.operation)
	|| is_set(num_tefpi.operation)
	|| is_set(total_dmtc_intf.operation)
	|| is_set(total_forwad_update_message.operation)
	|| is_set(total_forward_update.operation)
	|| is_set(total_ip_sub_paths.operation)
	|| is_set(total_ipv4rpf_neighbors.operation)
	|| is_set(total_ipv6rpf_neighbors.operation)
	|| is_set(total_paths.operation)
	|| is_set(total_pw_paths.operation)
	|| is_set(total_t_ev4_paths.operation)
	|| is_set(total_te_head_paths.operation)
	|| is_set(vrf_name_xr.operation)
	|| (ipv4_paths !=  nullptr && ipv4_paths->has_operation())
	|| (ipv6_paths !=  nullptr && ipv6_paths->has_operation());
}

std::string MplsLsd::RewriteSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-summary";

    return path_buffer.str();

}

const EntityPath MplsLsd::RewriteSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_dmtctefpi.is_set || is_set(num_dmtctefpi.operation)) leaf_name_data.push_back(num_dmtctefpi.get_name_leafdata());
    if (num_ipv4fpi.is_set || is_set(num_ipv4fpi.operation)) leaf_name_data.push_back(num_ipv4fpi.get_name_leafdata());
    if (num_ipv6fpi.is_set || is_set(num_ipv6fpi.operation)) leaf_name_data.push_back(num_ipv6fpi.get_name_leafdata());
    if (num_label_fpi.is_set || is_set(num_label_fpi.operation)) leaf_name_data.push_back(num_label_fpi.get_name_leafdata());
    if (num_pw_list_tefpi.is_set || is_set(num_pw_list_tefpi.operation)) leaf_name_data.push_back(num_pw_list_tefpi.get_name_leafdata());
    if (num_rewrite.is_set || is_set(num_rewrite.operation)) leaf_name_data.push_back(num_rewrite.get_name_leafdata());
    if (num_rewrite_rpf_neighbors.is_set || is_set(num_rewrite_rpf_neighbors.operation)) leaf_name_data.push_back(num_rewrite_rpf_neighbors.get_name_leafdata());
    if (num_tefpi.is_set || is_set(num_tefpi.operation)) leaf_name_data.push_back(num_tefpi.get_name_leafdata());
    if (total_dmtc_intf.is_set || is_set(total_dmtc_intf.operation)) leaf_name_data.push_back(total_dmtc_intf.get_name_leafdata());
    if (total_forwad_update_message.is_set || is_set(total_forwad_update_message.operation)) leaf_name_data.push_back(total_forwad_update_message.get_name_leafdata());
    if (total_forward_update.is_set || is_set(total_forward_update.operation)) leaf_name_data.push_back(total_forward_update.get_name_leafdata());
    if (total_ip_sub_paths.is_set || is_set(total_ip_sub_paths.operation)) leaf_name_data.push_back(total_ip_sub_paths.get_name_leafdata());
    if (total_ipv4rpf_neighbors.is_set || is_set(total_ipv4rpf_neighbors.operation)) leaf_name_data.push_back(total_ipv4rpf_neighbors.get_name_leafdata());
    if (total_ipv6rpf_neighbors.is_set || is_set(total_ipv6rpf_neighbors.operation)) leaf_name_data.push_back(total_ipv6rpf_neighbors.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.operation)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_pw_paths.is_set || is_set(total_pw_paths.operation)) leaf_name_data.push_back(total_pw_paths.get_name_leafdata());
    if (total_t_ev4_paths.is_set || is_set(total_t_ev4_paths.operation)) leaf_name_data.push_back(total_t_ev4_paths.get_name_leafdata());
    if (total_te_head_paths.is_set || is_set(total_te_head_paths.operation)) leaf_name_data.push_back(total_te_head_paths.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.operation)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::RewriteSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-paths")
    {
        if(ipv4_paths == nullptr)
        {
            ipv4_paths = std::make_shared<MplsLsd::RewriteSummary::Ipv4Paths>();
        }
        return ipv4_paths;
    }

    if(child_yang_name == "ipv6-paths")
    {
        if(ipv6_paths == nullptr)
        {
            ipv6_paths = std::make_shared<MplsLsd::RewriteSummary::Ipv6Paths>();
        }
        return ipv6_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::RewriteSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_paths != nullptr)
    {
        children["ipv4-paths"] = ipv4_paths;
    }

    if(ipv6_paths != nullptr)
    {
        children["ipv6-paths"] = ipv6_paths;
    }

    return children;
}

void MplsLsd::RewriteSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-dmtctefpi")
    {
        num_dmtctefpi = value;
    }
    if(value_path == "num-ipv4fpi")
    {
        num_ipv4fpi = value;
    }
    if(value_path == "num-ipv6fpi")
    {
        num_ipv6fpi = value;
    }
    if(value_path == "num-label-fpi")
    {
        num_label_fpi = value;
    }
    if(value_path == "num-pw-list-tefpi")
    {
        num_pw_list_tefpi = value;
    }
    if(value_path == "num-rewrite")
    {
        num_rewrite = value;
    }
    if(value_path == "num-rewrite-rpf-neighbors")
    {
        num_rewrite_rpf_neighbors = value;
    }
    if(value_path == "num-tefpi")
    {
        num_tefpi = value;
    }
    if(value_path == "total-dmtc-intf")
    {
        total_dmtc_intf = value;
    }
    if(value_path == "total-forwad-update-message")
    {
        total_forwad_update_message = value;
    }
    if(value_path == "total-forward-update")
    {
        total_forward_update = value;
    }
    if(value_path == "total-ip-sub-paths")
    {
        total_ip_sub_paths = value;
    }
    if(value_path == "total-ipv4rpf-neighbors")
    {
        total_ipv4rpf_neighbors = value;
    }
    if(value_path == "total-ipv6rpf-neighbors")
    {
        total_ipv6rpf_neighbors = value;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
    }
    if(value_path == "total-pw-paths")
    {
        total_pw_paths = value;
    }
    if(value_path == "total-t-ev4-paths")
    {
        total_t_ev4_paths = value;
    }
    if(value_path == "total-te-head-paths")
    {
        total_te_head_paths = value;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
    }
}

MplsLsd::RewriteSummary::Ipv4Paths::Ipv4Paths()
    :
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_paths{YType::uint32, "total-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"}
{
    yang_name = "ipv4-paths"; yang_parent_name = "rewrite-summary";
}

MplsLsd::RewriteSummary::Ipv4Paths::~Ipv4Paths()
{
}

bool MplsLsd::RewriteSummary::Ipv4Paths::has_data() const
{
    return total_backup_paths.is_set
	|| total_paths.is_set
	|| total_pop_lkup_paths.is_set
	|| total_protected_paths.is_set
	|| total_remote_backup_paths.is_set;
}

bool MplsLsd::RewriteSummary::Ipv4Paths::has_operation() const
{
    return is_set(operation)
	|| is_set(total_backup_paths.operation)
	|| is_set(total_paths.operation)
	|| is_set(total_pop_lkup_paths.operation)
	|| is_set(total_protected_paths.operation)
	|| is_set(total_remote_backup_paths.operation);
}

std::string MplsLsd::RewriteSummary::Ipv4Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-paths";

    return path_buffer.str();

}

const EntityPath MplsLsd::RewriteSummary::Ipv4Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_backup_paths.is_set || is_set(total_backup_paths.operation)) leaf_name_data.push_back(total_backup_paths.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.operation)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_pop_lkup_paths.is_set || is_set(total_pop_lkup_paths.operation)) leaf_name_data.push_back(total_pop_lkup_paths.get_name_leafdata());
    if (total_protected_paths.is_set || is_set(total_protected_paths.operation)) leaf_name_data.push_back(total_protected_paths.get_name_leafdata());
    if (total_remote_backup_paths.is_set || is_set(total_remote_backup_paths.operation)) leaf_name_data.push_back(total_remote_backup_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::RewriteSummary::Ipv4Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::RewriteSummary::Ipv4Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::RewriteSummary::Ipv4Paths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-backup-paths")
    {
        total_backup_paths = value;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths = value;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths = value;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths = value;
    }
}

MplsLsd::RewriteSummary::Ipv6Paths::Ipv6Paths()
    :
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_paths{YType::uint32, "total-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"}
{
    yang_name = "ipv6-paths"; yang_parent_name = "rewrite-summary";
}

MplsLsd::RewriteSummary::Ipv6Paths::~Ipv6Paths()
{
}

bool MplsLsd::RewriteSummary::Ipv6Paths::has_data() const
{
    return total_backup_paths.is_set
	|| total_paths.is_set
	|| total_pop_lkup_paths.is_set
	|| total_protected_paths.is_set
	|| total_remote_backup_paths.is_set;
}

bool MplsLsd::RewriteSummary::Ipv6Paths::has_operation() const
{
    return is_set(operation)
	|| is_set(total_backup_paths.operation)
	|| is_set(total_paths.operation)
	|| is_set(total_pop_lkup_paths.operation)
	|| is_set(total_protected_paths.operation)
	|| is_set(total_remote_backup_paths.operation);
}

std::string MplsLsd::RewriteSummary::Ipv6Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-paths";

    return path_buffer.str();

}

const EntityPath MplsLsd::RewriteSummary::Ipv6Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_backup_paths.is_set || is_set(total_backup_paths.operation)) leaf_name_data.push_back(total_backup_paths.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.operation)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_pop_lkup_paths.is_set || is_set(total_pop_lkup_paths.operation)) leaf_name_data.push_back(total_pop_lkup_paths.get_name_leafdata());
    if (total_protected_paths.is_set || is_set(total_protected_paths.operation)) leaf_name_data.push_back(total_protected_paths.get_name_leafdata());
    if (total_remote_backup_paths.is_set || is_set(total_remote_backup_paths.operation)) leaf_name_data.push_back(total_remote_backup_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::RewriteSummary::Ipv6Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::RewriteSummary::Ipv6Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::RewriteSummary::Ipv6Paths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-backup-paths")
    {
        total_backup_paths = value;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths = value;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths = value;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths = value;
    }
}

MplsLsd::Applications::Applications()
{
    yang_name = "applications"; yang_parent_name = "mpls-lsd";
}

MplsLsd::Applications::~Applications()
{
}

bool MplsLsd::Applications::has_data() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::Applications::has_operation() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLsd::Applications::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "applications";

    return path_buffer.str();

}

const EntityPath MplsLsd::Applications::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Applications::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsLsd::Applications::Application>();
        c->parent = this;
        application.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Applications::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsd::Applications::set_value(const std::string & value_path, std::string value)
{
}

MplsLsd::Applications::Application::Application()
    :
    application_name{YType::str, "application-name"},
    app_disconnect_time{YType::uint64, "app-disconnect-time"},
    app_flow_controlled{YType::int32, "app-flow-controlled"},
    app_reg_time{YType::uint64, "app-reg-time"},
    application_instance{YType::str, "application-instance"},
    application_name_xr{YType::str, "application-name-xr"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_state{YType::enumeration, "application-state"},
    application_type{YType::enumeration, "application-type"},
    flow_ctrl_clr_time{YType::uint64, "flow-ctrl-clr-time"},
    flow_ctrl_time{YType::uint64, "flow-ctrl-time"},
    go_act_ts{YType::uint64, "go-act-ts"},
    node_id{YType::str, "node-id"},
    recovery_time_elapsed_seconds{YType::uint32, "recovery-time-elapsed-seconds"},
    recovery_time_register_seconds{YType::uint32, "recovery-time-register-seconds"},
    recovery_time_remaining_seconds{YType::uint32, "recovery-time-remaining-seconds"}
    	,
    application_statistics(std::make_shared<MplsLsd::Applications::Application::ApplicationStatistics>())
{
    application_statistics->parent = this;

    yang_name = "application"; yang_parent_name = "applications";
}

MplsLsd::Applications::Application::~Application()
{
}

bool MplsLsd::Applications::Application::has_data() const
{
    return application_name.is_set
	|| app_disconnect_time.is_set
	|| app_flow_controlled.is_set
	|| app_reg_time.is_set
	|| application_instance.is_set
	|| application_name_xr.is_set
	|| application_role_primary.is_set
	|| application_state.is_set
	|| application_type.is_set
	|| flow_ctrl_clr_time.is_set
	|| flow_ctrl_time.is_set
	|| go_act_ts.is_set
	|| node_id.is_set
	|| recovery_time_elapsed_seconds.is_set
	|| recovery_time_register_seconds.is_set
	|| recovery_time_remaining_seconds.is_set
	|| (application_statistics !=  nullptr && application_statistics->has_data());
}

bool MplsLsd::Applications::Application::has_operation() const
{
    return is_set(operation)
	|| is_set(application_name.operation)
	|| is_set(app_disconnect_time.operation)
	|| is_set(app_flow_controlled.operation)
	|| is_set(app_reg_time.operation)
	|| is_set(application_instance.operation)
	|| is_set(application_name_xr.operation)
	|| is_set(application_role_primary.operation)
	|| is_set(application_state.operation)
	|| is_set(application_type.operation)
	|| is_set(flow_ctrl_clr_time.operation)
	|| is_set(flow_ctrl_time.operation)
	|| is_set(go_act_ts.operation)
	|| is_set(node_id.operation)
	|| is_set(recovery_time_elapsed_seconds.operation)
	|| is_set(recovery_time_register_seconds.operation)
	|| is_set(recovery_time_remaining_seconds.operation)
	|| (application_statistics !=  nullptr && application_statistics->has_operation());
}

std::string MplsLsd::Applications::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application" <<"[application-name='" <<application_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLsd::Applications::Application::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/applications/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_name.is_set || is_set(application_name.operation)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (app_disconnect_time.is_set || is_set(app_disconnect_time.operation)) leaf_name_data.push_back(app_disconnect_time.get_name_leafdata());
    if (app_flow_controlled.is_set || is_set(app_flow_controlled.operation)) leaf_name_data.push_back(app_flow_controlled.get_name_leafdata());
    if (app_reg_time.is_set || is_set(app_reg_time.operation)) leaf_name_data.push_back(app_reg_time.get_name_leafdata());
    if (application_instance.is_set || is_set(application_instance.operation)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (application_name_xr.is_set || is_set(application_name_xr.operation)) leaf_name_data.push_back(application_name_xr.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.operation)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_state.is_set || is_set(application_state.operation)) leaf_name_data.push_back(application_state.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.operation)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (flow_ctrl_clr_time.is_set || is_set(flow_ctrl_clr_time.operation)) leaf_name_data.push_back(flow_ctrl_clr_time.get_name_leafdata());
    if (flow_ctrl_time.is_set || is_set(flow_ctrl_time.operation)) leaf_name_data.push_back(flow_ctrl_time.get_name_leafdata());
    if (go_act_ts.is_set || is_set(go_act_ts.operation)) leaf_name_data.push_back(go_act_ts.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (recovery_time_elapsed_seconds.is_set || is_set(recovery_time_elapsed_seconds.operation)) leaf_name_data.push_back(recovery_time_elapsed_seconds.get_name_leafdata());
    if (recovery_time_register_seconds.is_set || is_set(recovery_time_register_seconds.operation)) leaf_name_data.push_back(recovery_time_register_seconds.get_name_leafdata());
    if (recovery_time_remaining_seconds.is_set || is_set(recovery_time_remaining_seconds.operation)) leaf_name_data.push_back(recovery_time_remaining_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Applications::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-statistics")
    {
        if(application_statistics == nullptr)
        {
            application_statistics = std::make_shared<MplsLsd::Applications::Application::ApplicationStatistics>();
        }
        return application_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Applications::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application_statistics != nullptr)
    {
        children["application-statistics"] = application_statistics;
    }

    return children;
}

void MplsLsd::Applications::Application::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "application-name")
    {
        application_name = value;
    }
    if(value_path == "app-disconnect-time")
    {
        app_disconnect_time = value;
    }
    if(value_path == "app-flow-controlled")
    {
        app_flow_controlled = value;
    }
    if(value_path == "app-reg-time")
    {
        app_reg_time = value;
    }
    if(value_path == "application-instance")
    {
        application_instance = value;
    }
    if(value_path == "application-name-xr")
    {
        application_name_xr = value;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary = value;
    }
    if(value_path == "application-state")
    {
        application_state = value;
    }
    if(value_path == "application-type")
    {
        application_type = value;
    }
    if(value_path == "flow-ctrl-clr-time")
    {
        flow_ctrl_clr_time = value;
    }
    if(value_path == "flow-ctrl-time")
    {
        flow_ctrl_time = value;
    }
    if(value_path == "go-act-ts")
    {
        go_act_ts = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "recovery-time-elapsed-seconds")
    {
        recovery_time_elapsed_seconds = value;
    }
    if(value_path == "recovery-time-register-seconds")
    {
        recovery_time_register_seconds = value;
    }
    if(value_path == "recovery-time-remaining-seconds")
    {
        recovery_time_remaining_seconds = value;
    }
}

MplsLsd::Applications::Application::ApplicationStatistics::ApplicationStatistics()
    :
    connect_count{YType::uint32, "connect-count"},
    interface_enable{YType::uint32, "interface-enable"},
    interface_enable_pending{YType::uint32, "interface-enable-pending"},
    label_context_count{YType::uint32, "label-context-count"},
    label_context_pending_count{YType::uint32, "label-context-pending-count"}
    	,
    connected(std::make_shared<MplsLsd::Applications::Application::ApplicationStatistics::Connected>())
{
    connected->parent = this;

    yang_name = "application-statistics"; yang_parent_name = "application";
}

MplsLsd::Applications::Application::ApplicationStatistics::~ApplicationStatistics()
{
}

bool MplsLsd::Applications::Application::ApplicationStatistics::has_data() const
{
    for (auto const & leaf : label_context_count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : label_context_pending_count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return connect_count.is_set
	|| interface_enable.is_set
	|| interface_enable_pending.is_set
	|| (connected !=  nullptr && connected->has_data());
}

bool MplsLsd::Applications::Application::ApplicationStatistics::has_operation() const
{
    for (auto const & leaf : label_context_count.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : label_context_pending_count.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(connect_count.operation)
	|| is_set(interface_enable.operation)
	|| is_set(interface_enable_pending.operation)
	|| is_set(label_context_count.operation)
	|| is_set(label_context_pending_count.operation)
	|| (connected !=  nullptr && connected->has_operation());
}

std::string MplsLsd::Applications::Application::ApplicationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-statistics";

    return path_buffer.str();

}

const EntityPath MplsLsd::Applications::Application::ApplicationStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplicationStatistics' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_count.is_set || is_set(connect_count.operation)) leaf_name_data.push_back(connect_count.get_name_leafdata());
    if (interface_enable.is_set || is_set(interface_enable.operation)) leaf_name_data.push_back(interface_enable.get_name_leafdata());
    if (interface_enable_pending.is_set || is_set(interface_enable_pending.operation)) leaf_name_data.push_back(interface_enable_pending.get_name_leafdata());

    auto label_context_count_name_datas = label_context_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_context_count_name_datas.begin(), label_context_count_name_datas.end());
    auto label_context_pending_count_name_datas = label_context_pending_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_context_pending_count_name_datas.begin(), label_context_pending_count_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Applications::Application::ApplicationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<MplsLsd::Applications::Application::ApplicationStatistics::Connected>();
        }
        return connected;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Applications::Application::ApplicationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    return children;
}

void MplsLsd::Applications::Application::ApplicationStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connect-count")
    {
        connect_count = value;
    }
    if(value_path == "interface-enable")
    {
        interface_enable = value;
    }
    if(value_path == "interface-enable-pending")
    {
        interface_enable_pending = value;
    }
    if(value_path == "label-context-count")
    {
        label_context_count.append(value);
    }
    if(value_path == "label-context-pending-count")
    {
        label_context_pending_count.append(value);
    }
}

MplsLsd::Applications::Application::ApplicationStatistics::Connected::Connected()
    :
    error_msg_count{YType::uint32, "error-msg-count"},
    oor_label_count{YType::uint32, "oor-label-count"},
    operation_msg_count{YType::uint32, "operation-msg-count"},
    rt_set_msg_count{YType::uint32, "rt-set-msg-count"}
{
    yang_name = "connected"; yang_parent_name = "application-statistics";
}

MplsLsd::Applications::Application::ApplicationStatistics::Connected::~Connected()
{
}

bool MplsLsd::Applications::Application::ApplicationStatistics::Connected::has_data() const
{
    return error_msg_count.is_set
	|| oor_label_count.is_set
	|| operation_msg_count.is_set
	|| rt_set_msg_count.is_set;
}

bool MplsLsd::Applications::Application::ApplicationStatistics::Connected::has_operation() const
{
    return is_set(operation)
	|| is_set(error_msg_count.operation)
	|| is_set(oor_label_count.operation)
	|| is_set(operation_msg_count.operation)
	|| is_set(rt_set_msg_count.operation);
}

std::string MplsLsd::Applications::Application::ApplicationStatistics::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath MplsLsd::Applications::Application::ApplicationStatistics::Connected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connected' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_msg_count.is_set || is_set(error_msg_count.operation)) leaf_name_data.push_back(error_msg_count.get_name_leafdata());
    if (oor_label_count.is_set || is_set(oor_label_count.operation)) leaf_name_data.push_back(oor_label_count.get_name_leafdata());
    if (operation_msg_count.is_set || is_set(operation_msg_count.operation)) leaf_name_data.push_back(operation_msg_count.get_name_leafdata());
    if (rt_set_msg_count.is_set || is_set(rt_set_msg_count.operation)) leaf_name_data.push_back(rt_set_msg_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Applications::Application::ApplicationStatistics::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Applications::Application::ApplicationStatistics::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Applications::Application::ApplicationStatistics::Connected::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error-msg-count")
    {
        error_msg_count = value;
    }
    if(value_path == "oor-label-count")
    {
        oor_label_count = value;
    }
    if(value_path == "operation-msg-count")
    {
        operation_msg_count = value;
    }
    if(value_path == "rt-set-msg-count")
    {
        rt_set_msg_count = value;
    }
}

MplsLsd::LabelSummaryVrfs::LabelSummaryVrfs()
{
    yang_name = "label-summary-vrfs"; yang_parent_name = "mpls-lsd";
}

MplsLsd::LabelSummaryVrfs::~LabelSummaryVrfs()
{
}

bool MplsLsd::LabelSummaryVrfs::has_data() const
{
    for (std::size_t index=0; index<label_summary_vrf.size(); index++)
    {
        if(label_summary_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::LabelSummaryVrfs::has_operation() const
{
    for (std::size_t index=0; index<label_summary_vrf.size(); index++)
    {
        if(label_summary_vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLsd::LabelSummaryVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-summary-vrfs";

    return path_buffer.str();

}

const EntityPath MplsLsd::LabelSummaryVrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::LabelSummaryVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-summary-vrf")
    {
        for(auto const & c : label_summary_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsd::LabelSummaryVrfs::LabelSummaryVrf>();
        c->parent = this;
        label_summary_vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::LabelSummaryVrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_summary_vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsd::LabelSummaryVrfs::set_value(const std::string & value_path, std::string value)
{
}

MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::LabelSummaryVrf()
    :
    vrf_name{YType::str, "vrf-name"},
    rsi_connected{YType::int32, "rsi-connected"},
    total_labels{YType::uint32, "total-labels"},
    vrf_name_xr{YType::str, "vrf-name-xr"}
{
    yang_name = "label-summary-vrf"; yang_parent_name = "label-summary-vrfs";
}

MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::~LabelSummaryVrf()
{
}

bool MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::has_data() const
{
    for (std::size_t index=0; index<owner_count.size(); index++)
    {
        if(owner_count[index]->has_data())
            return true;
    }
    return vrf_name.is_set
	|| rsi_connected.is_set
	|| total_labels.is_set
	|| vrf_name_xr.is_set;
}

bool MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::has_operation() const
{
    for (std::size_t index=0; index<owner_count.size(); index++)
    {
        if(owner_count[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(rsi_connected.operation)
	|| is_set(total_labels.operation)
	|| is_set(vrf_name_xr.operation);
}

std::string MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-summary-vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/label-summary-vrfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (rsi_connected.is_set || is_set(rsi_connected.operation)) leaf_name_data.push_back(rsi_connected.get_name_leafdata());
    if (total_labels.is_set || is_set(total_labels.operation)) leaf_name_data.push_back(total_labels.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.operation)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "owner-count")
    {
        for(auto const & c : owner_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount>();
        c->parent = this;
        owner_count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : owner_count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "rsi-connected")
    {
        rsi_connected = value;
    }
    if(value_path == "total-labels")
    {
        total_labels = value;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
    }
}

MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::OwnerCount()
    :
    application_instance{YType::str, "application-instance"},
    application_name{YType::str, "application-name"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_type{YType::enumeration, "application-type"},
    number_of_labels{YType::uint32, "number-of-labels"}
{
    yang_name = "owner-count"; yang_parent_name = "label-summary-vrf";
}

MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::~OwnerCount()
{
}

bool MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::has_data() const
{
    return application_instance.is_set
	|| application_name.is_set
	|| application_role_primary.is_set
	|| application_type.is_set
	|| number_of_labels.is_set;
}

bool MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::has_operation() const
{
    return is_set(operation)
	|| is_set(application_instance.operation)
	|| is_set(application_name.operation)
	|| is_set(application_role_primary.operation)
	|| is_set(application_type.operation)
	|| is_set(number_of_labels.operation);
}

std::string MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-count";

    return path_buffer.str();

}

const EntityPath MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OwnerCount' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_instance.is_set || is_set(application_instance.operation)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (application_name.is_set || is_set(application_name.operation)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.operation)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.operation)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (number_of_labels.is_set || is_set(number_of_labels.operation)) leaf_name_data.push_back(number_of_labels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "application-instance")
    {
        application_instance = value;
    }
    if(value_path == "application-name")
    {
        application_name = value;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary = value;
    }
    if(value_path == "application-type")
    {
        application_type = value;
    }
    if(value_path == "number-of-labels")
    {
        number_of_labels = value;
    }
}

MplsLsd::LabelRange::LabelRange()
    :
    max_dynamic_label_value{YType::uint32, "max-dynamic-label-value"},
    max_static_label_value{YType::uint32, "max-static-label-value"},
    min_dynamic_label_value{YType::uint32, "min-dynamic-label-value"},
    min_static_label_value{YType::uint32, "min-static-label-value"}
{
    yang_name = "label-range"; yang_parent_name = "mpls-lsd";
}

MplsLsd::LabelRange::~LabelRange()
{
}

bool MplsLsd::LabelRange::has_data() const
{
    return max_dynamic_label_value.is_set
	|| max_static_label_value.is_set
	|| min_dynamic_label_value.is_set
	|| min_static_label_value.is_set;
}

bool MplsLsd::LabelRange::has_operation() const
{
    return is_set(operation)
	|| is_set(max_dynamic_label_value.operation)
	|| is_set(max_static_label_value.operation)
	|| is_set(min_dynamic_label_value.operation)
	|| is_set(min_static_label_value.operation);
}

std::string MplsLsd::LabelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-range";

    return path_buffer.str();

}

const EntityPath MplsLsd::LabelRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_dynamic_label_value.is_set || is_set(max_dynamic_label_value.operation)) leaf_name_data.push_back(max_dynamic_label_value.get_name_leafdata());
    if (max_static_label_value.is_set || is_set(max_static_label_value.operation)) leaf_name_data.push_back(max_static_label_value.get_name_leafdata());
    if (min_dynamic_label_value.is_set || is_set(min_dynamic_label_value.operation)) leaf_name_data.push_back(min_dynamic_label_value.get_name_leafdata());
    if (min_static_label_value.is_set || is_set(min_static_label_value.operation)) leaf_name_data.push_back(min_static_label_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::LabelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::LabelRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::LabelRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-dynamic-label-value")
    {
        max_dynamic_label_value = value;
    }
    if(value_path == "max-static-label-value")
    {
        max_static_label_value = value;
    }
    if(value_path == "min-dynamic-label-value")
    {
        min_dynamic_label_value = value;
    }
    if(value_path == "min-static-label-value")
    {
        min_static_label_value = value;
    }
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrfs()
{
    yang_name = "rewrite-summary-vrfs"; yang_parent_name = "mpls-lsd";
}

MplsLsd::RewriteSummaryVrfs::~RewriteSummaryVrfs()
{
}

bool MplsLsd::RewriteSummaryVrfs::has_data() const
{
    for (std::size_t index=0; index<rewrite_summary_vrf.size(); index++)
    {
        if(rewrite_summary_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::RewriteSummaryVrfs::has_operation() const
{
    for (std::size_t index=0; index<rewrite_summary_vrf.size(); index++)
    {
        if(rewrite_summary_vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLsd::RewriteSummaryVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-summary-vrfs";

    return path_buffer.str();

}

const EntityPath MplsLsd::RewriteSummaryVrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::RewriteSummaryVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-summary-vrf")
    {
        for(auto const & c : rewrite_summary_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf>();
        c->parent = this;
        rewrite_summary_vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::RewriteSummaryVrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rewrite_summary_vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsd::RewriteSummaryVrfs::set_value(const std::string & value_path, std::string value)
{
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::RewriteSummaryVrf()
    :
    vrf_name{YType::str, "vrf-name"},
    num_dmtctefpi{YType::uint32, "num-dmtctefpi"},
    num_ipv4fpi{YType::uint32, "num-ipv4fpi"},
    num_ipv6fpi{YType::uint32, "num-ipv6fpi"},
    num_label_fpi{YType::uint32, "num-label-fpi"},
    num_pw_list_tefpi{YType::uint32, "num-pw-list-tefpi"},
    num_rewrite{YType::uint32, "num-rewrite"},
    num_rewrite_rpf_neighbors{YType::uint32, "num-rewrite-rpf-neighbors"},
    num_tefpi{YType::uint32, "num-tefpi"},
    total_dmtc_intf{YType::uint32, "total-dmtc-intf"},
    total_forwad_update_message{YType::uint32, "total-forwad-update-message"},
    total_forward_update{YType::uint32, "total-forward-update"},
    total_ip_sub_paths{YType::uint32, "total-ip-sub-paths"},
    total_ipv4rpf_neighbors{YType::uint32, "total-ipv4rpf-neighbors"},
    total_ipv6rpf_neighbors{YType::uint32, "total-ipv6rpf-neighbors"},
    total_paths{YType::uint32, "total-paths"},
    total_pw_paths{YType::uint32, "total-pw-paths"},
    total_t_ev4_paths{YType::uint32, "total-t-ev4-paths"},
    total_te_head_paths{YType::uint32, "total-te-head-paths"},
    vrf_name_xr{YType::str, "vrf-name-xr"}
    	,
    ipv4_paths(std::make_shared<MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths>())
	,ipv6_paths(std::make_shared<MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths>())
{
    ipv4_paths->parent = this;

    ipv6_paths->parent = this;

    yang_name = "rewrite-summary-vrf"; yang_parent_name = "rewrite-summary-vrfs";
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::~RewriteSummaryVrf()
{
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::has_data() const
{
    return vrf_name.is_set
	|| num_dmtctefpi.is_set
	|| num_ipv4fpi.is_set
	|| num_ipv6fpi.is_set
	|| num_label_fpi.is_set
	|| num_pw_list_tefpi.is_set
	|| num_rewrite.is_set
	|| num_rewrite_rpf_neighbors.is_set
	|| num_tefpi.is_set
	|| total_dmtc_intf.is_set
	|| total_forwad_update_message.is_set
	|| total_forward_update.is_set
	|| total_ip_sub_paths.is_set
	|| total_ipv4rpf_neighbors.is_set
	|| total_ipv6rpf_neighbors.is_set
	|| total_paths.is_set
	|| total_pw_paths.is_set
	|| total_t_ev4_paths.is_set
	|| total_te_head_paths.is_set
	|| vrf_name_xr.is_set
	|| (ipv4_paths !=  nullptr && ipv4_paths->has_data())
	|| (ipv6_paths !=  nullptr && ipv6_paths->has_data());
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(num_dmtctefpi.operation)
	|| is_set(num_ipv4fpi.operation)
	|| is_set(num_ipv6fpi.operation)
	|| is_set(num_label_fpi.operation)
	|| is_set(num_pw_list_tefpi.operation)
	|| is_set(num_rewrite.operation)
	|| is_set(num_rewrite_rpf_neighbors.operation)
	|| is_set(num_tefpi.operation)
	|| is_set(total_dmtc_intf.operation)
	|| is_set(total_forwad_update_message.operation)
	|| is_set(total_forward_update.operation)
	|| is_set(total_ip_sub_paths.operation)
	|| is_set(total_ipv4rpf_neighbors.operation)
	|| is_set(total_ipv6rpf_neighbors.operation)
	|| is_set(total_paths.operation)
	|| is_set(total_pw_paths.operation)
	|| is_set(total_t_ev4_paths.operation)
	|| is_set(total_te_head_paths.operation)
	|| is_set(vrf_name_xr.operation)
	|| (ipv4_paths !=  nullptr && ipv4_paths->has_operation())
	|| (ipv6_paths !=  nullptr && ipv6_paths->has_operation());
}

std::string MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-summary-vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite-summary-vrfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (num_dmtctefpi.is_set || is_set(num_dmtctefpi.operation)) leaf_name_data.push_back(num_dmtctefpi.get_name_leafdata());
    if (num_ipv4fpi.is_set || is_set(num_ipv4fpi.operation)) leaf_name_data.push_back(num_ipv4fpi.get_name_leafdata());
    if (num_ipv6fpi.is_set || is_set(num_ipv6fpi.operation)) leaf_name_data.push_back(num_ipv6fpi.get_name_leafdata());
    if (num_label_fpi.is_set || is_set(num_label_fpi.operation)) leaf_name_data.push_back(num_label_fpi.get_name_leafdata());
    if (num_pw_list_tefpi.is_set || is_set(num_pw_list_tefpi.operation)) leaf_name_data.push_back(num_pw_list_tefpi.get_name_leafdata());
    if (num_rewrite.is_set || is_set(num_rewrite.operation)) leaf_name_data.push_back(num_rewrite.get_name_leafdata());
    if (num_rewrite_rpf_neighbors.is_set || is_set(num_rewrite_rpf_neighbors.operation)) leaf_name_data.push_back(num_rewrite_rpf_neighbors.get_name_leafdata());
    if (num_tefpi.is_set || is_set(num_tefpi.operation)) leaf_name_data.push_back(num_tefpi.get_name_leafdata());
    if (total_dmtc_intf.is_set || is_set(total_dmtc_intf.operation)) leaf_name_data.push_back(total_dmtc_intf.get_name_leafdata());
    if (total_forwad_update_message.is_set || is_set(total_forwad_update_message.operation)) leaf_name_data.push_back(total_forwad_update_message.get_name_leafdata());
    if (total_forward_update.is_set || is_set(total_forward_update.operation)) leaf_name_data.push_back(total_forward_update.get_name_leafdata());
    if (total_ip_sub_paths.is_set || is_set(total_ip_sub_paths.operation)) leaf_name_data.push_back(total_ip_sub_paths.get_name_leafdata());
    if (total_ipv4rpf_neighbors.is_set || is_set(total_ipv4rpf_neighbors.operation)) leaf_name_data.push_back(total_ipv4rpf_neighbors.get_name_leafdata());
    if (total_ipv6rpf_neighbors.is_set || is_set(total_ipv6rpf_neighbors.operation)) leaf_name_data.push_back(total_ipv6rpf_neighbors.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.operation)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_pw_paths.is_set || is_set(total_pw_paths.operation)) leaf_name_data.push_back(total_pw_paths.get_name_leafdata());
    if (total_t_ev4_paths.is_set || is_set(total_t_ev4_paths.operation)) leaf_name_data.push_back(total_t_ev4_paths.get_name_leafdata());
    if (total_te_head_paths.is_set || is_set(total_te_head_paths.operation)) leaf_name_data.push_back(total_te_head_paths.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.operation)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-paths")
    {
        if(ipv4_paths == nullptr)
        {
            ipv4_paths = std::make_shared<MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths>();
        }
        return ipv4_paths;
    }

    if(child_yang_name == "ipv6-paths")
    {
        if(ipv6_paths == nullptr)
        {
            ipv6_paths = std::make_shared<MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths>();
        }
        return ipv6_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_paths != nullptr)
    {
        children["ipv4-paths"] = ipv4_paths;
    }

    if(ipv6_paths != nullptr)
    {
        children["ipv6-paths"] = ipv6_paths;
    }

    return children;
}

void MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "num-dmtctefpi")
    {
        num_dmtctefpi = value;
    }
    if(value_path == "num-ipv4fpi")
    {
        num_ipv4fpi = value;
    }
    if(value_path == "num-ipv6fpi")
    {
        num_ipv6fpi = value;
    }
    if(value_path == "num-label-fpi")
    {
        num_label_fpi = value;
    }
    if(value_path == "num-pw-list-tefpi")
    {
        num_pw_list_tefpi = value;
    }
    if(value_path == "num-rewrite")
    {
        num_rewrite = value;
    }
    if(value_path == "num-rewrite-rpf-neighbors")
    {
        num_rewrite_rpf_neighbors = value;
    }
    if(value_path == "num-tefpi")
    {
        num_tefpi = value;
    }
    if(value_path == "total-dmtc-intf")
    {
        total_dmtc_intf = value;
    }
    if(value_path == "total-forwad-update-message")
    {
        total_forwad_update_message = value;
    }
    if(value_path == "total-forward-update")
    {
        total_forward_update = value;
    }
    if(value_path == "total-ip-sub-paths")
    {
        total_ip_sub_paths = value;
    }
    if(value_path == "total-ipv4rpf-neighbors")
    {
        total_ipv4rpf_neighbors = value;
    }
    if(value_path == "total-ipv6rpf-neighbors")
    {
        total_ipv6rpf_neighbors = value;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
    }
    if(value_path == "total-pw-paths")
    {
        total_pw_paths = value;
    }
    if(value_path == "total-t-ev4-paths")
    {
        total_t_ev4_paths = value;
    }
    if(value_path == "total-te-head-paths")
    {
        total_te_head_paths = value;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
    }
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::Ipv4Paths()
    :
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_paths{YType::uint32, "total-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"}
{
    yang_name = "ipv4-paths"; yang_parent_name = "rewrite-summary-vrf";
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::~Ipv4Paths()
{
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::has_data() const
{
    return total_backup_paths.is_set
	|| total_paths.is_set
	|| total_pop_lkup_paths.is_set
	|| total_protected_paths.is_set
	|| total_remote_backup_paths.is_set;
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::has_operation() const
{
    return is_set(operation)
	|| is_set(total_backup_paths.operation)
	|| is_set(total_paths.operation)
	|| is_set(total_pop_lkup_paths.operation)
	|| is_set(total_protected_paths.operation)
	|| is_set(total_remote_backup_paths.operation);
}

std::string MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-paths";

    return path_buffer.str();

}

const EntityPath MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Paths' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_backup_paths.is_set || is_set(total_backup_paths.operation)) leaf_name_data.push_back(total_backup_paths.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.operation)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_pop_lkup_paths.is_set || is_set(total_pop_lkup_paths.operation)) leaf_name_data.push_back(total_pop_lkup_paths.get_name_leafdata());
    if (total_protected_paths.is_set || is_set(total_protected_paths.operation)) leaf_name_data.push_back(total_protected_paths.get_name_leafdata());
    if (total_remote_backup_paths.is_set || is_set(total_remote_backup_paths.operation)) leaf_name_data.push_back(total_remote_backup_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-backup-paths")
    {
        total_backup_paths = value;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths = value;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths = value;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths = value;
    }
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::Ipv6Paths()
    :
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_paths{YType::uint32, "total-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"}
{
    yang_name = "ipv6-paths"; yang_parent_name = "rewrite-summary-vrf";
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::~Ipv6Paths()
{
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::has_data() const
{
    return total_backup_paths.is_set
	|| total_paths.is_set
	|| total_pop_lkup_paths.is_set
	|| total_protected_paths.is_set
	|| total_remote_backup_paths.is_set;
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::has_operation() const
{
    return is_set(operation)
	|| is_set(total_backup_paths.operation)
	|| is_set(total_paths.operation)
	|| is_set(total_pop_lkup_paths.operation)
	|| is_set(total_protected_paths.operation)
	|| is_set(total_remote_backup_paths.operation);
}

std::string MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-paths";

    return path_buffer.str();

}

const EntityPath MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Paths' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_backup_paths.is_set || is_set(total_backup_paths.operation)) leaf_name_data.push_back(total_backup_paths.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.operation)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_pop_lkup_paths.is_set || is_set(total_pop_lkup_paths.operation)) leaf_name_data.push_back(total_pop_lkup_paths.get_name_leafdata());
    if (total_protected_paths.is_set || is_set(total_protected_paths.operation)) leaf_name_data.push_back(total_protected_paths.get_name_leafdata());
    if (total_remote_backup_paths.is_set || is_set(total_remote_backup_paths.operation)) leaf_name_data.push_back(total_remote_backup_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-backup-paths")
    {
        total_backup_paths = value;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths = value;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths = value;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths = value;
    }
}

MplsLsd::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "mpls-lsd";
}

MplsLsd::Interfaces::~Interfaces()
{
}

bool MplsLsd::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLsd::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath MplsLsd::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsd::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsd::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

MplsLsd::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    interface_state{YType::enumeration, "interface-state"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

MplsLsd::Interfaces::Interface::~Interface()
{
}

bool MplsLsd::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<application_owner.size(); index++)
    {
        if(application_owner[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface.is_set
	|| interface_state.is_set;
}

bool MplsLsd::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<application_owner.size(); index++)
    {
        if(application_owner[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface.operation)
	|| is_set(interface_state.operation);
}

std::string MplsLsd::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLsd::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.operation)) leaf_name_data.push_back(interface_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-owner")
    {
        for(auto const & c : application_owner)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsd::Interfaces::Interface::ApplicationOwner>();
        c->parent = this;
        application_owner.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application_owner)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsd::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
    }
}

MplsLsd::Interfaces::Interface::ApplicationOwner::ApplicationOwner()
    :
    application_instance{YType::str, "application-instance"},
    application_name{YType::str, "application-name"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_type{YType::enumeration, "application-type"},
    resource_state{YType::enumeration, "resource-state"}
{
    yang_name = "application-owner"; yang_parent_name = "interface";
}

MplsLsd::Interfaces::Interface::ApplicationOwner::~ApplicationOwner()
{
}

bool MplsLsd::Interfaces::Interface::ApplicationOwner::has_data() const
{
    return application_instance.is_set
	|| application_name.is_set
	|| application_role_primary.is_set
	|| application_type.is_set
	|| resource_state.is_set;
}

bool MplsLsd::Interfaces::Interface::ApplicationOwner::has_operation() const
{
    return is_set(operation)
	|| is_set(application_instance.operation)
	|| is_set(application_name.operation)
	|| is_set(application_role_primary.operation)
	|| is_set(application_type.operation)
	|| is_set(resource_state.operation);
}

std::string MplsLsd::Interfaces::Interface::ApplicationOwner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-owner";

    return path_buffer.str();

}

const EntityPath MplsLsd::Interfaces::Interface::ApplicationOwner::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplicationOwner' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_instance.is_set || is_set(application_instance.operation)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (application_name.is_set || is_set(application_name.operation)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.operation)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.operation)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (resource_state.is_set || is_set(resource_state.operation)) leaf_name_data.push_back(resource_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Interfaces::Interface::ApplicationOwner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Interfaces::Interface::ApplicationOwner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Interfaces::Interface::ApplicationOwner::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "application-instance")
    {
        application_instance = value;
    }
    if(value_path == "application-name")
    {
        application_name = value;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary = value;
    }
    if(value_path == "application-type")
    {
        application_type = value;
    }
    if(value_path == "resource-state")
    {
        resource_state = value;
    }
}


}
}

