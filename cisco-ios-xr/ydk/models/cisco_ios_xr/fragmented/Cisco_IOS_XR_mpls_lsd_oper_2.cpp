
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_lsd_oper_2.hpp"
#include "Cisco_IOS_XR_mpls_lsd_oper_3.hpp"
#include "Cisco_IOS_XR_mpls_lsd_oper_5.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_lsd_oper {

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData::TeData()
    :
    local_label{YType::uint32, "local-label"},
    tunnel_interface{YType::str, "tunnel-interface"}
{
    yang_name = "te-data"; yang_parent_name = "fpi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData::~TeData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData::has_data() const
{
    return local_label.is_set
	|| tunnel_interface.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData::has_operation() const
{
    return is_set(operation)
	|| is_set(local_label.operation)
	|| is_set(tunnel_interface.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data::Ipv4Data()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    sr_local_label{YType::uint32, "sr-local-label"},
    table_id{YType::uint32, "table-id"},
    version{YType::uint32, "version"}
{
    yang_name = "ipv4-data"; yang_parent_name = "fpi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data::~Ipv4Data()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| sr_local_label.is_set
	|| table_id.is_set
	|| version.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(sr_local_label.operation)
	|| is_set(table_id.operation)
	|| is_set(version.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Data' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (sr_local_label.is_set || is_set(sr_local_label.operation)) leaf_name_data.push_back(sr_local_label.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "sr-local-label")
    {
        sr_local_label = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data::Ipv6Data()
    :
    prefix{YType::str, "prefix"},
    prefix_len{YType::uint8, "prefix-len"},
    router_flags{YType::uint32, "router-flags"},
    table_id{YType::uint32, "table-id"},
    version{YType::uint32, "version"}
{
    yang_name = "ipv6-data"; yang_parent_name = "fpi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data::~Ipv6Data()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data::has_data() const
{
    return prefix.is_set
	|| prefix_len.is_set
	|| router_flags.is_set
	|| table_id.is_set
	|| version.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_len.operation)
	|| is_set(router_flags.operation)
	|| is_set(table_id.operation)
	|| is_set(version.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Data' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.operation)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (router_flags.is_set || is_set(router_flags.operation)) leaf_name_data.push_back(router_flags.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
    }
    if(value_path == "router-flags")
    {
        router_flags = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData::PwListData()
    :
    pwhe_list_id{YType::uint16, "pwhe-list-id"}
{
    yang_name = "pw-list-data"; yang_parent_name = "fpi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData::~PwListData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData::has_data() const
{
    return pwhe_list_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData::has_operation() const
{
    return is_set(operation)
	|| is_set(pwhe_list_id.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-list-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData::get_entity_path(Entity* ancestor) const
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

    if (pwhe_list_id.is_set || is_set(pwhe_list_id.operation)) leaf_name_data.push_back(pwhe_list_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pwhe-list-id")
    {
        pwhe_list_id = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData::DmtcExtIntfData()
    :
    dmtc_ext_ifh{YType::str, "dmtc-ext-ifh"}
{
    yang_name = "dmtc-ext-intf-data"; yang_parent_name = "fpi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData::~DmtcExtIntfData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData::has_data() const
{
    return dmtc_ext_ifh.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData::has_operation() const
{
    return is_set(operation)
	|| is_set(dmtc_ext_ifh.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dmtc-ext-intf-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DmtcExtIntfData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner::ApplicationOwner()
    :
    application_instance{YType::str, "application-instance"},
    application_name{YType::str, "application-name"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_type{YType::enumeration, "application-type"},
    resource_state{YType::enumeration, "resource-state"}
{
    yang_name = "application-owner"; yang_parent_name = "fpi-key";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner::~ApplicationOwner()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner::has_data() const
{
    return application_instance.is_set
	|| application_name.is_set
	|| application_role_primary.is_set
	|| application_type.is_set
	|| resource_state.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner::has_operation() const
{
    return is_set(operation)
	|| is_set(application_instance.operation)
	|| is_set(application_name.operation)
	|| is_set(application_role_primary.operation)
	|| is_set(application_type.operation)
	|| is_set(resource_state.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-owner";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId()
    :
    rewrite_id(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_>())
{
    rewrite_id->parent = this;
    children["rewrite-id"] = rewrite_id;

    yang_name = "rewrite-id"; yang_parent_name = "rewrite-label";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::~RewriteId()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::has_data() const
{
    return (rewrite_id !=  nullptr && rewrite_id->has_data());
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::has_operation() const
{
    return is_set(operation)
	|| (rewrite_id !=  nullptr && rewrite_id->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-id";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RewriteId' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rewrite-id")
    {
        if(rewrite_id != nullptr)
        {
            children["rewrite-id"] = rewrite_id;
        }
        else
        {
            rewrite_id = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_>();
            rewrite_id->parent = this;
            children["rewrite-id"] = rewrite_id;
        }
        return children.at("rewrite-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::get_children()
{
    if(children.find("rewrite-id") == children.end())
    {
        if(rewrite_id != nullptr)
        {
            children["rewrite-id"] = rewrite_id;
        }
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::set_value(const std::string & value_path, std::string value)
{
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::RewriteId_()
    :
    rewrite_id_type{YType::enumeration, "rewrite-id-type"}
    	,
    label_context(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext>())
	,local_label_rewrite(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite>())
{
    label_context->parent = this;
    children["label-context"] = label_context;

    local_label_rewrite->parent = this;
    children["local-label-rewrite"] = local_label_rewrite;

    yang_name = "rewrite-id"; yang_parent_name = "rewrite-id";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::~RewriteId_()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::has_data() const
{
    return rewrite_id_type.is_set
	|| (label_context !=  nullptr && label_context->has_data())
	|| (local_label_rewrite !=  nullptr && local_label_rewrite->has_data());
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::has_operation() const
{
    return is_set(operation)
	|| is_set(rewrite_id_type.operation)
	|| (label_context !=  nullptr && label_context->has_operation())
	|| (local_label_rewrite !=  nullptr && local_label_rewrite->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-id";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RewriteId_' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rewrite_id_type.is_set || is_set(rewrite_id_type.operation)) leaf_name_data.push_back(rewrite_id_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label-context")
    {
        if(label_context != nullptr)
        {
            children["label-context"] = label_context;
        }
        else
        {
            label_context = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext>();
            label_context->parent = this;
            children["label-context"] = label_context;
        }
        return children.at("label-context");
    }

    if(child_yang_name == "local-label-rewrite")
    {
        if(local_label_rewrite != nullptr)
        {
            children["local-label-rewrite"] = local_label_rewrite;
        }
        else
        {
            local_label_rewrite = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite>();
            local_label_rewrite->parent = this;
            children["local-label-rewrite"] = local_label_rewrite;
        }
        return children.at("local-label-rewrite");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::get_children()
{
    if(children.find("label-context") == children.end())
    {
        if(label_context != nullptr)
        {
            children["label-context"] = label_context;
        }
    }

    if(children.find("local-label-rewrite") == children.end())
    {
        if(local_label_rewrite != nullptr)
        {
            children["local-label-rewrite"] = local_label_rewrite;
        }
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rewrite-id-type")
    {
        rewrite_id_type = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelContext()
    :
    label_context_type{YType::enumeration, "label-context-type"}
    	,
    cev4l3vpn_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData>())
	,cev6l3vpn_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData>())
	,evpn_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData>())
	,generic_routing_encapsulation(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation>())
	,ip_sub_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData>())
	,ipv4_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data>())
	,ipv4blb_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData>())
	,ipv4l3vpn_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData>())
	,ipv6_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data>())
	,ipv6_generic_routing_encapsulation(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation>())
	,ipv6blb_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData>())
	,ipv6l3vpn_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData>())
	,label_block_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData>())
	,label_block_srgb_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData>())
	,mld_pv4_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data>())
	,next_hop_set_l3vpn(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn>())
	,pi_mi_pmsi_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData>())
	,pi_ms_pmsi_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData>())
	,pseudowire_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData>())
	,pseudowire_head_end_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData>())
	,sr_adj_segment_ipv4(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4>())
	,sr_adj_segment_ipv6(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6>())
	,sr_prefix_segment(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment>())
	,te_binding(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding>())
	,tev4_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data>())
	,tev4p2mp_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData>())
	,tp_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData>())
	,vrf_l3vpn_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData>())
{
    cev4l3vpn_data->parent = this;
    children["cev4l3vpn-data"] = cev4l3vpn_data;

    cev6l3vpn_data->parent = this;
    children["cev6l3vpn-data"] = cev6l3vpn_data;

    evpn_data->parent = this;
    children["evpn-data"] = evpn_data;

    generic_routing_encapsulation->parent = this;
    children["generic-routing-encapsulation"] = generic_routing_encapsulation;

    ip_sub_data->parent = this;
    children["ip-sub-data"] = ip_sub_data;

    ipv4_data->parent = this;
    children["ipv4-data"] = ipv4_data;

    ipv4blb_data->parent = this;
    children["ipv4blb-data"] = ipv4blb_data;

    ipv4l3vpn_data->parent = this;
    children["ipv4l3vpn-data"] = ipv4l3vpn_data;

    ipv6_data->parent = this;
    children["ipv6-data"] = ipv6_data;

    ipv6_generic_routing_encapsulation->parent = this;
    children["ipv6-generic-routing-encapsulation"] = ipv6_generic_routing_encapsulation;

    ipv6blb_data->parent = this;
    children["ipv6blb-data"] = ipv6blb_data;

    ipv6l3vpn_data->parent = this;
    children["ipv6l3vpn-data"] = ipv6l3vpn_data;

    label_block_data->parent = this;
    children["label-block-data"] = label_block_data;

    label_block_srgb_data->parent = this;
    children["label-block-srgb-data"] = label_block_srgb_data;

    mld_pv4_data->parent = this;
    children["mld-pv4-data"] = mld_pv4_data;

    next_hop_set_l3vpn->parent = this;
    children["next-hop-set-l3vpn"] = next_hop_set_l3vpn;

    pi_mi_pmsi_data->parent = this;
    children["pi-mi-pmsi-data"] = pi_mi_pmsi_data;

    pi_ms_pmsi_data->parent = this;
    children["pi-ms-pmsi-data"] = pi_ms_pmsi_data;

    pseudowire_data->parent = this;
    children["pseudowire-data"] = pseudowire_data;

    pseudowire_head_end_data->parent = this;
    children["pseudowire-head-end-data"] = pseudowire_head_end_data;

    sr_adj_segment_ipv4->parent = this;
    children["sr-adj-segment-ipv4"] = sr_adj_segment_ipv4;

    sr_adj_segment_ipv6->parent = this;
    children["sr-adj-segment-ipv6"] = sr_adj_segment_ipv6;

    sr_prefix_segment->parent = this;
    children["sr-prefix-segment"] = sr_prefix_segment;

    te_binding->parent = this;
    children["te-binding"] = te_binding;

    tev4_data->parent = this;
    children["tev4-data"] = tev4_data;

    tev4p2mp_data->parent = this;
    children["tev4p2mp-data"] = tev4p2mp_data;

    tp_data->parent = this;
    children["tp-data"] = tp_data;

    vrf_l3vpn_data->parent = this;
    children["vrf-l3vpn-data"] = vrf_l3vpn_data;

    yang_name = "label-context"; yang_parent_name = "rewrite-id";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::~LabelContext()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::has_data() const
{
    return label_context_type.is_set
	|| (cev4l3vpn_data !=  nullptr && cev4l3vpn_data->has_data())
	|| (cev6l3vpn_data !=  nullptr && cev6l3vpn_data->has_data())
	|| (evpn_data !=  nullptr && evpn_data->has_data())
	|| (generic_routing_encapsulation !=  nullptr && generic_routing_encapsulation->has_data())
	|| (ip_sub_data !=  nullptr && ip_sub_data->has_data())
	|| (ipv4_data !=  nullptr && ipv4_data->has_data())
	|| (ipv4blb_data !=  nullptr && ipv4blb_data->has_data())
	|| (ipv4l3vpn_data !=  nullptr && ipv4l3vpn_data->has_data())
	|| (ipv6_data !=  nullptr && ipv6_data->has_data())
	|| (ipv6_generic_routing_encapsulation !=  nullptr && ipv6_generic_routing_encapsulation->has_data())
	|| (ipv6blb_data !=  nullptr && ipv6blb_data->has_data())
	|| (ipv6l3vpn_data !=  nullptr && ipv6l3vpn_data->has_data())
	|| (label_block_data !=  nullptr && label_block_data->has_data())
	|| (label_block_srgb_data !=  nullptr && label_block_srgb_data->has_data())
	|| (mld_pv4_data !=  nullptr && mld_pv4_data->has_data())
	|| (next_hop_set_l3vpn !=  nullptr && next_hop_set_l3vpn->has_data())
	|| (pi_mi_pmsi_data !=  nullptr && pi_mi_pmsi_data->has_data())
	|| (pi_ms_pmsi_data !=  nullptr && pi_ms_pmsi_data->has_data())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_data())
	|| (pseudowire_head_end_data !=  nullptr && pseudowire_head_end_data->has_data())
	|| (sr_adj_segment_ipv4 !=  nullptr && sr_adj_segment_ipv4->has_data())
	|| (sr_adj_segment_ipv6 !=  nullptr && sr_adj_segment_ipv6->has_data())
	|| (sr_prefix_segment !=  nullptr && sr_prefix_segment->has_data())
	|| (te_binding !=  nullptr && te_binding->has_data())
	|| (tev4_data !=  nullptr && tev4_data->has_data())
	|| (tev4p2mp_data !=  nullptr && tev4p2mp_data->has_data())
	|| (tp_data !=  nullptr && tp_data->has_data())
	|| (vrf_l3vpn_data !=  nullptr && vrf_l3vpn_data->has_data());
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::has_operation() const
{
    return is_set(operation)
	|| is_set(label_context_type.operation)
	|| (cev4l3vpn_data !=  nullptr && cev4l3vpn_data->has_operation())
	|| (cev6l3vpn_data !=  nullptr && cev6l3vpn_data->has_operation())
	|| (evpn_data !=  nullptr && evpn_data->has_operation())
	|| (generic_routing_encapsulation !=  nullptr && generic_routing_encapsulation->has_operation())
	|| (ip_sub_data !=  nullptr && ip_sub_data->has_operation())
	|| (ipv4_data !=  nullptr && ipv4_data->has_operation())
	|| (ipv4blb_data !=  nullptr && ipv4blb_data->has_operation())
	|| (ipv4l3vpn_data !=  nullptr && ipv4l3vpn_data->has_operation())
	|| (ipv6_data !=  nullptr && ipv6_data->has_operation())
	|| (ipv6_generic_routing_encapsulation !=  nullptr && ipv6_generic_routing_encapsulation->has_operation())
	|| (ipv6blb_data !=  nullptr && ipv6blb_data->has_operation())
	|| (ipv6l3vpn_data !=  nullptr && ipv6l3vpn_data->has_operation())
	|| (label_block_data !=  nullptr && label_block_data->has_operation())
	|| (label_block_srgb_data !=  nullptr && label_block_srgb_data->has_operation())
	|| (mld_pv4_data !=  nullptr && mld_pv4_data->has_operation())
	|| (next_hop_set_l3vpn !=  nullptr && next_hop_set_l3vpn->has_operation())
	|| (pi_mi_pmsi_data !=  nullptr && pi_mi_pmsi_data->has_operation())
	|| (pi_ms_pmsi_data !=  nullptr && pi_ms_pmsi_data->has_operation())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_operation())
	|| (pseudowire_head_end_data !=  nullptr && pseudowire_head_end_data->has_operation())
	|| (sr_adj_segment_ipv4 !=  nullptr && sr_adj_segment_ipv4->has_operation())
	|| (sr_adj_segment_ipv6 !=  nullptr && sr_adj_segment_ipv6->has_operation())
	|| (sr_prefix_segment !=  nullptr && sr_prefix_segment->has_operation())
	|| (te_binding !=  nullptr && te_binding->has_operation())
	|| (tev4_data !=  nullptr && tev4_data->has_operation())
	|| (tev4p2mp_data !=  nullptr && tev4p2mp_data->has_operation())
	|| (tp_data !=  nullptr && tp_data->has_operation())
	|| (vrf_l3vpn_data !=  nullptr && vrf_l3vpn_data->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-context";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelContext' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_context_type.is_set || is_set(label_context_type.operation)) leaf_name_data.push_back(label_context_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cev4l3vpn-data")
    {
        if(cev4l3vpn_data != nullptr)
        {
            children["cev4l3vpn-data"] = cev4l3vpn_data;
        }
        else
        {
            cev4l3vpn_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData>();
            cev4l3vpn_data->parent = this;
            children["cev4l3vpn-data"] = cev4l3vpn_data;
        }
        return children.at("cev4l3vpn-data");
    }

    if(child_yang_name == "cev6l3vpn-data")
    {
        if(cev6l3vpn_data != nullptr)
        {
            children["cev6l3vpn-data"] = cev6l3vpn_data;
        }
        else
        {
            cev6l3vpn_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData>();
            cev6l3vpn_data->parent = this;
            children["cev6l3vpn-data"] = cev6l3vpn_data;
        }
        return children.at("cev6l3vpn-data");
    }

    if(child_yang_name == "evpn-data")
    {
        if(evpn_data != nullptr)
        {
            children["evpn-data"] = evpn_data;
        }
        else
        {
            evpn_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData>();
            evpn_data->parent = this;
            children["evpn-data"] = evpn_data;
        }
        return children.at("evpn-data");
    }

    if(child_yang_name == "generic-routing-encapsulation")
    {
        if(generic_routing_encapsulation != nullptr)
        {
            children["generic-routing-encapsulation"] = generic_routing_encapsulation;
        }
        else
        {
            generic_routing_encapsulation = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation>();
            generic_routing_encapsulation->parent = this;
            children["generic-routing-encapsulation"] = generic_routing_encapsulation;
        }
        return children.at("generic-routing-encapsulation");
    }

    if(child_yang_name == "ip-sub-data")
    {
        if(ip_sub_data != nullptr)
        {
            children["ip-sub-data"] = ip_sub_data;
        }
        else
        {
            ip_sub_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData>();
            ip_sub_data->parent = this;
            children["ip-sub-data"] = ip_sub_data;
        }
        return children.at("ip-sub-data");
    }

    if(child_yang_name == "ipv4-data")
    {
        if(ipv4_data != nullptr)
        {
            children["ipv4-data"] = ipv4_data;
        }
        else
        {
            ipv4_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data>();
            ipv4_data->parent = this;
            children["ipv4-data"] = ipv4_data;
        }
        return children.at("ipv4-data");
    }

    if(child_yang_name == "ipv4blb-data")
    {
        if(ipv4blb_data != nullptr)
        {
            children["ipv4blb-data"] = ipv4blb_data;
        }
        else
        {
            ipv4blb_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData>();
            ipv4blb_data->parent = this;
            children["ipv4blb-data"] = ipv4blb_data;
        }
        return children.at("ipv4blb-data");
    }

    if(child_yang_name == "ipv4l3vpn-data")
    {
        if(ipv4l3vpn_data != nullptr)
        {
            children["ipv4l3vpn-data"] = ipv4l3vpn_data;
        }
        else
        {
            ipv4l3vpn_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData>();
            ipv4l3vpn_data->parent = this;
            children["ipv4l3vpn-data"] = ipv4l3vpn_data;
        }
        return children.at("ipv4l3vpn-data");
    }

    if(child_yang_name == "ipv6-data")
    {
        if(ipv6_data != nullptr)
        {
            children["ipv6-data"] = ipv6_data;
        }
        else
        {
            ipv6_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data>();
            ipv6_data->parent = this;
            children["ipv6-data"] = ipv6_data;
        }
        return children.at("ipv6-data");
    }

    if(child_yang_name == "ipv6-generic-routing-encapsulation")
    {
        if(ipv6_generic_routing_encapsulation != nullptr)
        {
            children["ipv6-generic-routing-encapsulation"] = ipv6_generic_routing_encapsulation;
        }
        else
        {
            ipv6_generic_routing_encapsulation = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation>();
            ipv6_generic_routing_encapsulation->parent = this;
            children["ipv6-generic-routing-encapsulation"] = ipv6_generic_routing_encapsulation;
        }
        return children.at("ipv6-generic-routing-encapsulation");
    }

    if(child_yang_name == "ipv6blb-data")
    {
        if(ipv6blb_data != nullptr)
        {
            children["ipv6blb-data"] = ipv6blb_data;
        }
        else
        {
            ipv6blb_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData>();
            ipv6blb_data->parent = this;
            children["ipv6blb-data"] = ipv6blb_data;
        }
        return children.at("ipv6blb-data");
    }

    if(child_yang_name == "ipv6l3vpn-data")
    {
        if(ipv6l3vpn_data != nullptr)
        {
            children["ipv6l3vpn-data"] = ipv6l3vpn_data;
        }
        else
        {
            ipv6l3vpn_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData>();
            ipv6l3vpn_data->parent = this;
            children["ipv6l3vpn-data"] = ipv6l3vpn_data;
        }
        return children.at("ipv6l3vpn-data");
    }

    if(child_yang_name == "label-block-data")
    {
        if(label_block_data != nullptr)
        {
            children["label-block-data"] = label_block_data;
        }
        else
        {
            label_block_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData>();
            label_block_data->parent = this;
            children["label-block-data"] = label_block_data;
        }
        return children.at("label-block-data");
    }

    if(child_yang_name == "label-block-srgb-data")
    {
        if(label_block_srgb_data != nullptr)
        {
            children["label-block-srgb-data"] = label_block_srgb_data;
        }
        else
        {
            label_block_srgb_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData>();
            label_block_srgb_data->parent = this;
            children["label-block-srgb-data"] = label_block_srgb_data;
        }
        return children.at("label-block-srgb-data");
    }

    if(child_yang_name == "mld-pv4-data")
    {
        if(mld_pv4_data != nullptr)
        {
            children["mld-pv4-data"] = mld_pv4_data;
        }
        else
        {
            mld_pv4_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data>();
            mld_pv4_data->parent = this;
            children["mld-pv4-data"] = mld_pv4_data;
        }
        return children.at("mld-pv4-data");
    }

    if(child_yang_name == "next-hop-set-l3vpn")
    {
        if(next_hop_set_l3vpn != nullptr)
        {
            children["next-hop-set-l3vpn"] = next_hop_set_l3vpn;
        }
        else
        {
            next_hop_set_l3vpn = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn>();
            next_hop_set_l3vpn->parent = this;
            children["next-hop-set-l3vpn"] = next_hop_set_l3vpn;
        }
        return children.at("next-hop-set-l3vpn");
    }

    if(child_yang_name == "pi-mi-pmsi-data")
    {
        if(pi_mi_pmsi_data != nullptr)
        {
            children["pi-mi-pmsi-data"] = pi_mi_pmsi_data;
        }
        else
        {
            pi_mi_pmsi_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData>();
            pi_mi_pmsi_data->parent = this;
            children["pi-mi-pmsi-data"] = pi_mi_pmsi_data;
        }
        return children.at("pi-mi-pmsi-data");
    }

    if(child_yang_name == "pi-ms-pmsi-data")
    {
        if(pi_ms_pmsi_data != nullptr)
        {
            children["pi-ms-pmsi-data"] = pi_ms_pmsi_data;
        }
        else
        {
            pi_ms_pmsi_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData>();
            pi_ms_pmsi_data->parent = this;
            children["pi-ms-pmsi-data"] = pi_ms_pmsi_data;
        }
        return children.at("pi-ms-pmsi-data");
    }

    if(child_yang_name == "pseudowire-data")
    {
        if(pseudowire_data != nullptr)
        {
            children["pseudowire-data"] = pseudowire_data;
        }
        else
        {
            pseudowire_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData>();
            pseudowire_data->parent = this;
            children["pseudowire-data"] = pseudowire_data;
        }
        return children.at("pseudowire-data");
    }

    if(child_yang_name == "pseudowire-head-end-data")
    {
        if(pseudowire_head_end_data != nullptr)
        {
            children["pseudowire-head-end-data"] = pseudowire_head_end_data;
        }
        else
        {
            pseudowire_head_end_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData>();
            pseudowire_head_end_data->parent = this;
            children["pseudowire-head-end-data"] = pseudowire_head_end_data;
        }
        return children.at("pseudowire-head-end-data");
    }

    if(child_yang_name == "sr-adj-segment-ipv4")
    {
        if(sr_adj_segment_ipv4 != nullptr)
        {
            children["sr-adj-segment-ipv4"] = sr_adj_segment_ipv4;
        }
        else
        {
            sr_adj_segment_ipv4 = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4>();
            sr_adj_segment_ipv4->parent = this;
            children["sr-adj-segment-ipv4"] = sr_adj_segment_ipv4;
        }
        return children.at("sr-adj-segment-ipv4");
    }

    if(child_yang_name == "sr-adj-segment-ipv6")
    {
        if(sr_adj_segment_ipv6 != nullptr)
        {
            children["sr-adj-segment-ipv6"] = sr_adj_segment_ipv6;
        }
        else
        {
            sr_adj_segment_ipv6 = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6>();
            sr_adj_segment_ipv6->parent = this;
            children["sr-adj-segment-ipv6"] = sr_adj_segment_ipv6;
        }
        return children.at("sr-adj-segment-ipv6");
    }

    if(child_yang_name == "sr-prefix-segment")
    {
        if(sr_prefix_segment != nullptr)
        {
            children["sr-prefix-segment"] = sr_prefix_segment;
        }
        else
        {
            sr_prefix_segment = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment>();
            sr_prefix_segment->parent = this;
            children["sr-prefix-segment"] = sr_prefix_segment;
        }
        return children.at("sr-prefix-segment");
    }

    if(child_yang_name == "te-binding")
    {
        if(te_binding != nullptr)
        {
            children["te-binding"] = te_binding;
        }
        else
        {
            te_binding = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding>();
            te_binding->parent = this;
            children["te-binding"] = te_binding;
        }
        return children.at("te-binding");
    }

    if(child_yang_name == "tev4-data")
    {
        if(tev4_data != nullptr)
        {
            children["tev4-data"] = tev4_data;
        }
        else
        {
            tev4_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data>();
            tev4_data->parent = this;
            children["tev4-data"] = tev4_data;
        }
        return children.at("tev4-data");
    }

    if(child_yang_name == "tev4p2mp-data")
    {
        if(tev4p2mp_data != nullptr)
        {
            children["tev4p2mp-data"] = tev4p2mp_data;
        }
        else
        {
            tev4p2mp_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData>();
            tev4p2mp_data->parent = this;
            children["tev4p2mp-data"] = tev4p2mp_data;
        }
        return children.at("tev4p2mp-data");
    }

    if(child_yang_name == "tp-data")
    {
        if(tp_data != nullptr)
        {
            children["tp-data"] = tp_data;
        }
        else
        {
            tp_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData>();
            tp_data->parent = this;
            children["tp-data"] = tp_data;
        }
        return children.at("tp-data");
    }

    if(child_yang_name == "vrf-l3vpn-data")
    {
        if(vrf_l3vpn_data != nullptr)
        {
            children["vrf-l3vpn-data"] = vrf_l3vpn_data;
        }
        else
        {
            vrf_l3vpn_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData>();
            vrf_l3vpn_data->parent = this;
            children["vrf-l3vpn-data"] = vrf_l3vpn_data;
        }
        return children.at("vrf-l3vpn-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::get_children()
{
    if(children.find("cev4l3vpn-data") == children.end())
    {
        if(cev4l3vpn_data != nullptr)
        {
            children["cev4l3vpn-data"] = cev4l3vpn_data;
        }
    }

    if(children.find("cev6l3vpn-data") == children.end())
    {
        if(cev6l3vpn_data != nullptr)
        {
            children["cev6l3vpn-data"] = cev6l3vpn_data;
        }
    }

    if(children.find("evpn-data") == children.end())
    {
        if(evpn_data != nullptr)
        {
            children["evpn-data"] = evpn_data;
        }
    }

    if(children.find("generic-routing-encapsulation") == children.end())
    {
        if(generic_routing_encapsulation != nullptr)
        {
            children["generic-routing-encapsulation"] = generic_routing_encapsulation;
        }
    }

    if(children.find("ip-sub-data") == children.end())
    {
        if(ip_sub_data != nullptr)
        {
            children["ip-sub-data"] = ip_sub_data;
        }
    }

    if(children.find("ipv4-data") == children.end())
    {
        if(ipv4_data != nullptr)
        {
            children["ipv4-data"] = ipv4_data;
        }
    }

    if(children.find("ipv4blb-data") == children.end())
    {
        if(ipv4blb_data != nullptr)
        {
            children["ipv4blb-data"] = ipv4blb_data;
        }
    }

    if(children.find("ipv4l3vpn-data") == children.end())
    {
        if(ipv4l3vpn_data != nullptr)
        {
            children["ipv4l3vpn-data"] = ipv4l3vpn_data;
        }
    }

    if(children.find("ipv6-data") == children.end())
    {
        if(ipv6_data != nullptr)
        {
            children["ipv6-data"] = ipv6_data;
        }
    }

    if(children.find("ipv6-generic-routing-encapsulation") == children.end())
    {
        if(ipv6_generic_routing_encapsulation != nullptr)
        {
            children["ipv6-generic-routing-encapsulation"] = ipv6_generic_routing_encapsulation;
        }
    }

    if(children.find("ipv6blb-data") == children.end())
    {
        if(ipv6blb_data != nullptr)
        {
            children["ipv6blb-data"] = ipv6blb_data;
        }
    }

    if(children.find("ipv6l3vpn-data") == children.end())
    {
        if(ipv6l3vpn_data != nullptr)
        {
            children["ipv6l3vpn-data"] = ipv6l3vpn_data;
        }
    }

    if(children.find("label-block-data") == children.end())
    {
        if(label_block_data != nullptr)
        {
            children["label-block-data"] = label_block_data;
        }
    }

    if(children.find("label-block-srgb-data") == children.end())
    {
        if(label_block_srgb_data != nullptr)
        {
            children["label-block-srgb-data"] = label_block_srgb_data;
        }
    }

    if(children.find("mld-pv4-data") == children.end())
    {
        if(mld_pv4_data != nullptr)
        {
            children["mld-pv4-data"] = mld_pv4_data;
        }
    }

    if(children.find("next-hop-set-l3vpn") == children.end())
    {
        if(next_hop_set_l3vpn != nullptr)
        {
            children["next-hop-set-l3vpn"] = next_hop_set_l3vpn;
        }
    }

    if(children.find("pi-mi-pmsi-data") == children.end())
    {
        if(pi_mi_pmsi_data != nullptr)
        {
            children["pi-mi-pmsi-data"] = pi_mi_pmsi_data;
        }
    }

    if(children.find("pi-ms-pmsi-data") == children.end())
    {
        if(pi_ms_pmsi_data != nullptr)
        {
            children["pi-ms-pmsi-data"] = pi_ms_pmsi_data;
        }
    }

    if(children.find("pseudowire-data") == children.end())
    {
        if(pseudowire_data != nullptr)
        {
            children["pseudowire-data"] = pseudowire_data;
        }
    }

    if(children.find("pseudowire-head-end-data") == children.end())
    {
        if(pseudowire_head_end_data != nullptr)
        {
            children["pseudowire-head-end-data"] = pseudowire_head_end_data;
        }
    }

    if(children.find("sr-adj-segment-ipv4") == children.end())
    {
        if(sr_adj_segment_ipv4 != nullptr)
        {
            children["sr-adj-segment-ipv4"] = sr_adj_segment_ipv4;
        }
    }

    if(children.find("sr-adj-segment-ipv6") == children.end())
    {
        if(sr_adj_segment_ipv6 != nullptr)
        {
            children["sr-adj-segment-ipv6"] = sr_adj_segment_ipv6;
        }
    }

    if(children.find("sr-prefix-segment") == children.end())
    {
        if(sr_prefix_segment != nullptr)
        {
            children["sr-prefix-segment"] = sr_prefix_segment;
        }
    }

    if(children.find("te-binding") == children.end())
    {
        if(te_binding != nullptr)
        {
            children["te-binding"] = te_binding;
        }
    }

    if(children.find("tev4-data") == children.end())
    {
        if(tev4_data != nullptr)
        {
            children["tev4-data"] = tev4_data;
        }
    }

    if(children.find("tev4p2mp-data") == children.end())
    {
        if(tev4p2mp_data != nullptr)
        {
            children["tev4p2mp-data"] = tev4p2mp_data;
        }
    }

    if(children.find("tp-data") == children.end())
    {
        if(tp_data != nullptr)
        {
            children["tp-data"] = tp_data;
        }
    }

    if(children.find("vrf-l3vpn-data") == children.end())
    {
        if(vrf_l3vpn_data != nullptr)
        {
            children["vrf-l3vpn-data"] = vrf_l3vpn_data;
        }
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-context-type")
    {
        label_context_type = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data::Ipv4Data()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv4-data"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data::~Ipv4Data()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| security_id.is_set
	|| table_id.is_set
	|| vrf_name.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(security_id.operation)
	|| is_set(table_id.operation)
	|| is_set(vrf_name.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Data' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.operation)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "security-id")
    {
        security_id = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data::Ipv6Data()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv6-data"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data::~Ipv6Data()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| security_id.is_set
	|| table_id.is_set
	|| vrf_name.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(security_id.operation)
	|| is_set(table_id.operation)
	|| is_set(vrf_name.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Data' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.operation)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "security-id")
    {
        security_id = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data::Tev4Data()
    :
    is_srte{YType::int32, "is-srte"},
    table_id{YType::uint32, "table-id"},
    tunnel_dest{YType::str, "tunnel-dest"},
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_id_extension{YType::uint32, "tunnel-id-extension"},
    tunnel_lsp_id{YType::uint32, "tunnel-lsp-id"},
    tunnel_source{YType::str, "tunnel-source"}
{
    yang_name = "tev4-data"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data::~Tev4Data()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data::has_data() const
{
    return is_srte.is_set
	|| table_id.is_set
	|| tunnel_dest.is_set
	|| tunnel_id.is_set
	|| tunnel_id_extension.is_set
	|| tunnel_lsp_id.is_set
	|| tunnel_source.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data::has_operation() const
{
    return is_set(operation)
	|| is_set(is_srte.operation)
	|| is_set(table_id.operation)
	|| is_set(tunnel_dest.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(tunnel_id_extension.operation)
	|| is_set(tunnel_lsp_id.operation)
	|| is_set(tunnel_source.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tev4-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tev4Data' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_srte.is_set || is_set(is_srte.operation)) leaf_name_data.push_back(is_srte.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (tunnel_dest.is_set || is_set(tunnel_dest.operation)) leaf_name_data.push_back(tunnel_dest.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_extension.is_set || is_set(tunnel_id_extension.operation)) leaf_name_data.push_back(tunnel_id_extension.get_name_leafdata());
    if (tunnel_lsp_id.is_set || is_set(tunnel_lsp_id.operation)) leaf_name_data.push_back(tunnel_lsp_id.get_name_leafdata());
    if (tunnel_source.is_set || is_set(tunnel_source.operation)) leaf_name_data.push_back(tunnel_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-srte")
    {
        is_srte = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "tunnel-dest")
    {
        tunnel_dest = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "tunnel-id-extension")
    {
        tunnel_id_extension = value;
    }
    if(value_path == "tunnel-lsp-id")
    {
        tunnel_lsp_id = value;
    }
    if(value_path == "tunnel-source")
    {
        tunnel_source = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::Ipv4L3VpnData()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    route_distinguisher{YType::uint64, "route-distinguisher"}
{
    yang_name = "ipv4l3vpn-data"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::~Ipv4L3VpnData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| route_distinguisher.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_distinguisher.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4l3vpn-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4L3VpnData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.operation)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::Ipv6L3VpnData()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    route_distinguisher{YType::uint64, "route-distinguisher"}
{
    yang_name = "ipv6l3vpn-data"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::~Ipv6L3VpnData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| route_distinguisher.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_distinguisher.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6l3vpn-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6L3VpnData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.operation)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::VrfL3VpnData()
    :
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"}
{
    yang_name = "vrf-l3vpn-data"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::~VrfL3VpnData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::has_data() const
{
    return security_id.is_set
	|| table_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::has_operation() const
{
    return is_set(operation)
	|| is_set(security_id.operation)
	|| is_set(table_id.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-l3vpn-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfL3VpnData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security_id.is_set || is_set(security_id.operation)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "security-id")
    {
        security_id = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::Cev4L3VpnData()
    :
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"}
{
    yang_name = "cev4l3vpn-data"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::~Cev4L3VpnData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::has_data() const
{
    return ipv4_next_hop.is_set
	|| security_id.is_set
	|| table_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_next_hop.operation)
	|| is_set(security_id.operation)
	|| is_set(table_id.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cev4l3vpn-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cev4L3VpnData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.operation)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.operation)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
    }
    if(value_path == "security-id")
    {
        security_id = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::Cev6L3VpnData()
    :
    ipv6_next_hop{YType::str, "ipv6-next-hop"},
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"}
{
    yang_name = "cev6l3vpn-data"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::~Cev6L3VpnData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::has_data() const
{
    return ipv6_next_hop.is_set
	|| security_id.is_set
	|| table_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_next_hop.operation)
	|| is_set(security_id.operation)
	|| is_set(table_id.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cev6l3vpn-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cev6L3VpnData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_next_hop.is_set || is_set(ipv6_next_hop.operation)) leaf_name_data.push_back(ipv6_next_hop.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.operation)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-next-hop")
    {
        ipv6_next_hop = value;
    }
    if(value_path == "security-id")
    {
        security_id = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData::PseudowireData()
    :
    prefix{YType::str, "prefix"},
    pseudowire_id{YType::uint64, "pseudowire-id"},
    remote_l2_router_id{YType::uint32, "remote-l2-router-id"},
    subinterface{YType::str, "subinterface"}
{
    yang_name = "pseudowire-data"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData::~PseudowireData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData::has_data() const
{
    return prefix.is_set
	|| pseudowire_id.is_set
	|| remote_l2_router_id.is_set
	|| subinterface.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(pseudowire_id.operation)
	|| is_set(remote_l2_router_id.operation)
	|| is_set(subinterface.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.operation)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (remote_l2_router_id.is_set || is_set(remote_l2_router_id.operation)) leaf_name_data.push_back(remote_l2_router_id.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.operation)) leaf_name_data.push_back(subinterface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
    }
    if(value_path == "remote-l2-router-id")
    {
        remote_l2_router_id = value;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData::LabelBlockData()
    :
    edge_id{YType::uint16, "edge-id"},
    offset{YType::uint32, "offset"},
    service{YType::uint8, "service"},
    size{YType::uint32, "size"},
    vpn_id{YType::uint16, "vpn-id"}
{
    yang_name = "label-block-data"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData::~LabelBlockData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData::has_data() const
{
    return edge_id.is_set
	|| offset.is_set
	|| service.is_set
	|| size.is_set
	|| vpn_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData::has_operation() const
{
    return is_set(operation)
	|| is_set(edge_id.operation)
	|| is_set(offset.operation)
	|| is_set(service.operation)
	|| is_set(size.operation)
	|| is_set(vpn_id.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelBlockData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (edge_id.is_set || is_set(edge_id.operation)) leaf_name_data.push_back(edge_id.get_name_leafdata());
    if (offset.is_set || is_set(offset.operation)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (service.is_set || is_set(service.operation)) leaf_name_data.push_back(service.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.operation)) leaf_name_data.push_back(vpn_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "edge-id")
    {
        edge_id = value;
    }
    if(value_path == "offset")
    {
        offset = value;
    }
    if(value_path == "service")
    {
        service = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData::IpSubData()
    :
    parent_interface{YType::str, "parent-interface"},
    table_id{YType::uint32, "table-id"}
{
    yang_name = "ip-sub-data"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData::~IpSubData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData::has_data() const
{
    return parent_interface.is_set
	|| table_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData::has_operation() const
{
    return is_set(operation)
	|| is_set(parent_interface.operation)
	|| is_set(table_id.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-sub-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData::get_entity_path(Entity* ancestor) const
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

    if (parent_interface.is_set || is_set(parent_interface.operation)) leaf_name_data.push_back(parent_interface.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "parent-interface")
    {
        parent_interface = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::Tev4P2MpData()
    :
    p2mp_id{YType::uint32, "p2mp-id"},
    previous_hop{YType::str, "previous-hop"},
    table_id{YType::uint32, "table-id"},
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_id_extension{YType::uint32, "tunnel-id-extension"},
    tunnel_lsp_id{YType::uint32, "tunnel-lsp-id"},
    tunnel_source{YType::str, "tunnel-source"}
{
    yang_name = "tev4p2mp-data"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::~Tev4P2MpData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::has_data() const
{
    return p2mp_id.is_set
	|| previous_hop.is_set
	|| table_id.is_set
	|| tunnel_id.is_set
	|| tunnel_id_extension.is_set
	|| tunnel_lsp_id.is_set
	|| tunnel_source.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::has_operation() const
{
    return is_set(operation)
	|| is_set(p2mp_id.operation)
	|| is_set(previous_hop.operation)
	|| is_set(table_id.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(tunnel_id_extension.operation)
	|| is_set(tunnel_lsp_id.operation)
	|| is_set(tunnel_source.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tev4p2mp-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tev4P2MpData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (previous_hop.is_set || is_set(previous_hop.operation)) leaf_name_data.push_back(previous_hop.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_extension.is_set || is_set(tunnel_id_extension.operation)) leaf_name_data.push_back(tunnel_id_extension.get_name_leafdata());
    if (tunnel_lsp_id.is_set || is_set(tunnel_lsp_id.operation)) leaf_name_data.push_back(tunnel_lsp_id.get_name_leafdata());
    if (tunnel_source.is_set || is_set(tunnel_source.operation)) leaf_name_data.push_back(tunnel_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "previous-hop")
    {
        previous_hop = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "tunnel-id-extension")
    {
        tunnel_id_extension = value;
    }
    if(value_path == "tunnel-lsp-id")
    {
        tunnel_lsp_id = value;
    }
    if(value_path == "tunnel-source")
    {
        tunnel_source = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data::MldPv4Data()
    :
    lsm_id{YType::uint32, "lsm-id"},
    peer_label_space_id{YType::uint16, "peer-label-space-id"},
    peer_lsrid{YType::str, "peer-lsrid"},
    table_id{YType::uint32, "table-id"},
    type{YType::uint16, "type"}
{
    yang_name = "mld-pv4-data"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data::~MldPv4Data()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data::has_data() const
{
    return lsm_id.is_set
	|| peer_label_space_id.is_set
	|| peer_lsrid.is_set
	|| table_id.is_set
	|| type.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data::has_operation() const
{
    return is_set(operation)
	|| is_set(lsm_id.operation)
	|| is_set(peer_label_space_id.operation)
	|| is_set(peer_lsrid.operation)
	|| is_set(table_id.operation)
	|| is_set(type.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld-pv4-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MldPv4Data' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsm_id.is_set || is_set(lsm_id.operation)) leaf_name_data.push_back(lsm_id.get_name_leafdata());
    if (peer_label_space_id.is_set || is_set(peer_label_space_id.operation)) leaf_name_data.push_back(peer_label_space_id.get_name_leafdata());
    if (peer_lsrid.is_set || is_set(peer_lsrid.operation)) leaf_name_data.push_back(peer_lsrid.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsm-id")
    {
        lsm_id = value;
    }
    if(value_path == "peer-label-space-id")
    {
        peer_label_space_id = value;
    }
    if(value_path == "peer-lsrid")
    {
        peer_lsrid = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::PseudowireHeadEndData()
    :
    pwhe_intf{YType::str, "pwhe-intf"}
{
    yang_name = "pseudowire-head-end-data"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::~PseudowireHeadEndData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::has_data() const
{
    return pwhe_intf.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::has_operation() const
{
    return is_set(operation)
	|| is_set(pwhe_intf.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-head-end-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_entity_path(Entity* ancestor) const
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

    if (pwhe_intf.is_set || is_set(pwhe_intf.operation)) leaf_name_data.push_back(pwhe_intf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pwhe-intf")
    {
        pwhe_intf = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData::TpData()
    :
    dest_global_id{YType::uint32, "dest-global-id"},
    dest_node_id{YType::str, "dest-node-id"},
    dest_tunnel_id{YType::uint16, "dest-tunnel-id"},
    lsp_id{YType::uint16, "lsp-id"},
    source_global_id{YType::uint32, "source-global-id"},
    source_node_id{YType::str, "source-node-id"},
    source_tunnel_id{YType::uint16, "source-tunnel-id"}
{
    yang_name = "tp-data"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData::~TpData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData::has_data() const
{
    return dest_global_id.is_set
	|| dest_node_id.is_set
	|| dest_tunnel_id.is_set
	|| lsp_id.is_set
	|| source_global_id.is_set
	|| source_node_id.is_set
	|| source_tunnel_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData::has_operation() const
{
    return is_set(operation)
	|| is_set(dest_global_id.operation)
	|| is_set(dest_node_id.operation)
	|| is_set(dest_tunnel_id.operation)
	|| is_set(lsp_id.operation)
	|| is_set(source_global_id.operation)
	|| is_set(source_node_id.operation)
	|| is_set(source_tunnel_id.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TpData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_global_id.is_set || is_set(dest_global_id.operation)) leaf_name_data.push_back(dest_global_id.get_name_leafdata());
    if (dest_node_id.is_set || is_set(dest_node_id.operation)) leaf_name_data.push_back(dest_node_id.get_name_leafdata());
    if (dest_tunnel_id.is_set || is_set(dest_tunnel_id.operation)) leaf_name_data.push_back(dest_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (source_global_id.is_set || is_set(source_global_id.operation)) leaf_name_data.push_back(source_global_id.get_name_leafdata());
    if (source_node_id.is_set || is_set(source_node_id.operation)) leaf_name_data.push_back(source_node_id.get_name_leafdata());
    if (source_tunnel_id.is_set || is_set(source_tunnel_id.operation)) leaf_name_data.push_back(source_tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dest-global-id")
    {
        dest_global_id = value;
    }
    if(value_path == "dest-node-id")
    {
        dest_node_id = value;
    }
    if(value_path == "dest-tunnel-id")
    {
        dest_tunnel_id = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "source-global-id")
    {
        source_global_id = value;
    }
    if(value_path == "source-node-id")
    {
        source_node_id = value;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::GenericRoutingEncapsulation()
    :
    gre_interface{YType::str, "gre-interface"}
{
    yang_name = "generic-routing-encapsulation"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::~GenericRoutingEncapsulation()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::has_data() const
{
    return gre_interface.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(gre_interface.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-routing-encapsulation";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GenericRoutingEncapsulation' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gre_interface.is_set || is_set(gre_interface.operation)) leaf_name_data.push_back(gre_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gre-interface")
    {
        gre_interface = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::Ipv6GenericRoutingEncapsulation()
    :
    greipv6_interface{YType::str, "greipv6-interface"}
{
    yang_name = "ipv6-generic-routing-encapsulation"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::~Ipv6GenericRoutingEncapsulation()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::has_data() const
{
    return greipv6_interface.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(greipv6_interface.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-generic-routing-encapsulation";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6GenericRoutingEncapsulation' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (greipv6_interface.is_set || is_set(greipv6_interface.operation)) leaf_name_data.push_back(greipv6_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "greipv6-interface")
    {
        greipv6_interface = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData::EvpnData()
    :
    ethernet_segment{YType::str, "ethernet-segment"},
    evpn_id{YType::uint32, "evpn-id"},
    evpn_tag{YType::uint32, "evpn-tag"}
{
    yang_name = "evpn-data"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData::~EvpnData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData::has_data() const
{
    return ethernet_segment.is_set
	|| evpn_id.is_set
	|| evpn_tag.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData::has_operation() const
{
    return is_set(operation)
	|| is_set(ethernet_segment.operation)
	|| is_set(evpn_id.operation)
	|| is_set(evpn_tag.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EvpnData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_segment.is_set || is_set(ethernet_segment.operation)) leaf_name_data.push_back(ethernet_segment.get_name_leafdata());
    if (evpn_id.is_set || is_set(evpn_id.operation)) leaf_name_data.push_back(evpn_id.get_name_leafdata());
    if (evpn_tag.is_set || is_set(evpn_tag.operation)) leaf_name_data.push_back(evpn_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ethernet-segment")
    {
        ethernet_segment = value;
    }
    if(value_path == "evpn-id")
    {
        evpn_id = value;
    }
    if(value_path == "evpn-tag")
    {
        evpn_tag = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::Ipv4BlbData()
    :
    blb_intf{YType::str, "blb-intf"},
    prefix{YType::str, "prefix"}
{
    yang_name = "ipv4blb-data"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::~Ipv4BlbData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::has_data() const
{
    return blb_intf.is_set
	|| prefix.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::has_operation() const
{
    return is_set(operation)
	|| is_set(blb_intf.operation)
	|| is_set(prefix.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4blb-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4BlbData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blb_intf.is_set || is_set(blb_intf.operation)) leaf_name_data.push_back(blb_intf.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "blb-intf")
    {
        blb_intf = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::Ipv6BlbData()
    :
    blb_intf{YType::str, "blb-intf"},
    prefix{YType::str, "prefix"}
{
    yang_name = "ipv6blb-data"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::~Ipv6BlbData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::has_data() const
{
    return blb_intf.is_set
	|| prefix.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::has_operation() const
{
    return is_set(operation)
	|| is_set(blb_intf.operation)
	|| is_set(prefix.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6blb-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6BlbData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blb_intf.is_set || is_set(blb_intf.operation)) leaf_name_data.push_back(blb_intf.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "blb-intf")
    {
        blb_intf = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::PiMiPmsiData()
    :
    head{YType::int32, "head"},
    v6{YType::int32, "v6"},
    vrf_id{YType::uint32, "vrf-id"}
{
    yang_name = "pi-mi-pmsi-data"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::~PiMiPmsiData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::has_data() const
{
    return head.is_set
	|| v6.is_set
	|| vrf_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::has_operation() const
{
    return is_set(operation)
	|| is_set(head.operation)
	|| is_set(v6.operation)
	|| is_set(vrf_id.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-mi-pmsi-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PiMiPmsiData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (head.is_set || is_set(head.operation)) leaf_name_data.push_back(head.get_name_leafdata());
    if (v6.is_set || is_set(v6.operation)) leaf_name_data.push_back(v6.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "head")
    {
        head = value;
    }
    if(value_path == "v6")
    {
        v6 = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::PiMsPmsiData()
    :
    head{YType::int32, "head"},
    hli{YType::uint32, "hli"},
    seg{YType::int32, "seg"},
    source{YType::str, "source"},
    v6{YType::int32, "v6"},
    vrf_id{YType::uint32, "vrf-id"}
{
    yang_name = "pi-ms-pmsi-data"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::~PiMsPmsiData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::has_data() const
{
    return head.is_set
	|| hli.is_set
	|| seg.is_set
	|| source.is_set
	|| v6.is_set
	|| vrf_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::has_operation() const
{
    return is_set(operation)
	|| is_set(head.operation)
	|| is_set(hli.operation)
	|| is_set(seg.operation)
	|| is_set(source.operation)
	|| is_set(v6.operation)
	|| is_set(vrf_id.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-ms-pmsi-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PiMsPmsiData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (head.is_set || is_set(head.operation)) leaf_name_data.push_back(head.get_name_leafdata());
    if (hli.is_set || is_set(hli.operation)) leaf_name_data.push_back(hli.get_name_leafdata());
    if (seg.is_set || is_set(seg.operation)) leaf_name_data.push_back(seg.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (v6.is_set || is_set(v6.operation)) leaf_name_data.push_back(v6.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "head")
    {
        head = value;
    }
    if(value_path == "hli")
    {
        hli = value;
    }
    if(value_path == "seg")
    {
        seg = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "v6")
    {
        v6 = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::NextHopSetL3Vpn()
    :
    next_hop_set_id{YType::uint32, "next-hop-set-id"},
    table_id{YType::uint32, "table-id"}
{
    yang_name = "next-hop-set-l3vpn"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::~NextHopSetL3Vpn()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::has_data() const
{
    return next_hop_set_id.is_set
	|| table_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_set_id.operation)
	|| is_set(table_id.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-set-l3vpn";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHopSetL3Vpn' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_set_id.is_set || is_set(next_hop_set_id.operation)) leaf_name_data.push_back(next_hop_set_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-set-id")
    {
        next_hop_set_id = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::SrPrefixSegment()
    :
    segment_id{YType::uint32, "segment-id"},
    table_id{YType::uint32, "table-id"}
{
    yang_name = "sr-prefix-segment"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::~SrPrefixSegment()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::has_data() const
{
    return segment_id.is_set
	|| table_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::has_operation() const
{
    return is_set(operation)
	|| is_set(segment_id.operation)
	|| is_set(table_id.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-prefix-segment";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPrefixSegment' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_id.is_set || is_set(segment_id.operation)) leaf_name_data.push_back(segment_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "segment-id")
    {
        segment_id = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::SrAdjSegmentIpv4()
    :
    addr{YType::str, "addr"},
    index_{YType::uint32, "index"},
    intf{YType::str, "intf"},
    type{YType::uint32, "type"}
{
    yang_name = "sr-adj-segment-ipv4"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::~SrAdjSegmentIpv4()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::has_data() const
{
    return addr.is_set
	|| index_.is_set
	|| intf.is_set
	|| type.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::has_operation() const
{
    return is_set(operation)
	|| is_set(addr.operation)
	|| is_set(index_.operation)
	|| is_set(intf.operation)
	|| is_set(type.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-adj-segment-ipv4";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrAdjSegmentIpv4' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.operation)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (intf.is_set || is_set(intf.operation)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr")
    {
        addr = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "intf")
    {
        intf = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::SrAdjSegmentIpv6()
    :
    addr{YType::str, "addr"},
    index_{YType::uint32, "index"},
    intf{YType::str, "intf"},
    type{YType::uint32, "type"}
{
    yang_name = "sr-adj-segment-ipv6"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::~SrAdjSegmentIpv6()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::has_data() const
{
    return addr.is_set
	|| index_.is_set
	|| intf.is_set
	|| type.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::has_operation() const
{
    return is_set(operation)
	|| is_set(addr.operation)
	|| is_set(index_.operation)
	|| is_set(intf.operation)
	|| is_set(type.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-adj-segment-ipv6";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrAdjSegmentIpv6' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.operation)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (intf.is_set || is_set(intf.operation)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr")
    {
        addr = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "intf")
    {
        intf = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::LabelBlockSrgbData()
    :
    offset{YType::uint32, "offset"},
    size{YType::uint32, "size"},
    start_label{YType::uint32, "start-label"}
{
    yang_name = "label-block-srgb-data"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::~LabelBlockSrgbData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::has_data() const
{
    return offset.is_set
	|| size.is_set
	|| start_label.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::has_operation() const
{
    return is_set(operation)
	|| is_set(offset.operation)
	|| is_set(size.operation)
	|| is_set(start_label.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block-srgb-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelBlockSrgbData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (offset.is_set || is_set(offset.operation)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());
    if (start_label.is_set || is_set(start_label.operation)) leaf_name_data.push_back(start_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "offset")
    {
        offset = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
    if(value_path == "start-label")
    {
        start_label = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding::TeBinding()
    :
    te_identifier{YType::uint32, "te-identifier"},
    te_type{YType::enumeration, "te-type"}
{
    yang_name = "te-binding"; yang_parent_name = "label-context";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding::~TeBinding()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding::has_data() const
{
    return te_identifier.is_set
	|| te_type.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding::has_operation() const
{
    return is_set(operation)
	|| is_set(te_identifier.operation)
	|| is_set(te_type.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-binding";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeBinding' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_identifier.is_set || is_set(te_identifier.operation)) leaf_name_data.push_back(te_identifier.get_name_leafdata());
    if (te_type.is_set || is_set(te_type.operation)) leaf_name_data.push_back(te_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "te-identifier")
    {
        te_identifier = value;
    }
    if(value_path == "te-type")
    {
        te_type = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::LocalLabelRewrite()
    :
    label_data{YType::uint32, "label-data"}
{
    yang_name = "local-label-rewrite"; yang_parent_name = "rewrite-id";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::~LocalLabelRewrite()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::has_data() const
{
    for (auto const & leaf : label_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::has_operation() const
{
    for (auto const & leaf : label_data.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(label_data.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label-rewrite";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalLabelRewrite' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_data_name_datas = label_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_data_name_datas.begin(), label_data_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-data")
    {
        label_data.append(value);
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::AssociatedFpi()
    :
    fpi(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi>())
{
    fpi->parent = this;
    children["fpi"] = fpi;

    yang_name = "associated-fpi"; yang_parent_name = "rewrite-label";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::~AssociatedFpi()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::has_data() const
{
    for (std::size_t index=0; index<application_owner.size(); index++)
    {
        if(application_owner[index]->has_data())
            return true;
    }
    return (fpi !=  nullptr && fpi->has_data());
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::has_operation() const
{
    for (std::size_t index=0; index<application_owner.size(); index++)
    {
        if(application_owner[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (fpi !=  nullptr && fpi->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "associated-fpi";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AssociatedFpi' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "application-owner")
    {
        for(auto const & c : application_owner)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner>();
        c->parent = this;
        application_owner.push_back(std::move(c));
        children[segment_path] = application_owner.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "fpi")
    {
        if(fpi != nullptr)
        {
            children["fpi"] = fpi;
        }
        else
        {
            fpi = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi>();
            fpi->parent = this;
            children["fpi"] = fpi;
        }
        return children.at("fpi");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::get_children()
{
    for (auto const & c : application_owner)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("fpi") == children.end())
    {
        if(fpi != nullptr)
        {
            children["fpi"] = fpi;
        }
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::set_value(const std::string & value_path, std::string value)
{
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Fpi()
    :
    fpi_type{YType::enumeration, "fpi-type"}
    	,
    dmtc_ext_intf_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData>())
	,ipv4_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data>())
	,ipv6_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data>())
	,label_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData>())
	,pw_list_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData>())
	,te_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData>())
{
    dmtc_ext_intf_data->parent = this;
    children["dmtc-ext-intf-data"] = dmtc_ext_intf_data;

    ipv4_data->parent = this;
    children["ipv4-data"] = ipv4_data;

    ipv6_data->parent = this;
    children["ipv6-data"] = ipv6_data;

    label_data->parent = this;
    children["label-data"] = label_data;

    pw_list_data->parent = this;
    children["pw-list-data"] = pw_list_data;

    te_data->parent = this;
    children["te-data"] = te_data;

    yang_name = "fpi"; yang_parent_name = "associated-fpi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::~Fpi()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::has_data() const
{
    return fpi_type.is_set
	|| (dmtc_ext_intf_data !=  nullptr && dmtc_ext_intf_data->has_data())
	|| (ipv4_data !=  nullptr && ipv4_data->has_data())
	|| (ipv6_data !=  nullptr && ipv6_data->has_data())
	|| (label_data !=  nullptr && label_data->has_data())
	|| (pw_list_data !=  nullptr && pw_list_data->has_data())
	|| (te_data !=  nullptr && te_data->has_data());
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::has_operation() const
{
    return is_set(operation)
	|| is_set(fpi_type.operation)
	|| (dmtc_ext_intf_data !=  nullptr && dmtc_ext_intf_data->has_operation())
	|| (ipv4_data !=  nullptr && ipv4_data->has_operation())
	|| (ipv6_data !=  nullptr && ipv6_data->has_operation())
	|| (label_data !=  nullptr && label_data->has_operation())
	|| (pw_list_data !=  nullptr && pw_list_data->has_operation())
	|| (te_data !=  nullptr && te_data->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpi";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fpi' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fpi_type.is_set || is_set(fpi_type.operation)) leaf_name_data.push_back(fpi_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dmtc-ext-intf-data")
    {
        if(dmtc_ext_intf_data != nullptr)
        {
            children["dmtc-ext-intf-data"] = dmtc_ext_intf_data;
        }
        else
        {
            dmtc_ext_intf_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData>();
            dmtc_ext_intf_data->parent = this;
            children["dmtc-ext-intf-data"] = dmtc_ext_intf_data;
        }
        return children.at("dmtc-ext-intf-data");
    }

    if(child_yang_name == "ipv4-data")
    {
        if(ipv4_data != nullptr)
        {
            children["ipv4-data"] = ipv4_data;
        }
        else
        {
            ipv4_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data>();
            ipv4_data->parent = this;
            children["ipv4-data"] = ipv4_data;
        }
        return children.at("ipv4-data");
    }

    if(child_yang_name == "ipv6-data")
    {
        if(ipv6_data != nullptr)
        {
            children["ipv6-data"] = ipv6_data;
        }
        else
        {
            ipv6_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data>();
            ipv6_data->parent = this;
            children["ipv6-data"] = ipv6_data;
        }
        return children.at("ipv6-data");
    }

    if(child_yang_name == "label-data")
    {
        if(label_data != nullptr)
        {
            children["label-data"] = label_data;
        }
        else
        {
            label_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData>();
            label_data->parent = this;
            children["label-data"] = label_data;
        }
        return children.at("label-data");
    }

    if(child_yang_name == "pw-list-data")
    {
        if(pw_list_data != nullptr)
        {
            children["pw-list-data"] = pw_list_data;
        }
        else
        {
            pw_list_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData>();
            pw_list_data->parent = this;
            children["pw-list-data"] = pw_list_data;
        }
        return children.at("pw-list-data");
    }

    if(child_yang_name == "te-data")
    {
        if(te_data != nullptr)
        {
            children["te-data"] = te_data;
        }
        else
        {
            te_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData>();
            te_data->parent = this;
            children["te-data"] = te_data;
        }
        return children.at("te-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::get_children()
{
    if(children.find("dmtc-ext-intf-data") == children.end())
    {
        if(dmtc_ext_intf_data != nullptr)
        {
            children["dmtc-ext-intf-data"] = dmtc_ext_intf_data;
        }
    }

    if(children.find("ipv4-data") == children.end())
    {
        if(ipv4_data != nullptr)
        {
            children["ipv4-data"] = ipv4_data;
        }
    }

    if(children.find("ipv6-data") == children.end())
    {
        if(ipv6_data != nullptr)
        {
            children["ipv6-data"] = ipv6_data;
        }
    }

    if(children.find("label-data") == children.end())
    {
        if(label_data != nullptr)
        {
            children["label-data"] = label_data;
        }
    }

    if(children.find("pw-list-data") == children.end())
    {
        if(pw_list_data != nullptr)
        {
            children["pw-list-data"] = pw_list_data;
        }
    }

    if(children.find("te-data") == children.end())
    {
        if(te_data != nullptr)
        {
            children["te-data"] = te_data;
        }
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fpi-type")
    {
        fpi_type = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData::LabelData()
    :
    elc{YType::int32, "elc"},
    label{YType::uint32, "label"},
    security_id{YType::uint32, "security-id"}
{
    yang_name = "label-data"; yang_parent_name = "fpi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData::~LabelData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData::has_data() const
{
    return elc.is_set
	|| label.is_set
	|| security_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData::has_operation() const
{
    return is_set(operation)
	|| is_set(elc.operation)
	|| is_set(label.operation)
	|| is_set(security_id.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (elc.is_set || is_set(elc.operation)) leaf_name_data.push_back(elc.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.operation)) leaf_name_data.push_back(security_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "elc")
    {
        elc = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "security-id")
    {
        security_id = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData::TeData()
    :
    local_label{YType::uint32, "local-label"},
    tunnel_interface{YType::str, "tunnel-interface"}
{
    yang_name = "te-data"; yang_parent_name = "fpi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData::~TeData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData::has_data() const
{
    return local_label.is_set
	|| tunnel_interface.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData::has_operation() const
{
    return is_set(operation)
	|| is_set(local_label.operation)
	|| is_set(tunnel_interface.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data::Ipv4Data()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    sr_local_label{YType::uint32, "sr-local-label"},
    table_id{YType::uint32, "table-id"},
    version{YType::uint32, "version"}
{
    yang_name = "ipv4-data"; yang_parent_name = "fpi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data::~Ipv4Data()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| sr_local_label.is_set
	|| table_id.is_set
	|| version.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(sr_local_label.operation)
	|| is_set(table_id.operation)
	|| is_set(version.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Data' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (sr_local_label.is_set || is_set(sr_local_label.operation)) leaf_name_data.push_back(sr_local_label.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "sr-local-label")
    {
        sr_local_label = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data::Ipv6Data()
    :
    prefix{YType::str, "prefix"},
    prefix_len{YType::uint8, "prefix-len"},
    router_flags{YType::uint32, "router-flags"},
    table_id{YType::uint32, "table-id"},
    version{YType::uint32, "version"}
{
    yang_name = "ipv6-data"; yang_parent_name = "fpi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data::~Ipv6Data()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data::has_data() const
{
    return prefix.is_set
	|| prefix_len.is_set
	|| router_flags.is_set
	|| table_id.is_set
	|| version.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_len.operation)
	|| is_set(router_flags.operation)
	|| is_set(table_id.operation)
	|| is_set(version.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Data' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.operation)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (router_flags.is_set || is_set(router_flags.operation)) leaf_name_data.push_back(router_flags.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
    }
    if(value_path == "router-flags")
    {
        router_flags = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData::PwListData()
    :
    pwhe_list_id{YType::uint16, "pwhe-list-id"}
{
    yang_name = "pw-list-data"; yang_parent_name = "fpi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData::~PwListData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData::has_data() const
{
    return pwhe_list_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData::has_operation() const
{
    return is_set(operation)
	|| is_set(pwhe_list_id.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-list-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData::get_entity_path(Entity* ancestor) const
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

    if (pwhe_list_id.is_set || is_set(pwhe_list_id.operation)) leaf_name_data.push_back(pwhe_list_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pwhe-list-id")
    {
        pwhe_list_id = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData::DmtcExtIntfData()
    :
    dmtc_ext_ifh{YType::str, "dmtc-ext-ifh"}
{
    yang_name = "dmtc-ext-intf-data"; yang_parent_name = "fpi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData::~DmtcExtIntfData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData::has_data() const
{
    return dmtc_ext_ifh.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData::has_operation() const
{
    return is_set(operation)
	|| is_set(dmtc_ext_ifh.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dmtc-ext-intf-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DmtcExtIntfData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner::ApplicationOwner()
    :
    application_instance{YType::str, "application-instance"},
    application_name{YType::str, "application-name"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_type{YType::enumeration, "application-type"},
    resource_state{YType::enumeration, "resource-state"}
{
    yang_name = "application-owner"; yang_parent_name = "associated-fpi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner::~ApplicationOwner()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner::has_data() const
{
    return application_instance.is_set
	|| application_name.is_set
	|| application_role_primary.is_set
	|| application_type.is_set
	|| resource_state.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner::has_operation() const
{
    return is_set(operation)
	|| is_set(application_instance.operation)
	|| is_set(application_name.operation)
	|| is_set(application_role_primary.operation)
	|| is_set(application_type.operation)
	|| is_set(resource_state.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-owner";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V4Rpf::V4Rpf()
    :
    table_id{YType::uint32, "table-id"},
    v4_rpf_neighbor{YType::str, "v4-rpf-neighbor"}
{
    yang_name = "v4-rpf"; yang_parent_name = "rewrite-label";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V4Rpf::~V4Rpf()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V4Rpf::has_data() const
{
    return table_id.is_set
	|| v4_rpf_neighbor.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V4Rpf::has_operation() const
{
    return is_set(operation)
	|| is_set(table_id.operation)
	|| is_set(v4_rpf_neighbor.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V4Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-rpf";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V4Rpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V4Rpf' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (v4_rpf_neighbor.is_set || is_set(v4_rpf_neighbor.operation)) leaf_name_data.push_back(v4_rpf_neighbor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V4Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V4Rpf::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V4Rpf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "v4-rpf-neighbor")
    {
        v4_rpf_neighbor = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V6Rpf::V6Rpf()
    :
    table_id{YType::uint32, "table-id"},
    v6_rpf_neighbor{YType::str, "v6-rpf-neighbor"}
{
    yang_name = "v6-rpf"; yang_parent_name = "rewrite-label";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V6Rpf::~V6Rpf()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V6Rpf::has_data() const
{
    return table_id.is_set
	|| v6_rpf_neighbor.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V6Rpf::has_operation() const
{
    return is_set(operation)
	|| is_set(table_id.operation)
	|| is_set(v6_rpf_neighbor.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V6Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v6-rpf";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V6Rpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V6Rpf' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (v6_rpf_neighbor.is_set || is_set(v6_rpf_neighbor.operation)) leaf_name_data.push_back(v6_rpf_neighbor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V6Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V6Rpf::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V6Rpf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "v6-rpf-neighbor")
    {
        v6_rpf_neighbor = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::Mois()
    :
    application_resource(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource>())
{
    application_resource->parent = this;
    children["application-resource"] = application_resource;

    yang_name = "mois"; yang_parent_name = "rewrite-label";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::~Mois()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::has_data() const
{
    for (std::size_t index=0; index<moi_array.size(); index++)
    {
        if(moi_array[index]->has_data())
            return true;
    }
    return (application_resource !=  nullptr && application_resource->has_data());
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::has_operation() const
{
    for (std::size_t index=0; index<moi_array.size(); index++)
    {
        if(moi_array[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (application_resource !=  nullptr && application_resource->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mois";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mois' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "application-resource")
    {
        if(application_resource != nullptr)
        {
            children["application-resource"] = application_resource;
        }
        else
        {
            application_resource = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource>();
            application_resource->parent = this;
            children["application-resource"] = application_resource;
        }
        return children.at("application-resource");
    }

    if(child_yang_name == "moi-array")
    {
        for(auto const & c : moi_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray>();
        c->parent = this;
        moi_array.push_back(std::move(c));
        children[segment_path] = moi_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::get_children()
{
    if(children.find("application-resource") == children.end())
    {
        if(application_resource != nullptr)
        {
            children["application-resource"] = application_resource;
        }
    }

    for (auto const & c : moi_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::set_value(const std::string & value_path, std::string value)
{
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::ApplicationResource()
    :
    application_instance{YType::str, "application-instance"},
    application_name{YType::str, "application-name"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_type{YType::enumeration, "application-type"},
    resource_state{YType::enumeration, "resource-state"}
{
    yang_name = "application-resource"; yang_parent_name = "mois";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::~ApplicationResource()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::has_data() const
{
    return application_instance.is_set
	|| application_name.is_set
	|| application_role_primary.is_set
	|| application_type.is_set
	|| resource_state.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::has_operation() const
{
    return is_set(operation)
	|| is_set(application_instance.operation)
	|| is_set(application_name.operation)
	|| is_set(application_role_primary.operation)
	|| is_set(application_type.operation)
	|| is_set(resource_state.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-resource";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplicationResource' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::MoiArray()
    :
    moi(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi>())
{
    moi->parent = this;
    children["moi"] = moi;

    yang_name = "moi-array"; yang_parent_name = "mois";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::~MoiArray()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::has_data() const
{
    return (moi !=  nullptr && moi->has_data());
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::has_operation() const
{
    return is_set(operation)
	|| (moi !=  nullptr && moi->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "moi-array";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MoiArray' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "moi")
    {
        if(moi != nullptr)
        {
            children["moi"] = moi;
        }
        else
        {
            moi = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi>();
            moi->parent = this;
            children["moi"] = moi;
        }
        return children.at("moi");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::get_children()
{
    if(children.find("moi") == children.end())
    {
        if(moi != nullptr)
        {
            children["moi"] = moi;
        }
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::set_value(const std::string & value_path, std::string value)
{
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Moi()
    :
    moi_type{YType::enumeration, "moi-type"}
    	,
    dmtc_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData>())
	,ip_sub_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData>())
	,ipv4_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data>())
	,ipv6_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data>())
	,pop_and_lookup_ipv4(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4>())
	,pop_and_lookup_ipv6(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6>())
	,pop_and_lookup_tp(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp>())
	,pseudowire_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData>())
	,pseudowire_head_end_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData>())
	,pw_list_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData>())
	,stackv4_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data>())
	,stackv6_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data>())
	,te_head_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData>())
	,tev4_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data>())
{
    dmtc_data->parent = this;
    children["dmtc-data"] = dmtc_data;

    ip_sub_data->parent = this;
    children["ip-sub-data"] = ip_sub_data;

    ipv4_data->parent = this;
    children["ipv4-data"] = ipv4_data;

    ipv6_data->parent = this;
    children["ipv6-data"] = ipv6_data;

    pop_and_lookup_ipv4->parent = this;
    children["pop-and-lookup-ipv4"] = pop_and_lookup_ipv4;

    pop_and_lookup_ipv6->parent = this;
    children["pop-and-lookup-ipv6"] = pop_and_lookup_ipv6;

    pop_and_lookup_tp->parent = this;
    children["pop-and-lookup-tp"] = pop_and_lookup_tp;

    pseudowire_data->parent = this;
    children["pseudowire-data"] = pseudowire_data;

    pseudowire_head_end_data->parent = this;
    children["pseudowire-head-end-data"] = pseudowire_head_end_data;

    pw_list_data->parent = this;
    children["pw-list-data"] = pw_list_data;

    stackv4_data->parent = this;
    children["stackv4-data"] = stackv4_data;

    stackv6_data->parent = this;
    children["stackv6-data"] = stackv6_data;

    te_head_data->parent = this;
    children["te-head-data"] = te_head_data;

    tev4_data->parent = this;
    children["tev4-data"] = tev4_data;

    yang_name = "moi"; yang_parent_name = "moi-array";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::~Moi()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::has_data() const
{
    return moi_type.is_set
	|| (dmtc_data !=  nullptr && dmtc_data->has_data())
	|| (ip_sub_data !=  nullptr && ip_sub_data->has_data())
	|| (ipv4_data !=  nullptr && ipv4_data->has_data())
	|| (ipv6_data !=  nullptr && ipv6_data->has_data())
	|| (pop_and_lookup_ipv4 !=  nullptr && pop_and_lookup_ipv4->has_data())
	|| (pop_and_lookup_ipv6 !=  nullptr && pop_and_lookup_ipv6->has_data())
	|| (pop_and_lookup_tp !=  nullptr && pop_and_lookup_tp->has_data())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_data())
	|| (pseudowire_head_end_data !=  nullptr && pseudowire_head_end_data->has_data())
	|| (pw_list_data !=  nullptr && pw_list_data->has_data())
	|| (stackv4_data !=  nullptr && stackv4_data->has_data())
	|| (stackv6_data !=  nullptr && stackv6_data->has_data())
	|| (te_head_data !=  nullptr && te_head_data->has_data())
	|| (tev4_data !=  nullptr && tev4_data->has_data());
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::has_operation() const
{
    return is_set(operation)
	|| is_set(moi_type.operation)
	|| (dmtc_data !=  nullptr && dmtc_data->has_operation())
	|| (ip_sub_data !=  nullptr && ip_sub_data->has_operation())
	|| (ipv4_data !=  nullptr && ipv4_data->has_operation())
	|| (ipv6_data !=  nullptr && ipv6_data->has_operation())
	|| (pop_and_lookup_ipv4 !=  nullptr && pop_and_lookup_ipv4->has_operation())
	|| (pop_and_lookup_ipv6 !=  nullptr && pop_and_lookup_ipv6->has_operation())
	|| (pop_and_lookup_tp !=  nullptr && pop_and_lookup_tp->has_operation())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_operation())
	|| (pseudowire_head_end_data !=  nullptr && pseudowire_head_end_data->has_operation())
	|| (pw_list_data !=  nullptr && pw_list_data->has_operation())
	|| (stackv4_data !=  nullptr && stackv4_data->has_operation())
	|| (stackv6_data !=  nullptr && stackv6_data->has_operation())
	|| (te_head_data !=  nullptr && te_head_data->has_operation())
	|| (tev4_data !=  nullptr && tev4_data->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "moi";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Moi' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (moi_type.is_set || is_set(moi_type.operation)) leaf_name_data.push_back(moi_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dmtc-data")
    {
        if(dmtc_data != nullptr)
        {
            children["dmtc-data"] = dmtc_data;
        }
        else
        {
            dmtc_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData>();
            dmtc_data->parent = this;
            children["dmtc-data"] = dmtc_data;
        }
        return children.at("dmtc-data");
    }

    if(child_yang_name == "ip-sub-data")
    {
        if(ip_sub_data != nullptr)
        {
            children["ip-sub-data"] = ip_sub_data;
        }
        else
        {
            ip_sub_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData>();
            ip_sub_data->parent = this;
            children["ip-sub-data"] = ip_sub_data;
        }
        return children.at("ip-sub-data");
    }

    if(child_yang_name == "ipv4-data")
    {
        if(ipv4_data != nullptr)
        {
            children["ipv4-data"] = ipv4_data;
        }
        else
        {
            ipv4_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data>();
            ipv4_data->parent = this;
            children["ipv4-data"] = ipv4_data;
        }
        return children.at("ipv4-data");
    }

    if(child_yang_name == "ipv6-data")
    {
        if(ipv6_data != nullptr)
        {
            children["ipv6-data"] = ipv6_data;
        }
        else
        {
            ipv6_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data>();
            ipv6_data->parent = this;
            children["ipv6-data"] = ipv6_data;
        }
        return children.at("ipv6-data");
    }

    if(child_yang_name == "pop-and-lookup-ipv4")
    {
        if(pop_and_lookup_ipv4 != nullptr)
        {
            children["pop-and-lookup-ipv4"] = pop_and_lookup_ipv4;
        }
        else
        {
            pop_and_lookup_ipv4 = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4>();
            pop_and_lookup_ipv4->parent = this;
            children["pop-and-lookup-ipv4"] = pop_and_lookup_ipv4;
        }
        return children.at("pop-and-lookup-ipv4");
    }

    if(child_yang_name == "pop-and-lookup-ipv6")
    {
        if(pop_and_lookup_ipv6 != nullptr)
        {
            children["pop-and-lookup-ipv6"] = pop_and_lookup_ipv6;
        }
        else
        {
            pop_and_lookup_ipv6 = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6>();
            pop_and_lookup_ipv6->parent = this;
            children["pop-and-lookup-ipv6"] = pop_and_lookup_ipv6;
        }
        return children.at("pop-and-lookup-ipv6");
    }

    if(child_yang_name == "pop-and-lookup-tp")
    {
        if(pop_and_lookup_tp != nullptr)
        {
            children["pop-and-lookup-tp"] = pop_and_lookup_tp;
        }
        else
        {
            pop_and_lookup_tp = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp>();
            pop_and_lookup_tp->parent = this;
            children["pop-and-lookup-tp"] = pop_and_lookup_tp;
        }
        return children.at("pop-and-lookup-tp");
    }

    if(child_yang_name == "pseudowire-data")
    {
        if(pseudowire_data != nullptr)
        {
            children["pseudowire-data"] = pseudowire_data;
        }
        else
        {
            pseudowire_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData>();
            pseudowire_data->parent = this;
            children["pseudowire-data"] = pseudowire_data;
        }
        return children.at("pseudowire-data");
    }

    if(child_yang_name == "pseudowire-head-end-data")
    {
        if(pseudowire_head_end_data != nullptr)
        {
            children["pseudowire-head-end-data"] = pseudowire_head_end_data;
        }
        else
        {
            pseudowire_head_end_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData>();
            pseudowire_head_end_data->parent = this;
            children["pseudowire-head-end-data"] = pseudowire_head_end_data;
        }
        return children.at("pseudowire-head-end-data");
    }

    if(child_yang_name == "pw-list-data")
    {
        if(pw_list_data != nullptr)
        {
            children["pw-list-data"] = pw_list_data;
        }
        else
        {
            pw_list_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData>();
            pw_list_data->parent = this;
            children["pw-list-data"] = pw_list_data;
        }
        return children.at("pw-list-data");
    }

    if(child_yang_name == "stackv4-data")
    {
        if(stackv4_data != nullptr)
        {
            children["stackv4-data"] = stackv4_data;
        }
        else
        {
            stackv4_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data>();
            stackv4_data->parent = this;
            children["stackv4-data"] = stackv4_data;
        }
        return children.at("stackv4-data");
    }

    if(child_yang_name == "stackv6-data")
    {
        if(stackv6_data != nullptr)
        {
            children["stackv6-data"] = stackv6_data;
        }
        else
        {
            stackv6_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data>();
            stackv6_data->parent = this;
            children["stackv6-data"] = stackv6_data;
        }
        return children.at("stackv6-data");
    }

    if(child_yang_name == "te-head-data")
    {
        if(te_head_data != nullptr)
        {
            children["te-head-data"] = te_head_data;
        }
        else
        {
            te_head_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData>();
            te_head_data->parent = this;
            children["te-head-data"] = te_head_data;
        }
        return children.at("te-head-data");
    }

    if(child_yang_name == "tev4-data")
    {
        if(tev4_data != nullptr)
        {
            children["tev4-data"] = tev4_data;
        }
        else
        {
            tev4_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data>();
            tev4_data->parent = this;
            children["tev4-data"] = tev4_data;
        }
        return children.at("tev4-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::get_children()
{
    if(children.find("dmtc-data") == children.end())
    {
        if(dmtc_data != nullptr)
        {
            children["dmtc-data"] = dmtc_data;
        }
    }

    if(children.find("ip-sub-data") == children.end())
    {
        if(ip_sub_data != nullptr)
        {
            children["ip-sub-data"] = ip_sub_data;
        }
    }

    if(children.find("ipv4-data") == children.end())
    {
        if(ipv4_data != nullptr)
        {
            children["ipv4-data"] = ipv4_data;
        }
    }

    if(children.find("ipv6-data") == children.end())
    {
        if(ipv6_data != nullptr)
        {
            children["ipv6-data"] = ipv6_data;
        }
    }

    if(children.find("pop-and-lookup-ipv4") == children.end())
    {
        if(pop_and_lookup_ipv4 != nullptr)
        {
            children["pop-and-lookup-ipv4"] = pop_and_lookup_ipv4;
        }
    }

    if(children.find("pop-and-lookup-ipv6") == children.end())
    {
        if(pop_and_lookup_ipv6 != nullptr)
        {
            children["pop-and-lookup-ipv6"] = pop_and_lookup_ipv6;
        }
    }

    if(children.find("pop-and-lookup-tp") == children.end())
    {
        if(pop_and_lookup_tp != nullptr)
        {
            children["pop-and-lookup-tp"] = pop_and_lookup_tp;
        }
    }

    if(children.find("pseudowire-data") == children.end())
    {
        if(pseudowire_data != nullptr)
        {
            children["pseudowire-data"] = pseudowire_data;
        }
    }

    if(children.find("pseudowire-head-end-data") == children.end())
    {
        if(pseudowire_head_end_data != nullptr)
        {
            children["pseudowire-head-end-data"] = pseudowire_head_end_data;
        }
    }

    if(children.find("pw-list-data") == children.end())
    {
        if(pw_list_data != nullptr)
        {
            children["pw-list-data"] = pw_list_data;
        }
    }

    if(children.find("stackv4-data") == children.end())
    {
        if(stackv4_data != nullptr)
        {
            children["stackv4-data"] = stackv4_data;
        }
    }

    if(children.find("stackv6-data") == children.end())
    {
        if(stackv6_data != nullptr)
        {
            children["stackv6-data"] = stackv6_data;
        }
    }

    if(children.find("te-head-data") == children.end())
    {
        if(te_head_data != nullptr)
        {
            children["te-head-data"] = te_head_data;
        }
    }

    if(children.find("tev4-data") == children.end())
    {
        if(tev4_data != nullptr)
        {
            children["tev4-data"] = tev4_data;
        }
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "moi-type")
    {
        moi_type = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::PopAndLookupIpv4()
    :
    path_flags_decode{YType::str, "path-flags-decode"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"}
{
    yang_name = "pop-and-lookup-ipv4"; yang_parent_name = "moi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::~PopAndLookupIpv4()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::has_data() const
{
    return path_flags_decode.is_set
	|| table_id.is_set
	|| table_name.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::has_operation() const
{
    return is_set(operation)
	|| is_set(path_flags_decode.operation)
	|| is_set(table_id.operation)
	|| is_set(table_name.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop-and-lookup-ipv4";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PopAndLookupIpv4' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_flags_decode.is_set || is_set(path_flags_decode.operation)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.operation)) leaf_name_data.push_back(table_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::set_value(const std::string & value_path, std::string value)
{
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

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::PopAndLookupTp()
    :
    out_label{YType::uint32, "out-label"},
    path_flags_decode{YType::str, "path-flags-decode"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"}
{
    yang_name = "pop-and-lookup-tp"; yang_parent_name = "moi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::~PopAndLookupTp()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::has_data() const
{
    return out_label.is_set
	|| path_flags_decode.is_set
	|| table_id.is_set
	|| table_name.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::has_operation() const
{
    return is_set(operation)
	|| is_set(out_label.operation)
	|| is_set(path_flags_decode.operation)
	|| is_set(table_id.operation)
	|| is_set(table_name.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop-and-lookup-tp";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PopAndLookupTp' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.operation)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.operation)) leaf_name_data.push_back(table_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out-label")
    {
        out_label = value;
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

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::PopAndLookupIpv6()
    :
    path_flags_decode{YType::str, "path-flags-decode"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"}
{
    yang_name = "pop-and-lookup-ipv6"; yang_parent_name = "moi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::~PopAndLookupIpv6()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::has_data() const
{
    return path_flags_decode.is_set
	|| table_id.is_set
	|| table_name.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::has_operation() const
{
    return is_set(operation)
	|| is_set(path_flags_decode.operation)
	|| is_set(table_id.operation)
	|| is_set(table_name.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop-and-lookup-ipv6";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PopAndLookupIpv6' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_flags_decode.is_set || is_set(path_flags_decode.operation)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.operation)) leaf_name_data.push_back(table_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::set_value(const std::string & value_path, std::string value)
{
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

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::Ipv4Data()
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
    yang_name = "ipv4-data"; yang_parent_name = "moi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::~Ipv4Data()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::has_data() const
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

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::has_operation() const
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

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Data' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::Ipv6Data()
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
    yang_name = "ipv6-data"; yang_parent_name = "moi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::~Ipv6Data()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::has_data() const
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

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::has_operation() const
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

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Data' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::Tev4Data()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_ipv4_next_hop{YType::str, "backup-ipv4-next-hop"},
    backup_local_label{YType::uint32, "backup-local-label"},
    data_out_parent_interface{YType::str, "data-out-parent-interface"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    merge_point_label{YType::uint32, "merge-point-label"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"},
    out_label_name{YType::str, "out-label-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    tunnel_class{YType::uint32, "tunnel-class"},
    tunnel_interface{YType::str, "tunnel-interface"},
    tunnel_weight{YType::uint32, "tunnel-weight"}
{
    yang_name = "tev4-data"; yang_parent_name = "moi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::~Tev4Data()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::has_data() const
{
    return backup_interface.is_set
	|| backup_ipv4_next_hop.is_set
	|| backup_local_label.is_set
	|| data_out_parent_interface.is_set
	|| ipv4_next_hop.is_set
	|| merge_point_label.is_set
	|| out_interface.is_set
	|| out_label.is_set
	|| out_label_name.is_set
	|| path_flags_decode.is_set
	|| table_id.is_set
	|| table_name.is_set
	|| tunnel_class.is_set
	|| tunnel_interface.is_set
	|| tunnel_weight.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_interface.operation)
	|| is_set(backup_ipv4_next_hop.operation)
	|| is_set(backup_local_label.operation)
	|| is_set(data_out_parent_interface.operation)
	|| is_set(ipv4_next_hop.operation)
	|| is_set(merge_point_label.operation)
	|| is_set(out_interface.operation)
	|| is_set(out_label.operation)
	|| is_set(out_label_name.operation)
	|| is_set(path_flags_decode.operation)
	|| is_set(table_id.operation)
	|| is_set(table_name.operation)
	|| is_set(tunnel_class.operation)
	|| is_set(tunnel_interface.operation)
	|| is_set(tunnel_weight.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tev4-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tev4Data' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.operation)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_ipv4_next_hop.is_set || is_set(backup_ipv4_next_hop.operation)) leaf_name_data.push_back(backup_ipv4_next_hop.get_name_leafdata());
    if (backup_local_label.is_set || is_set(backup_local_label.operation)) leaf_name_data.push_back(backup_local_label.get_name_leafdata());
    if (data_out_parent_interface.is_set || is_set(data_out_parent_interface.operation)) leaf_name_data.push_back(data_out_parent_interface.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.operation)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (merge_point_label.is_set || is_set(merge_point_label.operation)) leaf_name_data.push_back(merge_point_label.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.operation)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_name.is_set || is_set(out_label_name.operation)) leaf_name_data.push_back(out_label_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.operation)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.operation)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (tunnel_class.is_set || is_set(tunnel_class.operation)) leaf_name_data.push_back(tunnel_class.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (tunnel_weight.is_set || is_set(tunnel_weight.operation)) leaf_name_data.push_back(tunnel_weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
    }
    if(value_path == "backup-ipv4-next-hop")
    {
        backup_ipv4_next_hop = value;
    }
    if(value_path == "backup-local-label")
    {
        backup_local_label = value;
    }
    if(value_path == "data-out-parent-interface")
    {
        data_out_parent_interface = value;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
    }
    if(value_path == "merge-point-label")
    {
        merge_point_label = value;
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
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "table-name")
    {
        table_name = value;
    }
    if(value_path == "tunnel-class")
    {
        tunnel_class = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
    if(value_path == "tunnel-weight")
    {
        tunnel_weight = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::PseudowireData()
    :
    bridge_id{YType::uint32, "bridge-id"},
    cross_connect_id{YType::uint32, "cross-connect-id"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"},
    path_flags_decode{YType::str, "path-flags-decode"},
    pseuodo_wire_connect_id{YType::uint32, "pseuodo-wire-connect-id"},
    split_horizon_id{YType::uint32, "split-horizon-id"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"}
{
    yang_name = "pseudowire-data"; yang_parent_name = "moi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::~PseudowireData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::has_data() const
{
    return bridge_id.is_set
	|| cross_connect_id.is_set
	|| ipv4_next_hop.is_set
	|| out_interface.is_set
	|| out_label.is_set
	|| path_flags_decode.is_set
	|| pseuodo_wire_connect_id.is_set
	|| split_horizon_id.is_set
	|| table_id.is_set
	|| table_name.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::has_operation() const
{
    return is_set(operation)
	|| is_set(bridge_id.operation)
	|| is_set(cross_connect_id.operation)
	|| is_set(ipv4_next_hop.operation)
	|| is_set(out_interface.operation)
	|| is_set(out_label.operation)
	|| is_set(path_flags_decode.operation)
	|| is_set(pseuodo_wire_connect_id.operation)
	|| is_set(split_horizon_id.operation)
	|| is_set(table_id.operation)
	|| is_set(table_name.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_id.is_set || is_set(bridge_id.operation)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (cross_connect_id.is_set || is_set(cross_connect_id.operation)) leaf_name_data.push_back(cross_connect_id.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.operation)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.operation)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.operation)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (pseuodo_wire_connect_id.is_set || is_set(pseuodo_wire_connect_id.operation)) leaf_name_data.push_back(pseuodo_wire_connect_id.get_name_leafdata());
    if (split_horizon_id.is_set || is_set(split_horizon_id.operation)) leaf_name_data.push_back(split_horizon_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.operation)) leaf_name_data.push_back(table_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-id")
    {
        bridge_id = value;
    }
    if(value_path == "cross-connect-id")
    {
        cross_connect_id = value;
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
    if(value_path == "pseuodo-wire-connect-id")
    {
        pseuodo_wire_connect_id = value;
    }
    if(value_path == "split-horizon-id")
    {
        split_horizon_id = value;
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

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::IpSubData()
    :
    out_interface{YType::str, "out-interface"},
    path_flags_decode{YType::str, "path-flags-decode"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"}
{
    yang_name = "ip-sub-data"; yang_parent_name = "moi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::~IpSubData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::has_data() const
{
    return out_interface.is_set
	|| path_flags_decode.is_set
	|| table_id.is_set
	|| table_name.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::has_operation() const
{
    return is_set(operation)
	|| is_set(out_interface.operation)
	|| is_set(path_flags_decode.operation)
	|| is_set(table_id.operation)
	|| is_set(table_name.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-sub-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::PseudowireHeadEndData()
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

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::~PseudowireHeadEndData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::has_data() const
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

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::has_operation() const
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

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-head-end-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::PwListData()
    :
    l2_interface{YType::str, "l2-interface"},
    l3_interface{YType::str, "l3-interface"},
    path_flags_decode{YType::str, "path-flags-decode"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"}
{
    yang_name = "pw-list-data"; yang_parent_name = "moi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::~PwListData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::has_data() const
{
    return l2_interface.is_set
	|| l3_interface.is_set
	|| path_flags_decode.is_set
	|| table_id.is_set
	|| table_name.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::has_operation() const
{
    return is_set(operation)
	|| is_set(l2_interface.operation)
	|| is_set(l3_interface.operation)
	|| is_set(path_flags_decode.operation)
	|| is_set(table_id.operation)
	|| is_set(table_name.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-list-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Stackv4Data()
    :
    owner_application_type{YType::enumeration, "owner-application-type"}
    	,
    inner_stack(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack>())
	,nexthop(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop>())
{
    inner_stack->parent = this;
    children["inner-stack"] = inner_stack;

    nexthop->parent = this;
    children["nexthop"] = nexthop;

    yang_name = "stackv4-data"; yang_parent_name = "moi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::~Stackv4Data()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::has_data() const
{
    return owner_application_type.is_set
	|| (inner_stack !=  nullptr && inner_stack->has_data())
	|| (nexthop !=  nullptr && nexthop->has_data());
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::has_operation() const
{
    return is_set(operation)
	|| is_set(owner_application_type.operation)
	|| (inner_stack !=  nullptr && inner_stack->has_operation())
	|| (nexthop !=  nullptr && nexthop->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stackv4-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inner-stack")
    {
        if(inner_stack != nullptr)
        {
            children["inner-stack"] = inner_stack;
        }
        else
        {
            inner_stack = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack>();
            inner_stack->parent = this;
            children["inner-stack"] = inner_stack;
        }
        return children.at("inner-stack");
    }

    if(child_yang_name == "nexthop")
    {
        if(nexthop != nullptr)
        {
            children["nexthop"] = nexthop;
        }
        else
        {
            nexthop = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop>();
            nexthop->parent = this;
            children["nexthop"] = nexthop;
        }
        return children.at("nexthop");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::get_children()
{
    if(children.find("inner-stack") == children.end())
    {
        if(inner_stack != nullptr)
        {
            children["inner-stack"] = inner_stack;
        }
    }

    if(children.find("nexthop") == children.end())
    {
        if(nexthop != nullptr)
        {
            children["nexthop"] = nexthop;
        }
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "owner-application-type")
    {
        owner_application_type = value;
    }
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::Nexthop()
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

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::~Nexthop()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::has_data() const
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

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::has_operation() const
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

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::InnerStack()
    :
    nexthop{YType::str, "nexthop"},
    num_lbls{YType::uint8, "num-lbls"},
    num_nexthops{YType::uint8, "num-nexthops"}
{
    yang_name = "inner-stack"; yang_parent_name = "stackv4-data";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::~InnerStack()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::has_data() const
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

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::has_operation() const
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

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-stack";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label")
    {
        for(auto const & c : label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label>();
        c->parent = this;
        label.push_back(std::move(c));
        children[segment_path] = label.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_children()
{
    for (auto const & c : label)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::Label()
    :
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_label_str{YType::str, "outgoing-label-str"}
{
    yang_name = "label"; yang_parent_name = "inner-stack";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::~Label()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::has_data() const
{
    return outgoing_label.is_set
	|| outgoing_label_str.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::has_operation() const
{
    return is_set(operation)
	|| is_set(outgoing_label.operation)
	|| is_set(outgoing_label_str.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Stackv6Data()
    :
    inner_stack(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack>())
	,nexthop(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop>())
{
    inner_stack->parent = this;
    children["inner-stack"] = inner_stack;

    nexthop->parent = this;
    children["nexthop"] = nexthop;

    yang_name = "stackv6-data"; yang_parent_name = "moi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::~Stackv6Data()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::has_data() const
{
    return (inner_stack !=  nullptr && inner_stack->has_data())
	|| (nexthop !=  nullptr && nexthop->has_data());
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::has_operation() const
{
    return is_set(operation)
	|| (inner_stack !=  nullptr && inner_stack->has_operation())
	|| (nexthop !=  nullptr && nexthop->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stackv6-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inner-stack")
    {
        if(inner_stack != nullptr)
        {
            children["inner-stack"] = inner_stack;
        }
        else
        {
            inner_stack = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack>();
            inner_stack->parent = this;
            children["inner-stack"] = inner_stack;
        }
        return children.at("inner-stack");
    }

    if(child_yang_name == "nexthop")
    {
        if(nexthop != nullptr)
        {
            children["nexthop"] = nexthop;
        }
        else
        {
            nexthop = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop>();
            nexthop->parent = this;
            children["nexthop"] = nexthop;
        }
        return children.at("nexthop");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::get_children()
{
    if(children.find("inner-stack") == children.end())
    {
        if(inner_stack != nullptr)
        {
            children["inner-stack"] = inner_stack;
        }
    }

    if(children.find("nexthop") == children.end())
    {
        if(nexthop != nullptr)
        {
            children["nexthop"] = nexthop;
        }
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::set_value(const std::string & value_path, std::string value)
{
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::Nexthop()
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

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::~Nexthop()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::has_data() const
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

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::has_operation() const
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

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::InnerStack()
    :
    nexthop{YType::str, "nexthop"},
    num_lbls{YType::uint8, "num-lbls"},
    num_nexthops{YType::uint8, "num-nexthops"}
{
    yang_name = "inner-stack"; yang_parent_name = "stackv6-data";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::~InnerStack()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::has_data() const
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

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::has_operation() const
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

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-stack";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label")
    {
        for(auto const & c : label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label>();
        c->parent = this;
        label.push_back(std::move(c));
        children[segment_path] = label.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_children()
{
    for (auto const & c : label)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::Label()
    :
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_label_str{YType::str, "outgoing-label-str"}
{
    yang_name = "label"; yang_parent_name = "inner-stack";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::~Label()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::has_data() const
{
    return outgoing_label.is_set
	|| outgoing_label_str.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::has_operation() const
{
    return is_set(operation)
	|| is_set(outgoing_label.operation)
	|| is_set(outgoing_label_str.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::TeHeadData()
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

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::~TeHeadData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::has_data() const
{
    return flags_decode.is_set
	|| table_id.is_set
	|| table_name.is_set
	|| tunnel_fwd_class.is_set
	|| tunnel_load_metric.is_set
	|| tunnel_local_label.is_set
	|| tunnel_local_label_str.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::has_operation() const
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

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-head-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::DmtcData()
    :
    dmtc_ext_ifh{YType::str, "dmtc-ext-ifh"}
{
    yang_name = "dmtc-data"; yang_parent_name = "moi";
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::~DmtcData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::has_data() const
{
    return dmtc_ext_ifh.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::has_operation() const
{
    return is_set(operation)
	|| is_set(dmtc_ext_ifh.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dmtc-data";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh = value;
    }
}

MplsLsdNodes::MplsLsdNode::RewriteSummary::RewriteSummary()
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
    ipv4_paths(std::make_shared<MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths>())
	,ipv6_paths(std::make_shared<MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths>())
{
    ipv4_paths->parent = this;
    children["ipv4-paths"] = ipv4_paths;

    ipv6_paths->parent = this;
    children["ipv6-paths"] = ipv6_paths;

    yang_name = "rewrite-summary"; yang_parent_name = "mpls-lsd-node";
}

MplsLsdNodes::MplsLsdNode::RewriteSummary::~RewriteSummary()
{
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummary::has_data() const
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

bool MplsLsdNodes::MplsLsdNode::RewriteSummary::has_operation() const
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

std::string MplsLsdNodes::MplsLsdNode::RewriteSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-summary";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::RewriteSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RewriteSummary' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::RewriteSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-paths")
    {
        if(ipv4_paths != nullptr)
        {
            children["ipv4-paths"] = ipv4_paths;
        }
        else
        {
            ipv4_paths = std::make_shared<MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths>();
            ipv4_paths->parent = this;
            children["ipv4-paths"] = ipv4_paths;
        }
        return children.at("ipv4-paths");
    }

    if(child_yang_name == "ipv6-paths")
    {
        if(ipv6_paths != nullptr)
        {
            children["ipv6-paths"] = ipv6_paths;
        }
        else
        {
            ipv6_paths = std::make_shared<MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths>();
            ipv6_paths->parent = this;
            children["ipv6-paths"] = ipv6_paths;
        }
        return children.at("ipv6-paths");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::RewriteSummary::get_children()
{
    if(children.find("ipv4-paths") == children.end())
    {
        if(ipv4_paths != nullptr)
        {
            children["ipv4-paths"] = ipv4_paths;
        }
    }

    if(children.find("ipv6-paths") == children.end())
    {
        if(ipv6_paths != nullptr)
        {
            children["ipv6-paths"] = ipv6_paths;
        }
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::RewriteSummary::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths::Ipv4Paths()
    :
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_paths{YType::uint32, "total-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"}
{
    yang_name = "ipv4-paths"; yang_parent_name = "rewrite-summary";
}

MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths::~Ipv4Paths()
{
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths::has_data() const
{
    return total_backup_paths.is_set
	|| total_paths.is_set
	|| total_pop_lkup_paths.is_set
	|| total_protected_paths.is_set
	|| total_remote_backup_paths.is_set;
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths::has_operation() const
{
    return is_set(operation)
	|| is_set(total_backup_paths.operation)
	|| is_set(total_paths.operation)
	|| is_set(total_pop_lkup_paths.operation)
	|| is_set(total_protected_paths.operation)
	|| is_set(total_remote_backup_paths.operation);
}

std::string MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-paths";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths::Ipv6Paths()
    :
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_paths{YType::uint32, "total-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"}
{
    yang_name = "ipv6-paths"; yang_parent_name = "rewrite-summary";
}

MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths::~Ipv6Paths()
{
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths::has_data() const
{
    return total_backup_paths.is_set
	|| total_paths.is_set
	|| total_pop_lkup_paths.is_set
	|| total_protected_paths.is_set
	|| total_remote_backup_paths.is_set;
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths::has_operation() const
{
    return is_set(operation)
	|| is_set(total_backup_paths.operation)
	|| is_set(total_paths.operation)
	|| is_set(total_pop_lkup_paths.operation)
	|| is_set(total_protected_paths.operation)
	|| is_set(total_remote_backup_paths.operation);
}

std::string MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-paths";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::Applications::Applications()
{
    yang_name = "applications"; yang_parent_name = "mpls-lsd-node";
}

MplsLsdNodes::MplsLsdNode::Applications::~Applications()
{
}

bool MplsLsdNodes::MplsLsdNode::Applications::has_data() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsdNodes::MplsLsdNode::Applications::has_operation() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLsdNodes::MplsLsdNode::Applications::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "applications";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Applications::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Applications' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Applications::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "application")
    {
        for(auto const & c : application)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::Applications::Application>();
        c->parent = this;
        application.push_back(std::move(c));
        children[segment_path] = application.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Applications::get_children()
{
    for (auto const & c : application)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Applications::set_value(const std::string & value_path, std::string value)
{
}

MplsLsdNodes::MplsLsdNode::Applications::Application::Application()
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
    application_statistics(std::make_shared<MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics>())
{
    application_statistics->parent = this;
    children["application-statistics"] = application_statistics;

    yang_name = "application"; yang_parent_name = "applications";
}

MplsLsdNodes::MplsLsdNode::Applications::Application::~Application()
{
}

bool MplsLsdNodes::MplsLsdNode::Applications::Application::has_data() const
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

bool MplsLsdNodes::MplsLsdNode::Applications::Application::has_operation() const
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

std::string MplsLsdNodes::MplsLsdNode::Applications::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application" <<"[application-name='" <<application_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Applications::Application::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Application' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Applications::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "application-statistics")
    {
        if(application_statistics != nullptr)
        {
            children["application-statistics"] = application_statistics;
        }
        else
        {
            application_statistics = std::make_shared<MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics>();
            application_statistics->parent = this;
            children["application-statistics"] = application_statistics;
        }
        return children.at("application-statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Applications::Application::get_children()
{
    if(children.find("application-statistics") == children.end())
    {
        if(application_statistics != nullptr)
        {
            children["application-statistics"] = application_statistics;
        }
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Applications::Application::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::ApplicationStatistics()
    :
    connect_count{YType::uint32, "connect-count"},
    interface_enable{YType::uint32, "interface-enable"},
    interface_enable_pending{YType::uint32, "interface-enable-pending"},
    label_context_count{YType::uint32, "label-context-count"},
    label_context_pending_count{YType::uint32, "label-context-pending-count"}
    	,
    connected(std::make_shared<MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected>())
{
    connected->parent = this;
    children["connected"] = connected;

    yang_name = "application-statistics"; yang_parent_name = "application";
}

MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::~ApplicationStatistics()
{
}

bool MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::has_data() const
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

bool MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::has_operation() const
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

std::string MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-statistics";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "connected")
    {
        if(connected != nullptr)
        {
            children["connected"] = connected;
        }
        else
        {
            connected = std::make_shared<MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected>();
            connected->parent = this;
            children["connected"] = connected;
        }
        return children.at("connected");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::get_children()
{
    if(children.find("connected") == children.end())
    {
        if(connected != nullptr)
        {
            children["connected"] = connected;
        }
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected::Connected()
    :
    error_msg_count{YType::uint32, "error-msg-count"},
    oor_label_count{YType::uint32, "oor-label-count"},
    operation_msg_count{YType::uint32, "operation-msg-count"},
    rt_set_msg_count{YType::uint32, "rt-set-msg-count"}
{
    yang_name = "connected"; yang_parent_name = "application-statistics";
}

MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected::~Connected()
{
}

bool MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected::has_data() const
{
    return error_msg_count.is_set
	|| oor_label_count.is_set
	|| operation_msg_count.is_set
	|| rt_set_msg_count.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected::has_operation() const
{
    return is_set(operation)
	|| is_set(error_msg_count.operation)
	|| is_set(oor_label_count.operation)
	|| is_set(operation_msg_count.operation)
	|| is_set(rt_set_msg_count.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrfs()
{
    yang_name = "label-summary-vrfs"; yang_parent_name = "mpls-lsd-node";
}

MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::~LabelSummaryVrfs()
{
}

bool MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::has_data() const
{
    for (std::size_t index=0; index<label_summary_vrf.size(); index++)
    {
        if(label_summary_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::has_operation() const
{
    for (std::size_t index=0; index<label_summary_vrf.size(); index++)
    {
        if(label_summary_vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-summary-vrfs";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelSummaryVrfs' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label-summary-vrf")
    {
        for(auto const & c : label_summary_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf>();
        c->parent = this;
        label_summary_vrf.push_back(std::move(c));
        children[segment_path] = label_summary_vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::get_children()
{
    for (auto const & c : label_summary_vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::set_value(const std::string & value_path, std::string value)
{
}

MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::LabelSummaryVrf()
    :
    vrf_name{YType::str, "vrf-name"},
    rsi_connected{YType::int32, "rsi-connected"},
    total_labels{YType::uint32, "total-labels"},
    vrf_name_xr{YType::str, "vrf-name-xr"}
{
    yang_name = "label-summary-vrf"; yang_parent_name = "label-summary-vrfs";
}

MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::~LabelSummaryVrf()
{
}

bool MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::has_data() const
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

bool MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::has_operation() const
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

std::string MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-summary-vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelSummaryVrf' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "owner-count")
    {
        for(auto const & c : owner_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount>();
        c->parent = this;
        owner_count.push_back(std::move(c));
        children[segment_path] = owner_count.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::get_children()
{
    for (auto const & c : owner_count)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::OwnerCount()
    :
    application_instance{YType::str, "application-instance"},
    application_name{YType::str, "application-name"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_type{YType::enumeration, "application-type"},
    number_of_labels{YType::uint32, "number-of-labels"}
{
    yang_name = "owner-count"; yang_parent_name = "label-summary-vrf";
}

MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::~OwnerCount()
{
}

bool MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::has_data() const
{
    return application_instance.is_set
	|| application_name.is_set
	|| application_role_primary.is_set
	|| application_type.is_set
	|| number_of_labels.is_set;
}

bool MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::has_operation() const
{
    return is_set(operation)
	|| is_set(application_instance.operation)
	|| is_set(application_name.operation)
	|| is_set(application_role_primary.operation)
	|| is_set(application_type.operation)
	|| is_set(number_of_labels.operation);
}

std::string MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-count";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::LabelRange::LabelRange()
    :
    max_dynamic_label_value{YType::uint32, "max-dynamic-label-value"},
    max_static_label_value{YType::uint32, "max-static-label-value"},
    min_dynamic_label_value{YType::uint32, "min-dynamic-label-value"},
    min_static_label_value{YType::uint32, "min-static-label-value"}
{
    yang_name = "label-range"; yang_parent_name = "mpls-lsd-node";
}

MplsLsdNodes::MplsLsdNode::LabelRange::~LabelRange()
{
}

bool MplsLsdNodes::MplsLsdNode::LabelRange::has_data() const
{
    return max_dynamic_label_value.is_set
	|| max_static_label_value.is_set
	|| min_dynamic_label_value.is_set
	|| min_static_label_value.is_set;
}

bool MplsLsdNodes::MplsLsdNode::LabelRange::has_operation() const
{
    return is_set(operation)
	|| is_set(max_dynamic_label_value.operation)
	|| is_set(max_static_label_value.operation)
	|| is_set(min_dynamic_label_value.operation)
	|| is_set(min_static_label_value.operation);
}

std::string MplsLsdNodes::MplsLsdNode::LabelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-range";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::LabelRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelRange' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::LabelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::LabelRange::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::LabelRange::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrfs()
{
    yang_name = "rewrite-summary-vrfs"; yang_parent_name = "mpls-lsd-node";
}

MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::~RewriteSummaryVrfs()
{
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::has_data() const
{
    for (std::size_t index=0; index<rewrite_summary_vrf.size(); index++)
    {
        if(rewrite_summary_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::has_operation() const
{
    for (std::size_t index=0; index<rewrite_summary_vrf.size(); index++)
    {
        if(rewrite_summary_vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-summary-vrfs";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RewriteSummaryVrfs' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rewrite-summary-vrf")
    {
        for(auto const & c : rewrite_summary_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf>();
        c->parent = this;
        rewrite_summary_vrf.push_back(std::move(c));
        children[segment_path] = rewrite_summary_vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::get_children()
{
    for (auto const & c : rewrite_summary_vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::set_value(const std::string & value_path, std::string value)
{
}

MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::RewriteSummaryVrf()
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
    ipv4_paths(std::make_shared<MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths>())
	,ipv6_paths(std::make_shared<MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths>())
{
    ipv4_paths->parent = this;
    children["ipv4-paths"] = ipv4_paths;

    ipv6_paths->parent = this;
    children["ipv6-paths"] = ipv6_paths;

    yang_name = "rewrite-summary-vrf"; yang_parent_name = "rewrite-summary-vrfs";
}

MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::~RewriteSummaryVrf()
{
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::has_data() const
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

bool MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::has_operation() const
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

std::string MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-summary-vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RewriteSummaryVrf' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-paths")
    {
        if(ipv4_paths != nullptr)
        {
            children["ipv4-paths"] = ipv4_paths;
        }
        else
        {
            ipv4_paths = std::make_shared<MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths>();
            ipv4_paths->parent = this;
            children["ipv4-paths"] = ipv4_paths;
        }
        return children.at("ipv4-paths");
    }

    if(child_yang_name == "ipv6-paths")
    {
        if(ipv6_paths != nullptr)
        {
            children["ipv6-paths"] = ipv6_paths;
        }
        else
        {
            ipv6_paths = std::make_shared<MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths>();
            ipv6_paths->parent = this;
            children["ipv6-paths"] = ipv6_paths;
        }
        return children.at("ipv6-paths");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::get_children()
{
    if(children.find("ipv4-paths") == children.end())
    {
        if(ipv4_paths != nullptr)
        {
            children["ipv4-paths"] = ipv4_paths;
        }
    }

    if(children.find("ipv6-paths") == children.end())
    {
        if(ipv6_paths != nullptr)
        {
            children["ipv6-paths"] = ipv6_paths;
        }
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::Ipv4Paths()
    :
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_paths{YType::uint32, "total-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"}
{
    yang_name = "ipv4-paths"; yang_parent_name = "rewrite-summary-vrf";
}

MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::~Ipv4Paths()
{
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::has_data() const
{
    return total_backup_paths.is_set
	|| total_paths.is_set
	|| total_pop_lkup_paths.is_set
	|| total_protected_paths.is_set
	|| total_remote_backup_paths.is_set;
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::has_operation() const
{
    return is_set(operation)
	|| is_set(total_backup_paths.operation)
	|| is_set(total_paths.operation)
	|| is_set(total_pop_lkup_paths.operation)
	|| is_set(total_protected_paths.operation)
	|| is_set(total_remote_backup_paths.operation);
}

std::string MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-paths";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::Ipv6Paths()
    :
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_paths{YType::uint32, "total-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"}
{
    yang_name = "ipv6-paths"; yang_parent_name = "rewrite-summary-vrf";
}

MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::~Ipv6Paths()
{
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::has_data() const
{
    return total_backup_paths.is_set
	|| total_paths.is_set
	|| total_pop_lkup_paths.is_set
	|| total_protected_paths.is_set
	|| total_remote_backup_paths.is_set;
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::has_operation() const
{
    return is_set(operation)
	|| is_set(total_backup_paths.operation)
	|| is_set(total_paths.operation)
	|| is_set(total_pop_lkup_paths.operation)
	|| is_set(total_protected_paths.operation)
	|| is_set(total_remote_backup_paths.operation);
}

std::string MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-paths";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "mpls-lsd-node";
}

MplsLsdNodes::MplsLsdNode::Interfaces::~Interfaces()
{
}

bool MplsLsdNodes::MplsLsdNode::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsdNodes::MplsLsdNode::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLsdNodes::MplsLsdNode::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

MplsLsdNodes::MplsLsdNode::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    interface_state{YType::enumeration, "interface-state"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

MplsLsdNodes::MplsLsdNode::Interfaces::Interface::~Interface()
{
}

bool MplsLsdNodes::MplsLsdNode::Interfaces::Interface::has_data() const
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

bool MplsLsdNodes::MplsLsdNode::Interfaces::Interface::has_operation() const
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

std::string MplsLsdNodes::MplsLsdNode::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "application-owner")
    {
        for(auto const & c : application_owner)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner>();
        c->parent = this;
        application_owner.push_back(std::move(c));
        children[segment_path] = application_owner.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Interfaces::Interface::get_children()
{
    for (auto const & c : application_owner)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
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

MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner::ApplicationOwner()
    :
    application_instance{YType::str, "application-instance"},
    application_name{YType::str, "application-name"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_type{YType::enumeration, "application-type"},
    resource_state{YType::enumeration, "resource-state"}
{
    yang_name = "application-owner"; yang_parent_name = "interface";
}

MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner::~ApplicationOwner()
{
}

bool MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner::has_data() const
{
    return application_instance.is_set
	|| application_name.is_set
	|| application_role_primary.is_set
	|| application_type.is_set
	|| resource_state.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner::has_operation() const
{
    return is_set(operation)
	|| is_set(application_instance.operation)
	|| is_set(application_name.operation)
	|| is_set(application_role_primary.operation)
	|| is_set(application_type.operation)
	|| is_set(resource_state.operation);
}

std::string MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-owner";

    return path_buffer.str();

}

EntityPath MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner::get_children()
{
    return children;
}

void MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner::set_value(const std::string & value_path, std::string value)
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

MplsLsd::MplsLsd()
    :
    applications(std::make_shared<MplsLsd::Applications>())
	,clients(std::make_shared<MplsLsd::Clients>())
	,frr_database(std::make_shared<MplsLsd::FrrDatabase>())
	,interfaces(std::make_shared<MplsLsd::Interfaces>())
	,label_range(std::make_shared<MplsLsd::LabelRange>())
	,label_summary(std::make_shared<MplsLsd::LabelSummary>())
	,label_summary_vrfs(std::make_shared<MplsLsd::LabelSummaryVrfs>())
	,labels(std::make_shared<MplsLsd::Labels>())
	,rewrite(std::make_shared<MplsLsd::Rewrite>())
	,rewrite_summary(std::make_shared<MplsLsd::RewriteSummary>())
	,rewrite_summary_vrfs(std::make_shared<MplsLsd::RewriteSummaryVrfs>())
{
    applications->parent = this;
    children["applications"] = applications;

    clients->parent = this;
    children["clients"] = clients;

    frr_database->parent = this;
    children["frr-database"] = frr_database;

    interfaces->parent = this;
    children["interfaces"] = interfaces;

    label_range->parent = this;
    children["label-range"] = label_range;

    label_summary->parent = this;
    children["label-summary"] = label_summary;

    label_summary_vrfs->parent = this;
    children["label-summary-vrfs"] = label_summary_vrfs;

    labels->parent = this;
    children["labels"] = labels;

    rewrite->parent = this;
    children["rewrite"] = rewrite;

    rewrite_summary->parent = this;
    children["rewrite-summary"] = rewrite_summary;

    rewrite_summary_vrfs->parent = this;
    children["rewrite-summary-vrfs"] = rewrite_summary_vrfs;

    yang_name = "mpls-lsd"; yang_parent_name = "Cisco-IOS-XR-mpls-lsd-oper";
}

MplsLsd::~MplsLsd()
{
}

bool MplsLsd::has_data() const
{
    return (applications !=  nullptr && applications->has_data())
	|| (clients !=  nullptr && clients->has_data())
	|| (frr_database !=  nullptr && frr_database->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (label_range !=  nullptr && label_range->has_data())
	|| (label_summary !=  nullptr && label_summary->has_data())
	|| (label_summary_vrfs !=  nullptr && label_summary_vrfs->has_data())
	|| (labels !=  nullptr && labels->has_data())
	|| (rewrite !=  nullptr && rewrite->has_data())
	|| (rewrite_summary !=  nullptr && rewrite_summary->has_data())
	|| (rewrite_summary_vrfs !=  nullptr && rewrite_summary_vrfs->has_data());
}

bool MplsLsd::has_operation() const
{
    return is_set(operation)
	|| (applications !=  nullptr && applications->has_operation())
	|| (clients !=  nullptr && clients->has_operation())
	|| (frr_database !=  nullptr && frr_database->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (label_range !=  nullptr && label_range->has_operation())
	|| (label_summary !=  nullptr && label_summary->has_operation())
	|| (label_summary_vrfs !=  nullptr && label_summary_vrfs->has_operation())
	|| (labels !=  nullptr && labels->has_operation())
	|| (rewrite !=  nullptr && rewrite->has_operation())
	|| (rewrite_summary !=  nullptr && rewrite_summary->has_operation())
	|| (rewrite_summary_vrfs !=  nullptr && rewrite_summary_vrfs->has_operation());
}

std::string MplsLsd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd";

    return path_buffer.str();

}

EntityPath MplsLsd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "applications")
    {
        if(applications != nullptr)
        {
            children["applications"] = applications;
        }
        else
        {
            applications = std::make_shared<MplsLsd::Applications>();
            applications->parent = this;
            children["applications"] = applications;
        }
        return children.at("applications");
    }

    if(child_yang_name == "clients")
    {
        if(clients != nullptr)
        {
            children["clients"] = clients;
        }
        else
        {
            clients = std::make_shared<MplsLsd::Clients>();
            clients->parent = this;
            children["clients"] = clients;
        }
        return children.at("clients");
    }

    if(child_yang_name == "frr-database")
    {
        if(frr_database != nullptr)
        {
            children["frr-database"] = frr_database;
        }
        else
        {
            frr_database = std::make_shared<MplsLsd::FrrDatabase>();
            frr_database->parent = this;
            children["frr-database"] = frr_database;
        }
        return children.at("frr-database");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<MplsLsd::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "label-range")
    {
        if(label_range != nullptr)
        {
            children["label-range"] = label_range;
        }
        else
        {
            label_range = std::make_shared<MplsLsd::LabelRange>();
            label_range->parent = this;
            children["label-range"] = label_range;
        }
        return children.at("label-range");
    }

    if(child_yang_name == "label-summary")
    {
        if(label_summary != nullptr)
        {
            children["label-summary"] = label_summary;
        }
        else
        {
            label_summary = std::make_shared<MplsLsd::LabelSummary>();
            label_summary->parent = this;
            children["label-summary"] = label_summary;
        }
        return children.at("label-summary");
    }

    if(child_yang_name == "label-summary-vrfs")
    {
        if(label_summary_vrfs != nullptr)
        {
            children["label-summary-vrfs"] = label_summary_vrfs;
        }
        else
        {
            label_summary_vrfs = std::make_shared<MplsLsd::LabelSummaryVrfs>();
            label_summary_vrfs->parent = this;
            children["label-summary-vrfs"] = label_summary_vrfs;
        }
        return children.at("label-summary-vrfs");
    }

    if(child_yang_name == "labels")
    {
        if(labels != nullptr)
        {
            children["labels"] = labels;
        }
        else
        {
            labels = std::make_shared<MplsLsd::Labels>();
            labels->parent = this;
            children["labels"] = labels;
        }
        return children.at("labels");
    }

    if(child_yang_name == "rewrite")
    {
        if(rewrite != nullptr)
        {
            children["rewrite"] = rewrite;
        }
        else
        {
            rewrite = std::make_shared<MplsLsd::Rewrite>();
            rewrite->parent = this;
            children["rewrite"] = rewrite;
        }
        return children.at("rewrite");
    }

    if(child_yang_name == "rewrite-summary")
    {
        if(rewrite_summary != nullptr)
        {
            children["rewrite-summary"] = rewrite_summary;
        }
        else
        {
            rewrite_summary = std::make_shared<MplsLsd::RewriteSummary>();
            rewrite_summary->parent = this;
            children["rewrite-summary"] = rewrite_summary;
        }
        return children.at("rewrite-summary");
    }

    if(child_yang_name == "rewrite-summary-vrfs")
    {
        if(rewrite_summary_vrfs != nullptr)
        {
            children["rewrite-summary-vrfs"] = rewrite_summary_vrfs;
        }
        else
        {
            rewrite_summary_vrfs = std::make_shared<MplsLsd::RewriteSummaryVrfs>();
            rewrite_summary_vrfs->parent = this;
            children["rewrite-summary-vrfs"] = rewrite_summary_vrfs;
        }
        return children.at("rewrite-summary-vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::get_children()
{
    if(children.find("applications") == children.end())
    {
        if(applications != nullptr)
        {
            children["applications"] = applications;
        }
    }

    if(children.find("clients") == children.end())
    {
        if(clients != nullptr)
        {
            children["clients"] = clients;
        }
    }

    if(children.find("frr-database") == children.end())
    {
        if(frr_database != nullptr)
        {
            children["frr-database"] = frr_database;
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("label-range") == children.end())
    {
        if(label_range != nullptr)
        {
            children["label-range"] = label_range;
        }
    }

    if(children.find("label-summary") == children.end())
    {
        if(label_summary != nullptr)
        {
            children["label-summary"] = label_summary;
        }
    }

    if(children.find("label-summary-vrfs") == children.end())
    {
        if(label_summary_vrfs != nullptr)
        {
            children["label-summary-vrfs"] = label_summary_vrfs;
        }
    }

    if(children.find("labels") == children.end())
    {
        if(labels != nullptr)
        {
            children["labels"] = labels;
        }
    }

    if(children.find("rewrite") == children.end())
    {
        if(rewrite != nullptr)
        {
            children["rewrite"] = rewrite;
        }
    }

    if(children.find("rewrite-summary") == children.end())
    {
        if(rewrite_summary != nullptr)
        {
            children["rewrite-summary"] = rewrite_summary;
        }
    }

    if(children.find("rewrite-summary-vrfs") == children.end())
    {
        if(rewrite_summary_vrfs != nullptr)
        {
            children["rewrite-summary-vrfs"] = rewrite_summary_vrfs;
        }
    }

    return children;
}

void MplsLsd::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> MplsLsd::clone_ptr() const
{
    return std::make_shared<MplsLsd>();
}

std::string MplsLsd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsLsd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsLsd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

MplsLsd::Clients::Clients()
{
    yang_name = "clients"; yang_parent_name = "mpls-lsd";
}

MplsLsd::Clients::~Clients()
{
}

bool MplsLsd::Clients::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::Clients::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLsd::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";

    return path_buffer.str();

}

EntityPath MplsLsd::Clients::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsd::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "client")
    {
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLsd::Clients::Client>();
        c->parent = this;
        client.push_back(std::move(c));
        children[segment_path] = client.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Clients::get_children()
{
    for (auto const & c : client)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLsd::Clients::set_value(const std::string & value_path, std::string value)
{
}

MplsLsd::Clients::Client::Client()
    :
    client_name{YType::str, "client-name"},
    client_index{YType::uint32, "client-index"},
    node_id{YType::str, "node-id"}
    	,
    client_union(std::make_shared<MplsLsd::Clients::Client::ClientUnion>())
{
    client_union->parent = this;
    children["client-union"] = client_union;

    yang_name = "client"; yang_parent_name = "clients";
}

MplsLsd::Clients::Client::~Client()
{
}

bool MplsLsd::Clients::Client::has_data() const
{
    return client_name.is_set
	|| client_index.is_set
	|| node_id.is_set
	|| (client_union !=  nullptr && client_union->has_data());
}

bool MplsLsd::Clients::Client::has_operation() const
{
    return is_set(operation)
	|| is_set(client_name.operation)
	|| is_set(client_index.operation)
	|| is_set(node_id.operation)
	|| (client_union !=  nullptr && client_union->has_operation());
}

std::string MplsLsd::Clients::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client" <<"[client-name='" <<client_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLsd::Clients::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/clients/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_name.is_set || is_set(client_name.operation)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (client_index.is_set || is_set(client_index.operation)) leaf_name_data.push_back(client_index.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Clients::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "client-union")
    {
        if(client_union != nullptr)
        {
            children["client-union"] = client_union;
        }
        else
        {
            client_union = std::make_shared<MplsLsd::Clients::Client::ClientUnion>();
            client_union->parent = this;
            children["client-union"] = client_union;
        }
        return children.at("client-union");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Clients::Client::get_children()
{
    if(children.find("client-union") == children.end())
    {
        if(client_union != nullptr)
        {
            children["client-union"] = client_union;
        }
    }

    return children;
}

void MplsLsd::Clients::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-name")
    {
        client_name = value;
    }
    if(value_path == "client-index")
    {
        client_index = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
}

MplsLsd::Clients::Client::ClientUnion::ClientUnion()
    :
    lsd_client_type{YType::enumeration, "lsd-client-type"}
    	,
    application(std::make_shared<MplsLsd::Clients::Client::ClientUnion::Application>())
	,bcdl_agent(std::make_shared<MplsLsd::Clients::Client::ClientUnion::BcdlAgent>())
{
    application->parent = this;
    children["application"] = application;

    bcdl_agent->parent = this;
    children["bcdl-agent"] = bcdl_agent;

    yang_name = "client-union"; yang_parent_name = "client";
}

MplsLsd::Clients::Client::ClientUnion::~ClientUnion()
{
}

bool MplsLsd::Clients::Client::ClientUnion::has_data() const
{
    return lsd_client_type.is_set
	|| (application !=  nullptr && application->has_data())
	|| (bcdl_agent !=  nullptr && bcdl_agent->has_data());
}

bool MplsLsd::Clients::Client::ClientUnion::has_operation() const
{
    return is_set(operation)
	|| is_set(lsd_client_type.operation)
	|| (application !=  nullptr && application->has_operation())
	|| (bcdl_agent !=  nullptr && bcdl_agent->has_operation());
}

std::string MplsLsd::Clients::Client::ClientUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-union";

    return path_buffer.str();

}

EntityPath MplsLsd::Clients::Client::ClientUnion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientUnion' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsd_client_type.is_set || is_set(lsd_client_type.operation)) leaf_name_data.push_back(lsd_client_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Clients::Client::ClientUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "application")
    {
        if(application != nullptr)
        {
            children["application"] = application;
        }
        else
        {
            application = std::make_shared<MplsLsd::Clients::Client::ClientUnion::Application>();
            application->parent = this;
            children["application"] = application;
        }
        return children.at("application");
    }

    if(child_yang_name == "bcdl-agent")
    {
        if(bcdl_agent != nullptr)
        {
            children["bcdl-agent"] = bcdl_agent;
        }
        else
        {
            bcdl_agent = std::make_shared<MplsLsd::Clients::Client::ClientUnion::BcdlAgent>();
            bcdl_agent->parent = this;
            children["bcdl-agent"] = bcdl_agent;
        }
        return children.at("bcdl-agent");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Clients::Client::ClientUnion::get_children()
{
    if(children.find("application") == children.end())
    {
        if(application != nullptr)
        {
            children["application"] = application;
        }
    }

    if(children.find("bcdl-agent") == children.end())
    {
        if(bcdl_agent != nullptr)
        {
            children["bcdl-agent"] = bcdl_agent;
        }
    }

    return children;
}

void MplsLsd::Clients::Client::ClientUnion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsd-client-type")
    {
        lsd_client_type = value;
    }
}

MplsLsd::Clients::Client::ClientUnion::Application::Application()
    :
    application_instance{YType::str, "application-instance"},
    application_name{YType::str, "application-name"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_type{YType::enumeration, "application-type"}
{
    yang_name = "application"; yang_parent_name = "client-union";
}

MplsLsd::Clients::Client::ClientUnion::Application::~Application()
{
}

bool MplsLsd::Clients::Client::ClientUnion::Application::has_data() const
{
    return application_instance.is_set
	|| application_name.is_set
	|| application_role_primary.is_set
	|| application_type.is_set;
}

bool MplsLsd::Clients::Client::ClientUnion::Application::has_operation() const
{
    return is_set(operation)
	|| is_set(application_instance.operation)
	|| is_set(application_name.operation)
	|| is_set(application_role_primary.operation)
	|| is_set(application_type.operation);
}

std::string MplsLsd::Clients::Client::ClientUnion::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

EntityPath MplsLsd::Clients::Client::ClientUnion::Application::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Application' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Clients::Client::ClientUnion::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Clients::Client::ClientUnion::Application::get_children()
{
    return children;
}

void MplsLsd::Clients::Client::ClientUnion::Application::set_value(const std::string & value_path, std::string value)
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
}

MplsLsd::Clients::Client::ClientUnion::BcdlAgent::BcdlAgent()
    :
    client_conn_index{YType::int32, "client-conn-index"},
    parent_client_conn_index{YType::int32, "parent-client-conn-index"}
{
    yang_name = "bcdl-agent"; yang_parent_name = "client-union";
}

MplsLsd::Clients::Client::ClientUnion::BcdlAgent::~BcdlAgent()
{
}

bool MplsLsd::Clients::Client::ClientUnion::BcdlAgent::has_data() const
{
    return client_conn_index.is_set
	|| parent_client_conn_index.is_set;
}

bool MplsLsd::Clients::Client::ClientUnion::BcdlAgent::has_operation() const
{
    return is_set(operation)
	|| is_set(client_conn_index.operation)
	|| is_set(parent_client_conn_index.operation);
}

std::string MplsLsd::Clients::Client::ClientUnion::BcdlAgent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bcdl-agent";

    return path_buffer.str();

}

EntityPath MplsLsd::Clients::Client::ClientUnion::BcdlAgent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BcdlAgent' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_conn_index.is_set || is_set(client_conn_index.operation)) leaf_name_data.push_back(client_conn_index.get_name_leafdata());
    if (parent_client_conn_index.is_set || is_set(parent_client_conn_index.operation)) leaf_name_data.push_back(parent_client_conn_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Clients::Client::ClientUnion::BcdlAgent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Clients::Client::ClientUnion::BcdlAgent::get_children()
{
    return children;
}

void MplsLsd::Clients::Client::ClientUnion::BcdlAgent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-conn-index")
    {
        client_conn_index = value;
    }
    if(value_path == "parent-client-conn-index")
    {
        parent_client_conn_index = value;
    }
}

MplsLsd::LabelSummary::LabelSummary()
    :
    rsi_connected{YType::int32, "rsi-connected"},
    total_labels{YType::uint32, "total-labels"},
    vrf_name_xr{YType::str, "vrf-name-xr"}
{
    yang_name = "label-summary"; yang_parent_name = "mpls-lsd";
}

MplsLsd::LabelSummary::~LabelSummary()
{
}

bool MplsLsd::LabelSummary::has_data() const
{
    for (std::size_t index=0; index<owner_count.size(); index++)
    {
        if(owner_count[index]->has_data())
            return true;
    }
    return rsi_connected.is_set
	|| total_labels.is_set
	|| vrf_name_xr.is_set;
}

bool MplsLsd::LabelSummary::has_operation() const
{
    for (std::size_t index=0; index<owner_count.size(); index++)
    {
        if(owner_count[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(rsi_connected.operation)
	|| is_set(total_labels.operation)
	|| is_set(vrf_name_xr.operation);
}

std::string MplsLsd::LabelSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-summary";

    return path_buffer.str();

}

EntityPath MplsLsd::LabelSummary::get_entity_path(Entity* ancestor) const
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

    if (rsi_connected.is_set || is_set(rsi_connected.operation)) leaf_name_data.push_back(rsi_connected.get_name_leafdata());
    if (total_labels.is_set || is_set(total_labels.operation)) leaf_name_data.push_back(total_labels.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.operation)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::LabelSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "owner-count")
    {
        for(auto const & c : owner_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLsd::LabelSummary::OwnerCount>();
        c->parent = this;
        owner_count.push_back(std::move(c));
        children[segment_path] = owner_count.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::LabelSummary::get_children()
{
    for (auto const & c : owner_count)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLsd::LabelSummary::set_value(const std::string & value_path, std::string value)
{
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

MplsLsd::LabelSummary::OwnerCount::OwnerCount()
    :
    application_instance{YType::str, "application-instance"},
    application_name{YType::str, "application-name"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_type{YType::enumeration, "application-type"},
    number_of_labels{YType::uint32, "number-of-labels"}
{
    yang_name = "owner-count"; yang_parent_name = "label-summary";
}

MplsLsd::LabelSummary::OwnerCount::~OwnerCount()
{
}

bool MplsLsd::LabelSummary::OwnerCount::has_data() const
{
    return application_instance.is_set
	|| application_name.is_set
	|| application_role_primary.is_set
	|| application_type.is_set
	|| number_of_labels.is_set;
}

bool MplsLsd::LabelSummary::OwnerCount::has_operation() const
{
    return is_set(operation)
	|| is_set(application_instance.operation)
	|| is_set(application_name.operation)
	|| is_set(application_role_primary.operation)
	|| is_set(application_type.operation)
	|| is_set(number_of_labels.operation);
}

std::string MplsLsd::LabelSummary::OwnerCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-count";

    return path_buffer.str();

}

EntityPath MplsLsd::LabelSummary::OwnerCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/label-summary/" << get_segment_path();
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

std::shared_ptr<Entity> MplsLsd::LabelSummary::OwnerCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::LabelSummary::OwnerCount::get_children()
{
    return children;
}

void MplsLsd::LabelSummary::OwnerCount::set_value(const std::string & value_path, std::string value)
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

MplsLsd::Labels::Labels()
{
    yang_name = "labels"; yang_parent_name = "mpls-lsd";
}

MplsLsd::Labels::~Labels()
{
}

bool MplsLsd::Labels::has_data() const
{
    for (std::size_t index=0; index<label.size(); index++)
    {
        if(label[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::Labels::has_operation() const
{
    for (std::size_t index=0; index<label.size(); index++)
    {
        if(label[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLsd::Labels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labels";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsd::Labels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label")
    {
        for(auto const & c : label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLsd::Labels::Label>();
        c->parent = this;
        label.push_back(std::move(c));
        children[segment_path] = label.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::get_children()
{
    for (auto const & c : label)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLsd::Labels::set_value(const std::string & value_path, std::string value)
{
}

MplsLsd::Labels::Label::Label()
    :
    label_id{YType::int32, "label-id"},
    label{YType::uint32, "label"},
    rewrite_is_bound{YType::int32, "rewrite-is-bound"},
    rewrite_owners{YType::uint32, "rewrite-owners"},
    rs_iconnected{YType::int32, "rs-iconnected"},
    vrf_name{YType::str, "vrf-name"}
    	,
    label_context(std::make_shared<MplsLsd::Labels::Label::LabelContext>())
{
    label_context->parent = this;
    children["label-context"] = label_context;

    yang_name = "label"; yang_parent_name = "labels";
}

MplsLsd::Labels::Label::~Label()
{
}

bool MplsLsd::Labels::Label::has_data() const
{
    for (std::size_t index=0; index<application_owner.size(); index++)
    {
        if(application_owner[index]->has_data())
            return true;
    }
    return label_id.is_set
	|| label.is_set
	|| rewrite_is_bound.is_set
	|| rewrite_owners.is_set
	|| rs_iconnected.is_set
	|| vrf_name.is_set
	|| (label_context !=  nullptr && label_context->has_data());
}

bool MplsLsd::Labels::Label::has_operation() const
{
    for (std::size_t index=0; index<application_owner.size(); index++)
    {
        if(application_owner[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(label_id.operation)
	|| is_set(label.operation)
	|| is_set(rewrite_is_bound.operation)
	|| is_set(rewrite_owners.operation)
	|| is_set(rs_iconnected.operation)
	|| is_set(vrf_name.operation)
	|| (label_context !=  nullptr && label_context->has_operation());
}

std::string MplsLsd::Labels::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label" <<"[label-id='" <<label_id <<"']";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/labels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_id.is_set || is_set(label_id.operation)) leaf_name_data.push_back(label_id.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (rewrite_is_bound.is_set || is_set(rewrite_is_bound.operation)) leaf_name_data.push_back(rewrite_is_bound.get_name_leafdata());
    if (rewrite_owners.is_set || is_set(rewrite_owners.operation)) leaf_name_data.push_back(rewrite_owners.get_name_leafdata());
    if (rs_iconnected.is_set || is_set(rs_iconnected.operation)) leaf_name_data.push_back(rs_iconnected.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "application-owner")
    {
        for(auto const & c : application_owner)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLsd::Labels::Label::ApplicationOwner>();
        c->parent = this;
        application_owner.push_back(std::move(c));
        children[segment_path] = application_owner.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "label-context")
    {
        if(label_context != nullptr)
        {
            children["label-context"] = label_context;
        }
        else
        {
            label_context = std::make_shared<MplsLsd::Labels::Label::LabelContext>();
            label_context->parent = this;
            children["label-context"] = label_context;
        }
        return children.at("label-context");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::get_children()
{
    for (auto const & c : application_owner)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("label-context") == children.end())
    {
        if(label_context != nullptr)
        {
            children["label-context"] = label_context;
        }
    }

    return children;
}

void MplsLsd::Labels::Label::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-id")
    {
        label_id = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "rewrite-is-bound")
    {
        rewrite_is_bound = value;
    }
    if(value_path == "rewrite-owners")
    {
        rewrite_owners = value;
    }
    if(value_path == "rs-iconnected")
    {
        rs_iconnected = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

MplsLsd::Labels::Label::LabelContext::LabelContext()
    :
    application_data{YType::str, "application-data"}
    	,
    key(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key>())
{
    key->parent = this;
    children["key"] = key;

    yang_name = "label-context"; yang_parent_name = "label";
}

MplsLsd::Labels::Label::LabelContext::~LabelContext()
{
}

bool MplsLsd::Labels::Label::LabelContext::has_data() const
{
    return application_data.is_set
	|| (key !=  nullptr && key->has_data());
}

bool MplsLsd::Labels::Label::LabelContext::has_operation() const
{
    return is_set(operation)
	|| is_set(application_data.operation)
	|| (key !=  nullptr && key->has_operation());
}

std::string MplsLsd::Labels::Label::LabelContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-context";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelContext' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_data.is_set || is_set(application_data.operation)) leaf_name_data.push_back(application_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "key")
    {
        if(key != nullptr)
        {
            children["key"] = key;
        }
        else
        {
            key = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key>();
            key->parent = this;
            children["key"] = key;
        }
        return children.at("key");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::get_children()
{
    if(children.find("key") == children.end())
    {
        if(key != nullptr)
        {
            children["key"] = key;
        }
    }

    return children;
}

void MplsLsd::Labels::Label::LabelContext::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "application-data")
    {
        application_data = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::Key()
    :
    label_context_type{YType::enumeration, "label-context-type"}
    	,
    cev4l3vpn_data(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::Cev4L3VpnData>())
	,cev6l3vpn_data(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::Cev6L3VpnData>())
	,evpn_data(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::EvpnData>())
	,generic_routing_encapsulation(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation>())
	,ip_sub_data(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::IpSubData>())
	,ipv4_data(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::Ipv4Data>())
	,ipv4blb_data(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::Ipv4BlbData>())
	,ipv4l3vpn_data(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::Ipv4L3VpnData>())
	,ipv6_data(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::Ipv6Data>())
	,ipv6_generic_routing_encapsulation(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation>())
	,ipv6blb_data(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::Ipv6BlbData>())
	,ipv6l3vpn_data(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::Ipv6L3VpnData>())
	,label_block_data(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::LabelBlockData>())
	,label_block_srgb_data(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrgbData>())
	,mld_pv4_data(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::MldPv4Data>())
	,next_hop_set_l3vpn(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::NextHopSetL3Vpn>())
	,pi_mi_pmsi_data(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::PiMiPmsiData>())
	,pi_ms_pmsi_data(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::PiMsPmsiData>())
	,pseudowire_data(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::PseudowireData>())
	,pseudowire_head_end_data(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::PseudowireHeadEndData>())
	,sr_adj_segment_ipv4(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4>())
	,sr_adj_segment_ipv6(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6>())
	,sr_prefix_segment(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::SrPrefixSegment>())
	,te_binding(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::TeBinding>())
	,tev4_data(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::Tev4Data>())
	,tev4p2mp_data(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::Tev4P2MpData>())
	,tp_data(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::TpData>())
	,vrf_l3vpn_data(std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::VrfL3VpnData>())
{
    cev4l3vpn_data->parent = this;
    children["cev4l3vpn-data"] = cev4l3vpn_data;

    cev6l3vpn_data->parent = this;
    children["cev6l3vpn-data"] = cev6l3vpn_data;

    evpn_data->parent = this;
    children["evpn-data"] = evpn_data;

    generic_routing_encapsulation->parent = this;
    children["generic-routing-encapsulation"] = generic_routing_encapsulation;

    ip_sub_data->parent = this;
    children["ip-sub-data"] = ip_sub_data;

    ipv4_data->parent = this;
    children["ipv4-data"] = ipv4_data;

    ipv4blb_data->parent = this;
    children["ipv4blb-data"] = ipv4blb_data;

    ipv4l3vpn_data->parent = this;
    children["ipv4l3vpn-data"] = ipv4l3vpn_data;

    ipv6_data->parent = this;
    children["ipv6-data"] = ipv6_data;

    ipv6_generic_routing_encapsulation->parent = this;
    children["ipv6-generic-routing-encapsulation"] = ipv6_generic_routing_encapsulation;

    ipv6blb_data->parent = this;
    children["ipv6blb-data"] = ipv6blb_data;

    ipv6l3vpn_data->parent = this;
    children["ipv6l3vpn-data"] = ipv6l3vpn_data;

    label_block_data->parent = this;
    children["label-block-data"] = label_block_data;

    label_block_srgb_data->parent = this;
    children["label-block-srgb-data"] = label_block_srgb_data;

    mld_pv4_data->parent = this;
    children["mld-pv4-data"] = mld_pv4_data;

    next_hop_set_l3vpn->parent = this;
    children["next-hop-set-l3vpn"] = next_hop_set_l3vpn;

    pi_mi_pmsi_data->parent = this;
    children["pi-mi-pmsi-data"] = pi_mi_pmsi_data;

    pi_ms_pmsi_data->parent = this;
    children["pi-ms-pmsi-data"] = pi_ms_pmsi_data;

    pseudowire_data->parent = this;
    children["pseudowire-data"] = pseudowire_data;

    pseudowire_head_end_data->parent = this;
    children["pseudowire-head-end-data"] = pseudowire_head_end_data;

    sr_adj_segment_ipv4->parent = this;
    children["sr-adj-segment-ipv4"] = sr_adj_segment_ipv4;

    sr_adj_segment_ipv6->parent = this;
    children["sr-adj-segment-ipv6"] = sr_adj_segment_ipv6;

    sr_prefix_segment->parent = this;
    children["sr-prefix-segment"] = sr_prefix_segment;

    te_binding->parent = this;
    children["te-binding"] = te_binding;

    tev4_data->parent = this;
    children["tev4-data"] = tev4_data;

    tev4p2mp_data->parent = this;
    children["tev4p2mp-data"] = tev4p2mp_data;

    tp_data->parent = this;
    children["tp-data"] = tp_data;

    vrf_l3vpn_data->parent = this;
    children["vrf-l3vpn-data"] = vrf_l3vpn_data;

    yang_name = "key"; yang_parent_name = "label-context";
}

MplsLsd::Labels::Label::LabelContext::Key::~Key()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::has_data() const
{
    return label_context_type.is_set
	|| (cev4l3vpn_data !=  nullptr && cev4l3vpn_data->has_data())
	|| (cev6l3vpn_data !=  nullptr && cev6l3vpn_data->has_data())
	|| (evpn_data !=  nullptr && evpn_data->has_data())
	|| (generic_routing_encapsulation !=  nullptr && generic_routing_encapsulation->has_data())
	|| (ip_sub_data !=  nullptr && ip_sub_data->has_data())
	|| (ipv4_data !=  nullptr && ipv4_data->has_data())
	|| (ipv4blb_data !=  nullptr && ipv4blb_data->has_data())
	|| (ipv4l3vpn_data !=  nullptr && ipv4l3vpn_data->has_data())
	|| (ipv6_data !=  nullptr && ipv6_data->has_data())
	|| (ipv6_generic_routing_encapsulation !=  nullptr && ipv6_generic_routing_encapsulation->has_data())
	|| (ipv6blb_data !=  nullptr && ipv6blb_data->has_data())
	|| (ipv6l3vpn_data !=  nullptr && ipv6l3vpn_data->has_data())
	|| (label_block_data !=  nullptr && label_block_data->has_data())
	|| (label_block_srgb_data !=  nullptr && label_block_srgb_data->has_data())
	|| (mld_pv4_data !=  nullptr && mld_pv4_data->has_data())
	|| (next_hop_set_l3vpn !=  nullptr && next_hop_set_l3vpn->has_data())
	|| (pi_mi_pmsi_data !=  nullptr && pi_mi_pmsi_data->has_data())
	|| (pi_ms_pmsi_data !=  nullptr && pi_ms_pmsi_data->has_data())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_data())
	|| (pseudowire_head_end_data !=  nullptr && pseudowire_head_end_data->has_data())
	|| (sr_adj_segment_ipv4 !=  nullptr && sr_adj_segment_ipv4->has_data())
	|| (sr_adj_segment_ipv6 !=  nullptr && sr_adj_segment_ipv6->has_data())
	|| (sr_prefix_segment !=  nullptr && sr_prefix_segment->has_data())
	|| (te_binding !=  nullptr && te_binding->has_data())
	|| (tev4_data !=  nullptr && tev4_data->has_data())
	|| (tev4p2mp_data !=  nullptr && tev4p2mp_data->has_data())
	|| (tp_data !=  nullptr && tp_data->has_data())
	|| (vrf_l3vpn_data !=  nullptr && vrf_l3vpn_data->has_data());
}

bool MplsLsd::Labels::Label::LabelContext::Key::has_operation() const
{
    return is_set(operation)
	|| is_set(label_context_type.operation)
	|| (cev4l3vpn_data !=  nullptr && cev4l3vpn_data->has_operation())
	|| (cev6l3vpn_data !=  nullptr && cev6l3vpn_data->has_operation())
	|| (evpn_data !=  nullptr && evpn_data->has_operation())
	|| (generic_routing_encapsulation !=  nullptr && generic_routing_encapsulation->has_operation())
	|| (ip_sub_data !=  nullptr && ip_sub_data->has_operation())
	|| (ipv4_data !=  nullptr && ipv4_data->has_operation())
	|| (ipv4blb_data !=  nullptr && ipv4blb_data->has_operation())
	|| (ipv4l3vpn_data !=  nullptr && ipv4l3vpn_data->has_operation())
	|| (ipv6_data !=  nullptr && ipv6_data->has_operation())
	|| (ipv6_generic_routing_encapsulation !=  nullptr && ipv6_generic_routing_encapsulation->has_operation())
	|| (ipv6blb_data !=  nullptr && ipv6blb_data->has_operation())
	|| (ipv6l3vpn_data !=  nullptr && ipv6l3vpn_data->has_operation())
	|| (label_block_data !=  nullptr && label_block_data->has_operation())
	|| (label_block_srgb_data !=  nullptr && label_block_srgb_data->has_operation())
	|| (mld_pv4_data !=  nullptr && mld_pv4_data->has_operation())
	|| (next_hop_set_l3vpn !=  nullptr && next_hop_set_l3vpn->has_operation())
	|| (pi_mi_pmsi_data !=  nullptr && pi_mi_pmsi_data->has_operation())
	|| (pi_ms_pmsi_data !=  nullptr && pi_ms_pmsi_data->has_operation())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_operation())
	|| (pseudowire_head_end_data !=  nullptr && pseudowire_head_end_data->has_operation())
	|| (sr_adj_segment_ipv4 !=  nullptr && sr_adj_segment_ipv4->has_operation())
	|| (sr_adj_segment_ipv6 !=  nullptr && sr_adj_segment_ipv6->has_operation())
	|| (sr_prefix_segment !=  nullptr && sr_prefix_segment->has_operation())
	|| (te_binding !=  nullptr && te_binding->has_operation())
	|| (tev4_data !=  nullptr && tev4_data->has_operation())
	|| (tev4p2mp_data !=  nullptr && tev4p2mp_data->has_operation())
	|| (tp_data !=  nullptr && tp_data->has_operation())
	|| (vrf_l3vpn_data !=  nullptr && vrf_l3vpn_data->has_operation());
}

std::string MplsLsd::Labels::Label::LabelContext::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_context_type.is_set || is_set(label_context_type.operation)) leaf_name_data.push_back(label_context_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cev4l3vpn-data")
    {
        if(cev4l3vpn_data != nullptr)
        {
            children["cev4l3vpn-data"] = cev4l3vpn_data;
        }
        else
        {
            cev4l3vpn_data = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::Cev4L3VpnData>();
            cev4l3vpn_data->parent = this;
            children["cev4l3vpn-data"] = cev4l3vpn_data;
        }
        return children.at("cev4l3vpn-data");
    }

    if(child_yang_name == "cev6l3vpn-data")
    {
        if(cev6l3vpn_data != nullptr)
        {
            children["cev6l3vpn-data"] = cev6l3vpn_data;
        }
        else
        {
            cev6l3vpn_data = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::Cev6L3VpnData>();
            cev6l3vpn_data->parent = this;
            children["cev6l3vpn-data"] = cev6l3vpn_data;
        }
        return children.at("cev6l3vpn-data");
    }

    if(child_yang_name == "evpn-data")
    {
        if(evpn_data != nullptr)
        {
            children["evpn-data"] = evpn_data;
        }
        else
        {
            evpn_data = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::EvpnData>();
            evpn_data->parent = this;
            children["evpn-data"] = evpn_data;
        }
        return children.at("evpn-data");
    }

    if(child_yang_name == "generic-routing-encapsulation")
    {
        if(generic_routing_encapsulation != nullptr)
        {
            children["generic-routing-encapsulation"] = generic_routing_encapsulation;
        }
        else
        {
            generic_routing_encapsulation = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation>();
            generic_routing_encapsulation->parent = this;
            children["generic-routing-encapsulation"] = generic_routing_encapsulation;
        }
        return children.at("generic-routing-encapsulation");
    }

    if(child_yang_name == "ip-sub-data")
    {
        if(ip_sub_data != nullptr)
        {
            children["ip-sub-data"] = ip_sub_data;
        }
        else
        {
            ip_sub_data = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::IpSubData>();
            ip_sub_data->parent = this;
            children["ip-sub-data"] = ip_sub_data;
        }
        return children.at("ip-sub-data");
    }

    if(child_yang_name == "ipv4-data")
    {
        if(ipv4_data != nullptr)
        {
            children["ipv4-data"] = ipv4_data;
        }
        else
        {
            ipv4_data = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::Ipv4Data>();
            ipv4_data->parent = this;
            children["ipv4-data"] = ipv4_data;
        }
        return children.at("ipv4-data");
    }

    if(child_yang_name == "ipv4blb-data")
    {
        if(ipv4blb_data != nullptr)
        {
            children["ipv4blb-data"] = ipv4blb_data;
        }
        else
        {
            ipv4blb_data = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::Ipv4BlbData>();
            ipv4blb_data->parent = this;
            children["ipv4blb-data"] = ipv4blb_data;
        }
        return children.at("ipv4blb-data");
    }

    if(child_yang_name == "ipv4l3vpn-data")
    {
        if(ipv4l3vpn_data != nullptr)
        {
            children["ipv4l3vpn-data"] = ipv4l3vpn_data;
        }
        else
        {
            ipv4l3vpn_data = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::Ipv4L3VpnData>();
            ipv4l3vpn_data->parent = this;
            children["ipv4l3vpn-data"] = ipv4l3vpn_data;
        }
        return children.at("ipv4l3vpn-data");
    }

    if(child_yang_name == "ipv6-data")
    {
        if(ipv6_data != nullptr)
        {
            children["ipv6-data"] = ipv6_data;
        }
        else
        {
            ipv6_data = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::Ipv6Data>();
            ipv6_data->parent = this;
            children["ipv6-data"] = ipv6_data;
        }
        return children.at("ipv6-data");
    }

    if(child_yang_name == "ipv6-generic-routing-encapsulation")
    {
        if(ipv6_generic_routing_encapsulation != nullptr)
        {
            children["ipv6-generic-routing-encapsulation"] = ipv6_generic_routing_encapsulation;
        }
        else
        {
            ipv6_generic_routing_encapsulation = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation>();
            ipv6_generic_routing_encapsulation->parent = this;
            children["ipv6-generic-routing-encapsulation"] = ipv6_generic_routing_encapsulation;
        }
        return children.at("ipv6-generic-routing-encapsulation");
    }

    if(child_yang_name == "ipv6blb-data")
    {
        if(ipv6blb_data != nullptr)
        {
            children["ipv6blb-data"] = ipv6blb_data;
        }
        else
        {
            ipv6blb_data = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::Ipv6BlbData>();
            ipv6blb_data->parent = this;
            children["ipv6blb-data"] = ipv6blb_data;
        }
        return children.at("ipv6blb-data");
    }

    if(child_yang_name == "ipv6l3vpn-data")
    {
        if(ipv6l3vpn_data != nullptr)
        {
            children["ipv6l3vpn-data"] = ipv6l3vpn_data;
        }
        else
        {
            ipv6l3vpn_data = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::Ipv6L3VpnData>();
            ipv6l3vpn_data->parent = this;
            children["ipv6l3vpn-data"] = ipv6l3vpn_data;
        }
        return children.at("ipv6l3vpn-data");
    }

    if(child_yang_name == "label-block-data")
    {
        if(label_block_data != nullptr)
        {
            children["label-block-data"] = label_block_data;
        }
        else
        {
            label_block_data = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::LabelBlockData>();
            label_block_data->parent = this;
            children["label-block-data"] = label_block_data;
        }
        return children.at("label-block-data");
    }

    if(child_yang_name == "label-block-srgb-data")
    {
        if(label_block_srgb_data != nullptr)
        {
            children["label-block-srgb-data"] = label_block_srgb_data;
        }
        else
        {
            label_block_srgb_data = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrgbData>();
            label_block_srgb_data->parent = this;
            children["label-block-srgb-data"] = label_block_srgb_data;
        }
        return children.at("label-block-srgb-data");
    }

    if(child_yang_name == "mld-pv4-data")
    {
        if(mld_pv4_data != nullptr)
        {
            children["mld-pv4-data"] = mld_pv4_data;
        }
        else
        {
            mld_pv4_data = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::MldPv4Data>();
            mld_pv4_data->parent = this;
            children["mld-pv4-data"] = mld_pv4_data;
        }
        return children.at("mld-pv4-data");
    }

    if(child_yang_name == "next-hop-set-l3vpn")
    {
        if(next_hop_set_l3vpn != nullptr)
        {
            children["next-hop-set-l3vpn"] = next_hop_set_l3vpn;
        }
        else
        {
            next_hop_set_l3vpn = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::NextHopSetL3Vpn>();
            next_hop_set_l3vpn->parent = this;
            children["next-hop-set-l3vpn"] = next_hop_set_l3vpn;
        }
        return children.at("next-hop-set-l3vpn");
    }

    if(child_yang_name == "pi-mi-pmsi-data")
    {
        if(pi_mi_pmsi_data != nullptr)
        {
            children["pi-mi-pmsi-data"] = pi_mi_pmsi_data;
        }
        else
        {
            pi_mi_pmsi_data = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::PiMiPmsiData>();
            pi_mi_pmsi_data->parent = this;
            children["pi-mi-pmsi-data"] = pi_mi_pmsi_data;
        }
        return children.at("pi-mi-pmsi-data");
    }

    if(child_yang_name == "pi-ms-pmsi-data")
    {
        if(pi_ms_pmsi_data != nullptr)
        {
            children["pi-ms-pmsi-data"] = pi_ms_pmsi_data;
        }
        else
        {
            pi_ms_pmsi_data = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::PiMsPmsiData>();
            pi_ms_pmsi_data->parent = this;
            children["pi-ms-pmsi-data"] = pi_ms_pmsi_data;
        }
        return children.at("pi-ms-pmsi-data");
    }

    if(child_yang_name == "pseudowire-data")
    {
        if(pseudowire_data != nullptr)
        {
            children["pseudowire-data"] = pseudowire_data;
        }
        else
        {
            pseudowire_data = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::PseudowireData>();
            pseudowire_data->parent = this;
            children["pseudowire-data"] = pseudowire_data;
        }
        return children.at("pseudowire-data");
    }

    if(child_yang_name == "pseudowire-head-end-data")
    {
        if(pseudowire_head_end_data != nullptr)
        {
            children["pseudowire-head-end-data"] = pseudowire_head_end_data;
        }
        else
        {
            pseudowire_head_end_data = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::PseudowireHeadEndData>();
            pseudowire_head_end_data->parent = this;
            children["pseudowire-head-end-data"] = pseudowire_head_end_data;
        }
        return children.at("pseudowire-head-end-data");
    }

    if(child_yang_name == "sr-adj-segment-ipv4")
    {
        if(sr_adj_segment_ipv4 != nullptr)
        {
            children["sr-adj-segment-ipv4"] = sr_adj_segment_ipv4;
        }
        else
        {
            sr_adj_segment_ipv4 = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4>();
            sr_adj_segment_ipv4->parent = this;
            children["sr-adj-segment-ipv4"] = sr_adj_segment_ipv4;
        }
        return children.at("sr-adj-segment-ipv4");
    }

    if(child_yang_name == "sr-adj-segment-ipv6")
    {
        if(sr_adj_segment_ipv6 != nullptr)
        {
            children["sr-adj-segment-ipv6"] = sr_adj_segment_ipv6;
        }
        else
        {
            sr_adj_segment_ipv6 = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6>();
            sr_adj_segment_ipv6->parent = this;
            children["sr-adj-segment-ipv6"] = sr_adj_segment_ipv6;
        }
        return children.at("sr-adj-segment-ipv6");
    }

    if(child_yang_name == "sr-prefix-segment")
    {
        if(sr_prefix_segment != nullptr)
        {
            children["sr-prefix-segment"] = sr_prefix_segment;
        }
        else
        {
            sr_prefix_segment = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::SrPrefixSegment>();
            sr_prefix_segment->parent = this;
            children["sr-prefix-segment"] = sr_prefix_segment;
        }
        return children.at("sr-prefix-segment");
    }

    if(child_yang_name == "te-binding")
    {
        if(te_binding != nullptr)
        {
            children["te-binding"] = te_binding;
        }
        else
        {
            te_binding = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::TeBinding>();
            te_binding->parent = this;
            children["te-binding"] = te_binding;
        }
        return children.at("te-binding");
    }

    if(child_yang_name == "tev4-data")
    {
        if(tev4_data != nullptr)
        {
            children["tev4-data"] = tev4_data;
        }
        else
        {
            tev4_data = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::Tev4Data>();
            tev4_data->parent = this;
            children["tev4-data"] = tev4_data;
        }
        return children.at("tev4-data");
    }

    if(child_yang_name == "tev4p2mp-data")
    {
        if(tev4p2mp_data != nullptr)
        {
            children["tev4p2mp-data"] = tev4p2mp_data;
        }
        else
        {
            tev4p2mp_data = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::Tev4P2MpData>();
            tev4p2mp_data->parent = this;
            children["tev4p2mp-data"] = tev4p2mp_data;
        }
        return children.at("tev4p2mp-data");
    }

    if(child_yang_name == "tp-data")
    {
        if(tp_data != nullptr)
        {
            children["tp-data"] = tp_data;
        }
        else
        {
            tp_data = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::TpData>();
            tp_data->parent = this;
            children["tp-data"] = tp_data;
        }
        return children.at("tp-data");
    }

    if(child_yang_name == "vrf-l3vpn-data")
    {
        if(vrf_l3vpn_data != nullptr)
        {
            children["vrf-l3vpn-data"] = vrf_l3vpn_data;
        }
        else
        {
            vrf_l3vpn_data = std::make_shared<MplsLsd::Labels::Label::LabelContext::Key::VrfL3VpnData>();
            vrf_l3vpn_data->parent = this;
            children["vrf-l3vpn-data"] = vrf_l3vpn_data;
        }
        return children.at("vrf-l3vpn-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::get_children()
{
    if(children.find("cev4l3vpn-data") == children.end())
    {
        if(cev4l3vpn_data != nullptr)
        {
            children["cev4l3vpn-data"] = cev4l3vpn_data;
        }
    }

    if(children.find("cev6l3vpn-data") == children.end())
    {
        if(cev6l3vpn_data != nullptr)
        {
            children["cev6l3vpn-data"] = cev6l3vpn_data;
        }
    }

    if(children.find("evpn-data") == children.end())
    {
        if(evpn_data != nullptr)
        {
            children["evpn-data"] = evpn_data;
        }
    }

    if(children.find("generic-routing-encapsulation") == children.end())
    {
        if(generic_routing_encapsulation != nullptr)
        {
            children["generic-routing-encapsulation"] = generic_routing_encapsulation;
        }
    }

    if(children.find("ip-sub-data") == children.end())
    {
        if(ip_sub_data != nullptr)
        {
            children["ip-sub-data"] = ip_sub_data;
        }
    }

    if(children.find("ipv4-data") == children.end())
    {
        if(ipv4_data != nullptr)
        {
            children["ipv4-data"] = ipv4_data;
        }
    }

    if(children.find("ipv4blb-data") == children.end())
    {
        if(ipv4blb_data != nullptr)
        {
            children["ipv4blb-data"] = ipv4blb_data;
        }
    }

    if(children.find("ipv4l3vpn-data") == children.end())
    {
        if(ipv4l3vpn_data != nullptr)
        {
            children["ipv4l3vpn-data"] = ipv4l3vpn_data;
        }
    }

    if(children.find("ipv6-data") == children.end())
    {
        if(ipv6_data != nullptr)
        {
            children["ipv6-data"] = ipv6_data;
        }
    }

    if(children.find("ipv6-generic-routing-encapsulation") == children.end())
    {
        if(ipv6_generic_routing_encapsulation != nullptr)
        {
            children["ipv6-generic-routing-encapsulation"] = ipv6_generic_routing_encapsulation;
        }
    }

    if(children.find("ipv6blb-data") == children.end())
    {
        if(ipv6blb_data != nullptr)
        {
            children["ipv6blb-data"] = ipv6blb_data;
        }
    }

    if(children.find("ipv6l3vpn-data") == children.end())
    {
        if(ipv6l3vpn_data != nullptr)
        {
            children["ipv6l3vpn-data"] = ipv6l3vpn_data;
        }
    }

    if(children.find("label-block-data") == children.end())
    {
        if(label_block_data != nullptr)
        {
            children["label-block-data"] = label_block_data;
        }
    }

    if(children.find("label-block-srgb-data") == children.end())
    {
        if(label_block_srgb_data != nullptr)
        {
            children["label-block-srgb-data"] = label_block_srgb_data;
        }
    }

    if(children.find("mld-pv4-data") == children.end())
    {
        if(mld_pv4_data != nullptr)
        {
            children["mld-pv4-data"] = mld_pv4_data;
        }
    }

    if(children.find("next-hop-set-l3vpn") == children.end())
    {
        if(next_hop_set_l3vpn != nullptr)
        {
            children["next-hop-set-l3vpn"] = next_hop_set_l3vpn;
        }
    }

    if(children.find("pi-mi-pmsi-data") == children.end())
    {
        if(pi_mi_pmsi_data != nullptr)
        {
            children["pi-mi-pmsi-data"] = pi_mi_pmsi_data;
        }
    }

    if(children.find("pi-ms-pmsi-data") == children.end())
    {
        if(pi_ms_pmsi_data != nullptr)
        {
            children["pi-ms-pmsi-data"] = pi_ms_pmsi_data;
        }
    }

    if(children.find("pseudowire-data") == children.end())
    {
        if(pseudowire_data != nullptr)
        {
            children["pseudowire-data"] = pseudowire_data;
        }
    }

    if(children.find("pseudowire-head-end-data") == children.end())
    {
        if(pseudowire_head_end_data != nullptr)
        {
            children["pseudowire-head-end-data"] = pseudowire_head_end_data;
        }
    }

    if(children.find("sr-adj-segment-ipv4") == children.end())
    {
        if(sr_adj_segment_ipv4 != nullptr)
        {
            children["sr-adj-segment-ipv4"] = sr_adj_segment_ipv4;
        }
    }

    if(children.find("sr-adj-segment-ipv6") == children.end())
    {
        if(sr_adj_segment_ipv6 != nullptr)
        {
            children["sr-adj-segment-ipv6"] = sr_adj_segment_ipv6;
        }
    }

    if(children.find("sr-prefix-segment") == children.end())
    {
        if(sr_prefix_segment != nullptr)
        {
            children["sr-prefix-segment"] = sr_prefix_segment;
        }
    }

    if(children.find("te-binding") == children.end())
    {
        if(te_binding != nullptr)
        {
            children["te-binding"] = te_binding;
        }
    }

    if(children.find("tev4-data") == children.end())
    {
        if(tev4_data != nullptr)
        {
            children["tev4-data"] = tev4_data;
        }
    }

    if(children.find("tev4p2mp-data") == children.end())
    {
        if(tev4p2mp_data != nullptr)
        {
            children["tev4p2mp-data"] = tev4p2mp_data;
        }
    }

    if(children.find("tp-data") == children.end())
    {
        if(tp_data != nullptr)
        {
            children["tp-data"] = tp_data;
        }
    }

    if(children.find("vrf-l3vpn-data") == children.end())
    {
        if(vrf_l3vpn_data != nullptr)
        {
            children["vrf-l3vpn-data"] = vrf_l3vpn_data;
        }
    }

    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-context-type")
    {
        label_context_type = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::Ipv4Data::Ipv4Data()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv4-data"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::Ipv4Data::~Ipv4Data()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::Ipv4Data::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| security_id.is_set
	|| table_id.is_set
	|| vrf_name.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::Ipv4Data::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(security_id.operation)
	|| is_set(table_id.operation)
	|| is_set(vrf_name.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::Ipv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-data";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::Ipv4Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Data' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.operation)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::Ipv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::Ipv4Data::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::Ipv4Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "security-id")
    {
        security_id = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::Ipv6Data::Ipv6Data()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv6-data"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::Ipv6Data::~Ipv6Data()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::Ipv6Data::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| security_id.is_set
	|| table_id.is_set
	|| vrf_name.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::Ipv6Data::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(security_id.operation)
	|| is_set(table_id.operation)
	|| is_set(vrf_name.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::Ipv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-data";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::Ipv6Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Data' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.operation)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::Ipv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::Ipv6Data::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::Ipv6Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "security-id")
    {
        security_id = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::Tev4Data::Tev4Data()
    :
    is_srte{YType::int32, "is-srte"},
    table_id{YType::uint32, "table-id"},
    tunnel_dest{YType::str, "tunnel-dest"},
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_id_extension{YType::uint32, "tunnel-id-extension"},
    tunnel_lsp_id{YType::uint32, "tunnel-lsp-id"},
    tunnel_source{YType::str, "tunnel-source"}
{
    yang_name = "tev4-data"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::Tev4Data::~Tev4Data()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::Tev4Data::has_data() const
{
    return is_srte.is_set
	|| table_id.is_set
	|| tunnel_dest.is_set
	|| tunnel_id.is_set
	|| tunnel_id_extension.is_set
	|| tunnel_lsp_id.is_set
	|| tunnel_source.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::Tev4Data::has_operation() const
{
    return is_set(operation)
	|| is_set(is_srte.operation)
	|| is_set(table_id.operation)
	|| is_set(tunnel_dest.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(tunnel_id_extension.operation)
	|| is_set(tunnel_lsp_id.operation)
	|| is_set(tunnel_source.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::Tev4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tev4-data";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::Tev4Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tev4Data' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_srte.is_set || is_set(is_srte.operation)) leaf_name_data.push_back(is_srte.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (tunnel_dest.is_set || is_set(tunnel_dest.operation)) leaf_name_data.push_back(tunnel_dest.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_extension.is_set || is_set(tunnel_id_extension.operation)) leaf_name_data.push_back(tunnel_id_extension.get_name_leafdata());
    if (tunnel_lsp_id.is_set || is_set(tunnel_lsp_id.operation)) leaf_name_data.push_back(tunnel_lsp_id.get_name_leafdata());
    if (tunnel_source.is_set || is_set(tunnel_source.operation)) leaf_name_data.push_back(tunnel_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::Tev4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::Tev4Data::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::Tev4Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-srte")
    {
        is_srte = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "tunnel-dest")
    {
        tunnel_dest = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "tunnel-id-extension")
    {
        tunnel_id_extension = value;
    }
    if(value_path == "tunnel-lsp-id")
    {
        tunnel_lsp_id = value;
    }
    if(value_path == "tunnel-source")
    {
        tunnel_source = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::Ipv4L3VpnData::Ipv4L3VpnData()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    route_distinguisher{YType::uint64, "route-distinguisher"}
{
    yang_name = "ipv4l3vpn-data"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::Ipv4L3VpnData::~Ipv4L3VpnData()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::Ipv4L3VpnData::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| route_distinguisher.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::Ipv4L3VpnData::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_distinguisher.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::Ipv4L3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4l3vpn-data";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::Ipv4L3VpnData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4L3VpnData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.operation)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::Ipv4L3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::Ipv4L3VpnData::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::Ipv4L3VpnData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::Ipv6L3VpnData::Ipv6L3VpnData()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    route_distinguisher{YType::uint64, "route-distinguisher"}
{
    yang_name = "ipv6l3vpn-data"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::Ipv6L3VpnData::~Ipv6L3VpnData()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::Ipv6L3VpnData::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| route_distinguisher.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::Ipv6L3VpnData::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_distinguisher.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::Ipv6L3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6l3vpn-data";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::Ipv6L3VpnData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6L3VpnData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.operation)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::Ipv6L3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::Ipv6L3VpnData::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::Ipv6L3VpnData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::VrfL3VpnData::VrfL3VpnData()
    :
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"}
{
    yang_name = "vrf-l3vpn-data"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::VrfL3VpnData::~VrfL3VpnData()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::VrfL3VpnData::has_data() const
{
    return security_id.is_set
	|| table_id.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::VrfL3VpnData::has_operation() const
{
    return is_set(operation)
	|| is_set(security_id.operation)
	|| is_set(table_id.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::VrfL3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-l3vpn-data";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::VrfL3VpnData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfL3VpnData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security_id.is_set || is_set(security_id.operation)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::VrfL3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::VrfL3VpnData::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::VrfL3VpnData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "security-id")
    {
        security_id = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::Cev4L3VpnData::Cev4L3VpnData()
    :
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"}
{
    yang_name = "cev4l3vpn-data"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::Cev4L3VpnData::~Cev4L3VpnData()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::Cev4L3VpnData::has_data() const
{
    return ipv4_next_hop.is_set
	|| security_id.is_set
	|| table_id.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::Cev4L3VpnData::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_next_hop.operation)
	|| is_set(security_id.operation)
	|| is_set(table_id.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::Cev4L3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cev4l3vpn-data";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::Cev4L3VpnData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cev4L3VpnData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.operation)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.operation)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::Cev4L3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::Cev4L3VpnData::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::Cev4L3VpnData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
    }
    if(value_path == "security-id")
    {
        security_id = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::Cev6L3VpnData::Cev6L3VpnData()
    :
    ipv6_next_hop{YType::str, "ipv6-next-hop"},
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"}
{
    yang_name = "cev6l3vpn-data"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::Cev6L3VpnData::~Cev6L3VpnData()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::Cev6L3VpnData::has_data() const
{
    return ipv6_next_hop.is_set
	|| security_id.is_set
	|| table_id.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::Cev6L3VpnData::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_next_hop.operation)
	|| is_set(security_id.operation)
	|| is_set(table_id.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::Cev6L3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cev6l3vpn-data";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::Cev6L3VpnData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cev6L3VpnData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_next_hop.is_set || is_set(ipv6_next_hop.operation)) leaf_name_data.push_back(ipv6_next_hop.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.operation)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::Cev6L3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::Cev6L3VpnData::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::Cev6L3VpnData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-next-hop")
    {
        ipv6_next_hop = value;
    }
    if(value_path == "security-id")
    {
        security_id = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::PseudowireData::PseudowireData()
    :
    prefix{YType::str, "prefix"},
    pseudowire_id{YType::uint64, "pseudowire-id"},
    remote_l2_router_id{YType::uint32, "remote-l2-router-id"},
    subinterface{YType::str, "subinterface"}
{
    yang_name = "pseudowire-data"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::PseudowireData::~PseudowireData()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::PseudowireData::has_data() const
{
    return prefix.is_set
	|| pseudowire_id.is_set
	|| remote_l2_router_id.is_set
	|| subinterface.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::PseudowireData::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(pseudowire_id.operation)
	|| is_set(remote_l2_router_id.operation)
	|| is_set(subinterface.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::PseudowireData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-data";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::PseudowireData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.operation)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (remote_l2_router_id.is_set || is_set(remote_l2_router_id.operation)) leaf_name_data.push_back(remote_l2_router_id.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.operation)) leaf_name_data.push_back(subinterface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::PseudowireData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::PseudowireData::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::PseudowireData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
    }
    if(value_path == "remote-l2-router-id")
    {
        remote_l2_router_id = value;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::LabelBlockData::LabelBlockData()
    :
    edge_id{YType::uint16, "edge-id"},
    offset{YType::uint32, "offset"},
    service{YType::uint8, "service"},
    size{YType::uint32, "size"},
    vpn_id{YType::uint16, "vpn-id"}
{
    yang_name = "label-block-data"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::LabelBlockData::~LabelBlockData()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::LabelBlockData::has_data() const
{
    return edge_id.is_set
	|| offset.is_set
	|| service.is_set
	|| size.is_set
	|| vpn_id.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::LabelBlockData::has_operation() const
{
    return is_set(operation)
	|| is_set(edge_id.operation)
	|| is_set(offset.operation)
	|| is_set(service.operation)
	|| is_set(size.operation)
	|| is_set(vpn_id.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::LabelBlockData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block-data";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::LabelBlockData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelBlockData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (edge_id.is_set || is_set(edge_id.operation)) leaf_name_data.push_back(edge_id.get_name_leafdata());
    if (offset.is_set || is_set(offset.operation)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (service.is_set || is_set(service.operation)) leaf_name_data.push_back(service.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.operation)) leaf_name_data.push_back(vpn_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::LabelBlockData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::LabelBlockData::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::LabelBlockData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "edge-id")
    {
        edge_id = value;
    }
    if(value_path == "offset")
    {
        offset = value;
    }
    if(value_path == "service")
    {
        service = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::IpSubData::IpSubData()
    :
    parent_interface{YType::str, "parent-interface"},
    table_id{YType::uint32, "table-id"}
{
    yang_name = "ip-sub-data"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::IpSubData::~IpSubData()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::IpSubData::has_data() const
{
    return parent_interface.is_set
	|| table_id.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::IpSubData::has_operation() const
{
    return is_set(operation)
	|| is_set(parent_interface.operation)
	|| is_set(table_id.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::IpSubData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-sub-data";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::IpSubData::get_entity_path(Entity* ancestor) const
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

    if (parent_interface.is_set || is_set(parent_interface.operation)) leaf_name_data.push_back(parent_interface.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::IpSubData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::IpSubData::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::IpSubData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "parent-interface")
    {
        parent_interface = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::Tev4P2MpData::Tev4P2MpData()
    :
    p2mp_id{YType::uint32, "p2mp-id"},
    previous_hop{YType::str, "previous-hop"},
    table_id{YType::uint32, "table-id"},
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_id_extension{YType::uint32, "tunnel-id-extension"},
    tunnel_lsp_id{YType::uint32, "tunnel-lsp-id"},
    tunnel_source{YType::str, "tunnel-source"}
{
    yang_name = "tev4p2mp-data"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::Tev4P2MpData::~Tev4P2MpData()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::Tev4P2MpData::has_data() const
{
    return p2mp_id.is_set
	|| previous_hop.is_set
	|| table_id.is_set
	|| tunnel_id.is_set
	|| tunnel_id_extension.is_set
	|| tunnel_lsp_id.is_set
	|| tunnel_source.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::Tev4P2MpData::has_operation() const
{
    return is_set(operation)
	|| is_set(p2mp_id.operation)
	|| is_set(previous_hop.operation)
	|| is_set(table_id.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(tunnel_id_extension.operation)
	|| is_set(tunnel_lsp_id.operation)
	|| is_set(tunnel_source.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::Tev4P2MpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tev4p2mp-data";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::Tev4P2MpData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tev4P2MpData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (previous_hop.is_set || is_set(previous_hop.operation)) leaf_name_data.push_back(previous_hop.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_extension.is_set || is_set(tunnel_id_extension.operation)) leaf_name_data.push_back(tunnel_id_extension.get_name_leafdata());
    if (tunnel_lsp_id.is_set || is_set(tunnel_lsp_id.operation)) leaf_name_data.push_back(tunnel_lsp_id.get_name_leafdata());
    if (tunnel_source.is_set || is_set(tunnel_source.operation)) leaf_name_data.push_back(tunnel_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::Tev4P2MpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::Tev4P2MpData::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::Tev4P2MpData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "previous-hop")
    {
        previous_hop = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "tunnel-id-extension")
    {
        tunnel_id_extension = value;
    }
    if(value_path == "tunnel-lsp-id")
    {
        tunnel_lsp_id = value;
    }
    if(value_path == "tunnel-source")
    {
        tunnel_source = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::MldPv4Data::MldPv4Data()
    :
    lsm_id{YType::uint32, "lsm-id"},
    peer_label_space_id{YType::uint16, "peer-label-space-id"},
    peer_lsrid{YType::str, "peer-lsrid"},
    table_id{YType::uint32, "table-id"},
    type{YType::uint16, "type"}
{
    yang_name = "mld-pv4-data"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::MldPv4Data::~MldPv4Data()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::MldPv4Data::has_data() const
{
    return lsm_id.is_set
	|| peer_label_space_id.is_set
	|| peer_lsrid.is_set
	|| table_id.is_set
	|| type.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::MldPv4Data::has_operation() const
{
    return is_set(operation)
	|| is_set(lsm_id.operation)
	|| is_set(peer_label_space_id.operation)
	|| is_set(peer_lsrid.operation)
	|| is_set(table_id.operation)
	|| is_set(type.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::MldPv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld-pv4-data";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::MldPv4Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MldPv4Data' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsm_id.is_set || is_set(lsm_id.operation)) leaf_name_data.push_back(lsm_id.get_name_leafdata());
    if (peer_label_space_id.is_set || is_set(peer_label_space_id.operation)) leaf_name_data.push_back(peer_label_space_id.get_name_leafdata());
    if (peer_lsrid.is_set || is_set(peer_lsrid.operation)) leaf_name_data.push_back(peer_lsrid.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::MldPv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::MldPv4Data::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::MldPv4Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsm-id")
    {
        lsm_id = value;
    }
    if(value_path == "peer-label-space-id")
    {
        peer_label_space_id = value;
    }
    if(value_path == "peer-lsrid")
    {
        peer_lsrid = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::PseudowireHeadEndData::PseudowireHeadEndData()
    :
    pwhe_intf{YType::str, "pwhe-intf"}
{
    yang_name = "pseudowire-head-end-data"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::PseudowireHeadEndData::~PseudowireHeadEndData()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::PseudowireHeadEndData::has_data() const
{
    return pwhe_intf.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::PseudowireHeadEndData::has_operation() const
{
    return is_set(operation)
	|| is_set(pwhe_intf.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::PseudowireHeadEndData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-head-end-data";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::PseudowireHeadEndData::get_entity_path(Entity* ancestor) const
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

    if (pwhe_intf.is_set || is_set(pwhe_intf.operation)) leaf_name_data.push_back(pwhe_intf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::PseudowireHeadEndData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::PseudowireHeadEndData::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::PseudowireHeadEndData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pwhe-intf")
    {
        pwhe_intf = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::TpData::TpData()
    :
    dest_global_id{YType::uint32, "dest-global-id"},
    dest_node_id{YType::str, "dest-node-id"},
    dest_tunnel_id{YType::uint16, "dest-tunnel-id"},
    lsp_id{YType::uint16, "lsp-id"},
    source_global_id{YType::uint32, "source-global-id"},
    source_node_id{YType::str, "source-node-id"},
    source_tunnel_id{YType::uint16, "source-tunnel-id"}
{
    yang_name = "tp-data"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::TpData::~TpData()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::TpData::has_data() const
{
    return dest_global_id.is_set
	|| dest_node_id.is_set
	|| dest_tunnel_id.is_set
	|| lsp_id.is_set
	|| source_global_id.is_set
	|| source_node_id.is_set
	|| source_tunnel_id.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::TpData::has_operation() const
{
    return is_set(operation)
	|| is_set(dest_global_id.operation)
	|| is_set(dest_node_id.operation)
	|| is_set(dest_tunnel_id.operation)
	|| is_set(lsp_id.operation)
	|| is_set(source_global_id.operation)
	|| is_set(source_node_id.operation)
	|| is_set(source_tunnel_id.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::TpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-data";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::TpData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TpData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_global_id.is_set || is_set(dest_global_id.operation)) leaf_name_data.push_back(dest_global_id.get_name_leafdata());
    if (dest_node_id.is_set || is_set(dest_node_id.operation)) leaf_name_data.push_back(dest_node_id.get_name_leafdata());
    if (dest_tunnel_id.is_set || is_set(dest_tunnel_id.operation)) leaf_name_data.push_back(dest_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (source_global_id.is_set || is_set(source_global_id.operation)) leaf_name_data.push_back(source_global_id.get_name_leafdata());
    if (source_node_id.is_set || is_set(source_node_id.operation)) leaf_name_data.push_back(source_node_id.get_name_leafdata());
    if (source_tunnel_id.is_set || is_set(source_tunnel_id.operation)) leaf_name_data.push_back(source_tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::TpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::TpData::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::TpData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dest-global-id")
    {
        dest_global_id = value;
    }
    if(value_path == "dest-node-id")
    {
        dest_node_id = value;
    }
    if(value_path == "dest-tunnel-id")
    {
        dest_tunnel_id = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "source-global-id")
    {
        source_global_id = value;
    }
    if(value_path == "source-node-id")
    {
        source_node_id = value;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation::GenericRoutingEncapsulation()
    :
    gre_interface{YType::str, "gre-interface"}
{
    yang_name = "generic-routing-encapsulation"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation::~GenericRoutingEncapsulation()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation::has_data() const
{
    return gre_interface.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(gre_interface.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-routing-encapsulation";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GenericRoutingEncapsulation' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gre_interface.is_set || is_set(gre_interface.operation)) leaf_name_data.push_back(gre_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gre-interface")
    {
        gre_interface = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation::Ipv6GenericRoutingEncapsulation()
    :
    greipv6_interface{YType::str, "greipv6-interface"}
{
    yang_name = "ipv6-generic-routing-encapsulation"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation::~Ipv6GenericRoutingEncapsulation()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation::has_data() const
{
    return greipv6_interface.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(greipv6_interface.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-generic-routing-encapsulation";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6GenericRoutingEncapsulation' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (greipv6_interface.is_set || is_set(greipv6_interface.operation)) leaf_name_data.push_back(greipv6_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "greipv6-interface")
    {
        greipv6_interface = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::EvpnData::EvpnData()
    :
    ethernet_segment{YType::str, "ethernet-segment"},
    evpn_id{YType::uint32, "evpn-id"},
    evpn_tag{YType::uint32, "evpn-tag"}
{
    yang_name = "evpn-data"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::EvpnData::~EvpnData()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::EvpnData::has_data() const
{
    return ethernet_segment.is_set
	|| evpn_id.is_set
	|| evpn_tag.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::EvpnData::has_operation() const
{
    return is_set(operation)
	|| is_set(ethernet_segment.operation)
	|| is_set(evpn_id.operation)
	|| is_set(evpn_tag.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::EvpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-data";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::EvpnData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EvpnData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_segment.is_set || is_set(ethernet_segment.operation)) leaf_name_data.push_back(ethernet_segment.get_name_leafdata());
    if (evpn_id.is_set || is_set(evpn_id.operation)) leaf_name_data.push_back(evpn_id.get_name_leafdata());
    if (evpn_tag.is_set || is_set(evpn_tag.operation)) leaf_name_data.push_back(evpn_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::EvpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::EvpnData::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::EvpnData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ethernet-segment")
    {
        ethernet_segment = value;
    }
    if(value_path == "evpn-id")
    {
        evpn_id = value;
    }
    if(value_path == "evpn-tag")
    {
        evpn_tag = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::Ipv4BlbData::Ipv4BlbData()
    :
    blb_intf{YType::str, "blb-intf"},
    prefix{YType::str, "prefix"}
{
    yang_name = "ipv4blb-data"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::Ipv4BlbData::~Ipv4BlbData()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::Ipv4BlbData::has_data() const
{
    return blb_intf.is_set
	|| prefix.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::Ipv4BlbData::has_operation() const
{
    return is_set(operation)
	|| is_set(blb_intf.operation)
	|| is_set(prefix.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::Ipv4BlbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4blb-data";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::Ipv4BlbData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4BlbData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blb_intf.is_set || is_set(blb_intf.operation)) leaf_name_data.push_back(blb_intf.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::Ipv4BlbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::Ipv4BlbData::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::Ipv4BlbData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "blb-intf")
    {
        blb_intf = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::Ipv6BlbData::Ipv6BlbData()
    :
    blb_intf{YType::str, "blb-intf"},
    prefix{YType::str, "prefix"}
{
    yang_name = "ipv6blb-data"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::Ipv6BlbData::~Ipv6BlbData()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::Ipv6BlbData::has_data() const
{
    return blb_intf.is_set
	|| prefix.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::Ipv6BlbData::has_operation() const
{
    return is_set(operation)
	|| is_set(blb_intf.operation)
	|| is_set(prefix.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::Ipv6BlbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6blb-data";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::Ipv6BlbData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6BlbData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blb_intf.is_set || is_set(blb_intf.operation)) leaf_name_data.push_back(blb_intf.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::Ipv6BlbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::Ipv6BlbData::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::Ipv6BlbData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "blb-intf")
    {
        blb_intf = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::PiMiPmsiData::PiMiPmsiData()
    :
    head{YType::int32, "head"},
    v6{YType::int32, "v6"},
    vrf_id{YType::uint32, "vrf-id"}
{
    yang_name = "pi-mi-pmsi-data"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::PiMiPmsiData::~PiMiPmsiData()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::PiMiPmsiData::has_data() const
{
    return head.is_set
	|| v6.is_set
	|| vrf_id.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::PiMiPmsiData::has_operation() const
{
    return is_set(operation)
	|| is_set(head.operation)
	|| is_set(v6.operation)
	|| is_set(vrf_id.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::PiMiPmsiData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-mi-pmsi-data";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::PiMiPmsiData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PiMiPmsiData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (head.is_set || is_set(head.operation)) leaf_name_data.push_back(head.get_name_leafdata());
    if (v6.is_set || is_set(v6.operation)) leaf_name_data.push_back(v6.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::PiMiPmsiData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::PiMiPmsiData::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::PiMiPmsiData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "head")
    {
        head = value;
    }
    if(value_path == "v6")
    {
        v6 = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::PiMsPmsiData::PiMsPmsiData()
    :
    head{YType::int32, "head"},
    hli{YType::uint32, "hli"},
    seg{YType::int32, "seg"},
    source{YType::str, "source"},
    v6{YType::int32, "v6"},
    vrf_id{YType::uint32, "vrf-id"}
{
    yang_name = "pi-ms-pmsi-data"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::PiMsPmsiData::~PiMsPmsiData()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::PiMsPmsiData::has_data() const
{
    return head.is_set
	|| hli.is_set
	|| seg.is_set
	|| source.is_set
	|| v6.is_set
	|| vrf_id.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::PiMsPmsiData::has_operation() const
{
    return is_set(operation)
	|| is_set(head.operation)
	|| is_set(hli.operation)
	|| is_set(seg.operation)
	|| is_set(source.operation)
	|| is_set(v6.operation)
	|| is_set(vrf_id.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::PiMsPmsiData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-ms-pmsi-data";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::PiMsPmsiData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PiMsPmsiData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (head.is_set || is_set(head.operation)) leaf_name_data.push_back(head.get_name_leafdata());
    if (hli.is_set || is_set(hli.operation)) leaf_name_data.push_back(hli.get_name_leafdata());
    if (seg.is_set || is_set(seg.operation)) leaf_name_data.push_back(seg.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (v6.is_set || is_set(v6.operation)) leaf_name_data.push_back(v6.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::PiMsPmsiData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::PiMsPmsiData::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::PiMsPmsiData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "head")
    {
        head = value;
    }
    if(value_path == "hli")
    {
        hli = value;
    }
    if(value_path == "seg")
    {
        seg = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "v6")
    {
        v6 = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::NextHopSetL3Vpn::NextHopSetL3Vpn()
    :
    next_hop_set_id{YType::uint32, "next-hop-set-id"},
    table_id{YType::uint32, "table-id"}
{
    yang_name = "next-hop-set-l3vpn"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::NextHopSetL3Vpn::~NextHopSetL3Vpn()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::NextHopSetL3Vpn::has_data() const
{
    return next_hop_set_id.is_set
	|| table_id.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::NextHopSetL3Vpn::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_set_id.operation)
	|| is_set(table_id.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::NextHopSetL3Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-set-l3vpn";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::NextHopSetL3Vpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHopSetL3Vpn' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_set_id.is_set || is_set(next_hop_set_id.operation)) leaf_name_data.push_back(next_hop_set_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::NextHopSetL3Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::NextHopSetL3Vpn::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::NextHopSetL3Vpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-set-id")
    {
        next_hop_set_id = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::SrPrefixSegment::SrPrefixSegment()
    :
    segment_id{YType::uint32, "segment-id"},
    table_id{YType::uint32, "table-id"}
{
    yang_name = "sr-prefix-segment"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::SrPrefixSegment::~SrPrefixSegment()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::SrPrefixSegment::has_data() const
{
    return segment_id.is_set
	|| table_id.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::SrPrefixSegment::has_operation() const
{
    return is_set(operation)
	|| is_set(segment_id.operation)
	|| is_set(table_id.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::SrPrefixSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-prefix-segment";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::SrPrefixSegment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPrefixSegment' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_id.is_set || is_set(segment_id.operation)) leaf_name_data.push_back(segment_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::SrPrefixSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::SrPrefixSegment::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::SrPrefixSegment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "segment-id")
    {
        segment_id = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4::SrAdjSegmentIpv4()
    :
    addr{YType::str, "addr"},
    index_{YType::uint32, "index"},
    intf{YType::str, "intf"},
    type{YType::uint32, "type"}
{
    yang_name = "sr-adj-segment-ipv4"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4::~SrAdjSegmentIpv4()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4::has_data() const
{
    return addr.is_set
	|| index_.is_set
	|| intf.is_set
	|| type.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4::has_operation() const
{
    return is_set(operation)
	|| is_set(addr.operation)
	|| is_set(index_.operation)
	|| is_set(intf.operation)
	|| is_set(type.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-adj-segment-ipv4";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrAdjSegmentIpv4' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.operation)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (intf.is_set || is_set(intf.operation)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr")
    {
        addr = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "intf")
    {
        intf = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6::SrAdjSegmentIpv6()
    :
    addr{YType::str, "addr"},
    index_{YType::uint32, "index"},
    intf{YType::str, "intf"},
    type{YType::uint32, "type"}
{
    yang_name = "sr-adj-segment-ipv6"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6::~SrAdjSegmentIpv6()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6::has_data() const
{
    return addr.is_set
	|| index_.is_set
	|| intf.is_set
	|| type.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6::has_operation() const
{
    return is_set(operation)
	|| is_set(addr.operation)
	|| is_set(index_.operation)
	|| is_set(intf.operation)
	|| is_set(type.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-adj-segment-ipv6";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrAdjSegmentIpv6' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.operation)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (intf.is_set || is_set(intf.operation)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr")
    {
        addr = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "intf")
    {
        intf = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrgbData::LabelBlockSrgbData()
    :
    offset{YType::uint32, "offset"},
    size{YType::uint32, "size"},
    start_label{YType::uint32, "start-label"}
{
    yang_name = "label-block-srgb-data"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrgbData::~LabelBlockSrgbData()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrgbData::has_data() const
{
    return offset.is_set
	|| size.is_set
	|| start_label.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrgbData::has_operation() const
{
    return is_set(operation)
	|| is_set(offset.operation)
	|| is_set(size.operation)
	|| is_set(start_label.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrgbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block-srgb-data";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrgbData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelBlockSrgbData' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (offset.is_set || is_set(offset.operation)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());
    if (start_label.is_set || is_set(start_label.operation)) leaf_name_data.push_back(start_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrgbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrgbData::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrgbData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "offset")
    {
        offset = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
    if(value_path == "start-label")
    {
        start_label = value;
    }
}

MplsLsd::Labels::Label::LabelContext::Key::TeBinding::TeBinding()
    :
    te_identifier{YType::uint32, "te-identifier"},
    te_type{YType::enumeration, "te-type"}
{
    yang_name = "te-binding"; yang_parent_name = "key";
}

MplsLsd::Labels::Label::LabelContext::Key::TeBinding::~TeBinding()
{
}

bool MplsLsd::Labels::Label::LabelContext::Key::TeBinding::has_data() const
{
    return te_identifier.is_set
	|| te_type.is_set;
}

bool MplsLsd::Labels::Label::LabelContext::Key::TeBinding::has_operation() const
{
    return is_set(operation)
	|| is_set(te_identifier.operation)
	|| is_set(te_type.operation);
}

std::string MplsLsd::Labels::Label::LabelContext::Key::TeBinding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-binding";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::LabelContext::Key::TeBinding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeBinding' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_identifier.is_set || is_set(te_identifier.operation)) leaf_name_data.push_back(te_identifier.get_name_leafdata());
    if (te_type.is_set || is_set(te_type.operation)) leaf_name_data.push_back(te_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::Labels::Label::LabelContext::Key::TeBinding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::LabelContext::Key::TeBinding::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::LabelContext::Key::TeBinding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "te-identifier")
    {
        te_identifier = value;
    }
    if(value_path == "te-type")
    {
        te_type = value;
    }
}

MplsLsd::Labels::Label::ApplicationOwner::ApplicationOwner()
    :
    application_instance{YType::str, "application-instance"},
    application_name{YType::str, "application-name"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_type{YType::enumeration, "application-type"},
    resource_state{YType::enumeration, "resource-state"}
{
    yang_name = "application-owner"; yang_parent_name = "label";
}

MplsLsd::Labels::Label::ApplicationOwner::~ApplicationOwner()
{
}

bool MplsLsd::Labels::Label::ApplicationOwner::has_data() const
{
    return application_instance.is_set
	|| application_name.is_set
	|| application_role_primary.is_set
	|| application_type.is_set
	|| resource_state.is_set;
}

bool MplsLsd::Labels::Label::ApplicationOwner::has_operation() const
{
    return is_set(operation)
	|| is_set(application_instance.operation)
	|| is_set(application_name.operation)
	|| is_set(application_role_primary.operation)
	|| is_set(application_type.operation)
	|| is_set(resource_state.operation);
}

std::string MplsLsd::Labels::Label::ApplicationOwner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-owner";

    return path_buffer.str();

}

EntityPath MplsLsd::Labels::Label::ApplicationOwner::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsd::Labels::Label::ApplicationOwner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::Labels::Label::ApplicationOwner::get_children()
{
    return children;
}

void MplsLsd::Labels::Label::ApplicationOwner::set_value(const std::string & value_path, std::string value)
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

MplsLsd::FrrDatabase::FrrDatabase()
    :
    summary_protected_interfaces(std::make_shared<MplsLsd::FrrDatabase::SummaryProtectedInterfaces>())
	,tunnel_head_summary(std::make_shared<MplsLsd::FrrDatabase::TunnelHeadSummary>())
	,tunnel_heads(std::make_shared<MplsLsd::FrrDatabase::TunnelHeads>())
	,tunnel_midpoint_summary(std::make_shared<MplsLsd::FrrDatabase::TunnelMidpointSummary>())
	,tunnel_midpoints(std::make_shared<MplsLsd::FrrDatabase::TunnelMidpoints>())
	,tunnel_summary(std::make_shared<MplsLsd::FrrDatabase::TunnelSummary>())
{
    summary_protected_interfaces->parent = this;
    children["summary-protected-interfaces"] = summary_protected_interfaces;

    tunnel_head_summary->parent = this;
    children["tunnel-head-summary"] = tunnel_head_summary;

    tunnel_heads->parent = this;
    children["tunnel-heads"] = tunnel_heads;

    tunnel_midpoint_summary->parent = this;
    children["tunnel-midpoint-summary"] = tunnel_midpoint_summary;

    tunnel_midpoints->parent = this;
    children["tunnel-midpoints"] = tunnel_midpoints;

    tunnel_summary->parent = this;
    children["tunnel-summary"] = tunnel_summary;

    yang_name = "frr-database"; yang_parent_name = "mpls-lsd";
}

MplsLsd::FrrDatabase::~FrrDatabase()
{
}

bool MplsLsd::FrrDatabase::has_data() const
{
    return (summary_protected_interfaces !=  nullptr && summary_protected_interfaces->has_data())
	|| (tunnel_head_summary !=  nullptr && tunnel_head_summary->has_data())
	|| (tunnel_heads !=  nullptr && tunnel_heads->has_data())
	|| (tunnel_midpoint_summary !=  nullptr && tunnel_midpoint_summary->has_data())
	|| (tunnel_midpoints !=  nullptr && tunnel_midpoints->has_data())
	|| (tunnel_summary !=  nullptr && tunnel_summary->has_data());
}

bool MplsLsd::FrrDatabase::has_operation() const
{
    return is_set(operation)
	|| (summary_protected_interfaces !=  nullptr && summary_protected_interfaces->has_operation())
	|| (tunnel_head_summary !=  nullptr && tunnel_head_summary->has_operation())
	|| (tunnel_heads !=  nullptr && tunnel_heads->has_operation())
	|| (tunnel_midpoint_summary !=  nullptr && tunnel_midpoint_summary->has_operation())
	|| (tunnel_midpoints !=  nullptr && tunnel_midpoints->has_operation())
	|| (tunnel_summary !=  nullptr && tunnel_summary->has_operation());
}

std::string MplsLsd::FrrDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-database";

    return path_buffer.str();

}

EntityPath MplsLsd::FrrDatabase::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsd::FrrDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "summary-protected-interfaces")
    {
        if(summary_protected_interfaces != nullptr)
        {
            children["summary-protected-interfaces"] = summary_protected_interfaces;
        }
        else
        {
            summary_protected_interfaces = std::make_shared<MplsLsd::FrrDatabase::SummaryProtectedInterfaces>();
            summary_protected_interfaces->parent = this;
            children["summary-protected-interfaces"] = summary_protected_interfaces;
        }
        return children.at("summary-protected-interfaces");
    }

    if(child_yang_name == "tunnel-head-summary")
    {
        if(tunnel_head_summary != nullptr)
        {
            children["tunnel-head-summary"] = tunnel_head_summary;
        }
        else
        {
            tunnel_head_summary = std::make_shared<MplsLsd::FrrDatabase::TunnelHeadSummary>();
            tunnel_head_summary->parent = this;
            children["tunnel-head-summary"] = tunnel_head_summary;
        }
        return children.at("tunnel-head-summary");
    }

    if(child_yang_name == "tunnel-heads")
    {
        if(tunnel_heads != nullptr)
        {
            children["tunnel-heads"] = tunnel_heads;
        }
        else
        {
            tunnel_heads = std::make_shared<MplsLsd::FrrDatabase::TunnelHeads>();
            tunnel_heads->parent = this;
            children["tunnel-heads"] = tunnel_heads;
        }
        return children.at("tunnel-heads");
    }

    if(child_yang_name == "tunnel-midpoint-summary")
    {
        if(tunnel_midpoint_summary != nullptr)
        {
            children["tunnel-midpoint-summary"] = tunnel_midpoint_summary;
        }
        else
        {
            tunnel_midpoint_summary = std::make_shared<MplsLsd::FrrDatabase::TunnelMidpointSummary>();
            tunnel_midpoint_summary->parent = this;
            children["tunnel-midpoint-summary"] = tunnel_midpoint_summary;
        }
        return children.at("tunnel-midpoint-summary");
    }

    if(child_yang_name == "tunnel-midpoints")
    {
        if(tunnel_midpoints != nullptr)
        {
            children["tunnel-midpoints"] = tunnel_midpoints;
        }
        else
        {
            tunnel_midpoints = std::make_shared<MplsLsd::FrrDatabase::TunnelMidpoints>();
            tunnel_midpoints->parent = this;
            children["tunnel-midpoints"] = tunnel_midpoints;
        }
        return children.at("tunnel-midpoints");
    }

    if(child_yang_name == "tunnel-summary")
    {
        if(tunnel_summary != nullptr)
        {
            children["tunnel-summary"] = tunnel_summary;
        }
        else
        {
            tunnel_summary = std::make_shared<MplsLsd::FrrDatabase::TunnelSummary>();
            tunnel_summary->parent = this;
            children["tunnel-summary"] = tunnel_summary;
        }
        return children.at("tunnel-summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::FrrDatabase::get_children()
{
    if(children.find("summary-protected-interfaces") == children.end())
    {
        if(summary_protected_interfaces != nullptr)
        {
            children["summary-protected-interfaces"] = summary_protected_interfaces;
        }
    }

    if(children.find("tunnel-head-summary") == children.end())
    {
        if(tunnel_head_summary != nullptr)
        {
            children["tunnel-head-summary"] = tunnel_head_summary;
        }
    }

    if(children.find("tunnel-heads") == children.end())
    {
        if(tunnel_heads != nullptr)
        {
            children["tunnel-heads"] = tunnel_heads;
        }
    }

    if(children.find("tunnel-midpoint-summary") == children.end())
    {
        if(tunnel_midpoint_summary != nullptr)
        {
            children["tunnel-midpoint-summary"] = tunnel_midpoint_summary;
        }
    }

    if(children.find("tunnel-midpoints") == children.end())
    {
        if(tunnel_midpoints != nullptr)
        {
            children["tunnel-midpoints"] = tunnel_midpoints;
        }
    }

    if(children.find("tunnel-summary") == children.end())
    {
        if(tunnel_summary != nullptr)
        {
            children["tunnel-summary"] = tunnel_summary;
        }
    }

    return children;
}

void MplsLsd::FrrDatabase::set_value(const std::string & value_path, std::string value)
{
}

MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoints()
{
    yang_name = "tunnel-midpoints"; yang_parent_name = "frr-database";
}

MplsLsd::FrrDatabase::TunnelMidpoints::~TunnelMidpoints()
{
}

bool MplsLsd::FrrDatabase::TunnelMidpoints::has_data() const
{
    for (std::size_t index=0; index<tunnel_midpoint.size(); index++)
    {
        if(tunnel_midpoint[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::FrrDatabase::TunnelMidpoints::has_operation() const
{
    for (std::size_t index=0; index<tunnel_midpoint.size(); index++)
    {
        if(tunnel_midpoint[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLsd::FrrDatabase::TunnelMidpoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-midpoints";

    return path_buffer.str();

}

EntityPath MplsLsd::FrrDatabase::TunnelMidpoints::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/frr-database/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::FrrDatabase::TunnelMidpoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel-midpoint")
    {
        for(auto const & c : tunnel_midpoint)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint>();
        c->parent = this;
        tunnel_midpoint.push_back(std::move(c));
        children[segment_path] = tunnel_midpoint.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::FrrDatabase::TunnelMidpoints::get_children()
{
    for (auto const & c : tunnel_midpoint)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLsd::FrrDatabase::TunnelMidpoints::set_value(const std::string & value_path, std::string value)
{
}

MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::TunnelMidpoint()
    :
    label{YType::int32, "label"},
    entry_frr_state{YType::enumeration, "entry-frr-state"},
    input_label{YType::uint32, "input-label"},
    tunnel_interface{YType::str, "tunnel-interface"}
    	,
    frr_entry_id(std::make_shared<MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId>())
{
    frr_entry_id->parent = this;
    children["frr-entry-id"] = frr_entry_id;

    yang_name = "tunnel-midpoint"; yang_parent_name = "tunnel-midpoints";
}

MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::~TunnelMidpoint()
{
}

bool MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::has_data() const
{
    for (std::size_t index=0; index<out_path.size(); index++)
    {
        if(out_path[index]->has_data())
            return true;
    }
    return label.is_set
	|| entry_frr_state.is_set
	|| input_label.is_set
	|| tunnel_interface.is_set
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_data());
}

bool MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::has_operation() const
{
    for (std::size_t index=0; index<out_path.size(); index++)
    {
        if(out_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(entry_frr_state.operation)
	|| is_set(input_label.operation)
	|| is_set(tunnel_interface.operation)
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_operation());
}

std::string MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-midpoint" <<"[label='" <<label <<"']";

    return path_buffer.str();

}

EntityPath MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/frr-database/tunnel-midpoints/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (entry_frr_state.is_set || is_set(entry_frr_state.operation)) leaf_name_data.push_back(entry_frr_state.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.operation)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-entry-id")
    {
        if(frr_entry_id != nullptr)
        {
            children["frr-entry-id"] = frr_entry_id;
        }
        else
        {
            frr_entry_id = std::make_shared<MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId>();
            frr_entry_id->parent = this;
            children["frr-entry-id"] = frr_entry_id;
        }
        return children.at("frr-entry-id");
    }

    if(child_yang_name == "out-path")
    {
        for(auto const & c : out_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath>();
        c->parent = this;
        out_path.push_back(std::move(c));
        children[segment_path] = out_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::get_children()
{
    if(children.find("frr-entry-id") == children.end())
    {
        if(frr_entry_id != nullptr)
        {
            children["frr-entry-id"] = frr_entry_id;
        }
    }

    for (auto const & c : out_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "entry-frr-state")
    {
        entry_frr_state = value;
    }
    if(value_path == "input-label")
    {
        input_label = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
}

MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::FrrEntryId()
    :
    role{YType::enumeration, "role"}
    	,
    head(std::make_shared<MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head>())
	,midpoint(std::make_shared<MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint>())
{
    head->parent = this;
    children["head"] = head;

    midpoint->parent = this;
    children["midpoint"] = midpoint;

    yang_name = "frr-entry-id"; yang_parent_name = "tunnel-midpoint";
}

MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::~FrrEntryId()
{
}

bool MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::has_data() const
{
    return role.is_set
	|| (head !=  nullptr && head->has_data())
	|| (midpoint !=  nullptr && midpoint->has_data());
}

bool MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::has_operation() const
{
    return is_set(operation)
	|| is_set(role.operation)
	|| (head !=  nullptr && head->has_operation())
	|| (midpoint !=  nullptr && midpoint->has_operation());
}

std::string MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-entry-id";

    return path_buffer.str();

}

EntityPath MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrEntryId' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "head")
    {
        if(head != nullptr)
        {
            children["head"] = head;
        }
        else
        {
            head = std::make_shared<MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head>();
            head->parent = this;
            children["head"] = head;
        }
        return children.at("head");
    }

    if(child_yang_name == "midpoint")
    {
        if(midpoint != nullptr)
        {
            children["midpoint"] = midpoint;
        }
        else
        {
            midpoint = std::make_shared<MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint>();
            midpoint->parent = this;
            children["midpoint"] = midpoint;
        }
        return children.at("midpoint");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::get_children()
{
    if(children.find("head") == children.end())
    {
        if(head != nullptr)
        {
            children["head"] = head;
        }
    }

    if(children.find("midpoint") == children.end())
    {
        if(midpoint != nullptr)
        {
            children["midpoint"] = midpoint;
        }
    }

    return children;
}

void MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "role")
    {
        role = value;
    }
}

MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head::Head()
    :
    destination_prefix{YType::str, "destination-prefix"},
    destination_prefix_length{YType::uint8, "destination-prefix-length"}
{
    yang_name = "head"; yang_parent_name = "frr-entry-id";
}

MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head::~Head()
{
}

bool MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head::has_data() const
{
    return destination_prefix.is_set
	|| destination_prefix_length.is_set;
}

bool MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_prefix.operation)
	|| is_set(destination_prefix_length.operation);
}

std::string MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head";

    return path_buffer.str();

}

EntityPath MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Head' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.operation)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_prefix_length.is_set || is_set(destination_prefix_length.operation)) leaf_name_data.push_back(destination_prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head::get_children()
{
    return children;
}

void MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length = value;
    }
}

MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint::Midpoint()
    :
    lspid{YType::uint32, "lspid"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "midpoint"; yang_parent_name = "frr-entry-id";
}

MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint::~Midpoint()
{
}

bool MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint::has_data() const
{
    return lspid.is_set
	|| source_address.is_set
	|| tunnel_id.is_set;
}

bool MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint::has_operation() const
{
    return is_set(operation)
	|| is_set(lspid.operation)
	|| is_set(source_address.operation)
	|| is_set(tunnel_id.operation);
}

std::string MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoint";

    return path_buffer.str();

}

EntityPath MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Midpoint' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lspid.is_set || is_set(lspid.operation)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint::get_children()
{
    return children;
}

void MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lspid")
    {
        lspid = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath::OutPath()
    :
    frr_interface{YType::str, "frr-interface"},
    frr_label{YType::uint32, "frr-label"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"}
{
    yang_name = "out-path"; yang_parent_name = "tunnel-midpoint";
}

MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath::~OutPath()
{
}

bool MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath::has_data() const
{
    return frr_interface.is_set
	|| frr_label.is_set
	|| ipv4_next_hop.is_set
	|| out_interface.is_set
	|| out_label.is_set;
}

bool MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath::has_operation() const
{
    return is_set(operation)
	|| is_set(frr_interface.operation)
	|| is_set(frr_label.operation)
	|| is_set(ipv4_next_hop.operation)
	|| is_set(out_interface.operation)
	|| is_set(out_label.operation);
}

std::string MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-path";

    return path_buffer.str();

}

EntityPath MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPath' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_interface.is_set || is_set(frr_interface.operation)) leaf_name_data.push_back(frr_interface.get_name_leafdata());
    if (frr_label.is_set || is_set(frr_label.operation)) leaf_name_data.push_back(frr_label.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.operation)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.operation)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath::get_children()
{
    return children;
}

void MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frr-interface")
    {
        frr_interface = value;
    }
    if(value_path == "frr-label")
    {
        frr_label = value;
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
}

MplsLsd::FrrDatabase::TunnelHeads::TunnelHeads()
{
    yang_name = "tunnel-heads"; yang_parent_name = "frr-database";
}

MplsLsd::FrrDatabase::TunnelHeads::~TunnelHeads()
{
}

bool MplsLsd::FrrDatabase::TunnelHeads::has_data() const
{
    for (std::size_t index=0; index<tunnel_head.size(); index++)
    {
        if(tunnel_head[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::FrrDatabase::TunnelHeads::has_operation() const
{
    for (std::size_t index=0; index<tunnel_head.size(); index++)
    {
        if(tunnel_head[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLsd::FrrDatabase::TunnelHeads::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-heads";

    return path_buffer.str();

}

EntityPath MplsLsd::FrrDatabase::TunnelHeads::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/frr-database/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::FrrDatabase::TunnelHeads::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel-head")
    {
        for(auto const & c : tunnel_head)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLsd::FrrDatabase::TunnelHeads::TunnelHead>();
        c->parent = this;
        tunnel_head.push_back(std::move(c));
        children[segment_path] = tunnel_head.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::FrrDatabase::TunnelHeads::get_children()
{
    for (auto const & c : tunnel_head)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLsd::FrrDatabase::TunnelHeads::set_value(const std::string & value_path, std::string value)
{
}

MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::TunnelHead()
    :
    interface_name{YType::str, "interface-name"},
    entry_frr_state{YType::enumeration, "entry-frr-state"},
    input_label{YType::uint32, "input-label"},
    tunnel_interface{YType::str, "tunnel-interface"}
    	,
    frr_entry_id(std::make_shared<MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId>())
{
    frr_entry_id->parent = this;
    children["frr-entry-id"] = frr_entry_id;

    yang_name = "tunnel-head"; yang_parent_name = "tunnel-heads";
}

MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::~TunnelHead()
{
}

bool MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::has_data() const
{
    for (std::size_t index=0; index<out_path.size(); index++)
    {
        if(out_path[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| entry_frr_state.is_set
	|| input_label.is_set
	|| tunnel_interface.is_set
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_data());
}

bool MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::has_operation() const
{
    for (std::size_t index=0; index<out_path.size(); index++)
    {
        if(out_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(entry_frr_state.operation)
	|| is_set(input_label.operation)
	|| is_set(tunnel_interface.operation)
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_operation());
}

std::string MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-head" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/frr-database/tunnel-heads/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (entry_frr_state.is_set || is_set(entry_frr_state.operation)) leaf_name_data.push_back(entry_frr_state.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.operation)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-entry-id")
    {
        if(frr_entry_id != nullptr)
        {
            children["frr-entry-id"] = frr_entry_id;
        }
        else
        {
            frr_entry_id = std::make_shared<MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId>();
            frr_entry_id->parent = this;
            children["frr-entry-id"] = frr_entry_id;
        }
        return children.at("frr-entry-id");
    }

    if(child_yang_name == "out-path")
    {
        for(auto const & c : out_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::OutPath>();
        c->parent = this;
        out_path.push_back(std::move(c));
        children[segment_path] = out_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::get_children()
{
    if(children.find("frr-entry-id") == children.end())
    {
        if(frr_entry_id != nullptr)
        {
            children["frr-entry-id"] = frr_entry_id;
        }
    }

    for (auto const & c : out_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "entry-frr-state")
    {
        entry_frr_state = value;
    }
    if(value_path == "input-label")
    {
        input_label = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
}

MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::FrrEntryId()
    :
    role{YType::enumeration, "role"}
    	,
    head(std::make_shared<MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head>())
	,midpoint(std::make_shared<MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint>())
{
    head->parent = this;
    children["head"] = head;

    midpoint->parent = this;
    children["midpoint"] = midpoint;

    yang_name = "frr-entry-id"; yang_parent_name = "tunnel-head";
}

MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::~FrrEntryId()
{
}

bool MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::has_data() const
{
    return role.is_set
	|| (head !=  nullptr && head->has_data())
	|| (midpoint !=  nullptr && midpoint->has_data());
}

bool MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::has_operation() const
{
    return is_set(operation)
	|| is_set(role.operation)
	|| (head !=  nullptr && head->has_operation())
	|| (midpoint !=  nullptr && midpoint->has_operation());
}

std::string MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-entry-id";

    return path_buffer.str();

}

EntityPath MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrEntryId' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "head")
    {
        if(head != nullptr)
        {
            children["head"] = head;
        }
        else
        {
            head = std::make_shared<MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head>();
            head->parent = this;
            children["head"] = head;
        }
        return children.at("head");
    }

    if(child_yang_name == "midpoint")
    {
        if(midpoint != nullptr)
        {
            children["midpoint"] = midpoint;
        }
        else
        {
            midpoint = std::make_shared<MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint>();
            midpoint->parent = this;
            children["midpoint"] = midpoint;
        }
        return children.at("midpoint");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::get_children()
{
    if(children.find("head") == children.end())
    {
        if(head != nullptr)
        {
            children["head"] = head;
        }
    }

    if(children.find("midpoint") == children.end())
    {
        if(midpoint != nullptr)
        {
            children["midpoint"] = midpoint;
        }
    }

    return children;
}

void MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "role")
    {
        role = value;
    }
}

MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head::Head()
    :
    destination_prefix{YType::str, "destination-prefix"},
    destination_prefix_length{YType::uint8, "destination-prefix-length"}
{
    yang_name = "head"; yang_parent_name = "frr-entry-id";
}

MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head::~Head()
{
}

bool MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head::has_data() const
{
    return destination_prefix.is_set
	|| destination_prefix_length.is_set;
}

bool MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_prefix.operation)
	|| is_set(destination_prefix_length.operation);
}

std::string MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head";

    return path_buffer.str();

}

EntityPath MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Head' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.operation)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_prefix_length.is_set || is_set(destination_prefix_length.operation)) leaf_name_data.push_back(destination_prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head::get_children()
{
    return children;
}

void MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length = value;
    }
}

MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint::Midpoint()
    :
    lspid{YType::uint32, "lspid"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "midpoint"; yang_parent_name = "frr-entry-id";
}

MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint::~Midpoint()
{
}

bool MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint::has_data() const
{
    return lspid.is_set
	|| source_address.is_set
	|| tunnel_id.is_set;
}

bool MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint::has_operation() const
{
    return is_set(operation)
	|| is_set(lspid.operation)
	|| is_set(source_address.operation)
	|| is_set(tunnel_id.operation);
}

std::string MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoint";

    return path_buffer.str();

}

EntityPath MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Midpoint' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lspid.is_set || is_set(lspid.operation)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint::get_children()
{
    return children;
}

void MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lspid")
    {
        lspid = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::OutPath::OutPath()
    :
    frr_interface{YType::str, "frr-interface"},
    frr_label{YType::uint32, "frr-label"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"}
{
    yang_name = "out-path"; yang_parent_name = "tunnel-head";
}

MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::OutPath::~OutPath()
{
}

bool MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::OutPath::has_data() const
{
    return frr_interface.is_set
	|| frr_label.is_set
	|| ipv4_next_hop.is_set
	|| out_interface.is_set
	|| out_label.is_set;
}

bool MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::OutPath::has_operation() const
{
    return is_set(operation)
	|| is_set(frr_interface.operation)
	|| is_set(frr_label.operation)
	|| is_set(ipv4_next_hop.operation)
	|| is_set(out_interface.operation)
	|| is_set(out_label.operation);
}

std::string MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::OutPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-path";

    return path_buffer.str();

}

EntityPath MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::OutPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPath' in Cisco_IOS_XR_mpls_lsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_interface.is_set || is_set(frr_interface.operation)) leaf_name_data.push_back(frr_interface.get_name_leafdata());
    if (frr_label.is_set || is_set(frr_label.operation)) leaf_name_data.push_back(frr_label.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.operation)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.operation)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::OutPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::OutPath::get_children()
{
    return children;
}

void MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::OutPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frr-interface")
    {
        frr_interface = value;
    }
    if(value_path == "frr-label")
    {
        frr_label = value;
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
}

MplsLsd::FrrDatabase::TunnelHeadSummary::TunnelHeadSummary()
    :
    active{YType::uint32, "active"},
    igp{YType::uint32, "igp"},
    partial{YType::uint32, "partial"},
    ready{YType::uint32, "ready"}
{
    yang_name = "tunnel-head-summary"; yang_parent_name = "frr-database";
}

MplsLsd::FrrDatabase::TunnelHeadSummary::~TunnelHeadSummary()
{
}

bool MplsLsd::FrrDatabase::TunnelHeadSummary::has_data() const
{
    return active.is_set
	|| igp.is_set
	|| partial.is_set
	|| ready.is_set;
}

bool MplsLsd::FrrDatabase::TunnelHeadSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(igp.operation)
	|| is_set(partial.operation)
	|| is_set(ready.operation);
}

std::string MplsLsd::FrrDatabase::TunnelHeadSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-head-summary";

    return path_buffer.str();

}

EntityPath MplsLsd::FrrDatabase::TunnelHeadSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/frr-database/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (igp.is_set || is_set(igp.operation)) leaf_name_data.push_back(igp.get_name_leafdata());
    if (partial.is_set || is_set(partial.operation)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (ready.is_set || is_set(ready.operation)) leaf_name_data.push_back(ready.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::FrrDatabase::TunnelHeadSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::FrrDatabase::TunnelHeadSummary::get_children()
{
    return children;
}

void MplsLsd::FrrDatabase::TunnelHeadSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "igp")
    {
        igp = value;
    }
    if(value_path == "partial")
    {
        partial = value;
    }
    if(value_path == "ready")
    {
        ready = value;
    }
}

MplsLsd::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterfaces()
{
    yang_name = "summary-protected-interfaces"; yang_parent_name = "frr-database";
}

MplsLsd::FrrDatabase::SummaryProtectedInterfaces::~SummaryProtectedInterfaces()
{
}

bool MplsLsd::FrrDatabase::SummaryProtectedInterfaces::has_data() const
{
    for (std::size_t index=0; index<summary_protected_interface.size(); index++)
    {
        if(summary_protected_interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::FrrDatabase::SummaryProtectedInterfaces::has_operation() const
{
    for (std::size_t index=0; index<summary_protected_interface.size(); index++)
    {
        if(summary_protected_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLsd::FrrDatabase::SummaryProtectedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-protected-interfaces";

    return path_buffer.str();

}

EntityPath MplsLsd::FrrDatabase::SummaryProtectedInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/frr-database/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::FrrDatabase::SummaryProtectedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "summary-protected-interface")
    {
        for(auto const & c : summary_protected_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLsd::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface>();
        c->parent = this;
        summary_protected_interface.push_back(std::move(c));
        children[segment_path] = summary_protected_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::FrrDatabase::SummaryProtectedInterfaces::get_children()
{
    for (auto const & c : summary_protected_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLsd::FrrDatabase::SummaryProtectedInterfaces::set_value(const std::string & value_path, std::string value)
{
}

MplsLsd::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface::SummaryProtectedInterface()
    :
    interface_name{YType::str, "interface-name"},
    active{YType::uint32, "active"},
    igp{YType::uint32, "igp"},
    partial{YType::uint32, "partial"},
    ready{YType::uint32, "ready"}
{
    yang_name = "summary-protected-interface"; yang_parent_name = "summary-protected-interfaces";
}

MplsLsd::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface::~SummaryProtectedInterface()
{
}

bool MplsLsd::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface::has_data() const
{
    return interface_name.is_set
	|| active.is_set
	|| igp.is_set
	|| partial.is_set
	|| ready.is_set;
}

bool MplsLsd::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(active.operation)
	|| is_set(igp.operation)
	|| is_set(partial.operation)
	|| is_set(ready.operation);
}

std::string MplsLsd::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-protected-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLsd::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/frr-database/summary-protected-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (igp.is_set || is_set(igp.operation)) leaf_name_data.push_back(igp.get_name_leafdata());
    if (partial.is_set || is_set(partial.operation)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (ready.is_set || is_set(ready.operation)) leaf_name_data.push_back(ready.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface::get_children()
{
    return children;
}

void MplsLsd::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "igp")
    {
        igp = value;
    }
    if(value_path == "partial")
    {
        partial = value;
    }
    if(value_path == "ready")
    {
        ready = value;
    }
}

MplsLsd::FrrDatabase::TunnelSummary::TunnelSummary()
    :
    active{YType::uint32, "active"},
    igp{YType::uint32, "igp"},
    partial{YType::uint32, "partial"},
    ready{YType::uint32, "ready"}
{
    yang_name = "tunnel-summary"; yang_parent_name = "frr-database";
}

MplsLsd::FrrDatabase::TunnelSummary::~TunnelSummary()
{
}

bool MplsLsd::FrrDatabase::TunnelSummary::has_data() const
{
    return active.is_set
	|| igp.is_set
	|| partial.is_set
	|| ready.is_set;
}

bool MplsLsd::FrrDatabase::TunnelSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(igp.operation)
	|| is_set(partial.operation)
	|| is_set(ready.operation);
}

std::string MplsLsd::FrrDatabase::TunnelSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-summary";

    return path_buffer.str();

}

EntityPath MplsLsd::FrrDatabase::TunnelSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/frr-database/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (igp.is_set || is_set(igp.operation)) leaf_name_data.push_back(igp.get_name_leafdata());
    if (partial.is_set || is_set(partial.operation)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (ready.is_set || is_set(ready.operation)) leaf_name_data.push_back(ready.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::FrrDatabase::TunnelSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::FrrDatabase::TunnelSummary::get_children()
{
    return children;
}

void MplsLsd::FrrDatabase::TunnelSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "igp")
    {
        igp = value;
    }
    if(value_path == "partial")
    {
        partial = value;
    }
    if(value_path == "ready")
    {
        ready = value;
    }
}

MplsLsd::FrrDatabase::TunnelMidpointSummary::TunnelMidpointSummary()
    :
    active{YType::uint32, "active"},
    igp{YType::uint32, "igp"},
    partial{YType::uint32, "partial"},
    ready{YType::uint32, "ready"}
{
    yang_name = "tunnel-midpoint-summary"; yang_parent_name = "frr-database";
}

MplsLsd::FrrDatabase::TunnelMidpointSummary::~TunnelMidpointSummary()
{
}

bool MplsLsd::FrrDatabase::TunnelMidpointSummary::has_data() const
{
    return active.is_set
	|| igp.is_set
	|| partial.is_set
	|| ready.is_set;
}

bool MplsLsd::FrrDatabase::TunnelMidpointSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(igp.operation)
	|| is_set(partial.operation)
	|| is_set(ready.operation);
}

std::string MplsLsd::FrrDatabase::TunnelMidpointSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-midpoint-summary";

    return path_buffer.str();

}

EntityPath MplsLsd::FrrDatabase::TunnelMidpointSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/frr-database/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (igp.is_set || is_set(igp.operation)) leaf_name_data.push_back(igp.get_name_leafdata());
    if (partial.is_set || is_set(partial.operation)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (ready.is_set || is_set(ready.operation)) leaf_name_data.push_back(ready.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsd::FrrDatabase::TunnelMidpointSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLsd::FrrDatabase::TunnelMidpointSummary::get_children()
{
    return children;
}

void MplsLsd::FrrDatabase::TunnelMidpointSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "igp")
    {
        igp = value;
    }
    if(value_path == "partial")
    {
        partial = value;
    }
    if(value_path == "ready")
    {
        ready = value;
    }
}


}
}

