
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_cfg_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_cfg {

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::AdvertisementInterval()
    :
    minimum_interval{YType::uint32, "minimum-interval"},
    minimum_interval_msecs{YType::uint32, "minimum-interval-msecs"}
{
    yang_name = "advertisement-interval"; yang_parent_name = "session-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::~AdvertisementInterval()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::has_data() const
{
    return minimum_interval.is_set
	|| minimum_interval_msecs.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum_interval.operation)
	|| is_set(minimum_interval_msecs.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement-interval";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertisementInterval' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (minimum_interval_msecs.is_set || is_set(minimum_interval_msecs.operation)) leaf_name_data.push_back(minimum_interval_msecs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::NeighborClusterId()
    :
    cluster_id_address{YType::str, "cluster-id-address"},
    cluster_id_number{YType::uint32, "cluster-id-number"}
{
    yang_name = "neighbor-cluster-id"; yang_parent_name = "session-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::~NeighborClusterId()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::has_data() const
{
    return cluster_id_address.is_set
	|| cluster_id_number.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::has_operation() const
{
    return is_set(operation)
	|| is_set(cluster_id_address.operation)
	|| is_set(cluster_id_number.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-cluster-id";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborClusterId' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_address.is_set || is_set(cluster_id_address.operation)) leaf_name_data.push_back(cluster_id_address.get_name_leafdata());
    if (cluster_id_number.is_set || is_set(cluster_id_number.operation)) leaf_name_data.push_back(cluster_id_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address = value;
    }
    if(value_path == "cluster-id-number")
    {
        cluster_id_number = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::Tcpmss()
    :
    mss{YType::uint32, "mss"},
    tcpmss_disable{YType::boolean, "tcpmss-disable"}
{
    yang_name = "tcpmss"; yang_parent_name = "session-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::~Tcpmss()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::has_data() const
{
    return mss.is_set
	|| tcpmss_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::has_operation() const
{
    return is_set(operation)
	|| is_set(mss.operation)
	|| is_set(tcpmss_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpmss";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tcpmss' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mss.is_set || is_set(mss.operation)) leaf_name_data.push_back(mss.get_name_leafdata());
    if (tcpmss_disable.is_set || is_set(tcpmss_disable.operation)) leaf_name_data.push_back(tcpmss_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mss")
    {
        mss = value;
    }
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::Tos()
    :
    type{YType::enumeration, "type"},
    value_{YType::str, "value"}
{
    yang_name = "tos"; yang_parent_name = "session-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::~Tos()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::has_data() const
{
    return type.is_set
	|| value_.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(value_.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tos' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFiltering()
    :
    enable{YType::empty, "enable"},
    update_in_filtering_attribute_filter_group{YType::str, "update-in-filtering-attribute-filter-group"},
    update_in_filtering_syslog_disable{YType::empty, "update-in-filtering-syslog-disable"}
    	,
    update_in_filtering_message_buffers(nullptr) // presence node
{
    yang_name = "update-in-filtering"; yang_parent_name = "session-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::~UpdateInFiltering()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::has_data() const
{
    return enable.is_set
	|| update_in_filtering_attribute_filter_group.is_set
	|| update_in_filtering_syslog_disable.is_set
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(update_in_filtering_attribute_filter_group.operation)
	|| is_set(update_in_filtering_syslog_disable.operation)
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateInFiltering' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (update_in_filtering_attribute_filter_group.is_set || is_set(update_in_filtering_attribute_filter_group.operation)) leaf_name_data.push_back(update_in_filtering_attribute_filter_group.get_name_leafdata());
    if (update_in_filtering_syslog_disable.is_set || is_set(update_in_filtering_syslog_disable.operation)) leaf_name_data.push_back(update_in_filtering_syslog_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "update-in-filtering-message-buffers")
    {
        if(update_in_filtering_message_buffers != nullptr)
        {
            children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
        }
        else
        {
            update_in_filtering_message_buffers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers>();
            update_in_filtering_message_buffers->parent = this;
            children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
        }
        return children.at("update-in-filtering-message-buffers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::get_children()
{
    if(children.find("update-in-filtering-message-buffers") == children.end())
    {
        if(update_in_filtering_message_buffers != nullptr)
        {
            children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group = value;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::UpdateInFilteringMessageBuffers()
    :
    non_circular_buffer{YType::boolean, "non-circular-buffer"},
    number_of_buffers{YType::uint32, "number-of-buffers"}
{
    yang_name = "update-in-filtering-message-buffers"; yang_parent_name = "update-in-filtering";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::~UpdateInFilteringMessageBuffers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_data() const
{
    return non_circular_buffer.is_set
	|| number_of_buffers.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_operation() const
{
    return is_set(operation)
	|| is_set(non_circular_buffer.operation)
	|| is_set(number_of_buffers.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering-message-buffers";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateInFilteringMessageBuffers' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_circular_buffer.is_set || is_set(non_circular_buffer.operation)) leaf_name_data.push_back(non_circular_buffer.get_name_leafdata());
    if (number_of_buffers.is_set || is_set(number_of_buffers.operation)) leaf_name_data.push_back(number_of_buffers.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer = value;
    }
    if(value_path == "number-of-buffers")
    {
        number_of_buffers = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::MsgLogOut()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{
    yang_name = "msg-log-out"; yang_parent_name = "session-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::~MsgLogOut()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::has_operation() const
{
    return is_set(operation)
	|| is_set(msg_buf_count.operation)
	|| is_set(msg_log_disable.operation)
	|| is_set(msg_log_inherit_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-out";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MsgLogOut' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.operation)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.operation)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.operation)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::ReceiveBufferSize()
    :
    bgp_receive_size{YType::uint32, "bgp-receive-size"},
    socket_receive_size{YType::uint32, "socket-receive-size"}
{
    yang_name = "receive-buffer-size"; yang_parent_name = "session-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::~ReceiveBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::has_data() const
{
    return bgp_receive_size.is_set
	|| socket_receive_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_receive_size.operation)
	|| is_set(socket_receive_size.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-buffer-size";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceiveBufferSize' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_receive_size.is_set || is_set(bgp_receive_size.operation)) leaf_name_data.push_back(bgp_receive_size.get_name_leafdata());
    if (socket_receive_size.is_set || is_set(socket_receive_size.operation)) leaf_name_data.push_back(socket_receive_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size = value;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::MsgLogIn()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{
    yang_name = "msg-log-in"; yang_parent_name = "session-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::~MsgLogIn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::has_operation() const
{
    return is_set(operation)
	|| is_set(msg_buf_count.operation)
	|| is_set(msg_log_disable.operation)
	|| is_set(msg_log_inherit_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-in";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MsgLogIn' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.operation)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.operation)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.operation)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::SendBufferSize()
    :
    bgp_send_size{YType::uint32, "bgp-send-size"},
    socket_send_size{YType::uint32, "socket-send-size"}
{
    yang_name = "send-buffer-size"; yang_parent_name = "session-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::~SendBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::has_data() const
{
    return bgp_send_size.is_set
	|| socket_send_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_send_size.operation)
	|| is_set(socket_send_size.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-buffer-size";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendBufferSize' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_send_size.is_set || is_set(bgp_send_size.operation)) leaf_name_data.push_back(bgp_send_size.get_name_leafdata());
    if (socket_send_size.is_set || is_set(socket_send_size.operation)) leaf_name_data.push_back(socket_send_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size = value;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::Timers()
    :
    hold_time{YType::uint32, "hold-time"},
    keepalive_interval{YType::uint32, "keepalive-interval"},
    min_accept_hold_time{YType::uint32, "min-accept-hold-time"}
{
    yang_name = "timers"; yang_parent_name = "session-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::~Timers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::has_data() const
{
    return hold_time.is_set
	|| keepalive_interval.is_set
	|| min_accept_hold_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_time.operation)
	|| is_set(keepalive_interval.operation)
	|| is_set(min_accept_hold_time.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.operation)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (min_accept_hold_time.is_set || is_set(min_accept_hold_time.operation)) leaf_name_data.push_back(min_accept_hold_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::Keychain()
    :
    keychain_disable{YType::boolean, "keychain-disable"},
    keychain_name{YType::str, "keychain-name"}
{
    yang_name = "keychain"; yang_parent_name = "session-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::~Keychain()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::has_data() const
{
    return keychain_disable.is_set
	|| keychain_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::has_operation() const
{
    return is_set(operation)
	|| is_set(keychain_disable.operation)
	|| is_set(keychain_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keychain";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Keychain' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keychain_disable.is_set || is_set(keychain_disable.operation)) leaf_name_data.push_back(keychain_disable.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.operation)) leaf_name_data.push_back(keychain_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable = value;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenance()
    :
    enable{YType::empty, "enable"},
    graceful_maintenance_activate{YType::boolean, "graceful-maintenance-activate"}
    	,
    graceful_maintenance_as_prepends(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends>())
	,graceful_maintenance_local_preference(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference>())
{
    graceful_maintenance_as_prepends->parent = this;
    children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;

    graceful_maintenance_local_preference->parent = this;
    children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;

    yang_name = "graceful-maintenance"; yang_parent_name = "session-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::~GracefulMaintenance()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::has_data() const
{
    return enable.is_set
	|| graceful_maintenance_activate.is_set
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_data())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(graceful_maintenance_activate.operation)
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_operation())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulMaintenance' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (graceful_maintenance_activate.is_set || is_set(graceful_maintenance_activate.operation)) leaf_name_data.push_back(graceful_maintenance_activate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "graceful-maintenance-as-prepends")
    {
        if(graceful_maintenance_as_prepends != nullptr)
        {
            children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
        }
        else
        {
            graceful_maintenance_as_prepends = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends>();
            graceful_maintenance_as_prepends->parent = this;
            children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
        }
        return children.at("graceful-maintenance-as-prepends");
    }

    if(child_yang_name == "graceful-maintenance-local-preference")
    {
        if(graceful_maintenance_local_preference != nullptr)
        {
            children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
        }
        else
        {
            graceful_maintenance_local_preference = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference>();
            graceful_maintenance_local_preference->parent = this;
            children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
        }
        return children.at("graceful-maintenance-local-preference");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::get_children()
{
    if(children.find("graceful-maintenance-as-prepends") == children.end())
    {
        if(graceful_maintenance_as_prepends != nullptr)
        {
            children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
        }
    }

    if(children.find("graceful-maintenance-local-preference") == children.end())
    {
        if(graceful_maintenance_local_preference != nullptr)
        {
            children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::GracefulMaintenanceLocalPreference()
    :
    gshut_loc_pref_disable{YType::boolean, "gshut-loc-pref-disable"},
    local_preference{YType::uint32, "local-preference"}
{
    yang_name = "graceful-maintenance-local-preference"; yang_parent_name = "graceful-maintenance";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::~GracefulMaintenanceLocalPreference()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_data() const
{
    return gshut_loc_pref_disable.is_set
	|| local_preference.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_operation() const
{
    return is_set(operation)
	|| is_set(gshut_loc_pref_disable.operation)
	|| is_set(local_preference.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-local-preference";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulMaintenanceLocalPreference' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_loc_pref_disable.is_set || is_set(gshut_loc_pref_disable.operation)) leaf_name_data.push_back(gshut_loc_pref_disable.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.operation)) leaf_name_data.push_back(local_preference.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable = value;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::GracefulMaintenanceAsPrepends()
    :
    as_prepends{YType::uint32, "as-prepends"},
    gshut_prepends_disable{YType::boolean, "gshut-prepends-disable"}
{
    yang_name = "graceful-maintenance-as-prepends"; yang_parent_name = "graceful-maintenance";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::~GracefulMaintenanceAsPrepends()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_data() const
{
    return as_prepends.is_set
	|| gshut_prepends_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_operation() const
{
    return is_set(operation)
	|| is_set(as_prepends.operation)
	|| is_set(gshut_prepends_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-as-prepends";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulMaintenanceAsPrepends' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_prepends.is_set || is_set(as_prepends.operation)) leaf_name_data.push_back(as_prepends.get_name_leafdata());
    if (gshut_prepends_disable.is_set || is_set(gshut_prepends_disable.operation)) leaf_name_data.push_back(gshut_prepends_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-prepends")
    {
        as_prepends = value;
    }
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Global()
    :
    best_path_aigp_ignore{YType::empty, "best-path-aigp-ignore"},
    best_path_as_multipath_relax{YType::empty, "best-path-as-multipath-relax"},
    best_path_as_path_length{YType::empty, "best-path-as-path-length"},
    best_path_confederation_paths{YType::empty, "best-path-confederation-paths"},
    best_path_cost_community{YType::empty, "best-path-cost-community"},
    best_path_med_always{YType::empty, "best-path-med-always"},
    best_path_med_missing{YType::empty, "best-path-med-missing"},
    best_path_router_id{YType::empty, "best-path-router-id"},
    default_info_originate{YType::empty, "default-info-originate"},
    default_metric{YType::uint32, "default-metric"},
    disable_auto_soft_reset{YType::empty, "disable-auto-soft-reset"},
    disable_enforce_first_as{YType::empty, "disable-enforce-first-as"},
    disable_fast_external_fallover{YType::empty, "disable-fast-external-fallover"},
    disable_msg_log{YType::empty, "disable-msg-log"},
    disable_neighbor_logging{YType::empty, "disable-neighbor-logging"},
    enforce_ibgp_out_policy{YType::empty, "enforce-ibgp-out-policy"},
    global_scan_time{YType::uint32, "global-scan-time"},
    graceful_reset{YType::empty, "graceful-reset"},
    graceful_restart{YType::empty, "graceful-restart"},
    graceful_restart_purge_time{YType::uint32, "graceful-restart-purge-time"},
    graceful_restart_stalepath_time{YType::uint32, "graceful-restart-stalepath-time"},
    graceful_restart_time{YType::uint32, "graceful-restart-time"},
    igp_loop_check{YType::empty, "igp-loop-check"},
    igp_redist_internal{YType::empty, "igp-redist-internal"},
    install_diversion{YType::empty, "install-diversion"},
    local_preference{YType::uint32, "local-preference"},
    multi_path_as_path_ignore_onwards{YType::empty, "multi-path-as-path-ignore-onwards"},
    mvpn{YType::empty, "mvpn"},
    neighbor_logging_detail{YType::empty, "neighbor-logging-detail"},
    next_hop_trigger_delay{YType::uint32, "next-hop-trigger-delay"},
    nsr{YType::boolean, "nsr"},
    read_only{YType::empty, "read-only"},
    router_id{YType::str, "router-id"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    rpki_bestpath_use_origin_as_validity{YType::empty, "rpki-bestpath-use-origin-as-validity"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    rpki_origin_as_validation_time{YType::uint32, "rpki-origin-as-validation-time"},
    rpki_origin_as_validity_signal_ibgp{YType::empty, "rpki-origin-as-validity-signal-ibgp"},
    update_error_handling_basic_ebgp_disable{YType::empty, "update-error-handling-basic-ebgp-disable"},
    update_error_handling_basic_ibgp_disable{YType::empty, "update-error-handling-basic-ibgp-disable"},
    update_error_handling_extended_ebgp{YType::empty, "update-error-handling-extended-ebgp"},
    update_error_handling_extended_ibgp{YType::empty, "update-error-handling-extended-ibgp"},
    update_limit_process{YType::uint32, "update-limit-process"},
    update_out_logging{YType::empty, "update-out-logging"}
    	,
    as_league(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague>())
	,as_list_groups(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups>())
	,attribute_filter_groups(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups>())
	,bfd(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd>())
	,cluster_id(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId>())
	,confederation_domain(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain>())
	,confederation_peer_ases(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses>())
	,global_afs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs>())
	,global_graceful_maintenance_activate(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate>())
	,global_timers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers>())
	,limits(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits>())
	,mpls_activated_interfaces(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces>())
	,receive_socket_buffer_sizes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes>())
	,rpki_servers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers>())
	,rpki_static_routes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes>())
	,send_socket_buffer_sizes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes>())
	,update_delay(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay>())
	,write_limit(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit>())
{
    as_league->parent = this;
    children["as-league"] = as_league;

    as_list_groups->parent = this;
    children["as-list-groups"] = as_list_groups;

    attribute_filter_groups->parent = this;
    children["attribute-filter-groups"] = attribute_filter_groups;

    bfd->parent = this;
    children["bfd"] = bfd;

    cluster_id->parent = this;
    children["cluster-id"] = cluster_id;

    confederation_domain->parent = this;
    children["confederation-domain"] = confederation_domain;

    confederation_peer_ases->parent = this;
    children["confederation-peer-ases"] = confederation_peer_ases;

    global_afs->parent = this;
    children["global-afs"] = global_afs;

    global_graceful_maintenance_activate->parent = this;
    children["global-graceful-maintenance-activate"] = global_graceful_maintenance_activate;

    global_timers->parent = this;
    children["global-timers"] = global_timers;

    limits->parent = this;
    children["limits"] = limits;

    mpls_activated_interfaces->parent = this;
    children["mpls-activated-interfaces"] = mpls_activated_interfaces;

    receive_socket_buffer_sizes->parent = this;
    children["receive-socket-buffer-sizes"] = receive_socket_buffer_sizes;

    rpki_servers->parent = this;
    children["rpki-servers"] = rpki_servers;

    rpki_static_routes->parent = this;
    children["rpki-static-routes"] = rpki_static_routes;

    send_socket_buffer_sizes->parent = this;
    children["send-socket-buffer-sizes"] = send_socket_buffer_sizes;

    update_delay->parent = this;
    children["update-delay"] = update_delay;

    write_limit->parent = this;
    children["write-limit"] = write_limit;

    yang_name = "global"; yang_parent_name = "default-vrf";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::~Global()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::has_data() const
{
    return best_path_aigp_ignore.is_set
	|| best_path_as_multipath_relax.is_set
	|| best_path_as_path_length.is_set
	|| best_path_confederation_paths.is_set
	|| best_path_cost_community.is_set
	|| best_path_med_always.is_set
	|| best_path_med_missing.is_set
	|| best_path_router_id.is_set
	|| default_info_originate.is_set
	|| default_metric.is_set
	|| disable_auto_soft_reset.is_set
	|| disable_enforce_first_as.is_set
	|| disable_fast_external_fallover.is_set
	|| disable_msg_log.is_set
	|| disable_neighbor_logging.is_set
	|| enforce_ibgp_out_policy.is_set
	|| global_scan_time.is_set
	|| graceful_reset.is_set
	|| graceful_restart.is_set
	|| graceful_restart_purge_time.is_set
	|| graceful_restart_stalepath_time.is_set
	|| graceful_restart_time.is_set
	|| igp_loop_check.is_set
	|| igp_redist_internal.is_set
	|| install_diversion.is_set
	|| local_preference.is_set
	|| multi_path_as_path_ignore_onwards.is_set
	|| mvpn.is_set
	|| neighbor_logging_detail.is_set
	|| next_hop_trigger_delay.is_set
	|| nsr.is_set
	|| read_only.is_set
	|| router_id.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| rpki_bestpath_use_origin_as_validity.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| rpki_origin_as_validation_time.is_set
	|| rpki_origin_as_validity_signal_ibgp.is_set
	|| update_error_handling_basic_ebgp_disable.is_set
	|| update_error_handling_basic_ibgp_disable.is_set
	|| update_error_handling_extended_ebgp.is_set
	|| update_error_handling_extended_ibgp.is_set
	|| update_limit_process.is_set
	|| update_out_logging.is_set
	|| (as_league !=  nullptr && as_league->has_data())
	|| (as_list_groups !=  nullptr && as_list_groups->has_data())
	|| (attribute_filter_groups !=  nullptr && attribute_filter_groups->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cluster_id !=  nullptr && cluster_id->has_data())
	|| (confederation_domain !=  nullptr && confederation_domain->has_data())
	|| (confederation_peer_ases !=  nullptr && confederation_peer_ases->has_data())
	|| (global_afs !=  nullptr && global_afs->has_data())
	|| (global_graceful_maintenance_activate !=  nullptr && global_graceful_maintenance_activate->has_data())
	|| (global_timers !=  nullptr && global_timers->has_data())
	|| (limits !=  nullptr && limits->has_data())
	|| (mpls_activated_interfaces !=  nullptr && mpls_activated_interfaces->has_data())
	|| (receive_socket_buffer_sizes !=  nullptr && receive_socket_buffer_sizes->has_data())
	|| (rpki_servers !=  nullptr && rpki_servers->has_data())
	|| (rpki_static_routes !=  nullptr && rpki_static_routes->has_data())
	|| (send_socket_buffer_sizes !=  nullptr && send_socket_buffer_sizes->has_data())
	|| (update_delay !=  nullptr && update_delay->has_data())
	|| (write_limit !=  nullptr && write_limit->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(best_path_aigp_ignore.operation)
	|| is_set(best_path_as_multipath_relax.operation)
	|| is_set(best_path_as_path_length.operation)
	|| is_set(best_path_confederation_paths.operation)
	|| is_set(best_path_cost_community.operation)
	|| is_set(best_path_med_always.operation)
	|| is_set(best_path_med_missing.operation)
	|| is_set(best_path_router_id.operation)
	|| is_set(default_info_originate.operation)
	|| is_set(default_metric.operation)
	|| is_set(disable_auto_soft_reset.operation)
	|| is_set(disable_enforce_first_as.operation)
	|| is_set(disable_fast_external_fallover.operation)
	|| is_set(disable_msg_log.operation)
	|| is_set(disable_neighbor_logging.operation)
	|| is_set(enforce_ibgp_out_policy.operation)
	|| is_set(global_scan_time.operation)
	|| is_set(graceful_reset.operation)
	|| is_set(graceful_restart.operation)
	|| is_set(graceful_restart_purge_time.operation)
	|| is_set(graceful_restart_stalepath_time.operation)
	|| is_set(graceful_restart_time.operation)
	|| is_set(igp_loop_check.operation)
	|| is_set(igp_redist_internal.operation)
	|| is_set(install_diversion.operation)
	|| is_set(local_preference.operation)
	|| is_set(multi_path_as_path_ignore_onwards.operation)
	|| is_set(mvpn.operation)
	|| is_set(neighbor_logging_detail.operation)
	|| is_set(next_hop_trigger_delay.operation)
	|| is_set(nsr.operation)
	|| is_set(read_only.operation)
	|| is_set(router_id.operation)
	|| is_set(rpki_bestpath_origin_as_allow_invalid.operation)
	|| is_set(rpki_bestpath_use_origin_as_validity.operation)
	|| is_set(rpki_origin_as_validation_disable.operation)
	|| is_set(rpki_origin_as_validation_time.operation)
	|| is_set(rpki_origin_as_validity_signal_ibgp.operation)
	|| is_set(update_error_handling_basic_ebgp_disable.operation)
	|| is_set(update_error_handling_basic_ibgp_disable.operation)
	|| is_set(update_error_handling_extended_ebgp.operation)
	|| is_set(update_error_handling_extended_ibgp.operation)
	|| is_set(update_limit_process.operation)
	|| is_set(update_out_logging.operation)
	|| (as_league !=  nullptr && as_league->has_operation())
	|| (as_list_groups !=  nullptr && as_list_groups->has_operation())
	|| (attribute_filter_groups !=  nullptr && attribute_filter_groups->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cluster_id !=  nullptr && cluster_id->has_operation())
	|| (confederation_domain !=  nullptr && confederation_domain->has_operation())
	|| (confederation_peer_ases !=  nullptr && confederation_peer_ases->has_operation())
	|| (global_afs !=  nullptr && global_afs->has_operation())
	|| (global_graceful_maintenance_activate !=  nullptr && global_graceful_maintenance_activate->has_operation())
	|| (global_timers !=  nullptr && global_timers->has_operation())
	|| (limits !=  nullptr && limits->has_operation())
	|| (mpls_activated_interfaces !=  nullptr && mpls_activated_interfaces->has_operation())
	|| (receive_socket_buffer_sizes !=  nullptr && receive_socket_buffer_sizes->has_operation())
	|| (rpki_servers !=  nullptr && rpki_servers->has_operation())
	|| (rpki_static_routes !=  nullptr && rpki_static_routes->has_operation())
	|| (send_socket_buffer_sizes !=  nullptr && send_socket_buffer_sizes->has_operation())
	|| (update_delay !=  nullptr && update_delay->has_operation())
	|| (write_limit !=  nullptr && write_limit->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Global' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_path_aigp_ignore.is_set || is_set(best_path_aigp_ignore.operation)) leaf_name_data.push_back(best_path_aigp_ignore.get_name_leafdata());
    if (best_path_as_multipath_relax.is_set || is_set(best_path_as_multipath_relax.operation)) leaf_name_data.push_back(best_path_as_multipath_relax.get_name_leafdata());
    if (best_path_as_path_length.is_set || is_set(best_path_as_path_length.operation)) leaf_name_data.push_back(best_path_as_path_length.get_name_leafdata());
    if (best_path_confederation_paths.is_set || is_set(best_path_confederation_paths.operation)) leaf_name_data.push_back(best_path_confederation_paths.get_name_leafdata());
    if (best_path_cost_community.is_set || is_set(best_path_cost_community.operation)) leaf_name_data.push_back(best_path_cost_community.get_name_leafdata());
    if (best_path_med_always.is_set || is_set(best_path_med_always.operation)) leaf_name_data.push_back(best_path_med_always.get_name_leafdata());
    if (best_path_med_missing.is_set || is_set(best_path_med_missing.operation)) leaf_name_data.push_back(best_path_med_missing.get_name_leafdata());
    if (best_path_router_id.is_set || is_set(best_path_router_id.operation)) leaf_name_data.push_back(best_path_router_id.get_name_leafdata());
    if (default_info_originate.is_set || is_set(default_info_originate.operation)) leaf_name_data.push_back(default_info_originate.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (disable_auto_soft_reset.is_set || is_set(disable_auto_soft_reset.operation)) leaf_name_data.push_back(disable_auto_soft_reset.get_name_leafdata());
    if (disable_enforce_first_as.is_set || is_set(disable_enforce_first_as.operation)) leaf_name_data.push_back(disable_enforce_first_as.get_name_leafdata());
    if (disable_fast_external_fallover.is_set || is_set(disable_fast_external_fallover.operation)) leaf_name_data.push_back(disable_fast_external_fallover.get_name_leafdata());
    if (disable_msg_log.is_set || is_set(disable_msg_log.operation)) leaf_name_data.push_back(disable_msg_log.get_name_leafdata());
    if (disable_neighbor_logging.is_set || is_set(disable_neighbor_logging.operation)) leaf_name_data.push_back(disable_neighbor_logging.get_name_leafdata());
    if (enforce_ibgp_out_policy.is_set || is_set(enforce_ibgp_out_policy.operation)) leaf_name_data.push_back(enforce_ibgp_out_policy.get_name_leafdata());
    if (global_scan_time.is_set || is_set(global_scan_time.operation)) leaf_name_data.push_back(global_scan_time.get_name_leafdata());
    if (graceful_reset.is_set || is_set(graceful_reset.operation)) leaf_name_data.push_back(graceful_reset.get_name_leafdata());
    if (graceful_restart.is_set || is_set(graceful_restart.operation)) leaf_name_data.push_back(graceful_restart.get_name_leafdata());
    if (graceful_restart_purge_time.is_set || is_set(graceful_restart_purge_time.operation)) leaf_name_data.push_back(graceful_restart_purge_time.get_name_leafdata());
    if (graceful_restart_stalepath_time.is_set || is_set(graceful_restart_stalepath_time.operation)) leaf_name_data.push_back(graceful_restart_stalepath_time.get_name_leafdata());
    if (graceful_restart_time.is_set || is_set(graceful_restart_time.operation)) leaf_name_data.push_back(graceful_restart_time.get_name_leafdata());
    if (igp_loop_check.is_set || is_set(igp_loop_check.operation)) leaf_name_data.push_back(igp_loop_check.get_name_leafdata());
    if (igp_redist_internal.is_set || is_set(igp_redist_internal.operation)) leaf_name_data.push_back(igp_redist_internal.get_name_leafdata());
    if (install_diversion.is_set || is_set(install_diversion.operation)) leaf_name_data.push_back(install_diversion.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.operation)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (multi_path_as_path_ignore_onwards.is_set || is_set(multi_path_as_path_ignore_onwards.operation)) leaf_name_data.push_back(multi_path_as_path_ignore_onwards.get_name_leafdata());
    if (mvpn.is_set || is_set(mvpn.operation)) leaf_name_data.push_back(mvpn.get_name_leafdata());
    if (neighbor_logging_detail.is_set || is_set(neighbor_logging_detail.operation)) leaf_name_data.push_back(neighbor_logging_detail.get_name_leafdata());
    if (next_hop_trigger_delay.is_set || is_set(next_hop_trigger_delay.operation)) leaf_name_data.push_back(next_hop_trigger_delay.get_name_leafdata());
    if (nsr.is_set || is_set(nsr.operation)) leaf_name_data.push_back(nsr.get_name_leafdata());
    if (read_only.is_set || is_set(read_only.operation)) leaf_name_data.push_back(read_only.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.operation)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (rpki_bestpath_use_origin_as_validity.is_set || is_set(rpki_bestpath_use_origin_as_validity.operation)) leaf_name_data.push_back(rpki_bestpath_use_origin_as_validity.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.operation)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (rpki_origin_as_validation_time.is_set || is_set(rpki_origin_as_validation_time.operation)) leaf_name_data.push_back(rpki_origin_as_validation_time.get_name_leafdata());
    if (rpki_origin_as_validity_signal_ibgp.is_set || is_set(rpki_origin_as_validity_signal_ibgp.operation)) leaf_name_data.push_back(rpki_origin_as_validity_signal_ibgp.get_name_leafdata());
    if (update_error_handling_basic_ebgp_disable.is_set || is_set(update_error_handling_basic_ebgp_disable.operation)) leaf_name_data.push_back(update_error_handling_basic_ebgp_disable.get_name_leafdata());
    if (update_error_handling_basic_ibgp_disable.is_set || is_set(update_error_handling_basic_ibgp_disable.operation)) leaf_name_data.push_back(update_error_handling_basic_ibgp_disable.get_name_leafdata());
    if (update_error_handling_extended_ebgp.is_set || is_set(update_error_handling_extended_ebgp.operation)) leaf_name_data.push_back(update_error_handling_extended_ebgp.get_name_leafdata());
    if (update_error_handling_extended_ibgp.is_set || is_set(update_error_handling_extended_ibgp.operation)) leaf_name_data.push_back(update_error_handling_extended_ibgp.get_name_leafdata());
    if (update_limit_process.is_set || is_set(update_limit_process.operation)) leaf_name_data.push_back(update_limit_process.get_name_leafdata());
    if (update_out_logging.is_set || is_set(update_out_logging.operation)) leaf_name_data.push_back(update_out_logging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "as-league")
    {
        if(as_league != nullptr)
        {
            children["as-league"] = as_league;
        }
        else
        {
            as_league = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague>();
            as_league->parent = this;
            children["as-league"] = as_league;
        }
        return children.at("as-league");
    }

    if(child_yang_name == "as-list-groups")
    {
        if(as_list_groups != nullptr)
        {
            children["as-list-groups"] = as_list_groups;
        }
        else
        {
            as_list_groups = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups>();
            as_list_groups->parent = this;
            children["as-list-groups"] = as_list_groups;
        }
        return children.at("as-list-groups");
    }

    if(child_yang_name == "attribute-filter-groups")
    {
        if(attribute_filter_groups != nullptr)
        {
            children["attribute-filter-groups"] = attribute_filter_groups;
        }
        else
        {
            attribute_filter_groups = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups>();
            attribute_filter_groups->parent = this;
            children["attribute-filter-groups"] = attribute_filter_groups;
        }
        return children.at("attribute-filter-groups");
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
        else
        {
            bfd = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd;
        }
        return children.at("bfd");
    }

    if(child_yang_name == "cluster-id")
    {
        if(cluster_id != nullptr)
        {
            children["cluster-id"] = cluster_id;
        }
        else
        {
            cluster_id = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId>();
            cluster_id->parent = this;
            children["cluster-id"] = cluster_id;
        }
        return children.at("cluster-id");
    }

    if(child_yang_name == "confederation-domain")
    {
        if(confederation_domain != nullptr)
        {
            children["confederation-domain"] = confederation_domain;
        }
        else
        {
            confederation_domain = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain>();
            confederation_domain->parent = this;
            children["confederation-domain"] = confederation_domain;
        }
        return children.at("confederation-domain");
    }

    if(child_yang_name == "confederation-peer-ases")
    {
        if(confederation_peer_ases != nullptr)
        {
            children["confederation-peer-ases"] = confederation_peer_ases;
        }
        else
        {
            confederation_peer_ases = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses>();
            confederation_peer_ases->parent = this;
            children["confederation-peer-ases"] = confederation_peer_ases;
        }
        return children.at("confederation-peer-ases");
    }

    if(child_yang_name == "global-afs")
    {
        if(global_afs != nullptr)
        {
            children["global-afs"] = global_afs;
        }
        else
        {
            global_afs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs>();
            global_afs->parent = this;
            children["global-afs"] = global_afs;
        }
        return children.at("global-afs");
    }

    if(child_yang_name == "global-graceful-maintenance-activate")
    {
        if(global_graceful_maintenance_activate != nullptr)
        {
            children["global-graceful-maintenance-activate"] = global_graceful_maintenance_activate;
        }
        else
        {
            global_graceful_maintenance_activate = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate>();
            global_graceful_maintenance_activate->parent = this;
            children["global-graceful-maintenance-activate"] = global_graceful_maintenance_activate;
        }
        return children.at("global-graceful-maintenance-activate");
    }

    if(child_yang_name == "global-timers")
    {
        if(global_timers != nullptr)
        {
            children["global-timers"] = global_timers;
        }
        else
        {
            global_timers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers>();
            global_timers->parent = this;
            children["global-timers"] = global_timers;
        }
        return children.at("global-timers");
    }

    if(child_yang_name == "limits")
    {
        if(limits != nullptr)
        {
            children["limits"] = limits;
        }
        else
        {
            limits = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits>();
            limits->parent = this;
            children["limits"] = limits;
        }
        return children.at("limits");
    }

    if(child_yang_name == "mpls-activated-interfaces")
    {
        if(mpls_activated_interfaces != nullptr)
        {
            children["mpls-activated-interfaces"] = mpls_activated_interfaces;
        }
        else
        {
            mpls_activated_interfaces = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces>();
            mpls_activated_interfaces->parent = this;
            children["mpls-activated-interfaces"] = mpls_activated_interfaces;
        }
        return children.at("mpls-activated-interfaces");
    }

    if(child_yang_name == "receive-socket-buffer-sizes")
    {
        if(receive_socket_buffer_sizes != nullptr)
        {
            children["receive-socket-buffer-sizes"] = receive_socket_buffer_sizes;
        }
        else
        {
            receive_socket_buffer_sizes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes>();
            receive_socket_buffer_sizes->parent = this;
            children["receive-socket-buffer-sizes"] = receive_socket_buffer_sizes;
        }
        return children.at("receive-socket-buffer-sizes");
    }

    if(child_yang_name == "rpki-servers")
    {
        if(rpki_servers != nullptr)
        {
            children["rpki-servers"] = rpki_servers;
        }
        else
        {
            rpki_servers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers>();
            rpki_servers->parent = this;
            children["rpki-servers"] = rpki_servers;
        }
        return children.at("rpki-servers");
    }

    if(child_yang_name == "rpki-static-routes")
    {
        if(rpki_static_routes != nullptr)
        {
            children["rpki-static-routes"] = rpki_static_routes;
        }
        else
        {
            rpki_static_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes>();
            rpki_static_routes->parent = this;
            children["rpki-static-routes"] = rpki_static_routes;
        }
        return children.at("rpki-static-routes");
    }

    if(child_yang_name == "send-socket-buffer-sizes")
    {
        if(send_socket_buffer_sizes != nullptr)
        {
            children["send-socket-buffer-sizes"] = send_socket_buffer_sizes;
        }
        else
        {
            send_socket_buffer_sizes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes>();
            send_socket_buffer_sizes->parent = this;
            children["send-socket-buffer-sizes"] = send_socket_buffer_sizes;
        }
        return children.at("send-socket-buffer-sizes");
    }

    if(child_yang_name == "update-delay")
    {
        if(update_delay != nullptr)
        {
            children["update-delay"] = update_delay;
        }
        else
        {
            update_delay = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay>();
            update_delay->parent = this;
            children["update-delay"] = update_delay;
        }
        return children.at("update-delay");
    }

    if(child_yang_name == "write-limit")
    {
        if(write_limit != nullptr)
        {
            children["write-limit"] = write_limit;
        }
        else
        {
            write_limit = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit>();
            write_limit->parent = this;
            children["write-limit"] = write_limit;
        }
        return children.at("write-limit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::get_children()
{
    if(children.find("as-league") == children.end())
    {
        if(as_league != nullptr)
        {
            children["as-league"] = as_league;
        }
    }

    if(children.find("as-list-groups") == children.end())
    {
        if(as_list_groups != nullptr)
        {
            children["as-list-groups"] = as_list_groups;
        }
    }

    if(children.find("attribute-filter-groups") == children.end())
    {
        if(attribute_filter_groups != nullptr)
        {
            children["attribute-filter-groups"] = attribute_filter_groups;
        }
    }

    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
    }

    if(children.find("cluster-id") == children.end())
    {
        if(cluster_id != nullptr)
        {
            children["cluster-id"] = cluster_id;
        }
    }

    if(children.find("confederation-domain") == children.end())
    {
        if(confederation_domain != nullptr)
        {
            children["confederation-domain"] = confederation_domain;
        }
    }

    if(children.find("confederation-peer-ases") == children.end())
    {
        if(confederation_peer_ases != nullptr)
        {
            children["confederation-peer-ases"] = confederation_peer_ases;
        }
    }

    if(children.find("global-afs") == children.end())
    {
        if(global_afs != nullptr)
        {
            children["global-afs"] = global_afs;
        }
    }

    if(children.find("global-graceful-maintenance-activate") == children.end())
    {
        if(global_graceful_maintenance_activate != nullptr)
        {
            children["global-graceful-maintenance-activate"] = global_graceful_maintenance_activate;
        }
    }

    if(children.find("global-timers") == children.end())
    {
        if(global_timers != nullptr)
        {
            children["global-timers"] = global_timers;
        }
    }

    if(children.find("limits") == children.end())
    {
        if(limits != nullptr)
        {
            children["limits"] = limits;
        }
    }

    if(children.find("mpls-activated-interfaces") == children.end())
    {
        if(mpls_activated_interfaces != nullptr)
        {
            children["mpls-activated-interfaces"] = mpls_activated_interfaces;
        }
    }

    if(children.find("receive-socket-buffer-sizes") == children.end())
    {
        if(receive_socket_buffer_sizes != nullptr)
        {
            children["receive-socket-buffer-sizes"] = receive_socket_buffer_sizes;
        }
    }

    if(children.find("rpki-servers") == children.end())
    {
        if(rpki_servers != nullptr)
        {
            children["rpki-servers"] = rpki_servers;
        }
    }

    if(children.find("rpki-static-routes") == children.end())
    {
        if(rpki_static_routes != nullptr)
        {
            children["rpki-static-routes"] = rpki_static_routes;
        }
    }

    if(children.find("send-socket-buffer-sizes") == children.end())
    {
        if(send_socket_buffer_sizes != nullptr)
        {
            children["send-socket-buffer-sizes"] = send_socket_buffer_sizes;
        }
    }

    if(children.find("update-delay") == children.end())
    {
        if(update_delay != nullptr)
        {
            children["update-delay"] = update_delay;
        }
    }

    if(children.find("write-limit") == children.end())
    {
        if(write_limit != nullptr)
        {
            children["write-limit"] = write_limit;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "best-path-aigp-ignore")
    {
        best_path_aigp_ignore = value;
    }
    if(value_path == "best-path-as-multipath-relax")
    {
        best_path_as_multipath_relax = value;
    }
    if(value_path == "best-path-as-path-length")
    {
        best_path_as_path_length = value;
    }
    if(value_path == "best-path-confederation-paths")
    {
        best_path_confederation_paths = value;
    }
    if(value_path == "best-path-cost-community")
    {
        best_path_cost_community = value;
    }
    if(value_path == "best-path-med-always")
    {
        best_path_med_always = value;
    }
    if(value_path == "best-path-med-missing")
    {
        best_path_med_missing = value;
    }
    if(value_path == "best-path-router-id")
    {
        best_path_router_id = value;
    }
    if(value_path == "default-info-originate")
    {
        default_info_originate = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "disable-auto-soft-reset")
    {
        disable_auto_soft_reset = value;
    }
    if(value_path == "disable-enforce-first-as")
    {
        disable_enforce_first_as = value;
    }
    if(value_path == "disable-fast-external-fallover")
    {
        disable_fast_external_fallover = value;
    }
    if(value_path == "disable-msg-log")
    {
        disable_msg_log = value;
    }
    if(value_path == "disable-neighbor-logging")
    {
        disable_neighbor_logging = value;
    }
    if(value_path == "enforce-ibgp-out-policy")
    {
        enforce_ibgp_out_policy = value;
    }
    if(value_path == "global-scan-time")
    {
        global_scan_time = value;
    }
    if(value_path == "graceful-reset")
    {
        graceful_reset = value;
    }
    if(value_path == "graceful-restart")
    {
        graceful_restart = value;
    }
    if(value_path == "graceful-restart-purge-time")
    {
        graceful_restart_purge_time = value;
    }
    if(value_path == "graceful-restart-stalepath-time")
    {
        graceful_restart_stalepath_time = value;
    }
    if(value_path == "graceful-restart-time")
    {
        graceful_restart_time = value;
    }
    if(value_path == "igp-loop-check")
    {
        igp_loop_check = value;
    }
    if(value_path == "igp-redist-internal")
    {
        igp_redist_internal = value;
    }
    if(value_path == "install-diversion")
    {
        install_diversion = value;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
    }
    if(value_path == "multi-path-as-path-ignore-onwards")
    {
        multi_path_as_path_ignore_onwards = value;
    }
    if(value_path == "mvpn")
    {
        mvpn = value;
    }
    if(value_path == "neighbor-logging-detail")
    {
        neighbor_logging_detail = value;
    }
    if(value_path == "next-hop-trigger-delay")
    {
        next_hop_trigger_delay = value;
    }
    if(value_path == "nsr")
    {
        nsr = value;
    }
    if(value_path == "read-only")
    {
        read_only = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
    }
    if(value_path == "rpki-bestpath-use-origin-as-validity")
    {
        rpki_bestpath_use_origin_as_validity = value;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
    }
    if(value_path == "rpki-origin-as-validation-time")
    {
        rpki_origin_as_validation_time = value;
    }
    if(value_path == "rpki-origin-as-validity-signal-ibgp")
    {
        rpki_origin_as_validity_signal_ibgp = value;
    }
    if(value_path == "update-error-handling-basic-ebgp-disable")
    {
        update_error_handling_basic_ebgp_disable = value;
    }
    if(value_path == "update-error-handling-basic-ibgp-disable")
    {
        update_error_handling_basic_ibgp_disable = value;
    }
    if(value_path == "update-error-handling-extended-ebgp")
    {
        update_error_handling_extended_ebgp = value;
    }
    if(value_path == "update-error-handling-extended-ibgp")
    {
        update_error_handling_extended_ibgp = value;
    }
    if(value_path == "update-limit-process")
    {
        update_limit_process = value;
    }
    if(value_path == "update-out-logging")
    {
        update_out_logging = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::ClusterId()
    :
    cluster_id_address{YType::str, "cluster-id-address"},
    cluster_id_number{YType::uint32, "cluster-id-number"}
{
    yang_name = "cluster-id"; yang_parent_name = "global";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::~ClusterId()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::has_data() const
{
    return cluster_id_address.is_set
	|| cluster_id_number.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::has_operation() const
{
    return is_set(operation)
	|| is_set(cluster_id_address.operation)
	|| is_set(cluster_id_number.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster-id";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClusterId' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_address.is_set || is_set(cluster_id_address.operation)) leaf_name_data.push_back(cluster_id_address.get_name_leafdata());
    if (cluster_id_number.is_set || is_set(cluster_id_number.operation)) leaf_name_data.push_back(cluster_id_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address = value;
    }
    if(value_path == "cluster-id-number")
    {
        cluster_id_number = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::WriteLimit()
    :
    desynchronize{YType::boolean, "desynchronize"},
    enqueued_messages{YType::uint32, "enqueued-messages"},
    formatted_messages{YType::uint32, "formatted-messages"}
{
    yang_name = "write-limit"; yang_parent_name = "global";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::~WriteLimit()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::has_data() const
{
    return desynchronize.is_set
	|| enqueued_messages.is_set
	|| formatted_messages.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(desynchronize.operation)
	|| is_set(enqueued_messages.operation)
	|| is_set(formatted_messages.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "write-limit";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WriteLimit' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (desynchronize.is_set || is_set(desynchronize.operation)) leaf_name_data.push_back(desynchronize.get_name_leafdata());
    if (enqueued_messages.is_set || is_set(enqueued_messages.operation)) leaf_name_data.push_back(enqueued_messages.get_name_leafdata());
    if (formatted_messages.is_set || is_set(formatted_messages.operation)) leaf_name_data.push_back(formatted_messages.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "desynchronize")
    {
        desynchronize = value;
    }
    if(value_path == "enqueued-messages")
    {
        enqueued_messages = value;
    }
    if(value_path == "formatted-messages")
    {
        formatted_messages = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::UpdateDelay()
    :
    always{YType::boolean, "always"},
    delay{YType::uint32, "delay"}
{
    yang_name = "update-delay"; yang_parent_name = "global";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::~UpdateDelay()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::has_data() const
{
    return always.is_set
	|| delay.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::has_operation() const
{
    return is_set(operation)
	|| is_set(always.operation)
	|| is_set(delay.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-delay";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateDelay' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.operation)) leaf_name_data.push_back(always.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "always")
    {
        always = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::AsLeague()
    :
    enable{YType::empty, "enable"}
    	,
    peers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers>())
{
    peers->parent = this;
    children["peers"] = peers;

    yang_name = "as-league"; yang_parent_name = "global";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::~AsLeague()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::has_data() const
{
    return enable.is_set
	|| (peers !=  nullptr && peers->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (peers !=  nullptr && peers->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-league";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsLeague' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::get_children()
{
    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "as-league";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::~Peers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::Peer()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::~Peer()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[as-xx='" <<as_xx <<"']" <<"[as-yy='" <<as_yy <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::set_value(const std::string & value_path, std::string value)
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

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServers()
{
    yang_name = "rpki-servers"; yang_parent_name = "global";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::~RpkiServers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::has_data() const
{
    for (std::size_t index=0; index<rpki_server.size(); index++)
    {
        if(rpki_server[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::has_operation() const
{
    for (std::size_t index=0; index<rpki_server.size(); index++)
    {
        if(rpki_server[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-servers";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpkiServers' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rpki-server")
    {
        for(auto const & c : rpki_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer>();
        c->parent = this;
        rpki_server.push_back(std::move(c));
        children[segment_path] = rpki_server.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::get_children()
{
    for (auto const & c : rpki_server)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::RpkiServer()
    :
    server{YType::str, "server"},
    enable{YType::empty, "enable"},
    password{YType::str, "password"},
    purge_time{YType::int32, "purge-time"},
    refresh_time{YType::int32, "refresh-time"},
    response_time{YType::int32, "response-time"},
    shutdown{YType::empty, "shutdown"},
    username{YType::str, "username"}
    	,
    transport(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport>())
{
    transport->parent = this;
    children["transport"] = transport;

    yang_name = "rpki-server"; yang_parent_name = "rpki-servers";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::~RpkiServer()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::has_data() const
{
    return server.is_set
	|| enable.is_set
	|| password.is_set
	|| purge_time.is_set
	|| refresh_time.is_set
	|| response_time.is_set
	|| shutdown.is_set
	|| username.is_set
	|| (transport !=  nullptr && transport->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::has_operation() const
{
    return is_set(operation)
	|| is_set(server.operation)
	|| is_set(enable.operation)
	|| is_set(password.operation)
	|| is_set(purge_time.operation)
	|| is_set(refresh_time.operation)
	|| is_set(response_time.operation)
	|| is_set(shutdown.operation)
	|| is_set(username.operation)
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-server" <<"[server='" <<server <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpkiServer' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server.is_set || is_set(server.operation)) leaf_name_data.push_back(server.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (purge_time.is_set || is_set(purge_time.operation)) leaf_name_data.push_back(purge_time.get_name_leafdata());
    if (refresh_time.is_set || is_set(refresh_time.operation)) leaf_name_data.push_back(refresh_time.get_name_leafdata());
    if (response_time.is_set || is_set(response_time.operation)) leaf_name_data.push_back(response_time.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "transport")
    {
        if(transport != nullptr)
        {
            children["transport"] = transport;
        }
        else
        {
            transport = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport>();
            transport->parent = this;
            children["transport"] = transport;
        }
        return children.at("transport");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::get_children()
{
    if(children.find("transport") == children.end())
    {
        if(transport != nullptr)
        {
            children["transport"] = transport;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server")
    {
        server = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "purge-time")
    {
        purge_time = value;
    }
    if(value_path == "refresh-time")
    {
        refresh_time = value;
    }
    if(value_path == "response-time")
    {
        response_time = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::Transport()
    :
    port{YType::uint16, "port"},
    transport{YType::enumeration, "transport"}
{
    yang_name = "transport"; yang_parent_name = "rpki-server";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::~Transport()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::has_data() const
{
    return port.is_set
	|| transport.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::has_operation() const
{
    return is_set(operation)
	|| is_set(port.operation)
	|| is_set(transport.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transport' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (transport.is_set || is_set(transport.operation)) leaf_name_data.push_back(transport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "transport")
    {
        transport = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroups()
{
    yang_name = "as-list-groups"; yang_parent_name = "global";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::~AsListGroups()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::has_data() const
{
    for (std::size_t index=0; index<as_list_group.size(); index++)
    {
        if(as_list_group[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::has_operation() const
{
    for (std::size_t index=0; index<as_list_group.size(); index++)
    {
        if(as_list_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-list-groups";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsListGroups' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "as-list-group")
    {
        for(auto const & c : as_list_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup>();
        c->parent = this;
        as_list_group.push_back(std::move(c));
        children[segment_path] = as_list_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::get_children()
{
    for (auto const & c : as_list_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::AsListGroup()
    :
    as_list_group_name{YType::str, "as-list-group-name"},
    enable{YType::empty, "enable"}
    	,
    ases(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases>())
{
    ases->parent = this;
    children["ases"] = ases;

    yang_name = "as-list-group"; yang_parent_name = "as-list-groups";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::~AsListGroup()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::has_data() const
{
    return as_list_group_name.is_set
	|| enable.is_set
	|| (ases !=  nullptr && ases->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(as_list_group_name.operation)
	|| is_set(enable.operation)
	|| (ases !=  nullptr && ases->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-list-group" <<"[as-list-group-name='" <<as_list_group_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsListGroup' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_list_group_name.is_set || is_set(as_list_group_name.operation)) leaf_name_data.push_back(as_list_group_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ases")
    {
        if(ases != nullptr)
        {
            children["ases"] = ases;
        }
        else
        {
            ases = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases>();
            ases->parent = this;
            children["ases"] = ases;
        }
        return children.at("ases");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::get_children()
{
    if(children.find("ases") == children.end())
    {
        if(ases != nullptr)
        {
            children["ases"] = ases;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-list-group-name")
    {
        as_list_group_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::Ases()
{
    yang_name = "ases"; yang_parent_name = "as-list-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::~Ases()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::has_data() const
{
    for (std::size_t index=0; index<as.size(); index++)
    {
        if(as[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::has_operation() const
{
    for (std::size_t index=0; index<as.size(); index++)
    {
        if(as[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ases";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ases' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "as")
    {
        for(auto const & c : as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As>();
        c->parent = this;
        as.push_back(std::move(c));
        children[segment_path] = as.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::get_children()
{
    for (auto const & c : as)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::As()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{
    yang_name = "as"; yang_parent_name = "ases";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::~As()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as" <<"[as-xx='" <<as_xx <<"']" <<"[as-yy='" <<as_yy <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'As' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::set_value(const std::string & value_path, std::string value)
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

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::Limits()
    :
    maximum_neighbors{YType::uint32, "maximum-neighbors"}
{
    yang_name = "limits"; yang_parent_name = "global";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::~Limits()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::has_data() const
{
    return maximum_neighbors.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_neighbors.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limits";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Limits' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_neighbors.is_set || is_set(maximum_neighbors.operation)) leaf_name_data.push_back(maximum_neighbors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-neighbors")
    {
        maximum_neighbors = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::ConfederationDomain()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{
    yang_name = "confederation-domain"; yang_parent_name = "global";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::~ConfederationDomain()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confederation-domain";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConfederationDomain' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::set_value(const std::string & value_path, std::string value)
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

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAses()
{
    yang_name = "confederation-peer-ases"; yang_parent_name = "global";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::~ConfederationPeerAses()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::has_data() const
{
    for (std::size_t index=0; index<confederation_peer_as.size(); index++)
    {
        if(confederation_peer_as[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::has_operation() const
{
    for (std::size_t index=0; index<confederation_peer_as.size(); index++)
    {
        if(confederation_peer_as[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confederation-peer-ases";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConfederationPeerAses' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "confederation-peer-as")
    {
        for(auto const & c : confederation_peer_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs>();
        c->parent = this;
        confederation_peer_as.push_back(std::move(c));
        children[segment_path] = confederation_peer_as.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::get_children()
{
    for (auto const & c : confederation_peer_as)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::ConfederationPeerAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{
    yang_name = "confederation-peer-as"; yang_parent_name = "confederation-peer-ases";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::~ConfederationPeerAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confederation-peer-as" <<"[as-xx='" <<as_xx <<"']" <<"[as-yy='" <<as_yy <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConfederationPeerAs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::set_value(const std::string & value_path, std::string value)
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

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroups()
{
    yang_name = "attribute-filter-groups"; yang_parent_name = "global";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::~AttributeFilterGroups()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::has_data() const
{
    for (std::size_t index=0; index<attribute_filter_group.size(); index++)
    {
        if(attribute_filter_group[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::has_operation() const
{
    for (std::size_t index=0; index<attribute_filter_group.size(); index++)
    {
        if(attribute_filter_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filter-groups";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeFilterGroups' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attribute-filter-group")
    {
        for(auto const & c : attribute_filter_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup>();
        c->parent = this;
        attribute_filter_group.push_back(std::move(c));
        children[segment_path] = attribute_filter_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::get_children()
{
    for (auto const & c : attribute_filter_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterGroup()
    :
    attribute_filter_group_name{YType::str, "attribute-filter-group-name"},
    enable{YType::empty, "enable"}
    	,
    attribute_filters(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters>())
{
    attribute_filters->parent = this;
    children["attribute-filters"] = attribute_filters;

    yang_name = "attribute-filter-group"; yang_parent_name = "attribute-filter-groups";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::~AttributeFilterGroup()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::has_data() const
{
    return attribute_filter_group_name.is_set
	|| enable.is_set
	|| (attribute_filters !=  nullptr && attribute_filters->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_filter_group_name.operation)
	|| is_set(enable.operation)
	|| (attribute_filters !=  nullptr && attribute_filters->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filter-group" <<"[attribute-filter-group-name='" <<attribute_filter_group_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeFilterGroup' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_filter_group_name.is_set || is_set(attribute_filter_group_name.operation)) leaf_name_data.push_back(attribute_filter_group_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attribute-filters")
    {
        if(attribute_filters != nullptr)
        {
            children["attribute-filters"] = attribute_filters;
        }
        else
        {
            attribute_filters = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters>();
            attribute_filters->parent = this;
            children["attribute-filters"] = attribute_filters;
        }
        return children.at("attribute-filters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::get_children()
{
    if(children.find("attribute-filters") == children.end())
    {
        if(attribute_filters != nullptr)
        {
            children["attribute-filters"] = attribute_filters;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-filter-group-name")
    {
        attribute_filter_group_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilters()
{
    yang_name = "attribute-filters"; yang_parent_name = "attribute-filter-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::~AttributeFilters()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::has_data() const
{
    for (std::size_t index=0; index<attribute_filter.size(); index++)
    {
        if(attribute_filter[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::has_operation() const
{
    for (std::size_t index=0; index<attribute_filter.size(); index++)
    {
        if(attribute_filter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filters";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeFilters' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attribute-filter")
    {
        for(auto const & c : attribute_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter>();
        c->parent = this;
        attribute_filter.push_back(std::move(c));
        children[segment_path] = attribute_filter.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::get_children()
{
    for (auto const & c : attribute_filter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::AttributeFilter()
    :
    attribute_end{YType::uint32, "attribute-end"},
    attribute_start{YType::uint32, "attribute-start"},
    filter_action{YType::enumeration, "filter-action"}
{
    yang_name = "attribute-filter"; yang_parent_name = "attribute-filters";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::~AttributeFilter()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::has_data() const
{
    return attribute_end.is_set
	|| attribute_start.is_set
	|| filter_action.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_end.operation)
	|| is_set(attribute_start.operation)
	|| is_set(filter_action.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filter" <<"[attribute-end='" <<attribute_end <<"']" <<"[attribute-start='" <<attribute_start <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeFilter' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_end.is_set || is_set(attribute_end.operation)) leaf_name_data.push_back(attribute_end.get_name_leafdata());
    if (attribute_start.is_set || is_set(attribute_start.operation)) leaf_name_data.push_back(attribute_start.get_name_leafdata());
    if (filter_action.is_set || is_set(filter_action.operation)) leaf_name_data.push_back(filter_action.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-end")
    {
        attribute_end = value;
    }
    if(value_path == "attribute-start")
    {
        attribute_start = value;
    }
    if(value_path == "filter-action")
    {
        filter_action = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::GlobalGracefulMaintenanceActivate()
    :
    all_neighbors{YType::boolean, "all-neighbors"},
    retain_routes{YType::boolean, "retain-routes"}
{
    yang_name = "global-graceful-maintenance-activate"; yang_parent_name = "global";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::~GlobalGracefulMaintenanceActivate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::has_data() const
{
    return all_neighbors.is_set
	|| retain_routes.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::has_operation() const
{
    return is_set(operation)
	|| is_set(all_neighbors.operation)
	|| is_set(retain_routes.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-graceful-maintenance-activate";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalGracefulMaintenanceActivate' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_neighbors.is_set || is_set(all_neighbors.operation)) leaf_name_data.push_back(all_neighbors.get_name_leafdata());
    if (retain_routes.is_set || is_set(retain_routes.operation)) leaf_name_data.push_back(retain_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-neighbors")
    {
        all_neighbors = value;
    }
    if(value_path == "retain-routes")
    {
        retain_routes = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAfs()
{
    yang_name = "global-afs"; yang_parent_name = "global";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::~GlobalAfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::has_data() const
{
    for (std::size_t index=0; index<global_af.size(); index++)
    {
        if(global_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::has_operation() const
{
    for (std::size_t index=0; index<global_af.size(); index++)
    {
        if(global_af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-afs";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalAfs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global-af")
    {
        for(auto const & c : global_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf>();
        c->parent = this;
        global_af.push_back(std::move(c));
        children[segment_path] = global_af.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::get_children()
{
    for (auto const & c : global_af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::GlobalAf()
    :
    af_name{YType::enumeration, "af-name"},
    additional_paths_receive{YType::enumeration, "additional-paths-receive"},
    additional_paths_send{YType::enumeration, "additional-paths-send"},
    advertise_local_labeled_route_safi_unicast{YType::enumeration, "advertise-local-labeled-route-safi-unicast"},
    attribute_download{YType::empty, "attribute-download"},
    best_external{YType::boolean, "best-external"},
    disable_as_path_loop_check{YType::empty, "disable-as-path-loop-check"},
    disable_client_to_client_rr{YType::empty, "disable-client-to-client-rr"},
    disable_default_martian_check{YType::empty, "disable-default-martian-check"},
    dynamic_med_interval{YType::uint32, "dynamic-med-interval"},
    enable{YType::empty, "enable"},
    global_table_mcast{YType::empty, "global-table-mcast"},
    inter_as_install{YType::empty, "inter-as-install"},
    label_retain{YType::uint32, "label-retain"},
    label_security_rpf{YType::empty, "label-security-rpf"},
    next_hop_critical_trigger_delay{YType::uint32, "next-hop-critical-trigger-delay"},
    next_hop_non_critical_trigger_delay{YType::uint32, "next-hop-non-critical-trigger-delay"},
    next_hop_resolution_prefix_length_minimum{YType::uint32, "next-hop-resolution-prefix-length-minimum"},
    next_hop_route_policy{YType::str, "next-hop-route-policy"},
    permanent_network{YType::str, "permanent-network"},
    reset_weight_on_import{YType::boolean, "reset-weight-on-import"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    rpki_bestpath_use_origin_as_validity{YType::empty, "rpki-bestpath-use-origin-as-validity"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    rpki_origin_as_validity_signal_ibgp{YType::empty, "rpki-origin-as-validity-signal-ibgp"},
    scan_time{YType::uint32, "scan-time"},
    segmented_mcast{YType::empty, "segmented-mcast"},
    table_policy{YType::str, "table-policy"},
    update_limit_address_family{YType::uint32, "update-limit-address-family"},
    update_limit_sub_group_ebgp{YType::uint32, "update-limit-sub-group-ebgp"},
    update_limit_sub_group_ibgp{YType::uint32, "update-limit-sub-group-ibgp"},
    use_igpsr_label{YType::empty, "use-igpsr-label"},
    wait_rib_install{YType::empty, "wait-rib-install"}
    	,
    additional_paths_selection(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection>())
	,aggregate_addresses(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses>())
	,allocate_label(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel>())
	,application_routes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes>())
	,connected_routes(nullptr) // presence node
	,dampening(nullptr) // presence node
	,disable_cluster_client_to_client_rrs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs>())
	,distance(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance>())
	,domain_distinguisher(nullptr) // presence node
	,ebgp(nullptr) // presence node
	,eibgp(nullptr) // presence node
	,eigrp_routes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes>())
	,ibgp(nullptr) // presence node
	,import_delay(nullptr) // presence node
	,isis_routes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes>())
	,label_delay(nullptr) // presence node
	,label_mode(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode>())
	,lisp_routes(nullptr) // presence node
	,mobile_routes(nullptr) // presence node
	,ospf_routes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes>())
	,retain_rt(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt>())
	,rip_routes(nullptr) // presence node
	,sourced_networks(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks>())
	,static_routes(nullptr) // presence node
	,subscriber_routes(nullptr) // presence node
	,vrf_all(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll>())
{
    additional_paths_selection->parent = this;
    children["additional-paths-selection"] = additional_paths_selection;

    aggregate_addresses->parent = this;
    children["aggregate-addresses"] = aggregate_addresses;

    allocate_label->parent = this;
    children["allocate-label"] = allocate_label;

    application_routes->parent = this;
    children["application-routes"] = application_routes;

    disable_cluster_client_to_client_rrs->parent = this;
    children["disable-cluster-client-to-client-rrs"] = disable_cluster_client_to_client_rrs;

    distance->parent = this;
    children["distance"] = distance;

    eigrp_routes->parent = this;
    children["eigrp-routes"] = eigrp_routes;

    isis_routes->parent = this;
    children["isis-routes"] = isis_routes;

    label_mode->parent = this;
    children["label-mode"] = label_mode;

    ospf_routes->parent = this;
    children["ospf-routes"] = ospf_routes;

    retain_rt->parent = this;
    children["retain-rt"] = retain_rt;

    sourced_networks->parent = this;
    children["sourced-networks"] = sourced_networks;

    vrf_all->parent = this;
    children["vrf-all"] = vrf_all;

    yang_name = "global-af"; yang_parent_name = "global-afs";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::~GlobalAf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::has_data() const
{
    return af_name.is_set
	|| additional_paths_receive.is_set
	|| additional_paths_send.is_set
	|| advertise_local_labeled_route_safi_unicast.is_set
	|| attribute_download.is_set
	|| best_external.is_set
	|| disable_as_path_loop_check.is_set
	|| disable_client_to_client_rr.is_set
	|| disable_default_martian_check.is_set
	|| dynamic_med_interval.is_set
	|| enable.is_set
	|| global_table_mcast.is_set
	|| inter_as_install.is_set
	|| label_retain.is_set
	|| label_security_rpf.is_set
	|| next_hop_critical_trigger_delay.is_set
	|| next_hop_non_critical_trigger_delay.is_set
	|| next_hop_resolution_prefix_length_minimum.is_set
	|| next_hop_route_policy.is_set
	|| permanent_network.is_set
	|| reset_weight_on_import.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| rpki_bestpath_use_origin_as_validity.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| rpki_origin_as_validity_signal_ibgp.is_set
	|| scan_time.is_set
	|| segmented_mcast.is_set
	|| table_policy.is_set
	|| update_limit_address_family.is_set
	|| update_limit_sub_group_ebgp.is_set
	|| update_limit_sub_group_ibgp.is_set
	|| use_igpsr_label.is_set
	|| wait_rib_install.is_set
	|| (additional_paths_selection !=  nullptr && additional_paths_selection->has_data())
	|| (aggregate_addresses !=  nullptr && aggregate_addresses->has_data())
	|| (allocate_label !=  nullptr && allocate_label->has_data())
	|| (application_routes !=  nullptr && application_routes->has_data())
	|| (connected_routes !=  nullptr && connected_routes->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (disable_cluster_client_to_client_rrs !=  nullptr && disable_cluster_client_to_client_rrs->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (domain_distinguisher !=  nullptr && domain_distinguisher->has_data())
	|| (ebgp !=  nullptr && ebgp->has_data())
	|| (eibgp !=  nullptr && eibgp->has_data())
	|| (eigrp_routes !=  nullptr && eigrp_routes->has_data())
	|| (ibgp !=  nullptr && ibgp->has_data())
	|| (import_delay !=  nullptr && import_delay->has_data())
	|| (isis_routes !=  nullptr && isis_routes->has_data())
	|| (label_delay !=  nullptr && label_delay->has_data())
	|| (label_mode !=  nullptr && label_mode->has_data())
	|| (lisp_routes !=  nullptr && lisp_routes->has_data())
	|| (mobile_routes !=  nullptr && mobile_routes->has_data())
	|| (ospf_routes !=  nullptr && ospf_routes->has_data())
	|| (retain_rt !=  nullptr && retain_rt->has_data())
	|| (rip_routes !=  nullptr && rip_routes->has_data())
	|| (sourced_networks !=  nullptr && sourced_networks->has_data())
	|| (static_routes !=  nullptr && static_routes->has_data())
	|| (subscriber_routes !=  nullptr && subscriber_routes->has_data())
	|| (vrf_all !=  nullptr && vrf_all->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(additional_paths_receive.operation)
	|| is_set(additional_paths_send.operation)
	|| is_set(advertise_local_labeled_route_safi_unicast.operation)
	|| is_set(attribute_download.operation)
	|| is_set(best_external.operation)
	|| is_set(disable_as_path_loop_check.operation)
	|| is_set(disable_client_to_client_rr.operation)
	|| is_set(disable_default_martian_check.operation)
	|| is_set(dynamic_med_interval.operation)
	|| is_set(enable.operation)
	|| is_set(global_table_mcast.operation)
	|| is_set(inter_as_install.operation)
	|| is_set(label_retain.operation)
	|| is_set(label_security_rpf.operation)
	|| is_set(next_hop_critical_trigger_delay.operation)
	|| is_set(next_hop_non_critical_trigger_delay.operation)
	|| is_set(next_hop_resolution_prefix_length_minimum.operation)
	|| is_set(next_hop_route_policy.operation)
	|| is_set(permanent_network.operation)
	|| is_set(reset_weight_on_import.operation)
	|| is_set(rpki_bestpath_origin_as_allow_invalid.operation)
	|| is_set(rpki_bestpath_use_origin_as_validity.operation)
	|| is_set(rpki_origin_as_validation_disable.operation)
	|| is_set(rpki_origin_as_validity_signal_ibgp.operation)
	|| is_set(scan_time.operation)
	|| is_set(segmented_mcast.operation)
	|| is_set(table_policy.operation)
	|| is_set(update_limit_address_family.operation)
	|| is_set(update_limit_sub_group_ebgp.operation)
	|| is_set(update_limit_sub_group_ibgp.operation)
	|| is_set(use_igpsr_label.operation)
	|| is_set(wait_rib_install.operation)
	|| (additional_paths_selection !=  nullptr && additional_paths_selection->has_operation())
	|| (aggregate_addresses !=  nullptr && aggregate_addresses->has_operation())
	|| (allocate_label !=  nullptr && allocate_label->has_operation())
	|| (application_routes !=  nullptr && application_routes->has_operation())
	|| (connected_routes !=  nullptr && connected_routes->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (disable_cluster_client_to_client_rrs !=  nullptr && disable_cluster_client_to_client_rrs->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (domain_distinguisher !=  nullptr && domain_distinguisher->has_operation())
	|| (ebgp !=  nullptr && ebgp->has_operation())
	|| (eibgp !=  nullptr && eibgp->has_operation())
	|| (eigrp_routes !=  nullptr && eigrp_routes->has_operation())
	|| (ibgp !=  nullptr && ibgp->has_operation())
	|| (import_delay !=  nullptr && import_delay->has_operation())
	|| (isis_routes !=  nullptr && isis_routes->has_operation())
	|| (label_delay !=  nullptr && label_delay->has_operation())
	|| (label_mode !=  nullptr && label_mode->has_operation())
	|| (lisp_routes !=  nullptr && lisp_routes->has_operation())
	|| (mobile_routes !=  nullptr && mobile_routes->has_operation())
	|| (ospf_routes !=  nullptr && ospf_routes->has_operation())
	|| (retain_rt !=  nullptr && retain_rt->has_operation())
	|| (rip_routes !=  nullptr && rip_routes->has_operation())
	|| (sourced_networks !=  nullptr && sourced_networks->has_operation())
	|| (static_routes !=  nullptr && static_routes->has_operation())
	|| (subscriber_routes !=  nullptr && subscriber_routes->has_operation())
	|| (vrf_all !=  nullptr && vrf_all->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalAf' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (additional_paths_receive.is_set || is_set(additional_paths_receive.operation)) leaf_name_data.push_back(additional_paths_receive.get_name_leafdata());
    if (additional_paths_send.is_set || is_set(additional_paths_send.operation)) leaf_name_data.push_back(additional_paths_send.get_name_leafdata());
    if (advertise_local_labeled_route_safi_unicast.is_set || is_set(advertise_local_labeled_route_safi_unicast.operation)) leaf_name_data.push_back(advertise_local_labeled_route_safi_unicast.get_name_leafdata());
    if (attribute_download.is_set || is_set(attribute_download.operation)) leaf_name_data.push_back(attribute_download.get_name_leafdata());
    if (best_external.is_set || is_set(best_external.operation)) leaf_name_data.push_back(best_external.get_name_leafdata());
    if (disable_as_path_loop_check.is_set || is_set(disable_as_path_loop_check.operation)) leaf_name_data.push_back(disable_as_path_loop_check.get_name_leafdata());
    if (disable_client_to_client_rr.is_set || is_set(disable_client_to_client_rr.operation)) leaf_name_data.push_back(disable_client_to_client_rr.get_name_leafdata());
    if (disable_default_martian_check.is_set || is_set(disable_default_martian_check.operation)) leaf_name_data.push_back(disable_default_martian_check.get_name_leafdata());
    if (dynamic_med_interval.is_set || is_set(dynamic_med_interval.operation)) leaf_name_data.push_back(dynamic_med_interval.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (global_table_mcast.is_set || is_set(global_table_mcast.operation)) leaf_name_data.push_back(global_table_mcast.get_name_leafdata());
    if (inter_as_install.is_set || is_set(inter_as_install.operation)) leaf_name_data.push_back(inter_as_install.get_name_leafdata());
    if (label_retain.is_set || is_set(label_retain.operation)) leaf_name_data.push_back(label_retain.get_name_leafdata());
    if (label_security_rpf.is_set || is_set(label_security_rpf.operation)) leaf_name_data.push_back(label_security_rpf.get_name_leafdata());
    if (next_hop_critical_trigger_delay.is_set || is_set(next_hop_critical_trigger_delay.operation)) leaf_name_data.push_back(next_hop_critical_trigger_delay.get_name_leafdata());
    if (next_hop_non_critical_trigger_delay.is_set || is_set(next_hop_non_critical_trigger_delay.operation)) leaf_name_data.push_back(next_hop_non_critical_trigger_delay.get_name_leafdata());
    if (next_hop_resolution_prefix_length_minimum.is_set || is_set(next_hop_resolution_prefix_length_minimum.operation)) leaf_name_data.push_back(next_hop_resolution_prefix_length_minimum.get_name_leafdata());
    if (next_hop_route_policy.is_set || is_set(next_hop_route_policy.operation)) leaf_name_data.push_back(next_hop_route_policy.get_name_leafdata());
    if (permanent_network.is_set || is_set(permanent_network.operation)) leaf_name_data.push_back(permanent_network.get_name_leafdata());
    if (reset_weight_on_import.is_set || is_set(reset_weight_on_import.operation)) leaf_name_data.push_back(reset_weight_on_import.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.operation)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (rpki_bestpath_use_origin_as_validity.is_set || is_set(rpki_bestpath_use_origin_as_validity.operation)) leaf_name_data.push_back(rpki_bestpath_use_origin_as_validity.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.operation)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (rpki_origin_as_validity_signal_ibgp.is_set || is_set(rpki_origin_as_validity_signal_ibgp.operation)) leaf_name_data.push_back(rpki_origin_as_validity_signal_ibgp.get_name_leafdata());
    if (scan_time.is_set || is_set(scan_time.operation)) leaf_name_data.push_back(scan_time.get_name_leafdata());
    if (segmented_mcast.is_set || is_set(segmented_mcast.operation)) leaf_name_data.push_back(segmented_mcast.get_name_leafdata());
    if (table_policy.is_set || is_set(table_policy.operation)) leaf_name_data.push_back(table_policy.get_name_leafdata());
    if (update_limit_address_family.is_set || is_set(update_limit_address_family.operation)) leaf_name_data.push_back(update_limit_address_family.get_name_leafdata());
    if (update_limit_sub_group_ebgp.is_set || is_set(update_limit_sub_group_ebgp.operation)) leaf_name_data.push_back(update_limit_sub_group_ebgp.get_name_leafdata());
    if (update_limit_sub_group_ibgp.is_set || is_set(update_limit_sub_group_ibgp.operation)) leaf_name_data.push_back(update_limit_sub_group_ibgp.get_name_leafdata());
    if (use_igpsr_label.is_set || is_set(use_igpsr_label.operation)) leaf_name_data.push_back(use_igpsr_label.get_name_leafdata());
    if (wait_rib_install.is_set || is_set(wait_rib_install.operation)) leaf_name_data.push_back(wait_rib_install.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "additional-paths-selection")
    {
        if(additional_paths_selection != nullptr)
        {
            children["additional-paths-selection"] = additional_paths_selection;
        }
        else
        {
            additional_paths_selection = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection>();
            additional_paths_selection->parent = this;
            children["additional-paths-selection"] = additional_paths_selection;
        }
        return children.at("additional-paths-selection");
    }

    if(child_yang_name == "aggregate-addresses")
    {
        if(aggregate_addresses != nullptr)
        {
            children["aggregate-addresses"] = aggregate_addresses;
        }
        else
        {
            aggregate_addresses = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses>();
            aggregate_addresses->parent = this;
            children["aggregate-addresses"] = aggregate_addresses;
        }
        return children.at("aggregate-addresses");
    }

    if(child_yang_name == "allocate-label")
    {
        if(allocate_label != nullptr)
        {
            children["allocate-label"] = allocate_label;
        }
        else
        {
            allocate_label = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel>();
            allocate_label->parent = this;
            children["allocate-label"] = allocate_label;
        }
        return children.at("allocate-label");
    }

    if(child_yang_name == "application-routes")
    {
        if(application_routes != nullptr)
        {
            children["application-routes"] = application_routes;
        }
        else
        {
            application_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes>();
            application_routes->parent = this;
            children["application-routes"] = application_routes;
        }
        return children.at("application-routes");
    }

    if(child_yang_name == "connected-routes")
    {
        if(connected_routes != nullptr)
        {
            children["connected-routes"] = connected_routes;
        }
        else
        {
            connected_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes>();
            connected_routes->parent = this;
            children["connected-routes"] = connected_routes;
        }
        return children.at("connected-routes");
    }

    if(child_yang_name == "dampening")
    {
        if(dampening != nullptr)
        {
            children["dampening"] = dampening;
        }
        else
        {
            dampening = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening>();
            dampening->parent = this;
            children["dampening"] = dampening;
        }
        return children.at("dampening");
    }

    if(child_yang_name == "disable-cluster-client-to-client-rrs")
    {
        if(disable_cluster_client_to_client_rrs != nullptr)
        {
            children["disable-cluster-client-to-client-rrs"] = disable_cluster_client_to_client_rrs;
        }
        else
        {
            disable_cluster_client_to_client_rrs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs>();
            disable_cluster_client_to_client_rrs->parent = this;
            children["disable-cluster-client-to-client-rrs"] = disable_cluster_client_to_client_rrs;
        }
        return children.at("disable-cluster-client-to-client-rrs");
    }

    if(child_yang_name == "distance")
    {
        if(distance != nullptr)
        {
            children["distance"] = distance;
        }
        else
        {
            distance = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance>();
            distance->parent = this;
            children["distance"] = distance;
        }
        return children.at("distance");
    }

    if(child_yang_name == "domain-distinguisher")
    {
        if(domain_distinguisher != nullptr)
        {
            children["domain-distinguisher"] = domain_distinguisher;
        }
        else
        {
            domain_distinguisher = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher>();
            domain_distinguisher->parent = this;
            children["domain-distinguisher"] = domain_distinguisher;
        }
        return children.at("domain-distinguisher");
    }

    if(child_yang_name == "ebgp")
    {
        if(ebgp != nullptr)
        {
            children["ebgp"] = ebgp;
        }
        else
        {
            ebgp = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp>();
            ebgp->parent = this;
            children["ebgp"] = ebgp;
        }
        return children.at("ebgp");
    }

    if(child_yang_name == "eibgp")
    {
        if(eibgp != nullptr)
        {
            children["eibgp"] = eibgp;
        }
        else
        {
            eibgp = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp>();
            eibgp->parent = this;
            children["eibgp"] = eibgp;
        }
        return children.at("eibgp");
    }

    if(child_yang_name == "eigrp-routes")
    {
        if(eigrp_routes != nullptr)
        {
            children["eigrp-routes"] = eigrp_routes;
        }
        else
        {
            eigrp_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes>();
            eigrp_routes->parent = this;
            children["eigrp-routes"] = eigrp_routes;
        }
        return children.at("eigrp-routes");
    }

    if(child_yang_name == "ibgp")
    {
        if(ibgp != nullptr)
        {
            children["ibgp"] = ibgp;
        }
        else
        {
            ibgp = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp>();
            ibgp->parent = this;
            children["ibgp"] = ibgp;
        }
        return children.at("ibgp");
    }

    if(child_yang_name == "import-delay")
    {
        if(import_delay != nullptr)
        {
            children["import-delay"] = import_delay;
        }
        else
        {
            import_delay = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay>();
            import_delay->parent = this;
            children["import-delay"] = import_delay;
        }
        return children.at("import-delay");
    }

    if(child_yang_name == "isis-routes")
    {
        if(isis_routes != nullptr)
        {
            children["isis-routes"] = isis_routes;
        }
        else
        {
            isis_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes>();
            isis_routes->parent = this;
            children["isis-routes"] = isis_routes;
        }
        return children.at("isis-routes");
    }

    if(child_yang_name == "label-delay")
    {
        if(label_delay != nullptr)
        {
            children["label-delay"] = label_delay;
        }
        else
        {
            label_delay = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay>();
            label_delay->parent = this;
            children["label-delay"] = label_delay;
        }
        return children.at("label-delay");
    }

    if(child_yang_name == "label-mode")
    {
        if(label_mode != nullptr)
        {
            children["label-mode"] = label_mode;
        }
        else
        {
            label_mode = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode>();
            label_mode->parent = this;
            children["label-mode"] = label_mode;
        }
        return children.at("label-mode");
    }

    if(child_yang_name == "lisp-routes")
    {
        if(lisp_routes != nullptr)
        {
            children["lisp-routes"] = lisp_routes;
        }
        else
        {
            lisp_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes>();
            lisp_routes->parent = this;
            children["lisp-routes"] = lisp_routes;
        }
        return children.at("lisp-routes");
    }

    if(child_yang_name == "mobile-routes")
    {
        if(mobile_routes != nullptr)
        {
            children["mobile-routes"] = mobile_routes;
        }
        else
        {
            mobile_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes>();
            mobile_routes->parent = this;
            children["mobile-routes"] = mobile_routes;
        }
        return children.at("mobile-routes");
    }

    if(child_yang_name == "ospf-routes")
    {
        if(ospf_routes != nullptr)
        {
            children["ospf-routes"] = ospf_routes;
        }
        else
        {
            ospf_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes>();
            ospf_routes->parent = this;
            children["ospf-routes"] = ospf_routes;
        }
        return children.at("ospf-routes");
    }

    if(child_yang_name == "retain-rt")
    {
        if(retain_rt != nullptr)
        {
            children["retain-rt"] = retain_rt;
        }
        else
        {
            retain_rt = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt>();
            retain_rt->parent = this;
            children["retain-rt"] = retain_rt;
        }
        return children.at("retain-rt");
    }

    if(child_yang_name == "rip-routes")
    {
        if(rip_routes != nullptr)
        {
            children["rip-routes"] = rip_routes;
        }
        else
        {
            rip_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes>();
            rip_routes->parent = this;
            children["rip-routes"] = rip_routes;
        }
        return children.at("rip-routes");
    }

    if(child_yang_name == "sourced-networks")
    {
        if(sourced_networks != nullptr)
        {
            children["sourced-networks"] = sourced_networks;
        }
        else
        {
            sourced_networks = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks>();
            sourced_networks->parent = this;
            children["sourced-networks"] = sourced_networks;
        }
        return children.at("sourced-networks");
    }

    if(child_yang_name == "static-routes")
    {
        if(static_routes != nullptr)
        {
            children["static-routes"] = static_routes;
        }
        else
        {
            static_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes>();
            static_routes->parent = this;
            children["static-routes"] = static_routes;
        }
        return children.at("static-routes");
    }

    if(child_yang_name == "subscriber-routes")
    {
        if(subscriber_routes != nullptr)
        {
            children["subscriber-routes"] = subscriber_routes;
        }
        else
        {
            subscriber_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes>();
            subscriber_routes->parent = this;
            children["subscriber-routes"] = subscriber_routes;
        }
        return children.at("subscriber-routes");
    }

    if(child_yang_name == "vrf-all")
    {
        if(vrf_all != nullptr)
        {
            children["vrf-all"] = vrf_all;
        }
        else
        {
            vrf_all = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll>();
            vrf_all->parent = this;
            children["vrf-all"] = vrf_all;
        }
        return children.at("vrf-all");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::get_children()
{
    if(children.find("additional-paths-selection") == children.end())
    {
        if(additional_paths_selection != nullptr)
        {
            children["additional-paths-selection"] = additional_paths_selection;
        }
    }

    if(children.find("aggregate-addresses") == children.end())
    {
        if(aggregate_addresses != nullptr)
        {
            children["aggregate-addresses"] = aggregate_addresses;
        }
    }

    if(children.find("allocate-label") == children.end())
    {
        if(allocate_label != nullptr)
        {
            children["allocate-label"] = allocate_label;
        }
    }

    if(children.find("application-routes") == children.end())
    {
        if(application_routes != nullptr)
        {
            children["application-routes"] = application_routes;
        }
    }

    if(children.find("connected-routes") == children.end())
    {
        if(connected_routes != nullptr)
        {
            children["connected-routes"] = connected_routes;
        }
    }

    if(children.find("dampening") == children.end())
    {
        if(dampening != nullptr)
        {
            children["dampening"] = dampening;
        }
    }

    if(children.find("disable-cluster-client-to-client-rrs") == children.end())
    {
        if(disable_cluster_client_to_client_rrs != nullptr)
        {
            children["disable-cluster-client-to-client-rrs"] = disable_cluster_client_to_client_rrs;
        }
    }

    if(children.find("distance") == children.end())
    {
        if(distance != nullptr)
        {
            children["distance"] = distance;
        }
    }

    if(children.find("domain-distinguisher") == children.end())
    {
        if(domain_distinguisher != nullptr)
        {
            children["domain-distinguisher"] = domain_distinguisher;
        }
    }

    if(children.find("ebgp") == children.end())
    {
        if(ebgp != nullptr)
        {
            children["ebgp"] = ebgp;
        }
    }

    if(children.find("eibgp") == children.end())
    {
        if(eibgp != nullptr)
        {
            children["eibgp"] = eibgp;
        }
    }

    if(children.find("eigrp-routes") == children.end())
    {
        if(eigrp_routes != nullptr)
        {
            children["eigrp-routes"] = eigrp_routes;
        }
    }

    if(children.find("ibgp") == children.end())
    {
        if(ibgp != nullptr)
        {
            children["ibgp"] = ibgp;
        }
    }

    if(children.find("import-delay") == children.end())
    {
        if(import_delay != nullptr)
        {
            children["import-delay"] = import_delay;
        }
    }

    if(children.find("isis-routes") == children.end())
    {
        if(isis_routes != nullptr)
        {
            children["isis-routes"] = isis_routes;
        }
    }

    if(children.find("label-delay") == children.end())
    {
        if(label_delay != nullptr)
        {
            children["label-delay"] = label_delay;
        }
    }

    if(children.find("label-mode") == children.end())
    {
        if(label_mode != nullptr)
        {
            children["label-mode"] = label_mode;
        }
    }

    if(children.find("lisp-routes") == children.end())
    {
        if(lisp_routes != nullptr)
        {
            children["lisp-routes"] = lisp_routes;
        }
    }

    if(children.find("mobile-routes") == children.end())
    {
        if(mobile_routes != nullptr)
        {
            children["mobile-routes"] = mobile_routes;
        }
    }

    if(children.find("ospf-routes") == children.end())
    {
        if(ospf_routes != nullptr)
        {
            children["ospf-routes"] = ospf_routes;
        }
    }

    if(children.find("retain-rt") == children.end())
    {
        if(retain_rt != nullptr)
        {
            children["retain-rt"] = retain_rt;
        }
    }

    if(children.find("rip-routes") == children.end())
    {
        if(rip_routes != nullptr)
        {
            children["rip-routes"] = rip_routes;
        }
    }

    if(children.find("sourced-networks") == children.end())
    {
        if(sourced_networks != nullptr)
        {
            children["sourced-networks"] = sourced_networks;
        }
    }

    if(children.find("static-routes") == children.end())
    {
        if(static_routes != nullptr)
        {
            children["static-routes"] = static_routes;
        }
    }

    if(children.find("subscriber-routes") == children.end())
    {
        if(subscriber_routes != nullptr)
        {
            children["subscriber-routes"] = subscriber_routes;
        }
    }

    if(children.find("vrf-all") == children.end())
    {
        if(vrf_all != nullptr)
        {
            children["vrf-all"] = vrf_all;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "additional-paths-receive")
    {
        additional_paths_receive = value;
    }
    if(value_path == "additional-paths-send")
    {
        additional_paths_send = value;
    }
    if(value_path == "advertise-local-labeled-route-safi-unicast")
    {
        advertise_local_labeled_route_safi_unicast = value;
    }
    if(value_path == "attribute-download")
    {
        attribute_download = value;
    }
    if(value_path == "best-external")
    {
        best_external = value;
    }
    if(value_path == "disable-as-path-loop-check")
    {
        disable_as_path_loop_check = value;
    }
    if(value_path == "disable-client-to-client-rr")
    {
        disable_client_to_client_rr = value;
    }
    if(value_path == "disable-default-martian-check")
    {
        disable_default_martian_check = value;
    }
    if(value_path == "dynamic-med-interval")
    {
        dynamic_med_interval = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "global-table-mcast")
    {
        global_table_mcast = value;
    }
    if(value_path == "inter-as-install")
    {
        inter_as_install = value;
    }
    if(value_path == "label-retain")
    {
        label_retain = value;
    }
    if(value_path == "label-security-rpf")
    {
        label_security_rpf = value;
    }
    if(value_path == "next-hop-critical-trigger-delay")
    {
        next_hop_critical_trigger_delay = value;
    }
    if(value_path == "next-hop-non-critical-trigger-delay")
    {
        next_hop_non_critical_trigger_delay = value;
    }
    if(value_path == "next-hop-resolution-prefix-length-minimum")
    {
        next_hop_resolution_prefix_length_minimum = value;
    }
    if(value_path == "next-hop-route-policy")
    {
        next_hop_route_policy = value;
    }
    if(value_path == "permanent-network")
    {
        permanent_network = value;
    }
    if(value_path == "reset-weight-on-import")
    {
        reset_weight_on_import = value;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
    }
    if(value_path == "rpki-bestpath-use-origin-as-validity")
    {
        rpki_bestpath_use_origin_as_validity = value;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
    }
    if(value_path == "rpki-origin-as-validity-signal-ibgp")
    {
        rpki_origin_as_validity_signal_ibgp = value;
    }
    if(value_path == "scan-time")
    {
        scan_time = value;
    }
    if(value_path == "segmented-mcast")
    {
        segmented_mcast = value;
    }
    if(value_path == "table-policy")
    {
        table_policy = value;
    }
    if(value_path == "update-limit-address-family")
    {
        update_limit_address_family = value;
    }
    if(value_path == "update-limit-sub-group-ebgp")
    {
        update_limit_sub_group_ebgp = value;
    }
    if(value_path == "update-limit-sub-group-ibgp")
    {
        update_limit_sub_group_ibgp = value;
    }
    if(value_path == "use-igpsr-label")
    {
        use_igpsr_label = value;
    }
    if(value_path == "wait-rib-install")
    {
        wait_rib_install = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoutes()
{
    yang_name = "isis-routes"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::~IsisRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::has_data() const
{
    for (std::size_t index=0; index<isis_route.size(); index++)
    {
        if(isis_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::has_operation() const
{
    for (std::size_t index=0; index<isis_route.size(); index++)
    {
        if(isis_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-routes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisRoutes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "isis-route")
    {
        for(auto const & c : isis_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute>();
        c->parent = this;
        isis_route.push_back(std::move(c));
        children[segment_path] = isis_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::get_children()
{
    for (auto const & c : isis_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::IsisRoute()
    :
    instance_name{YType::str, "instance-name"},
    default_metric{YType::uint32, "default-metric"},
    redist_type{YType::str, "redist-type"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "isis-route"; yang_parent_name = "isis-routes";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::~IsisRoute()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::has_data() const
{
    return instance_name.is_set
	|| default_metric.is_set
	|| redist_type.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(default_metric.operation)
	|| is_set(redist_type.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-route" <<"[instance-name='" <<instance_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisRoute' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (redist_type.is_set || is_set(redist_type.operation)) leaf_name_data.push_back(redist_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "redist-type")
    {
        redist_type = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::DomainDistinguisher()
    :
    as{YType::uint32, "as"},
    router_id{YType::str, "router-id"}
{
    yang_name = "domain-distinguisher"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::~DomainDistinguisher()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::has_data() const
{
    return as.is_set
	|| router_id.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::has_operation() const
{
    return is_set(operation)
	|| is_set(as.operation)
	|| is_set(router_id.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-distinguisher";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DomainDistinguisher' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::VrfAll()
    :
    enable{YType::empty, "enable"},
    source_rt_import_policy{YType::empty, "source-rt-import-policy"},
    table_policy{YType::str, "table-policy"}
    	,
    label_mode(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode>())
{
    label_mode->parent = this;
    children["label-mode"] = label_mode;

    yang_name = "vrf-all"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::~VrfAll()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::has_data() const
{
    return enable.is_set
	|| source_rt_import_policy.is_set
	|| table_policy.is_set
	|| (label_mode !=  nullptr && label_mode->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(source_rt_import_policy.operation)
	|| is_set(table_policy.operation)
	|| (label_mode !=  nullptr && label_mode->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-all";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfAll' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (source_rt_import_policy.is_set || is_set(source_rt_import_policy.operation)) leaf_name_data.push_back(source_rt_import_policy.get_name_leafdata());
    if (table_policy.is_set || is_set(table_policy.operation)) leaf_name_data.push_back(table_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label-mode")
    {
        if(label_mode != nullptr)
        {
            children["label-mode"] = label_mode;
        }
        else
        {
            label_mode = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode>();
            label_mode->parent = this;
            children["label-mode"] = label_mode;
        }
        return children.at("label-mode");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::get_children()
{
    if(children.find("label-mode") == children.end())
    {
        if(label_mode != nullptr)
        {
            children["label-mode"] = label_mode;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "source-rt-import-policy")
    {
        source_rt_import_policy = value;
    }
    if(value_path == "table-policy")
    {
        table_policy = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::LabelMode()
    :
    label_allocation_mode{YType::str, "label-allocation-mode"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "label-mode"; yang_parent_name = "vrf-all";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::~LabelMode()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::has_data() const
{
    return label_allocation_mode.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::has_operation() const
{
    return is_set(operation)
	|| is_set(label_allocation_mode.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-mode";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelMode' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_allocation_mode.is_set || is_set(label_allocation_mode.operation)) leaf_name_data.push_back(label_allocation_mode.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-allocation-mode")
    {
        label_allocation_mode = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoutes()
{
    yang_name = "application-routes"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::~ApplicationRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::has_data() const
{
    for (std::size_t index=0; index<application_route.size(); index++)
    {
        if(application_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::has_operation() const
{
    for (std::size_t index=0; index<application_route.size(); index++)
    {
        if(application_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-routes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplicationRoutes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "application-route")
    {
        for(auto const & c : application_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute>();
        c->parent = this;
        application_route.push_back(std::move(c));
        children[segment_path] = application_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::get_children()
{
    for (auto const & c : application_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::ApplicationRoute()
    :
    instance_name{YType::str, "instance-name"},
    default_metric{YType::uint32, "default-metric"},
    not_used{YType::uint32, "not-used"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "application-route"; yang_parent_name = "application-routes";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::~ApplicationRoute()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::has_data() const
{
    return instance_name.is_set
	|| default_metric.is_set
	|| not_used.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(default_metric.operation)
	|| is_set(not_used.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-route" <<"[instance-name='" <<instance_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplicationRoute' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.operation)) leaf_name_data.push_back(not_used.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "not-used")
    {
        not_used = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRrs()
{
    yang_name = "disable-cluster-client-to-client-rrs"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::~DisableClusterClientToClientRrs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::has_data() const
{
    for (std::size_t index=0; index<disable_cluster_client_to_client_rr.size(); index++)
    {
        if(disable_cluster_client_to_client_rr[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::has_operation() const
{
    for (std::size_t index=0; index<disable_cluster_client_to_client_rr.size(); index++)
    {
        if(disable_cluster_client_to_client_rr[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable-cluster-client-to-client-rrs";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DisableClusterClientToClientRrs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "disable-cluster-client-to-client-rr")
    {
        for(auto const & c : disable_cluster_client_to_client_rr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr>();
        c->parent = this;
        disable_cluster_client_to_client_rr.push_back(std::move(c));
        children[segment_path] = disable_cluster_client_to_client_rr.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::get_children()
{
    for (auto const & c : disable_cluster_client_to_client_rr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::DisableClusterClientToClientRr()
    :
    cluster_type{YType::enumeration, "cluster-type"}
{
    yang_name = "disable-cluster-client-to-client-rr"; yang_parent_name = "disable-cluster-client-to-client-rrs";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::~DisableClusterClientToClientRr()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::has_data() const
{
    for (std::size_t index=0; index<ipv4_address.size(); index++)
    {
        if(ipv4_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<number.size(); index++)
    {
        if(number[index]->has_data())
            return true;
    }
    return cluster_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::has_operation() const
{
    for (std::size_t index=0; index<ipv4_address.size(); index++)
    {
        if(ipv4_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<number.size(); index++)
    {
        if(number[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(cluster_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable-cluster-client-to-client-rr" <<"[cluster-type='" <<cluster_type <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DisableClusterClientToClientRr' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_type.is_set || is_set(cluster_type.operation)) leaf_name_data.push_back(cluster_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-address")
    {
        for(auto const & c : ipv4_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address>();
        c->parent = this;
        ipv4_address.push_back(std::move(c));
        children[segment_path] = ipv4_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "number")
    {
        for(auto const & c : number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number>();
        c->parent = this;
        number.push_back(std::move(c));
        children[segment_path] = number.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::get_children()
{
    for (auto const & c : ipv4_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : number)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cluster-type")
    {
        cluster_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::Number()
    :
    cluster_id_number{YType::uint32, "cluster-id-number"}
{
    yang_name = "number"; yang_parent_name = "disable-cluster-client-to-client-rr";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::~Number()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::has_data() const
{
    return cluster_id_number.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::has_operation() const
{
    return is_set(operation)
	|| is_set(cluster_id_number.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number" <<"[cluster-id-number='" <<cluster_id_number <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Number' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_number.is_set || is_set(cluster_id_number.operation)) leaf_name_data.push_back(cluster_id_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cluster-id-number")
    {
        cluster_id_number = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::Ipv4Address()
    :
    cluster_id_address{YType::str, "cluster-id-address"}
{
    yang_name = "ipv4-address"; yang_parent_name = "disable-cluster-client-to-client-rr";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::~Ipv4Address()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::has_data() const
{
    return cluster_id_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::has_operation() const
{
    return is_set(operation)
	|| is_set(cluster_id_address.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address" <<"[cluster-id-address='" <<cluster_id_address <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Address' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_address.is_set || is_set(cluster_id_address.operation)) leaf_name_data.push_back(cluster_id_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::LabelDelay()
    :
    milliseconds{YType::uint32, "milliseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "label-delay"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::~LabelDelay()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::has_data() const
{
    return milliseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::has_operation() const
{
    return is_set(operation)
	|| is_set(milliseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-delay";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelDelay' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (milliseconds.is_set || is_set(milliseconds.operation)) leaf_name_data.push_back(milliseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "milliseconds")
    {
        milliseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::Ebgp()
    :
    order_by_igp_metric{YType::boolean, "order-by-igp-metric"},
    paths_value{YType::uint32, "paths-value"},
    selective{YType::boolean, "selective"},
    unequal_cost{YType::boolean, "unequal-cost"}
{
    yang_name = "ebgp"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::~Ebgp()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::has_data() const
{
    return order_by_igp_metric.is_set
	|| paths_value.is_set
	|| selective.is_set
	|| unequal_cost.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::has_operation() const
{
    return is_set(operation)
	|| is_set(order_by_igp_metric.operation)
	|| is_set(paths_value.operation)
	|| is_set(selective.operation)
	|| is_set(unequal_cost.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ebgp' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order_by_igp_metric.is_set || is_set(order_by_igp_metric.operation)) leaf_name_data.push_back(order_by_igp_metric.get_name_leafdata());
    if (paths_value.is_set || is_set(paths_value.operation)) leaf_name_data.push_back(paths_value.get_name_leafdata());
    if (selective.is_set || is_set(selective.operation)) leaf_name_data.push_back(selective.get_name_leafdata());
    if (unequal_cost.is_set || is_set(unequal_cost.operation)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric = value;
    }
    if(value_path == "paths-value")
    {
        paths_value = value;
    }
    if(value_path == "selective")
    {
        selective = value;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::Eibgp()
    :
    order_by_igp_metric{YType::boolean, "order-by-igp-metric"},
    paths_value{YType::uint32, "paths-value"},
    selective{YType::boolean, "selective"},
    unequal_cost{YType::boolean, "unequal-cost"}
{
    yang_name = "eibgp"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::~Eibgp()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::has_data() const
{
    return order_by_igp_metric.is_set
	|| paths_value.is_set
	|| selective.is_set
	|| unequal_cost.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::has_operation() const
{
    return is_set(operation)
	|| is_set(order_by_igp_metric.operation)
	|| is_set(paths_value.operation)
	|| is_set(selective.operation)
	|| is_set(unequal_cost.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eibgp";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eibgp' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order_by_igp_metric.is_set || is_set(order_by_igp_metric.operation)) leaf_name_data.push_back(order_by_igp_metric.get_name_leafdata());
    if (paths_value.is_set || is_set(paths_value.operation)) leaf_name_data.push_back(paths_value.get_name_leafdata());
    if (selective.is_set || is_set(selective.operation)) leaf_name_data.push_back(selective.get_name_leafdata());
    if (unequal_cost.is_set || is_set(unequal_cost.operation)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric = value;
    }
    if(value_path == "paths-value")
    {
        paths_value = value;
    }
    if(value_path == "selective")
    {
        selective = value;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::RetainRt()
    :
    all{YType::boolean, "all"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "retain-rt"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::~RetainRt()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::has_data() const
{
    return all.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retain-rt";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RetainRt' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::Ibgp()
    :
    order_by_igp_metric{YType::boolean, "order-by-igp-metric"},
    paths_value{YType::uint32, "paths-value"},
    selective{YType::boolean, "selective"},
    unequal_cost{YType::boolean, "unequal-cost"}
{
    yang_name = "ibgp"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::~Ibgp()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::has_data() const
{
    return order_by_igp_metric.is_set
	|| paths_value.is_set
	|| selective.is_set
	|| unequal_cost.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::has_operation() const
{
    return is_set(operation)
	|| is_set(order_by_igp_metric.operation)
	|| is_set(paths_value.operation)
	|| is_set(selective.operation)
	|| is_set(unequal_cost.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ibgp' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order_by_igp_metric.is_set || is_set(order_by_igp_metric.operation)) leaf_name_data.push_back(order_by_igp_metric.get_name_leafdata());
    if (paths_value.is_set || is_set(paths_value.operation)) leaf_name_data.push_back(paths_value.get_name_leafdata());
    if (selective.is_set || is_set(selective.operation)) leaf_name_data.push_back(selective.get_name_leafdata());
    if (unequal_cost.is_set || is_set(unequal_cost.operation)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric = value;
    }
    if(value_path == "paths-value")
    {
        paths_value = value;
    }
    if(value_path == "selective")
    {
        selective = value;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::ImportDelay()
    :
    milliseconds{YType::uint32, "milliseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "import-delay"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::~ImportDelay()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::has_data() const
{
    return milliseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::has_operation() const
{
    return is_set(operation)
	|| is_set(milliseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import-delay";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ImportDelay' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (milliseconds.is_set || is_set(milliseconds.operation)) leaf_name_data.push_back(milliseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "milliseconds")
    {
        milliseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddresses()
{
    yang_name = "aggregate-addresses"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::~AggregateAddresses()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::has_data() const
{
    for (std::size_t index=0; index<aggregate_address.size(); index++)
    {
        if(aggregate_address[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::has_operation() const
{
    for (std::size_t index=0; index<aggregate_address.size(); index++)
    {
        if(aggregate_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-addresses";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AggregateAddresses' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "aggregate-address")
    {
        for(auto const & c : aggregate_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress>();
        c->parent = this;
        aggregate_address.push_back(std::move(c));
        children[segment_path] = aggregate_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::get_children()
{
    for (auto const & c : aggregate_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::AggregateAddress()
    :
    aggregate_addr{YType::str, "aggregate-addr"},
    aggregate_prefix{YType::uint16, "aggregate-prefix"},
    generate_confederation_set_info{YType::boolean, "generate-confederation-set-info"},
    generate_set_info{YType::boolean, "generate-set-info"},
    route_policy_name{YType::str, "route-policy-name"},
    summary_only{YType::boolean, "summary-only"}
{
    yang_name = "aggregate-address"; yang_parent_name = "aggregate-addresses";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::~AggregateAddress()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::has_data() const
{
    return aggregate_addr.is_set
	|| aggregate_prefix.is_set
	|| generate_confederation_set_info.is_set
	|| generate_set_info.is_set
	|| route_policy_name.is_set
	|| summary_only.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(aggregate_addr.operation)
	|| is_set(aggregate_prefix.operation)
	|| is_set(generate_confederation_set_info.operation)
	|| is_set(generate_set_info.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(summary_only.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-address" <<"[aggregate-addr='" <<aggregate_addr <<"']" <<"[aggregate-prefix='" <<aggregate_prefix <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AggregateAddress' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregate_addr.is_set || is_set(aggregate_addr.operation)) leaf_name_data.push_back(aggregate_addr.get_name_leafdata());
    if (aggregate_prefix.is_set || is_set(aggregate_prefix.operation)) leaf_name_data.push_back(aggregate_prefix.get_name_leafdata());
    if (generate_confederation_set_info.is_set || is_set(generate_confederation_set_info.operation)) leaf_name_data.push_back(generate_confederation_set_info.get_name_leafdata());
    if (generate_set_info.is_set || is_set(generate_set_info.operation)) leaf_name_data.push_back(generate_set_info.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (summary_only.is_set || is_set(summary_only.operation)) leaf_name_data.push_back(summary_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aggregate-addr")
    {
        aggregate_addr = value;
    }
    if(value_path == "aggregate-prefix")
    {
        aggregate_prefix = value;
    }
    if(value_path == "generate-confederation-set-info")
    {
        generate_confederation_set_info = value;
    }
    if(value_path == "generate-set-info")
    {
        generate_set_info = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "summary-only")
    {
        summary_only = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::Dampening()
    :
    half_life{YType::uint32, "half-life"},
    reuse_threshold{YType::uint32, "reuse-threshold"},
    route_policy_name{YType::str, "route-policy-name"},
    suppress_threshold{YType::uint32, "suppress-threshold"},
    suppress_time{YType::uint32, "suppress-time"}
{
    yang_name = "dampening"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::~Dampening()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::has_data() const
{
    return half_life.is_set
	|| reuse_threshold.is_set
	|| route_policy_name.is_set
	|| suppress_threshold.is_set
	|| suppress_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::has_operation() const
{
    return is_set(operation)
	|| is_set(half_life.operation)
	|| is_set(reuse_threshold.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(suppress_threshold.operation)
	|| is_set(suppress_time.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dampening' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (half_life.is_set || is_set(half_life.operation)) leaf_name_data.push_back(half_life.get_name_leafdata());
    if (reuse_threshold.is_set || is_set(reuse_threshold.operation)) leaf_name_data.push_back(reuse_threshold.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (suppress_threshold.is_set || is_set(suppress_threshold.operation)) leaf_name_data.push_back(suppress_threshold.get_name_leafdata());
    if (suppress_time.is_set || is_set(suppress_time.operation)) leaf_name_data.push_back(suppress_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "half-life")
    {
        half_life = value;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold = value;
    }
    if(value_path == "suppress-time")
    {
        suppress_time = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::RipRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    not_used{YType::uint32, "not-used"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "rip-routes"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::~RipRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::has_data() const
{
    return default_metric.is_set
	|| not_used.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::has_operation() const
{
    return is_set(operation)
	|| is_set(default_metric.operation)
	|| is_set(not_used.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-routes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipRoutes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.operation)) leaf_name_data.push_back(not_used.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "not-used")
    {
        not_used = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::LispRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "lisp-routes"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::~LispRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::has_data() const
{
    return default_metric.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::has_operation() const
{
    return is_set(operation)
	|| is_set(default_metric.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-routes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispRoutes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::StaticRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    not_used{YType::uint32, "not-used"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "static-routes"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::~StaticRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::has_data() const
{
    return default_metric.is_set
	|| not_used.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::has_operation() const
{
    return is_set(operation)
	|| is_set(default_metric.operation)
	|| is_set(not_used.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-routes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaticRoutes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.operation)) leaf_name_data.push_back(not_used.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "not-used")
    {
        not_used = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::Distance()
    :
    external_routes{YType::uint32, "external-routes"},
    internal_routes{YType::uint32, "internal-routes"},
    local_routes{YType::uint32, "local-routes"}
{
    yang_name = "distance"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::~Distance()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::has_data() const
{
    return external_routes.is_set
	|| internal_routes.is_set
	|| local_routes.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::has_operation() const
{
    return is_set(operation)
	|| is_set(external_routes.operation)
	|| is_set(internal_routes.operation)
	|| is_set(local_routes.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Distance' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.operation)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (internal_routes.is_set || is_set(internal_routes.operation)) leaf_name_data.push_back(internal_routes.get_name_leafdata());
    if (local_routes.is_set || is_set(local_routes.operation)) leaf_name_data.push_back(local_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
    }
    if(value_path == "internal-routes")
    {
        internal_routes = value;
    }
    if(value_path == "local-routes")
    {
        local_routes = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::LabelMode()
    :
    label_allocation_mode{YType::str, "label-allocation-mode"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "label-mode"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::~LabelMode()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::has_data() const
{
    return label_allocation_mode.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::has_operation() const
{
    return is_set(operation)
	|| is_set(label_allocation_mode.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-mode";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelMode' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_allocation_mode.is_set || is_set(label_allocation_mode.operation)) leaf_name_data.push_back(label_allocation_mode.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-allocation-mode")
    {
        label_allocation_mode = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoutes()
{
    yang_name = "eigrp-routes"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::~EigrpRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::has_data() const
{
    for (std::size_t index=0; index<eigrp_route.size(); index++)
    {
        if(eigrp_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::has_operation() const
{
    for (std::size_t index=0; index<eigrp_route.size(); index++)
    {
        if(eigrp_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-routes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EigrpRoutes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "eigrp-route")
    {
        for(auto const & c : eigrp_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute>();
        c->parent = this;
        eigrp_route.push_back(std::move(c));
        children[segment_path] = eigrp_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::get_children()
{
    for (auto const & c : eigrp_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::EigrpRoute()
    :
    instance_name{YType::str, "instance-name"},
    default_metric{YType::uint32, "default-metric"},
    redist_type{YType::str, "redist-type"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "eigrp-route"; yang_parent_name = "eigrp-routes";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::~EigrpRoute()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::has_data() const
{
    return instance_name.is_set
	|| default_metric.is_set
	|| redist_type.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(default_metric.operation)
	|| is_set(redist_type.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-route" <<"[instance-name='" <<instance_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EigrpRoute' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (redist_type.is_set || is_set(redist_type.operation)) leaf_name_data.push_back(redist_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "redist-type")
    {
        redist_type = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetworks()
{
    yang_name = "sourced-networks"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::~SourcedNetworks()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::has_data() const
{
    for (std::size_t index=0; index<sourced_network.size(); index++)
    {
        if(sourced_network[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::has_operation() const
{
    for (std::size_t index=0; index<sourced_network.size(); index++)
    {
        if(sourced_network[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourced-networks";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourcedNetworks' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sourced-network")
    {
        for(auto const & c : sourced_network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork>();
        c->parent = this;
        sourced_network.push_back(std::move(c));
        children[segment_path] = sourced_network.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::get_children()
{
    for (auto const & c : sourced_network)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::SourcedNetwork()
    :
    network_addr{YType::str, "network-addr"},
    network_prefix{YType::uint16, "network-prefix"},
    backdoor{YType::boolean, "backdoor"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "sourced-network"; yang_parent_name = "sourced-networks";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::~SourcedNetwork()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::has_data() const
{
    return network_addr.is_set
	|| network_prefix.is_set
	|| backdoor.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::has_operation() const
{
    return is_set(operation)
	|| is_set(network_addr.operation)
	|| is_set(network_prefix.operation)
	|| is_set(backdoor.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourced-network" <<"[network-addr='" <<network_addr <<"']" <<"[network-prefix='" <<network_prefix <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourcedNetwork' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_addr.is_set || is_set(network_addr.operation)) leaf_name_data.push_back(network_addr.get_name_leafdata());
    if (network_prefix.is_set || is_set(network_prefix.operation)) leaf_name_data.push_back(network_prefix.get_name_leafdata());
    if (backdoor.is_set || is_set(backdoor.operation)) leaf_name_data.push_back(backdoor.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "network-addr")
    {
        network_addr = value;
    }
    if(value_path == "network-prefix")
    {
        network_prefix = value;
    }
    if(value_path == "backdoor")
    {
        backdoor = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::ConnectedRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    not_used{YType::uint32, "not-used"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "connected-routes"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::~ConnectedRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::has_data() const
{
    return default_metric.is_set
	|| not_used.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::has_operation() const
{
    return is_set(operation)
	|| is_set(default_metric.operation)
	|| is_set(not_used.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-routes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectedRoutes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.operation)) leaf_name_data.push_back(not_used.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "not-used")
    {
        not_used = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::AllocateLabel()
    :
    all{YType::boolean, "all"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "allocate-label"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::~AllocateLabel()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::has_data() const
{
    return all.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocate-label";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllocateLabel' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::AdditionalPathsSelection()
    :
    route_policy_name{YType::str, "route-policy-name"},
    selection{YType::enumeration, "selection"}
{
    yang_name = "additional-paths-selection"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::~AdditionalPathsSelection()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::has_data() const
{
    return route_policy_name.is_set
	|| selection.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| is_set(selection.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths-selection";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdditionalPathsSelection' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (selection.is_set || is_set(selection.operation)) leaf_name_data.push_back(selection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "selection")
    {
        selection = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoutes()
{
    yang_name = "ospf-routes"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::~OspfRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::has_data() const
{
    for (std::size_t index=0; index<ospf_route.size(); index++)
    {
        if(ospf_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::has_operation() const
{
    for (std::size_t index=0; index<ospf_route.size(); index++)
    {
        if(ospf_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-routes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OspfRoutes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ospf-route")
    {
        for(auto const & c : ospf_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute>();
        c->parent = this;
        ospf_route.push_back(std::move(c));
        children[segment_path] = ospf_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::get_children()
{
    for (auto const & c : ospf_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::OspfRoute()
    :
    instance_name{YType::str, "instance-name"},
    default_metric{YType::uint32, "default-metric"},
    redist_type{YType::str, "redist-type"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "ospf-route"; yang_parent_name = "ospf-routes";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::~OspfRoute()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::has_data() const
{
    return instance_name.is_set
	|| default_metric.is_set
	|| redist_type.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(default_metric.operation)
	|| is_set(redist_type.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-route" <<"[instance-name='" <<instance_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OspfRoute' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (redist_type.is_set || is_set(redist_type.operation)) leaf_name_data.push_back(redist_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "redist-type")
    {
        redist_type = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::MobileRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    not_used{YType::uint32, "not-used"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "mobile-routes"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::~MobileRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::has_data() const
{
    return default_metric.is_set
	|| not_used.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::has_operation() const
{
    return is_set(operation)
	|| is_set(default_metric.operation)
	|| is_set(not_used.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile-routes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MobileRoutes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.operation)) leaf_name_data.push_back(not_used.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "not-used")
    {
        not_used = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::SubscriberRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    not_used{YType::uint32, "not-used"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "subscriber-routes"; yang_parent_name = "global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::~SubscriberRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::has_data() const
{
    return default_metric.is_set
	|| not_used.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::has_operation() const
{
    return is_set(operation)
	|| is_set(default_metric.operation)
	|| is_set(not_used.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-routes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberRoutes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.operation)) leaf_name_data.push_back(not_used.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "not-used")
    {
        not_used = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoutes()
{
    yang_name = "rpki-static-routes"; yang_parent_name = "global";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::~RpkiStaticRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::has_data() const
{
    for (std::size_t index=0; index<rpki_static_route.size(); index++)
    {
        if(rpki_static_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::has_operation() const
{
    for (std::size_t index=0; index<rpki_static_route.size(); index++)
    {
        if(rpki_static_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-static-routes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpkiStaticRoutes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rpki-static-route")
    {
        for(auto const & c : rpki_static_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute>();
        c->parent = this;
        rpki_static_route.push_back(std::move(c));
        children[segment_path] = rpki_static_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::get_children()
{
    for (auto const & c : rpki_static_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::RpkiStaticRoute()
    :
    addrress{YType::str, "addrress"},
    as{YType::int32, "as"},
    maximum{YType::int32, "maximum"},
    minimum{YType::int32, "minimum"}
{
    yang_name = "rpki-static-route"; yang_parent_name = "rpki-static-routes";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::~RpkiStaticRoute()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::has_data() const
{
    return addrress.is_set
	|| as.is_set
	|| maximum.is_set
	|| minimum.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(addrress.operation)
	|| is_set(as.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-static-route" <<"[addrress='" <<addrress <<"']" <<"[as='" <<as <<"']" <<"[maximum='" <<maximum <<"']" <<"[minimum='" <<minimum <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpkiStaticRoute' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addrress.is_set || is_set(addrress.operation)) leaf_name_data.push_back(addrress.get_name_leafdata());
    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addrress")
    {
        addrress = value;
    }
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterfaces()
{
    yang_name = "mpls-activated-interfaces"; yang_parent_name = "global";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::~MplsActivatedInterfaces()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::has_data() const
{
    for (std::size_t index=0; index<mpls_activated_interface.size(); index++)
    {
        if(mpls_activated_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::has_operation() const
{
    for (std::size_t index=0; index<mpls_activated_interface.size(); index++)
    {
        if(mpls_activated_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-activated-interfaces";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsActivatedInterfaces' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-activated-interface")
    {
        for(auto const & c : mpls_activated_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface>();
        c->parent = this;
        mpls_activated_interface.push_back(std::move(c));
        children[segment_path] = mpls_activated_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::get_children()
{
    for (auto const & c : mpls_activated_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::MplsActivatedInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "mpls-activated-interface"; yang_parent_name = "mpls-activated-interfaces";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::~MplsActivatedInterface()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::has_data() const
{
    return interface_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-activated-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsActivatedInterface' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::GlobalTimers()
    :
    hold_time{YType::uint32, "hold-time"},
    keepalive{YType::uint32, "keepalive"},
    min_accept_hold_time{YType::uint32, "min-accept-hold-time"}
{
    yang_name = "global-timers"; yang_parent_name = "global";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::~GlobalTimers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::has_data() const
{
    return hold_time.is_set
	|| keepalive.is_set
	|| min_accept_hold_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_time.operation)
	|| is_set(keepalive.operation)
	|| is_set(min_accept_hold_time.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-timers";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalTimers' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.operation)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (min_accept_hold_time.is_set || is_set(min_accept_hold_time.operation)) leaf_name_data.push_back(min_accept_hold_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "global";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::~Bfd()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| interval.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::SendSocketBufferSizes()
    :
    bgp_send_size{YType::uint32, "bgp-send-size"},
    socket_send_size{YType::uint32, "socket-send-size"}
{
    yang_name = "send-socket-buffer-sizes"; yang_parent_name = "global";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::~SendSocketBufferSizes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::has_data() const
{
    return bgp_send_size.is_set
	|| socket_send_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_send_size.operation)
	|| is_set(socket_send_size.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-socket-buffer-sizes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendSocketBufferSizes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_send_size.is_set || is_set(bgp_send_size.operation)) leaf_name_data.push_back(bgp_send_size.get_name_leafdata());
    if (socket_send_size.is_set || is_set(socket_send_size.operation)) leaf_name_data.push_back(socket_send_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size = value;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::ReceiveSocketBufferSizes()
    :
    bgp_receive_size{YType::uint32, "bgp-receive-size"},
    socket_receive_size{YType::uint32, "socket-receive-size"}
{
    yang_name = "receive-socket-buffer-sizes"; yang_parent_name = "global";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::~ReceiveSocketBufferSizes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::has_data() const
{
    return bgp_receive_size.is_set
	|| socket_receive_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_receive_size.operation)
	|| is_set(socket_receive_size.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-socket-buffer-sizes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceiveSocketBufferSizes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_receive_size.is_set || is_set(bgp_receive_size.operation)) leaf_name_data.push_back(bgp_receive_size.get_name_leafdata());
    if (socket_receive_size.is_set || is_set(socket_receive_size.operation)) leaf_name_data.push_back(socket_receive_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size = value;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size = value;
    }
}

BmpServers::BmpServers()
{
    yang_name = "bmp-servers"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-cfg";
}

BmpServers::~BmpServers()
{
}

bool BmpServers::has_data() const
{
    for (std::size_t index=0; index<bmp_server.size(); index++)
    {
        if(bmp_server[index]->has_data())
            return true;
    }
    return false;
}

bool BmpServers::has_operation() const
{
    for (std::size_t index=0; index<bmp_server.size(); index++)
    {
        if(bmp_server[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BmpServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-cfg:bmp-servers";

    return path_buffer.str();

}

EntityPath BmpServers::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> BmpServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bmp-server")
    {
        for(auto const & c : bmp_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BmpServers::BmpServer>();
        c->parent = this;
        bmp_server.push_back(std::move(c));
        children[segment_path] = bmp_server.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BmpServers::get_children()
{
    for (auto const & c : bmp_server)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BmpServers::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> BmpServers::clone_ptr() const
{
    return std::make_shared<BmpServers>();
}

std::string BmpServers::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string BmpServers::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function BmpServers::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

BmpServers::BmpServer::BmpServer()
    :
    server_id{YType::uint32, "server-id"},
    bmptcp_keep_alive{YType::uint32, "bmptcp-keep-alive"},
    bmptcp_maximum_segment_size{YType::uint32, "bmptcp-maximum-segment-size"},
    create{YType::empty, "create"},
    description{YType::str, "description"},
    flapping_delay{YType::uint32, "flapping-delay"},
    initial_delay{YType::uint32, "initial-delay"},
    maximum_buffer_size{YType::uint32, "maximum-buffer-size"},
    shutdown{YType::boolean, "shutdown"},
    status_report_interval{YType::uint32, "status-report-interval"},
    update_source_interface{YType::str, "update-source-interface"},
    vrf{YType::str, "vrf"}
    	,
    host_port(std::make_shared<BmpServers::BmpServer::HostPort>())
	,initial_refresh_delay(std::make_shared<BmpServers::BmpServer::InitialRefreshDelay>())
	,route_monitoring(std::make_shared<BmpServers::BmpServer::RouteMonitoring>())
	,tos(std::make_shared<BmpServers::BmpServer::Tos>())
{
    host_port->parent = this;
    children["host-port"] = host_port;

    initial_refresh_delay->parent = this;
    children["initial-refresh-delay"] = initial_refresh_delay;

    route_monitoring->parent = this;
    children["route-monitoring"] = route_monitoring;

    tos->parent = this;
    children["tos"] = tos;

    yang_name = "bmp-server"; yang_parent_name = "bmp-servers";
}

BmpServers::BmpServer::~BmpServer()
{
}

bool BmpServers::BmpServer::has_data() const
{
    return server_id.is_set
	|| bmptcp_keep_alive.is_set
	|| bmptcp_maximum_segment_size.is_set
	|| create.is_set
	|| description.is_set
	|| flapping_delay.is_set
	|| initial_delay.is_set
	|| maximum_buffer_size.is_set
	|| shutdown.is_set
	|| status_report_interval.is_set
	|| update_source_interface.is_set
	|| vrf.is_set
	|| (host_port !=  nullptr && host_port->has_data())
	|| (initial_refresh_delay !=  nullptr && initial_refresh_delay->has_data())
	|| (route_monitoring !=  nullptr && route_monitoring->has_data())
	|| (tos !=  nullptr && tos->has_data());
}

bool BmpServers::BmpServer::has_operation() const
{
    return is_set(operation)
	|| is_set(server_id.operation)
	|| is_set(bmptcp_keep_alive.operation)
	|| is_set(bmptcp_maximum_segment_size.operation)
	|| is_set(create.operation)
	|| is_set(description.operation)
	|| is_set(flapping_delay.operation)
	|| is_set(initial_delay.operation)
	|| is_set(maximum_buffer_size.operation)
	|| is_set(shutdown.operation)
	|| is_set(status_report_interval.operation)
	|| is_set(update_source_interface.operation)
	|| is_set(vrf.operation)
	|| (host_port !=  nullptr && host_port->has_operation())
	|| (initial_refresh_delay !=  nullptr && initial_refresh_delay->has_operation())
	|| (route_monitoring !=  nullptr && route_monitoring->has_operation())
	|| (tos !=  nullptr && tos->has_operation());
}

std::string BmpServers::BmpServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-server" <<"[server-id='" <<server_id <<"']";

    return path_buffer.str();

}

EntityPath BmpServers::BmpServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-cfg:bmp-servers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.operation)) leaf_name_data.push_back(server_id.get_name_leafdata());
    if (bmptcp_keep_alive.is_set || is_set(bmptcp_keep_alive.operation)) leaf_name_data.push_back(bmptcp_keep_alive.get_name_leafdata());
    if (bmptcp_maximum_segment_size.is_set || is_set(bmptcp_maximum_segment_size.operation)) leaf_name_data.push_back(bmptcp_maximum_segment_size.get_name_leafdata());
    if (create.is_set || is_set(create.operation)) leaf_name_data.push_back(create.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (flapping_delay.is_set || is_set(flapping_delay.operation)) leaf_name_data.push_back(flapping_delay.get_name_leafdata());
    if (initial_delay.is_set || is_set(initial_delay.operation)) leaf_name_data.push_back(initial_delay.get_name_leafdata());
    if (maximum_buffer_size.is_set || is_set(maximum_buffer_size.operation)) leaf_name_data.push_back(maximum_buffer_size.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (status_report_interval.is_set || is_set(status_report_interval.operation)) leaf_name_data.push_back(status_report_interval.get_name_leafdata());
    if (update_source_interface.is_set || is_set(update_source_interface.operation)) leaf_name_data.push_back(update_source_interface.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BmpServers::BmpServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "host-port")
    {
        if(host_port != nullptr)
        {
            children["host-port"] = host_port;
        }
        else
        {
            host_port = std::make_shared<BmpServers::BmpServer::HostPort>();
            host_port->parent = this;
            children["host-port"] = host_port;
        }
        return children.at("host-port");
    }

    if(child_yang_name == "initial-refresh-delay")
    {
        if(initial_refresh_delay != nullptr)
        {
            children["initial-refresh-delay"] = initial_refresh_delay;
        }
        else
        {
            initial_refresh_delay = std::make_shared<BmpServers::BmpServer::InitialRefreshDelay>();
            initial_refresh_delay->parent = this;
            children["initial-refresh-delay"] = initial_refresh_delay;
        }
        return children.at("initial-refresh-delay");
    }

    if(child_yang_name == "route-monitoring")
    {
        if(route_monitoring != nullptr)
        {
            children["route-monitoring"] = route_monitoring;
        }
        else
        {
            route_monitoring = std::make_shared<BmpServers::BmpServer::RouteMonitoring>();
            route_monitoring->parent = this;
            children["route-monitoring"] = route_monitoring;
        }
        return children.at("route-monitoring");
    }

    if(child_yang_name == "tos")
    {
        if(tos != nullptr)
        {
            children["tos"] = tos;
        }
        else
        {
            tos = std::make_shared<BmpServers::BmpServer::Tos>();
            tos->parent = this;
            children["tos"] = tos;
        }
        return children.at("tos");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BmpServers::BmpServer::get_children()
{
    if(children.find("host-port") == children.end())
    {
        if(host_port != nullptr)
        {
            children["host-port"] = host_port;
        }
    }

    if(children.find("initial-refresh-delay") == children.end())
    {
        if(initial_refresh_delay != nullptr)
        {
            children["initial-refresh-delay"] = initial_refresh_delay;
        }
    }

    if(children.find("route-monitoring") == children.end())
    {
        if(route_monitoring != nullptr)
        {
            children["route-monitoring"] = route_monitoring;
        }
    }

    if(children.find("tos") == children.end())
    {
        if(tos != nullptr)
        {
            children["tos"] = tos;
        }
    }

    return children;
}

void BmpServers::BmpServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server-id")
    {
        server_id = value;
    }
    if(value_path == "bmptcp-keep-alive")
    {
        bmptcp_keep_alive = value;
    }
    if(value_path == "bmptcp-maximum-segment-size")
    {
        bmptcp_maximum_segment_size = value;
    }
    if(value_path == "create")
    {
        create = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "flapping-delay")
    {
        flapping_delay = value;
    }
    if(value_path == "initial-delay")
    {
        initial_delay = value;
    }
    if(value_path == "maximum-buffer-size")
    {
        maximum_buffer_size = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "status-report-interval")
    {
        status_report_interval = value;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

BmpServers::BmpServer::InitialRefreshDelay::InitialRefreshDelay()
    :
    delay{YType::uint32, "delay"},
    spread{YType::uint32, "spread"}
{
    yang_name = "initial-refresh-delay"; yang_parent_name = "bmp-server";
}

BmpServers::BmpServer::InitialRefreshDelay::~InitialRefreshDelay()
{
}

bool BmpServers::BmpServer::InitialRefreshDelay::has_data() const
{
    return delay.is_set
	|| spread.is_set;
}

bool BmpServers::BmpServer::InitialRefreshDelay::has_operation() const
{
    return is_set(operation)
	|| is_set(delay.operation)
	|| is_set(spread.operation);
}

std::string BmpServers::BmpServer::InitialRefreshDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initial-refresh-delay";

    return path_buffer.str();

}

EntityPath BmpServers::BmpServer::InitialRefreshDelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InitialRefreshDelay' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (spread.is_set || is_set(spread.operation)) leaf_name_data.push_back(spread.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BmpServers::BmpServer::InitialRefreshDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BmpServers::BmpServer::InitialRefreshDelay::get_children()
{
    return children;
}

void BmpServers::BmpServer::InitialRefreshDelay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delay")
    {
        delay = value;
    }
    if(value_path == "spread")
    {
        spread = value;
    }
}

BmpServers::BmpServer::HostPort::HostPort()
    :
    host{YType::str, "host"},
    port{YType::uint16, "port"}
{
    yang_name = "host-port"; yang_parent_name = "bmp-server";
}

BmpServers::BmpServer::HostPort::~HostPort()
{
}

bool BmpServers::BmpServer::HostPort::has_data() const
{
    return host.is_set
	|| port.is_set;
}

bool BmpServers::BmpServer::HostPort::has_operation() const
{
    return is_set(operation)
	|| is_set(host.operation)
	|| is_set(port.operation);
}

std::string BmpServers::BmpServer::HostPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-port";

    return path_buffer.str();

}

EntityPath BmpServers::BmpServer::HostPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HostPort' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BmpServers::BmpServer::HostPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BmpServers::BmpServer::HostPort::get_children()
{
    return children;
}

void BmpServers::BmpServer::HostPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

BmpServers::BmpServer::RouteMonitoring::RouteMonitoring()
    :
    direction{YType::enumeration, "direction"},
    policy{YType::enumeration, "policy"}
{
    yang_name = "route-monitoring"; yang_parent_name = "bmp-server";
}

BmpServers::BmpServer::RouteMonitoring::~RouteMonitoring()
{
}

bool BmpServers::BmpServer::RouteMonitoring::has_data() const
{
    return direction.is_set
	|| policy.is_set;
}

bool BmpServers::BmpServer::RouteMonitoring::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(policy.operation);
}

std::string BmpServers::BmpServer::RouteMonitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-monitoring";

    return path_buffer.str();

}

EntityPath BmpServers::BmpServer::RouteMonitoring::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteMonitoring' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BmpServers::BmpServer::RouteMonitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BmpServers::BmpServer::RouteMonitoring::get_children()
{
    return children;
}

void BmpServers::BmpServer::RouteMonitoring::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "policy")
    {
        policy = value;
    }
}

BmpServers::BmpServer::Tos::Tos()
    :
    type{YType::enumeration, "type"},
    value_{YType::str, "value"}
{
    yang_name = "tos"; yang_parent_name = "bmp-server";
}

BmpServers::BmpServer::Tos::~Tos()
{
}

bool BmpServers::BmpServer::Tos::has_data() const
{
    return type.is_set
	|| value_.is_set;
}

bool BmpServers::BmpServer::Tos::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(value_.operation);
}

std::string BmpServers::BmpServer::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";

    return path_buffer.str();

}

EntityPath BmpServers::BmpServer::Tos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tos' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BmpServers::BmpServer::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BmpServers::BmpServer::Tos::get_children()
{
    return children;
}

void BmpServers::BmpServer::Tos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}


}
}

