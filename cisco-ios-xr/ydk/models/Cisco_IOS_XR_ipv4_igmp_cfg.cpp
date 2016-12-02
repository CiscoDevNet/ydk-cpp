
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ipv4_igmp_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_igmp_cfg {

Igmp::Vrfs::Vrf::Traffic::Traffic()
    :
    	profile{YType::str, "profile"}
{
    yang_name = "traffic"; yang_parent_name = "vrf";
}

Igmp::Vrfs::Vrf::Traffic::~Traffic()
{
}

bool Igmp::Vrfs::Vrf::Traffic::has_data() const
{
    return profile.is_set;
}

bool Igmp::Vrfs::Vrf::Traffic::has_operation() const
{
    return is_set(operation)
	|| is_set(profile.operation);
}

std::string Igmp::Vrfs::Vrf::Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::Traffic::get_entity_path(Entity* ancestor) const
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

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::Traffic::get_children()
{
    return children;
}

void Igmp::Vrfs::Vrf::Traffic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
}

Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::MaximumGroupsPerInterfaceOor()
    :
    	access_list_name{YType::str, "access-list-name"},
	 maximum_groups{YType::uint32, "maximum-groups"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "maximum-groups-per-interface-oor"; yang_parent_name = "inheritable-defaults";
}

Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::~MaximumGroupsPerInterfaceOor()
{
}

bool Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::has_data() const
{
    return access_list_name.is_set
	|| maximum_groups.is_set
	|| warning_threshold.is_set;
}

bool Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(maximum_groups.operation)
	|| is_set(warning_threshold.operation);
}

std::string Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-groups-per-interface-oor";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (maximum_groups.is_set || is_set(maximum_groups.operation)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_children()
{
    return children;
}

void Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::ExplicitTracking()
    :
    	access_list_name{YType::str, "access-list-name"},
	 enable{YType::boolean, "enable"}
{
    yang_name = "explicit-tracking"; yang_parent_name = "inheritable-defaults";
}

Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::~ExplicitTracking()
{
}

bool Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::has_data() const
{
    return access_list_name.is_set
	|| enable.is_set;
}

bool Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(enable.operation);
}

std::string Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::get_children()
{
    return children;
}

void Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Igmp::Vrfs::Vrf::InheritableDefaults::InheritableDefaults()
    :
    	access_group{YType::str, "access-group"},
	 query_interval{YType::uint32, "query-interval"},
	 query_max_response_time{YType::uint32, "query-max-response-time"},
	 query_timeout{YType::uint32, "query-timeout"},
	 router_enable{YType::boolean, "router-enable"},
	 version{YType::uint32, "version"}
    	,
    explicit_tracking(nullptr) // presence node
	,maximum_groups_per_interface_oor(std::make_unique<Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor>())
{
    maximum_groups_per_interface_oor->parent = this;
    children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();

    yang_name = "inheritable-defaults"; yang_parent_name = "vrf";
}

Igmp::Vrfs::Vrf::InheritableDefaults::~InheritableDefaults()
{
}

bool Igmp::Vrfs::Vrf::InheritableDefaults::has_data() const
{
    return access_group.is_set
	|| query_interval.is_set
	|| query_max_response_time.is_set
	|| query_timeout.is_set
	|| router_enable.is_set
	|| version.is_set
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data())
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_data());
}

bool Igmp::Vrfs::Vrf::InheritableDefaults::has_operation() const
{
    return is_set(operation)
	|| is_set(access_group.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_max_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(router_enable.operation)
	|| is_set(version.operation)
	|| (explicit_tracking !=  nullptr && is_set(explicit_tracking->operation))
	|| (maximum_groups_per_interface_oor !=  nullptr && is_set(maximum_groups_per_interface_oor->operation));
}

std::string Igmp::Vrfs::Vrf::InheritableDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritable-defaults";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::InheritableDefaults::get_entity_path(Entity* ancestor) const
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

    if (access_group.is_set || is_set(access_group.operation)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_max_response_time.is_set || is_set(query_max_response_time.operation)) leaf_name_data.push_back(query_max_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (router_enable.is_set || is_set(router_enable.operation)) leaf_name_data.push_back(router_enable.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::InheritableDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking != nullptr)
        {
            children["explicit-tracking"] = explicit_tracking.get();
        }
        else
        {
            explicit_tracking = std::make_unique<Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking>();
            explicit_tracking->parent = this;
            children["explicit-tracking"] = explicit_tracking.get();
        }
        return children.at("explicit-tracking");
    }

    if(child_yang_name == "maximum-groups-per-interface-oor")
    {
        if(maximum_groups_per_interface_oor != nullptr)
        {
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
        else
        {
            maximum_groups_per_interface_oor = std::make_unique<Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor>();
            maximum_groups_per_interface_oor->parent = this;
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
        return children.at("maximum-groups-per-interface-oor");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::InheritableDefaults::get_children()
{
    if(children.find("explicit-tracking") == children.end())
    {
        if(explicit_tracking != nullptr)
        {
            children["explicit-tracking"] = explicit_tracking.get();
        }
    }

    if(children.find("maximum-groups-per-interface-oor") == children.end())
    {
        if(maximum_groups_per_interface_oor != nullptr)
        {
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
    }

    return children;
}

void Igmp::Vrfs::Vrf::InheritableDefaults::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-group")
    {
        access_group = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "router-enable")
    {
        router_enable = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::SsmAccessGroup()
    :
    	source_address{YType::str, "source-address"},
	 access_list_name{YType::str, "access-list-name"}
{
    yang_name = "ssm-access-group"; yang_parent_name = "ssm-access-groups";
}

Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::~SsmAccessGroup()
{
}

bool Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::has_data() const
{
    return source_address.is_set
	|| access_list_name.is_set;
}

bool Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(access_list_name.operation);
}

std::string Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-access-group" <<"[source-address='" <<source_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::get_entity_path(Entity* ancestor) const
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

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::get_children()
{
    return children;
}

void Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
}

Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroups()
{
    yang_name = "ssm-access-groups"; yang_parent_name = "vrf";
}

Igmp::Vrfs::Vrf::SsmAccessGroups::~SsmAccessGroups()
{
}

bool Igmp::Vrfs::Vrf::SsmAccessGroups::has_data() const
{
    for (std::size_t index=0; index<ssm_access_group.size(); index++)
    {
        if(ssm_access_group[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Vrfs::Vrf::SsmAccessGroups::has_operation() const
{
    for (std::size_t index=0; index<ssm_access_group.size(); index++)
    {
        if(ssm_access_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Vrfs::Vrf::SsmAccessGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-access-groups";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::SsmAccessGroups::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::SsmAccessGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ssm-access-group")
    {
        for(auto const & c : ssm_access_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup>();
        c->parent = this;
        ssm_access_group.push_back(std::move(c));
        children[segment_path] = ssm_access_group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::SsmAccessGroups::get_children()
{
    for (auto const & c : ssm_access_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Igmp::Vrfs::Vrf::SsmAccessGroups::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Vrfs::Vrf::Maximum::Maximum()
    :
    	maximum_groups{YType::uint32, "maximum-groups"}
{
    yang_name = "maximum"; yang_parent_name = "vrf";
}

Igmp::Vrfs::Vrf::Maximum::~Maximum()
{
}

bool Igmp::Vrfs::Vrf::Maximum::has_data() const
{
    return maximum_groups.is_set;
}

bool Igmp::Vrfs::Vrf::Maximum::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_groups.operation);
}

std::string Igmp::Vrfs::Vrf::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::Maximum::get_entity_path(Entity* ancestor) const
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

    if (maximum_groups.is_set || is_set(maximum_groups.operation)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::Maximum::get_children()
{
    return children;
}

void Igmp::Vrfs::Vrf::Maximum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
    }
}

Igmp::Vrfs::Vrf::UnicastQosAdjust::UnicastQosAdjust()
    :
    	adjustment_delay{YType::uint32, "adjustment-delay"},
	 download_interval{YType::uint32, "download-interval"},
	 hold_off{YType::uint32, "hold-off"}
{
    yang_name = "unicast-qos-adjust"; yang_parent_name = "vrf";
}

Igmp::Vrfs::Vrf::UnicastQosAdjust::~UnicastQosAdjust()
{
}

bool Igmp::Vrfs::Vrf::UnicastQosAdjust::has_data() const
{
    return adjustment_delay.is_set
	|| download_interval.is_set
	|| hold_off.is_set;
}

bool Igmp::Vrfs::Vrf::UnicastQosAdjust::has_operation() const
{
    return is_set(operation)
	|| is_set(adjustment_delay.operation)
	|| is_set(download_interval.operation)
	|| is_set(hold_off.operation);
}

std::string Igmp::Vrfs::Vrf::UnicastQosAdjust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-qos-adjust";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::UnicastQosAdjust::get_entity_path(Entity* ancestor) const
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

    if (adjustment_delay.is_set || is_set(adjustment_delay.operation)) leaf_name_data.push_back(adjustment_delay.get_name_leafdata());
    if (download_interval.is_set || is_set(download_interval.operation)) leaf_name_data.push_back(download_interval.get_name_leafdata());
    if (hold_off.is_set || is_set(hold_off.operation)) leaf_name_data.push_back(hold_off.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::UnicastQosAdjust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::UnicastQosAdjust::get_children()
{
    return children;
}

void Igmp::Vrfs::Vrf::UnicastQosAdjust::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjustment-delay")
    {
        adjustment_delay = value;
    }
    if(value_path == "download-interval")
    {
        download_interval = value;
    }
    if(value_path == "hold-off")
    {
        hold_off = value;
    }
}

Igmp::Vrfs::Vrf::Accounting::Accounting()
    :
    	max_history{YType::uint32, "max-history"}
{
    yang_name = "accounting"; yang_parent_name = "vrf";
}

Igmp::Vrfs::Vrf::Accounting::~Accounting()
{
}

bool Igmp::Vrfs::Vrf::Accounting::has_data() const
{
    return max_history.is_set;
}

bool Igmp::Vrfs::Vrf::Accounting::has_operation() const
{
    return is_set(operation)
	|| is_set(max_history.operation);
}

std::string Igmp::Vrfs::Vrf::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::Accounting::get_entity_path(Entity* ancestor) const
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

    if (max_history.is_set || is_set(max_history.operation)) leaf_name_data.push_back(max_history.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::Accounting::get_children()
{
    return children;
}

void Igmp::Vrfs::Vrf::Accounting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-history")
    {
        max_history = value;
    }
}

Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::JoinGroup()
    :
    	group_address{YType::str, "group-address"},
	 mode{YType::enumeration, "mode"}
{
    yang_name = "join-group"; yang_parent_name = "join-groups";
}

Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::~JoinGroup()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::has_data() const
{
    return group_address.is_set
	|| mode.is_set;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(mode.operation);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-group" <<"[group-address='" <<group_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::get_children()
{
    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::JoinGroupSourceAddress()
    :
    	group_address{YType::str, "group-address"},
	 source_address{YType::str, "source-address"},
	 mode{YType::enumeration, "mode"}
{
    yang_name = "join-group-source-address"; yang_parent_name = "join-groups";
}

Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::~JoinGroupSourceAddress()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| mode.is_set;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(source_address.operation)
	|| is_set(mode.operation);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-group-source-address" <<"[group-address='" <<group_address.get() <<"']" <<"[source-address='" <<source_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_children()
{
    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroups()
{
    yang_name = "join-groups"; yang_parent_name = "interface";
}

Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::~JoinGroups()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::has_data() const
{
    for (std::size_t index=0; index<join_group.size(); index++)
    {
        if(join_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<join_group_source_address.size(); index++)
    {
        if(join_group_source_address[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::has_operation() const
{
    for (std::size_t index=0; index<join_group.size(); index++)
    {
        if(join_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<join_group_source_address.size(); index++)
    {
        if(join_group_source_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-groups";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "join-group")
    {
        for(auto const & c : join_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup>();
        c->parent = this;
        join_group.push_back(std::move(c));
        children[segment_path] = join_group.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "join-group-source-address")
    {
        for(auto const & c : join_group_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress>();
        c->parent = this;
        join_group_source_address.push_back(std::move(c));
        children[segment_path] = join_group_source_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::get_children()
{
    for (auto const & c : join_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : join_group_source_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::StaticGroupGroupAddress()
    :
    	group_address{YType::str, "group-address"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address"; yang_parent_name = "static-group-group-addresses";
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::~StaticGroupGroupAddress()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::has_data() const
{
    return group_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address" <<"[group-address='" <<group_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_children()
{
    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::StaticGroupGroupAddressSourceAddress()
    :
    	group_address{YType::str, "group-address"},
	 source_address{YType::str, "source-address"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address-source-address"; yang_parent_name = "static-group-group-addresses";
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::~StaticGroupGroupAddressSourceAddress()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(source_address.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-source-address" <<"[group-address='" <<group_address.get() <<"']" <<"[source-address='" <<source_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_children()
{
    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::StaticGroupGroupAddressSourceAddressSourceAddressMask()
    :
    	group_address{YType::str, "group-address"},
	 source_address{YType::str, "source-address"},
	 source_address_mask{YType::str, "source-address-mask"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address-source-address-source-address-mask"; yang_parent_name = "static-group-group-addresses";
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::~StaticGroupGroupAddressSourceAddressSourceAddressMask()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| source_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(source_address.operation)
	|| is_set(source_address_mask.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-source-address-source-address-mask" <<"[group-address='" <<group_address.get() <<"']" <<"[source-address='" <<source_address.get() <<"']" <<"[source-address-mask='" <<source_address_mask.get() <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_address_mask.is_set || is_set(source_address_mask.operation)) leaf_name_data.push_back(source_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_children()
{
    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::StaticGroupGroupAddressGroupAddressMask()
    :
    	group_address{YType::str, "group-address"},
	 group_address_mask{YType::str, "group-address-mask"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address-group-address-mask"; yang_parent_name = "static-group-group-addresses";
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::~StaticGroupGroupAddressGroupAddressMask()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(group_address_mask.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask" <<"[group-address='" <<group_address.get() <<"']" <<"[group-address-mask='" <<group_address_mask.get() <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.operation)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_children()
{
    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::StaticGroupGroupAddressGroupAddressMaskSourceAddress()
    :
    	group_address{YType::str, "group-address"},
	 group_address_mask{YType::str, "group-address-mask"},
	 source_address{YType::str, "source-address"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address-group-address-mask-source-address"; yang_parent_name = "static-group-group-addresses";
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::~StaticGroupGroupAddressGroupAddressMaskSourceAddress()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| source_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(group_address_mask.operation)
	|| is_set(source_address.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask-source-address" <<"[group-address='" <<group_address.get() <<"']" <<"[group-address-mask='" <<group_address_mask.get() <<"']" <<"[source-address='" <<source_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.operation)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_children()
{
    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask()
    :
    	group_address{YType::str, "group-address"},
	 group_address_mask{YType::str, "group-address-mask"},
	 source_address{YType::str, "source-address"},
	 source_address_mask{YType::str, "source-address-mask"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address-group-address-mask-source-address-source-address-mask"; yang_parent_name = "static-group-group-addresses";
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::~StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| source_address.is_set
	|| source_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(group_address_mask.operation)
	|| is_set(source_address.operation)
	|| is_set(source_address_mask.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask-source-address-source-address-mask" <<"[group-address='" <<group_address.get() <<"']" <<"[group-address-mask='" <<group_address_mask.get() <<"']" <<"[source-address='" <<source_address.get() <<"']" <<"[source-address-mask='" <<source_address_mask.get() <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.operation)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_address_mask.is_set || is_set(source_address_mask.operation)) leaf_name_data.push_back(source_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_children()
{
    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddresses()
{
    yang_name = "static-group-group-addresses"; yang_parent_name = "interface";
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::~StaticGroupGroupAddresses()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::has_data() const
{
    for (std::size_t index=0; index<static_group_group_address.size(); index++)
    {
        if(static_group_group_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address_source_address_mask[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address.size(); index++)
    {
        if(static_group_group_address_source_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_source_address_source_address_mask[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::has_operation() const
{
    for (std::size_t index=0; index<static_group_group_address.size(); index++)
    {
        if(static_group_group_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address_source_address_mask[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address.size(); index++)
    {
        if(static_group_group_address_source_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_source_address_source_address_mask[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-addresses";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address")
    {
        for(auto const & c : static_group_group_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress>();
        c->parent = this;
        static_group_group_address.push_back(std::move(c));
        children[segment_path] = static_group_group_address.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address-group-address-mask")
    {
        for(auto const & c : static_group_group_address_group_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask>();
        c->parent = this;
        static_group_group_address_group_address_mask.push_back(std::move(c));
        children[segment_path] = static_group_group_address_group_address_mask.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address-group-address-mask-source-address")
    {
        for(auto const & c : static_group_group_address_group_address_mask_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress>();
        c->parent = this;
        static_group_group_address_group_address_mask_source_address.push_back(std::move(c));
        children[segment_path] = static_group_group_address_group_address_mask_source_address.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address-group-address-mask-source-address-source-address-mask")
    {
        for(auto const & c : static_group_group_address_group_address_mask_source_address_source_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask>();
        c->parent = this;
        static_group_group_address_group_address_mask_source_address_source_address_mask.push_back(std::move(c));
        children[segment_path] = static_group_group_address_group_address_mask_source_address_source_address_mask.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address-source-address")
    {
        for(auto const & c : static_group_group_address_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress>();
        c->parent = this;
        static_group_group_address_source_address.push_back(std::move(c));
        children[segment_path] = static_group_group_address_source_address.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address-source-address-source-address-mask")
    {
        for(auto const & c : static_group_group_address_source_address_source_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask>();
        c->parent = this;
        static_group_group_address_source_address_source_address_mask.push_back(std::move(c));
        children[segment_path] = static_group_group_address_source_address_source_address_mask.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::get_children()
{
    for (auto const & c : static_group_group_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : static_group_group_address_group_address_mask)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : static_group_group_address_group_address_mask_source_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : static_group_group_address_group_address_mask_source_address_source_address_mask)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : static_group_group_address_source_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : static_group_group_address_source_address_source_address_mask)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::MaximumGroupsPerInterfaceOor()
    :
    	access_list_name{YType::str, "access-list-name"},
	 maximum_groups{YType::uint32, "maximum-groups"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "maximum-groups-per-interface-oor"; yang_parent_name = "interface";
}

Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::~MaximumGroupsPerInterfaceOor()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::has_data() const
{
    return access_list_name.is_set
	|| maximum_groups.is_set
	|| warning_threshold.is_set;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(maximum_groups.operation)
	|| is_set(warning_threshold.operation);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-groups-per-interface-oor";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (maximum_groups.is_set || is_set(maximum_groups.operation)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_children()
{
    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::ExplicitTracking()
    :
    	access_list_name{YType::str, "access-list-name"},
	 enable{YType::boolean, "enable"}
{
    yang_name = "explicit-tracking"; yang_parent_name = "interface";
}

Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::~ExplicitTracking()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::has_data() const
{
    return access_list_name.is_set
	|| enable.is_set;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(enable.operation);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::get_children()
{
    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Igmp::Vrfs::Vrf::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 access_group{YType::str, "access-group"},
	 query_interval{YType::uint32, "query-interval"},
	 query_max_response_time{YType::uint32, "query-max-response-time"},
	 query_timeout{YType::uint32, "query-timeout"},
	 router_enable{YType::boolean, "router-enable"},
	 version{YType::uint32, "version"}
    	,
    explicit_tracking(nullptr) // presence node
	,join_groups(nullptr) // presence node
	,maximum_groups_per_interface_oor(std::make_unique<Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor>())
	,static_group_group_addresses(std::make_unique<Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses>())
{
    maximum_groups_per_interface_oor->parent = this;
    children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();

    static_group_group_addresses->parent = this;
    children["static-group-group-addresses"] = static_group_group_addresses.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Igmp::Vrfs::Vrf::Interfaces::Interface::~Interface()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| access_group.is_set
	|| query_interval.is_set
	|| query_max_response_time.is_set
	|| query_timeout.is_set
	|| router_enable.is_set
	|| version.is_set
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data())
	|| (join_groups !=  nullptr && join_groups->has_data())
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_data())
	|| (static_group_group_addresses !=  nullptr && static_group_group_addresses->has_data());
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(access_group.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_max_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(router_enable.operation)
	|| is_set(version.operation)
	|| (explicit_tracking !=  nullptr && is_set(explicit_tracking->operation))
	|| (join_groups !=  nullptr && is_set(join_groups->operation))
	|| (maximum_groups_per_interface_oor !=  nullptr && is_set(maximum_groups_per_interface_oor->operation))
	|| (static_group_group_addresses !=  nullptr && is_set(static_group_group_addresses->operation));
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::Interfaces::Interface::get_entity_path(Entity* ancestor) const
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
    if (access_group.is_set || is_set(access_group.operation)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_max_response_time.is_set || is_set(query_max_response_time.operation)) leaf_name_data.push_back(query_max_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (router_enable.is_set || is_set(router_enable.operation)) leaf_name_data.push_back(router_enable.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking != nullptr)
        {
            children["explicit-tracking"] = explicit_tracking.get();
        }
        else
        {
            explicit_tracking = std::make_unique<Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking>();
            explicit_tracking->parent = this;
            children["explicit-tracking"] = explicit_tracking.get();
        }
        return children.at("explicit-tracking");
    }

    if(child_yang_name == "join-groups")
    {
        if(join_groups != nullptr)
        {
            children["join-groups"] = join_groups.get();
        }
        else
        {
            join_groups = std::make_unique<Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups>();
            join_groups->parent = this;
            children["join-groups"] = join_groups.get();
        }
        return children.at("join-groups");
    }

    if(child_yang_name == "maximum-groups-per-interface-oor")
    {
        if(maximum_groups_per_interface_oor != nullptr)
        {
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
        else
        {
            maximum_groups_per_interface_oor = std::make_unique<Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor>();
            maximum_groups_per_interface_oor->parent = this;
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
        return children.at("maximum-groups-per-interface-oor");
    }

    if(child_yang_name == "static-group-group-addresses")
    {
        if(static_group_group_addresses != nullptr)
        {
            children["static-group-group-addresses"] = static_group_group_addresses.get();
        }
        else
        {
            static_group_group_addresses = std::make_unique<Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses>();
            static_group_group_addresses->parent = this;
            children["static-group-group-addresses"] = static_group_group_addresses.get();
        }
        return children.at("static-group-group-addresses");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::Interfaces::Interface::get_children()
{
    if(children.find("explicit-tracking") == children.end())
    {
        if(explicit_tracking != nullptr)
        {
            children["explicit-tracking"] = explicit_tracking.get();
        }
    }

    if(children.find("join-groups") == children.end())
    {
        if(join_groups != nullptr)
        {
            children["join-groups"] = join_groups.get();
        }
    }

    if(children.find("maximum-groups-per-interface-oor") == children.end())
    {
        if(maximum_groups_per_interface_oor != nullptr)
        {
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
    }

    if(children.find("static-group-group-addresses") == children.end())
    {
        if(static_group_group_addresses != nullptr)
        {
            children["static-group-group-addresses"] = static_group_group_addresses.get();
        }
    }

    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "access-group")
    {
        access_group = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "router-enable")
    {
        router_enable = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Igmp::Vrfs::Vrf::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "vrf";
}

Igmp::Vrfs::Vrf::Interfaces::~Interfaces()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Vrfs::Vrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Vrfs::Vrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::Interfaces::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Igmp::Vrfs::Vrf::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::Interfaces::get_children()
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

void Igmp::Vrfs::Vrf::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"},
	 robustness{YType::uint32, "robustness"},
	 ssmdns_query_group{YType::empty, "ssmdns-query-group"}
    	,
    accounting(std::make_unique<Igmp::Vrfs::Vrf::Accounting>())
	,inheritable_defaults(std::make_unique<Igmp::Vrfs::Vrf::InheritableDefaults>())
	,interfaces(std::make_unique<Igmp::Vrfs::Vrf::Interfaces>())
	,maximum(std::make_unique<Igmp::Vrfs::Vrf::Maximum>())
	,ssm_access_groups(std::make_unique<Igmp::Vrfs::Vrf::SsmAccessGroups>())
	,traffic(std::make_unique<Igmp::Vrfs::Vrf::Traffic>())
	,unicast_qos_adjust(std::make_unique<Igmp::Vrfs::Vrf::UnicastQosAdjust>())
{
    accounting->parent = this;
    children["accounting"] = accounting.get();

    inheritable_defaults->parent = this;
    children["inheritable-defaults"] = inheritable_defaults.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    maximum->parent = this;
    children["maximum"] = maximum.get();

    ssm_access_groups->parent = this;
    children["ssm-access-groups"] = ssm_access_groups.get();

    traffic->parent = this;
    children["traffic"] = traffic.get();

    unicast_qos_adjust->parent = this;
    children["unicast-qos-adjust"] = unicast_qos_adjust.get();

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Igmp::Vrfs::Vrf::~Vrf()
{
}

bool Igmp::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| robustness.is_set
	|| ssmdns_query_group.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (ssm_access_groups !=  nullptr && ssm_access_groups->has_data())
	|| (traffic !=  nullptr && traffic->has_data())
	|| (unicast_qos_adjust !=  nullptr && unicast_qos_adjust->has_data());
}

bool Igmp::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(robustness.operation)
	|| is_set(ssmdns_query_group.operation)
	|| (accounting !=  nullptr && is_set(accounting->operation))
	|| (inheritable_defaults !=  nullptr && is_set(inheritable_defaults->operation))
	|| (interfaces !=  nullptr && is_set(interfaces->operation))
	|| (maximum !=  nullptr && is_set(maximum->operation))
	|| (ssm_access_groups !=  nullptr && is_set(ssm_access_groups->operation))
	|| (traffic !=  nullptr && is_set(traffic->operation))
	|| (unicast_qos_adjust !=  nullptr && is_set(unicast_qos_adjust->operation));
}

std::string Igmp::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/vrfs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (ssmdns_query_group.is_set || is_set(ssmdns_query_group.operation)) leaf_name_data.push_back(ssmdns_query_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accounting")
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting.get();
        }
        else
        {
            accounting = std::make_unique<Igmp::Vrfs::Vrf::Accounting>();
            accounting->parent = this;
            children["accounting"] = accounting.get();
        }
        return children.at("accounting");
    }

    if(child_yang_name == "inheritable-defaults")
    {
        if(inheritable_defaults != nullptr)
        {
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
        else
        {
            inheritable_defaults = std::make_unique<Igmp::Vrfs::Vrf::InheritableDefaults>();
            inheritable_defaults->parent = this;
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
        return children.at("inheritable-defaults");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<Igmp::Vrfs::Vrf::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "maximum")
    {
        if(maximum != nullptr)
        {
            children["maximum"] = maximum.get();
        }
        else
        {
            maximum = std::make_unique<Igmp::Vrfs::Vrf::Maximum>();
            maximum->parent = this;
            children["maximum"] = maximum.get();
        }
        return children.at("maximum");
    }

    if(child_yang_name == "ssm-access-groups")
    {
        if(ssm_access_groups != nullptr)
        {
            children["ssm-access-groups"] = ssm_access_groups.get();
        }
        else
        {
            ssm_access_groups = std::make_unique<Igmp::Vrfs::Vrf::SsmAccessGroups>();
            ssm_access_groups->parent = this;
            children["ssm-access-groups"] = ssm_access_groups.get();
        }
        return children.at("ssm-access-groups");
    }

    if(child_yang_name == "traffic")
    {
        if(traffic != nullptr)
        {
            children["traffic"] = traffic.get();
        }
        else
        {
            traffic = std::make_unique<Igmp::Vrfs::Vrf::Traffic>();
            traffic->parent = this;
            children["traffic"] = traffic.get();
        }
        return children.at("traffic");
    }

    if(child_yang_name == "unicast-qos-adjust")
    {
        if(unicast_qos_adjust != nullptr)
        {
            children["unicast-qos-adjust"] = unicast_qos_adjust.get();
        }
        else
        {
            unicast_qos_adjust = std::make_unique<Igmp::Vrfs::Vrf::UnicastQosAdjust>();
            unicast_qos_adjust->parent = this;
            children["unicast-qos-adjust"] = unicast_qos_adjust.get();
        }
        return children.at("unicast-qos-adjust");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::Vrf::get_children()
{
    if(children.find("accounting") == children.end())
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting.get();
        }
    }

    if(children.find("inheritable-defaults") == children.end())
    {
        if(inheritable_defaults != nullptr)
        {
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("maximum") == children.end())
    {
        if(maximum != nullptr)
        {
            children["maximum"] = maximum.get();
        }
    }

    if(children.find("ssm-access-groups") == children.end())
    {
        if(ssm_access_groups != nullptr)
        {
            children["ssm-access-groups"] = ssm_access_groups.get();
        }
    }

    if(children.find("traffic") == children.end())
    {
        if(traffic != nullptr)
        {
            children["traffic"] = traffic.get();
        }
    }

    if(children.find("unicast-qos-adjust") == children.end())
    {
        if(unicast_qos_adjust != nullptr)
        {
            children["unicast-qos-adjust"] = unicast_qos_adjust.get();
        }
    }

    return children;
}

void Igmp::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "ssmdns-query-group")
    {
        ssmdns_query_group = value;
    }
}

Igmp::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "igmp";
}

Igmp::Vrfs::~Vrfs()
{
}

bool Igmp::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Igmp::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Igmp::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::Vrfs::get_children()
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

void Igmp::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Igmp::DefaultContext::Nsf::Nsf()
    :
    	lifetime{YType::uint32, "lifetime"}
{
    yang_name = "nsf"; yang_parent_name = "default-context";
}

Igmp::DefaultContext::Nsf::~Nsf()
{
}

bool Igmp::DefaultContext::Nsf::has_data() const
{
    return lifetime.is_set;
}

bool Igmp::DefaultContext::Nsf::has_operation() const
{
    return is_set(operation)
	|| is_set(lifetime.operation);
}

std::string Igmp::DefaultContext::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::Nsf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lifetime.is_set || is_set(lifetime.operation)) leaf_name_data.push_back(lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::Nsf::get_children()
{
    return children;
}

void Igmp::DefaultContext::Nsf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lifetime")
    {
        lifetime = value;
    }
}

Igmp::DefaultContext::Traffic::Traffic()
    :
    	profile{YType::str, "profile"}
{
    yang_name = "traffic"; yang_parent_name = "default-context";
}

Igmp::DefaultContext::Traffic::~Traffic()
{
}

bool Igmp::DefaultContext::Traffic::has_data() const
{
    return profile.is_set;
}

bool Igmp::DefaultContext::Traffic::has_operation() const
{
    return is_set(operation)
	|| is_set(profile.operation);
}

std::string Igmp::DefaultContext::Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::Traffic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::Traffic::get_children()
{
    return children;
}

void Igmp::DefaultContext::Traffic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
}

Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::MaximumGroupsPerInterfaceOor()
    :
    	access_list_name{YType::str, "access-list-name"},
	 maximum_groups{YType::uint32, "maximum-groups"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "maximum-groups-per-interface-oor"; yang_parent_name = "inheritable-defaults";
}

Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::~MaximumGroupsPerInterfaceOor()
{
}

bool Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::has_data() const
{
    return access_list_name.is_set
	|| maximum_groups.is_set
	|| warning_threshold.is_set;
}

bool Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(maximum_groups.operation)
	|| is_set(warning_threshold.operation);
}

std::string Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-groups-per-interface-oor";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/inheritable-defaults/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (maximum_groups.is_set || is_set(maximum_groups.operation)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_children()
{
    return children;
}

void Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Igmp::DefaultContext::InheritableDefaults::ExplicitTracking::ExplicitTracking()
    :
    	access_list_name{YType::str, "access-list-name"},
	 enable{YType::boolean, "enable"}
{
    yang_name = "explicit-tracking"; yang_parent_name = "inheritable-defaults";
}

Igmp::DefaultContext::InheritableDefaults::ExplicitTracking::~ExplicitTracking()
{
}

bool Igmp::DefaultContext::InheritableDefaults::ExplicitTracking::has_data() const
{
    return access_list_name.is_set
	|| enable.is_set;
}

bool Igmp::DefaultContext::InheritableDefaults::ExplicitTracking::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(enable.operation);
}

std::string Igmp::DefaultContext::InheritableDefaults::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::InheritableDefaults::ExplicitTracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/inheritable-defaults/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::InheritableDefaults::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::InheritableDefaults::ExplicitTracking::get_children()
{
    return children;
}

void Igmp::DefaultContext::InheritableDefaults::ExplicitTracking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Igmp::DefaultContext::InheritableDefaults::InheritableDefaults()
    :
    	access_group{YType::str, "access-group"},
	 query_interval{YType::uint32, "query-interval"},
	 query_max_response_time{YType::uint32, "query-max-response-time"},
	 query_timeout{YType::uint32, "query-timeout"},
	 router_enable{YType::boolean, "router-enable"},
	 version{YType::uint32, "version"}
    	,
    explicit_tracking(nullptr) // presence node
	,maximum_groups_per_interface_oor(std::make_unique<Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor>())
{
    maximum_groups_per_interface_oor->parent = this;
    children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();

    yang_name = "inheritable-defaults"; yang_parent_name = "default-context";
}

Igmp::DefaultContext::InheritableDefaults::~InheritableDefaults()
{
}

bool Igmp::DefaultContext::InheritableDefaults::has_data() const
{
    return access_group.is_set
	|| query_interval.is_set
	|| query_max_response_time.is_set
	|| query_timeout.is_set
	|| router_enable.is_set
	|| version.is_set
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data())
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_data());
}

bool Igmp::DefaultContext::InheritableDefaults::has_operation() const
{
    return is_set(operation)
	|| is_set(access_group.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_max_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(router_enable.operation)
	|| is_set(version.operation)
	|| (explicit_tracking !=  nullptr && is_set(explicit_tracking->operation))
	|| (maximum_groups_per_interface_oor !=  nullptr && is_set(maximum_groups_per_interface_oor->operation));
}

std::string Igmp::DefaultContext::InheritableDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritable-defaults";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::InheritableDefaults::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_group.is_set || is_set(access_group.operation)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_max_response_time.is_set || is_set(query_max_response_time.operation)) leaf_name_data.push_back(query_max_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (router_enable.is_set || is_set(router_enable.operation)) leaf_name_data.push_back(router_enable.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::InheritableDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking != nullptr)
        {
            children["explicit-tracking"] = explicit_tracking.get();
        }
        else
        {
            explicit_tracking = std::make_unique<Igmp::DefaultContext::InheritableDefaults::ExplicitTracking>();
            explicit_tracking->parent = this;
            children["explicit-tracking"] = explicit_tracking.get();
        }
        return children.at("explicit-tracking");
    }

    if(child_yang_name == "maximum-groups-per-interface-oor")
    {
        if(maximum_groups_per_interface_oor != nullptr)
        {
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
        else
        {
            maximum_groups_per_interface_oor = std::make_unique<Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor>();
            maximum_groups_per_interface_oor->parent = this;
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
        return children.at("maximum-groups-per-interface-oor");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::InheritableDefaults::get_children()
{
    if(children.find("explicit-tracking") == children.end())
    {
        if(explicit_tracking != nullptr)
        {
            children["explicit-tracking"] = explicit_tracking.get();
        }
    }

    if(children.find("maximum-groups-per-interface-oor") == children.end())
    {
        if(maximum_groups_per_interface_oor != nullptr)
        {
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
    }

    return children;
}

void Igmp::DefaultContext::InheritableDefaults::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-group")
    {
        access_group = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "router-enable")
    {
        router_enable = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup::SsmAccessGroup()
    :
    	source_address{YType::str, "source-address"},
	 access_list_name{YType::str, "access-list-name"}
{
    yang_name = "ssm-access-group"; yang_parent_name = "ssm-access-groups";
}

Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup::~SsmAccessGroup()
{
}

bool Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup::has_data() const
{
    return source_address.is_set
	|| access_list_name.is_set;
}

bool Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(access_list_name.operation);
}

std::string Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-access-group" <<"[source-address='" <<source_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/ssm-access-groups/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup::get_children()
{
    return children;
}

void Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
}

Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroups()
{
    yang_name = "ssm-access-groups"; yang_parent_name = "default-context";
}

Igmp::DefaultContext::SsmAccessGroups::~SsmAccessGroups()
{
}

bool Igmp::DefaultContext::SsmAccessGroups::has_data() const
{
    for (std::size_t index=0; index<ssm_access_group.size(); index++)
    {
        if(ssm_access_group[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::DefaultContext::SsmAccessGroups::has_operation() const
{
    for (std::size_t index=0; index<ssm_access_group.size(); index++)
    {
        if(ssm_access_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::DefaultContext::SsmAccessGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-access-groups";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::SsmAccessGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::SsmAccessGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ssm-access-group")
    {
        for(auto const & c : ssm_access_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup>();
        c->parent = this;
        ssm_access_group.push_back(std::move(c));
        children[segment_path] = ssm_access_group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::SsmAccessGroups::get_children()
{
    for (auto const & c : ssm_access_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Igmp::DefaultContext::SsmAccessGroups::set_value(const std::string & value_path, std::string value)
{
}

Igmp::DefaultContext::Maximum::Maximum()
    :
    	maximum_groups{YType::uint32, "maximum-groups"}
{
    yang_name = "maximum"; yang_parent_name = "default-context";
}

Igmp::DefaultContext::Maximum::~Maximum()
{
}

bool Igmp::DefaultContext::Maximum::has_data() const
{
    return maximum_groups.is_set;
}

bool Igmp::DefaultContext::Maximum::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_groups.operation);
}

std::string Igmp::DefaultContext::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_groups.is_set || is_set(maximum_groups.operation)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::Maximum::get_children()
{
    return children;
}

void Igmp::DefaultContext::Maximum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
    }
}

Igmp::DefaultContext::UnicastQosAdjust::UnicastQosAdjust()
    :
    	adjustment_delay{YType::uint32, "adjustment-delay"},
	 download_interval{YType::uint32, "download-interval"},
	 hold_off{YType::uint32, "hold-off"}
{
    yang_name = "unicast-qos-adjust"; yang_parent_name = "default-context";
}

Igmp::DefaultContext::UnicastQosAdjust::~UnicastQosAdjust()
{
}

bool Igmp::DefaultContext::UnicastQosAdjust::has_data() const
{
    return adjustment_delay.is_set
	|| download_interval.is_set
	|| hold_off.is_set;
}

bool Igmp::DefaultContext::UnicastQosAdjust::has_operation() const
{
    return is_set(operation)
	|| is_set(adjustment_delay.operation)
	|| is_set(download_interval.operation)
	|| is_set(hold_off.operation);
}

std::string Igmp::DefaultContext::UnicastQosAdjust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-qos-adjust";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::UnicastQosAdjust::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjustment_delay.is_set || is_set(adjustment_delay.operation)) leaf_name_data.push_back(adjustment_delay.get_name_leafdata());
    if (download_interval.is_set || is_set(download_interval.operation)) leaf_name_data.push_back(download_interval.get_name_leafdata());
    if (hold_off.is_set || is_set(hold_off.operation)) leaf_name_data.push_back(hold_off.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::UnicastQosAdjust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::UnicastQosAdjust::get_children()
{
    return children;
}

void Igmp::DefaultContext::UnicastQosAdjust::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjustment-delay")
    {
        adjustment_delay = value;
    }
    if(value_path == "download-interval")
    {
        download_interval = value;
    }
    if(value_path == "hold-off")
    {
        hold_off = value;
    }
}

Igmp::DefaultContext::Accounting::Accounting()
    :
    	max_history{YType::uint32, "max-history"}
{
    yang_name = "accounting"; yang_parent_name = "default-context";
}

Igmp::DefaultContext::Accounting::~Accounting()
{
}

bool Igmp::DefaultContext::Accounting::has_data() const
{
    return max_history.is_set;
}

bool Igmp::DefaultContext::Accounting::has_operation() const
{
    return is_set(operation)
	|| is_set(max_history.operation);
}

std::string Igmp::DefaultContext::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::Accounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_history.is_set || is_set(max_history.operation)) leaf_name_data.push_back(max_history.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::Accounting::get_children()
{
    return children;
}

void Igmp::DefaultContext::Accounting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-history")
    {
        max_history = value;
    }
}

Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::JoinGroup()
    :
    	group_address{YType::str, "group-address"},
	 mode{YType::enumeration, "mode"}
{
    yang_name = "join-group"; yang_parent_name = "join-groups";
}

Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::~JoinGroup()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::has_data() const
{
    return group_address.is_set
	|| mode.is_set;
}

bool Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(mode.operation);
}

std::string Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-group" <<"[group-address='" <<group_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::get_children()
{
    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::JoinGroupSourceAddress()
    :
    	group_address{YType::str, "group-address"},
	 source_address{YType::str, "source-address"},
	 mode{YType::enumeration, "mode"}
{
    yang_name = "join-group-source-address"; yang_parent_name = "join-groups";
}

Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::~JoinGroupSourceAddress()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| mode.is_set;
}

bool Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(source_address.operation)
	|| is_set(mode.operation);
}

std::string Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-group-source-address" <<"[group-address='" <<group_address.get() <<"']" <<"[source-address='" <<source_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_children()
{
    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroups()
{
    yang_name = "join-groups"; yang_parent_name = "interface";
}

Igmp::DefaultContext::Interfaces::Interface::JoinGroups::~JoinGroups()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::JoinGroups::has_data() const
{
    for (std::size_t index=0; index<join_group.size(); index++)
    {
        if(join_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<join_group_source_address.size(); index++)
    {
        if(join_group_source_address[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::DefaultContext::Interfaces::Interface::JoinGroups::has_operation() const
{
    for (std::size_t index=0; index<join_group.size(); index++)
    {
        if(join_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<join_group_source_address.size(); index++)
    {
        if(join_group_source_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::DefaultContext::Interfaces::Interface::JoinGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-groups";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::Interfaces::Interface::JoinGroups::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::Interfaces::Interface::JoinGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "join-group")
    {
        for(auto const & c : join_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup>();
        c->parent = this;
        join_group.push_back(std::move(c));
        children[segment_path] = join_group.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "join-group-source-address")
    {
        for(auto const & c : join_group_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress>();
        c->parent = this;
        join_group_source_address.push_back(std::move(c));
        children[segment_path] = join_group_source_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::Interfaces::Interface::JoinGroups::get_children()
{
    for (auto const & c : join_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : join_group_source_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::JoinGroups::set_value(const std::string & value_path, std::string value)
{
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::StaticGroupGroupAddress()
    :
    	group_address{YType::str, "group-address"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address"; yang_parent_name = "static-group-group-addresses";
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::~StaticGroupGroupAddress()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::has_data() const
{
    return group_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address" <<"[group-address='" <<group_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_children()
{
    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::StaticGroupGroupAddressSourceAddress()
    :
    	group_address{YType::str, "group-address"},
	 source_address{YType::str, "source-address"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address-source-address"; yang_parent_name = "static-group-group-addresses";
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::~StaticGroupGroupAddressSourceAddress()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(source_address.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-source-address" <<"[group-address='" <<group_address.get() <<"']" <<"[source-address='" <<source_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_children()
{
    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::StaticGroupGroupAddressSourceAddressSourceAddressMask()
    :
    	group_address{YType::str, "group-address"},
	 source_address{YType::str, "source-address"},
	 source_address_mask{YType::str, "source-address-mask"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address-source-address-source-address-mask"; yang_parent_name = "static-group-group-addresses";
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::~StaticGroupGroupAddressSourceAddressSourceAddressMask()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| source_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(source_address.operation)
	|| is_set(source_address_mask.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-source-address-source-address-mask" <<"[group-address='" <<group_address.get() <<"']" <<"[source-address='" <<source_address.get() <<"']" <<"[source-address-mask='" <<source_address_mask.get() <<"']";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_address_mask.is_set || is_set(source_address_mask.operation)) leaf_name_data.push_back(source_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_children()
{
    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::StaticGroupGroupAddressGroupAddressMask()
    :
    	group_address{YType::str, "group-address"},
	 group_address_mask{YType::str, "group-address-mask"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address-group-address-mask"; yang_parent_name = "static-group-group-addresses";
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::~StaticGroupGroupAddressGroupAddressMask()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(group_address_mask.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask" <<"[group-address='" <<group_address.get() <<"']" <<"[group-address-mask='" <<group_address_mask.get() <<"']";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.operation)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_children()
{
    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::StaticGroupGroupAddressGroupAddressMaskSourceAddress()
    :
    	group_address{YType::str, "group-address"},
	 group_address_mask{YType::str, "group-address-mask"},
	 source_address{YType::str, "source-address"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address-group-address-mask-source-address"; yang_parent_name = "static-group-group-addresses";
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::~StaticGroupGroupAddressGroupAddressMaskSourceAddress()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| source_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(group_address_mask.operation)
	|| is_set(source_address.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask-source-address" <<"[group-address='" <<group_address.get() <<"']" <<"[group-address-mask='" <<group_address_mask.get() <<"']" <<"[source-address='" <<source_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.operation)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_children()
{
    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask()
    :
    	group_address{YType::str, "group-address"},
	 group_address_mask{YType::str, "group-address-mask"},
	 source_address{YType::str, "source-address"},
	 source_address_mask{YType::str, "source-address-mask"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address-group-address-mask-source-address-source-address-mask"; yang_parent_name = "static-group-group-addresses";
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::~StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| source_address.is_set
	|| source_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(group_address_mask.operation)
	|| is_set(source_address.operation)
	|| is_set(source_address_mask.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask-source-address-source-address-mask" <<"[group-address='" <<group_address.get() <<"']" <<"[group-address-mask='" <<group_address_mask.get() <<"']" <<"[source-address='" <<source_address.get() <<"']" <<"[source-address-mask='" <<source_address_mask.get() <<"']";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.operation)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_address_mask.is_set || is_set(source_address_mask.operation)) leaf_name_data.push_back(source_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_children()
{
    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddresses()
{
    yang_name = "static-group-group-addresses"; yang_parent_name = "interface";
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::~StaticGroupGroupAddresses()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::has_data() const
{
    for (std::size_t index=0; index<static_group_group_address.size(); index++)
    {
        if(static_group_group_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address_source_address_mask[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address.size(); index++)
    {
        if(static_group_group_address_source_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_source_address_source_address_mask[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::has_operation() const
{
    for (std::size_t index=0; index<static_group_group_address.size(); index++)
    {
        if(static_group_group_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address_source_address_mask[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address.size(); index++)
    {
        if(static_group_group_address_source_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_source_address_source_address_mask[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-addresses";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address")
    {
        for(auto const & c : static_group_group_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress>();
        c->parent = this;
        static_group_group_address.push_back(std::move(c));
        children[segment_path] = static_group_group_address.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address-group-address-mask")
    {
        for(auto const & c : static_group_group_address_group_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask>();
        c->parent = this;
        static_group_group_address_group_address_mask.push_back(std::move(c));
        children[segment_path] = static_group_group_address_group_address_mask.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address-group-address-mask-source-address")
    {
        for(auto const & c : static_group_group_address_group_address_mask_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress>();
        c->parent = this;
        static_group_group_address_group_address_mask_source_address.push_back(std::move(c));
        children[segment_path] = static_group_group_address_group_address_mask_source_address.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address-group-address-mask-source-address-source-address-mask")
    {
        for(auto const & c : static_group_group_address_group_address_mask_source_address_source_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask>();
        c->parent = this;
        static_group_group_address_group_address_mask_source_address_source_address_mask.push_back(std::move(c));
        children[segment_path] = static_group_group_address_group_address_mask_source_address_source_address_mask.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address-source-address")
    {
        for(auto const & c : static_group_group_address_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress>();
        c->parent = this;
        static_group_group_address_source_address.push_back(std::move(c));
        children[segment_path] = static_group_group_address_source_address.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address-source-address-source-address-mask")
    {
        for(auto const & c : static_group_group_address_source_address_source_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask>();
        c->parent = this;
        static_group_group_address_source_address_source_address_mask.push_back(std::move(c));
        children[segment_path] = static_group_group_address_source_address_source_address_mask.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::get_children()
{
    for (auto const & c : static_group_group_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : static_group_group_address_group_address_mask)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : static_group_group_address_group_address_mask_source_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : static_group_group_address_group_address_mask_source_address_source_address_mask)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : static_group_group_address_source_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : static_group_group_address_source_address_source_address_mask)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::set_value(const std::string & value_path, std::string value)
{
}

Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::MaximumGroupsPerInterfaceOor()
    :
    	access_list_name{YType::str, "access-list-name"},
	 maximum_groups{YType::uint32, "maximum-groups"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "maximum-groups-per-interface-oor"; yang_parent_name = "interface";
}

Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::~MaximumGroupsPerInterfaceOor()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::has_data() const
{
    return access_list_name.is_set
	|| maximum_groups.is_set
	|| warning_threshold.is_set;
}

bool Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(maximum_groups.operation)
	|| is_set(warning_threshold.operation);
}

std::string Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-groups-per-interface-oor";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (maximum_groups.is_set || is_set(maximum_groups.operation)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_children()
{
    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking::ExplicitTracking()
    :
    	access_list_name{YType::str, "access-list-name"},
	 enable{YType::boolean, "enable"}
{
    yang_name = "explicit-tracking"; yang_parent_name = "interface";
}

Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking::~ExplicitTracking()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking::has_data() const
{
    return access_list_name.is_set
	|| enable.is_set;
}

bool Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(enable.operation);
}

std::string Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking::get_children()
{
    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Igmp::DefaultContext::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 access_group{YType::str, "access-group"},
	 query_interval{YType::uint32, "query-interval"},
	 query_max_response_time{YType::uint32, "query-max-response-time"},
	 query_timeout{YType::uint32, "query-timeout"},
	 router_enable{YType::boolean, "router-enable"},
	 version{YType::uint32, "version"}
    	,
    explicit_tracking(nullptr) // presence node
	,join_groups(nullptr) // presence node
	,maximum_groups_per_interface_oor(std::make_unique<Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor>())
	,static_group_group_addresses(std::make_unique<Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses>())
{
    maximum_groups_per_interface_oor->parent = this;
    children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();

    static_group_group_addresses->parent = this;
    children["static-group-group-addresses"] = static_group_group_addresses.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Igmp::DefaultContext::Interfaces::Interface::~Interface()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| access_group.is_set
	|| query_interval.is_set
	|| query_max_response_time.is_set
	|| query_timeout.is_set
	|| router_enable.is_set
	|| version.is_set
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data())
	|| (join_groups !=  nullptr && join_groups->has_data())
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_data())
	|| (static_group_group_addresses !=  nullptr && static_group_group_addresses->has_data());
}

bool Igmp::DefaultContext::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(access_group.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_max_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(router_enable.operation)
	|| is_set(version.operation)
	|| (explicit_tracking !=  nullptr && is_set(explicit_tracking->operation))
	|| (join_groups !=  nullptr && is_set(join_groups->operation))
	|| (maximum_groups_per_interface_oor !=  nullptr && is_set(maximum_groups_per_interface_oor->operation))
	|| (static_group_group_addresses !=  nullptr && is_set(static_group_group_addresses->operation));
}

std::string Igmp::DefaultContext::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/interfaces/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (access_group.is_set || is_set(access_group.operation)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_max_response_time.is_set || is_set(query_max_response_time.operation)) leaf_name_data.push_back(query_max_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (router_enable.is_set || is_set(router_enable.operation)) leaf_name_data.push_back(router_enable.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking != nullptr)
        {
            children["explicit-tracking"] = explicit_tracking.get();
        }
        else
        {
            explicit_tracking = std::make_unique<Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking>();
            explicit_tracking->parent = this;
            children["explicit-tracking"] = explicit_tracking.get();
        }
        return children.at("explicit-tracking");
    }

    if(child_yang_name == "join-groups")
    {
        if(join_groups != nullptr)
        {
            children["join-groups"] = join_groups.get();
        }
        else
        {
            join_groups = std::make_unique<Igmp::DefaultContext::Interfaces::Interface::JoinGroups>();
            join_groups->parent = this;
            children["join-groups"] = join_groups.get();
        }
        return children.at("join-groups");
    }

    if(child_yang_name == "maximum-groups-per-interface-oor")
    {
        if(maximum_groups_per_interface_oor != nullptr)
        {
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
        else
        {
            maximum_groups_per_interface_oor = std::make_unique<Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor>();
            maximum_groups_per_interface_oor->parent = this;
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
        return children.at("maximum-groups-per-interface-oor");
    }

    if(child_yang_name == "static-group-group-addresses")
    {
        if(static_group_group_addresses != nullptr)
        {
            children["static-group-group-addresses"] = static_group_group_addresses.get();
        }
        else
        {
            static_group_group_addresses = std::make_unique<Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses>();
            static_group_group_addresses->parent = this;
            children["static-group-group-addresses"] = static_group_group_addresses.get();
        }
        return children.at("static-group-group-addresses");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::Interfaces::Interface::get_children()
{
    if(children.find("explicit-tracking") == children.end())
    {
        if(explicit_tracking != nullptr)
        {
            children["explicit-tracking"] = explicit_tracking.get();
        }
    }

    if(children.find("join-groups") == children.end())
    {
        if(join_groups != nullptr)
        {
            children["join-groups"] = join_groups.get();
        }
    }

    if(children.find("maximum-groups-per-interface-oor") == children.end())
    {
        if(maximum_groups_per_interface_oor != nullptr)
        {
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
    }

    if(children.find("static-group-group-addresses") == children.end())
    {
        if(static_group_group_addresses != nullptr)
        {
            children["static-group-group-addresses"] = static_group_group_addresses.get();
        }
    }

    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "access-group")
    {
        access_group = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "router-enable")
    {
        router_enable = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Igmp::DefaultContext::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "default-context";
}

Igmp::DefaultContext::Interfaces::~Interfaces()
{
}

bool Igmp::DefaultContext::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::DefaultContext::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::DefaultContext::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Igmp::DefaultContext::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::Interfaces::get_children()
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

void Igmp::DefaultContext::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Igmp::DefaultContext::DefaultContext()
    :
    	robustness{YType::uint32, "robustness"},
	 ssmdns_query_group{YType::empty, "ssmdns-query-group"}
    	,
    accounting(std::make_unique<Igmp::DefaultContext::Accounting>())
	,inheritable_defaults(std::make_unique<Igmp::DefaultContext::InheritableDefaults>())
	,interfaces(std::make_unique<Igmp::DefaultContext::Interfaces>())
	,maximum(std::make_unique<Igmp::DefaultContext::Maximum>())
	,nsf(std::make_unique<Igmp::DefaultContext::Nsf>())
	,ssm_access_groups(std::make_unique<Igmp::DefaultContext::SsmAccessGroups>())
	,traffic(std::make_unique<Igmp::DefaultContext::Traffic>())
	,unicast_qos_adjust(std::make_unique<Igmp::DefaultContext::UnicastQosAdjust>())
{
    accounting->parent = this;
    children["accounting"] = accounting.get();

    inheritable_defaults->parent = this;
    children["inheritable-defaults"] = inheritable_defaults.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    maximum->parent = this;
    children["maximum"] = maximum.get();

    nsf->parent = this;
    children["nsf"] = nsf.get();

    ssm_access_groups->parent = this;
    children["ssm-access-groups"] = ssm_access_groups.get();

    traffic->parent = this;
    children["traffic"] = traffic.get();

    unicast_qos_adjust->parent = this;
    children["unicast-qos-adjust"] = unicast_qos_adjust.get();

    yang_name = "default-context"; yang_parent_name = "igmp";
}

Igmp::DefaultContext::~DefaultContext()
{
}

bool Igmp::DefaultContext::has_data() const
{
    return robustness.is_set
	|| ssmdns_query_group.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (ssm_access_groups !=  nullptr && ssm_access_groups->has_data())
	|| (traffic !=  nullptr && traffic->has_data())
	|| (unicast_qos_adjust !=  nullptr && unicast_qos_adjust->has_data());
}

bool Igmp::DefaultContext::has_operation() const
{
    return is_set(operation)
	|| is_set(robustness.operation)
	|| is_set(ssmdns_query_group.operation)
	|| (accounting !=  nullptr && is_set(accounting->operation))
	|| (inheritable_defaults !=  nullptr && is_set(inheritable_defaults->operation))
	|| (interfaces !=  nullptr && is_set(interfaces->operation))
	|| (maximum !=  nullptr && is_set(maximum->operation))
	|| (nsf !=  nullptr && is_set(nsf->operation))
	|| (ssm_access_groups !=  nullptr && is_set(ssm_access_groups->operation))
	|| (traffic !=  nullptr && is_set(traffic->operation))
	|| (unicast_qos_adjust !=  nullptr && is_set(unicast_qos_adjust->operation));
}

std::string Igmp::DefaultContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-context";

    return path_buffer.str();

}

EntityPath Igmp::DefaultContext::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (ssmdns_query_group.is_set || is_set(ssmdns_query_group.operation)) leaf_name_data.push_back(ssmdns_query_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Igmp::DefaultContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accounting")
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting.get();
        }
        else
        {
            accounting = std::make_unique<Igmp::DefaultContext::Accounting>();
            accounting->parent = this;
            children["accounting"] = accounting.get();
        }
        return children.at("accounting");
    }

    if(child_yang_name == "inheritable-defaults")
    {
        if(inheritable_defaults != nullptr)
        {
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
        else
        {
            inheritable_defaults = std::make_unique<Igmp::DefaultContext::InheritableDefaults>();
            inheritable_defaults->parent = this;
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
        return children.at("inheritable-defaults");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<Igmp::DefaultContext::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "maximum")
    {
        if(maximum != nullptr)
        {
            children["maximum"] = maximum.get();
        }
        else
        {
            maximum = std::make_unique<Igmp::DefaultContext::Maximum>();
            maximum->parent = this;
            children["maximum"] = maximum.get();
        }
        return children.at("maximum");
    }

    if(child_yang_name == "nsf")
    {
        if(nsf != nullptr)
        {
            children["nsf"] = nsf.get();
        }
        else
        {
            nsf = std::make_unique<Igmp::DefaultContext::Nsf>();
            nsf->parent = this;
            children["nsf"] = nsf.get();
        }
        return children.at("nsf");
    }

    if(child_yang_name == "ssm-access-groups")
    {
        if(ssm_access_groups != nullptr)
        {
            children["ssm-access-groups"] = ssm_access_groups.get();
        }
        else
        {
            ssm_access_groups = std::make_unique<Igmp::DefaultContext::SsmAccessGroups>();
            ssm_access_groups->parent = this;
            children["ssm-access-groups"] = ssm_access_groups.get();
        }
        return children.at("ssm-access-groups");
    }

    if(child_yang_name == "traffic")
    {
        if(traffic != nullptr)
        {
            children["traffic"] = traffic.get();
        }
        else
        {
            traffic = std::make_unique<Igmp::DefaultContext::Traffic>();
            traffic->parent = this;
            children["traffic"] = traffic.get();
        }
        return children.at("traffic");
    }

    if(child_yang_name == "unicast-qos-adjust")
    {
        if(unicast_qos_adjust != nullptr)
        {
            children["unicast-qos-adjust"] = unicast_qos_adjust.get();
        }
        else
        {
            unicast_qos_adjust = std::make_unique<Igmp::DefaultContext::UnicastQosAdjust>();
            unicast_qos_adjust->parent = this;
            children["unicast-qos-adjust"] = unicast_qos_adjust.get();
        }
        return children.at("unicast-qos-adjust");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::DefaultContext::get_children()
{
    if(children.find("accounting") == children.end())
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting.get();
        }
    }

    if(children.find("inheritable-defaults") == children.end())
    {
        if(inheritable_defaults != nullptr)
        {
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("maximum") == children.end())
    {
        if(maximum != nullptr)
        {
            children["maximum"] = maximum.get();
        }
    }

    if(children.find("nsf") == children.end())
    {
        if(nsf != nullptr)
        {
            children["nsf"] = nsf.get();
        }
    }

    if(children.find("ssm-access-groups") == children.end())
    {
        if(ssm_access_groups != nullptr)
        {
            children["ssm-access-groups"] = ssm_access_groups.get();
        }
    }

    if(children.find("traffic") == children.end())
    {
        if(traffic != nullptr)
        {
            children["traffic"] = traffic.get();
        }
    }

    if(children.find("unicast-qos-adjust") == children.end())
    {
        if(unicast_qos_adjust != nullptr)
        {
            children["unicast-qos-adjust"] = unicast_qos_adjust.get();
        }
    }

    return children;
}

void Igmp::DefaultContext::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "ssmdns-query-group")
    {
        ssmdns_query_group = value;
    }
}

Igmp::Igmp()
    :
    default_context(nullptr) // presence node
	,vrfs(std::make_unique<Igmp::Vrfs>())
{
    vrfs->parent = this;
    children["vrfs"] = vrfs.get();

    yang_name = "igmp"; yang_parent_name = "Cisco-IOS-XR-ipv4-igmp-cfg";
}

Igmp::~Igmp()
{
}

bool Igmp::has_data() const
{
    return (default_context !=  nullptr && default_context->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Igmp::has_operation() const
{
    return is_set(operation)
	|| (default_context !=  nullptr && is_set(default_context->operation))
	|| (vrfs !=  nullptr && is_set(vrfs->operation));
}

std::string Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp";

    return path_buffer.str();

}

EntityPath Igmp::get_entity_path(Entity* ancestor) const
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

Entity* Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-context")
    {
        if(default_context != nullptr)
        {
            children["default-context"] = default_context.get();
        }
        else
        {
            default_context = std::make_unique<Igmp::DefaultContext>();
            default_context->parent = this;
            children["default-context"] = default_context.get();
        }
        return children.at("default-context");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
        else
        {
            vrfs = std::make_unique<Igmp::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs.get();
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Igmp::get_children()
{
    if(children.find("default-context") == children.end())
    {
        if(default_context != nullptr)
        {
            children["default-context"] = default_context.get();
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

void Igmp::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Igmp::clone_ptr()
{
    return std::make_unique<Igmp>();
}
Amt::RelayAdvAdd::RelayAdvAdd()
    :
    	address{YType::str, "address"},
	 interface{YType::str, "interface"}
{
    yang_name = "relay-adv-add"; yang_parent_name = "amt";
}

Amt::RelayAdvAdd::~RelayAdvAdd()
{
}

bool Amt::RelayAdvAdd::has_data() const
{
    return address.is_set
	|| interface.is_set;
}

bool Amt::RelayAdvAdd::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(interface.operation);
}

std::string Amt::RelayAdvAdd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay-adv-add";

    return path_buffer.str();

}

EntityPath Amt::RelayAdvAdd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:amt/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Amt::RelayAdvAdd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Amt::RelayAdvAdd::get_children()
{
    return children;
}

void Amt::RelayAdvAdd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
}

Amt::RelayAnycastPrefix::RelayAnycastPrefix()
    :
    	address{YType::str, "address"},
	 prefix_length{YType::uint32, "prefix-length"}
{
    yang_name = "relay-anycast-prefix"; yang_parent_name = "amt";
}

Amt::RelayAnycastPrefix::~RelayAnycastPrefix()
{
}

bool Amt::RelayAnycastPrefix::has_data() const
{
    return address.is_set
	|| prefix_length.is_set;
}

bool Amt::RelayAnycastPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(prefix_length.operation);
}

std::string Amt::RelayAnycastPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay-anycast-prefix";

    return path_buffer.str();

}

EntityPath Amt::RelayAnycastPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:amt/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Amt::RelayAnycastPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Amt::RelayAnycastPrefix::get_children()
{
    return children;
}

void Amt::RelayAnycastPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Amt::Amt()
    :
    	amtmtu{YType::uint32, "amtmtu"},
	 amtqqic{YType::uint32, "amtqqic"},
	 amttos{YType::uint32, "amttos"},
	 amtttl{YType::uint32, "amtttl"},
	 gateway_filter{YType::str, "gateway-filter"},
	 maximum_gateway{YType::uint32, "maximum-gateway"},
	 maximum_v4_route_gateway{YType::uint32, "maximum-v4-route-gateway"},
	 maximum_v4_routes{YType::uint32, "maximum-v4-routes"},
	 maximum_v6_route_gateway{YType::uint32, "maximum-v6-route-gateway"},
	 maximum_v6_routes{YType::uint32, "maximum-v6-routes"}
    	,
    relay_adv_add(nullptr) // presence node
	,relay_anycast_prefix(nullptr) // presence node
{
    yang_name = "amt"; yang_parent_name = "Cisco-IOS-XR-ipv4-igmp-cfg";
}

Amt::~Amt()
{
}

bool Amt::has_data() const
{
    return amtmtu.is_set
	|| amtqqic.is_set
	|| amttos.is_set
	|| amtttl.is_set
	|| gateway_filter.is_set
	|| maximum_gateway.is_set
	|| maximum_v4_route_gateway.is_set
	|| maximum_v4_routes.is_set
	|| maximum_v6_route_gateway.is_set
	|| maximum_v6_routes.is_set
	|| (relay_adv_add !=  nullptr && relay_adv_add->has_data())
	|| (relay_anycast_prefix !=  nullptr && relay_anycast_prefix->has_data());
}

bool Amt::has_operation() const
{
    return is_set(operation)
	|| is_set(amtmtu.operation)
	|| is_set(amtqqic.operation)
	|| is_set(amttos.operation)
	|| is_set(amtttl.operation)
	|| is_set(gateway_filter.operation)
	|| is_set(maximum_gateway.operation)
	|| is_set(maximum_v4_route_gateway.operation)
	|| is_set(maximum_v4_routes.operation)
	|| is_set(maximum_v6_route_gateway.operation)
	|| is_set(maximum_v6_routes.operation)
	|| (relay_adv_add !=  nullptr && is_set(relay_adv_add->operation))
	|| (relay_anycast_prefix !=  nullptr && is_set(relay_anycast_prefix->operation));
}

std::string Amt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:amt";

    return path_buffer.str();

}

EntityPath Amt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (amtmtu.is_set || is_set(amtmtu.operation)) leaf_name_data.push_back(amtmtu.get_name_leafdata());
    if (amtqqic.is_set || is_set(amtqqic.operation)) leaf_name_data.push_back(amtqqic.get_name_leafdata());
    if (amttos.is_set || is_set(amttos.operation)) leaf_name_data.push_back(amttos.get_name_leafdata());
    if (amtttl.is_set || is_set(amtttl.operation)) leaf_name_data.push_back(amtttl.get_name_leafdata());
    if (gateway_filter.is_set || is_set(gateway_filter.operation)) leaf_name_data.push_back(gateway_filter.get_name_leafdata());
    if (maximum_gateway.is_set || is_set(maximum_gateway.operation)) leaf_name_data.push_back(maximum_gateway.get_name_leafdata());
    if (maximum_v4_route_gateway.is_set || is_set(maximum_v4_route_gateway.operation)) leaf_name_data.push_back(maximum_v4_route_gateway.get_name_leafdata());
    if (maximum_v4_routes.is_set || is_set(maximum_v4_routes.operation)) leaf_name_data.push_back(maximum_v4_routes.get_name_leafdata());
    if (maximum_v6_route_gateway.is_set || is_set(maximum_v6_route_gateway.operation)) leaf_name_data.push_back(maximum_v6_route_gateway.get_name_leafdata());
    if (maximum_v6_routes.is_set || is_set(maximum_v6_routes.operation)) leaf_name_data.push_back(maximum_v6_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Amt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "relay-adv-add")
    {
        if(relay_adv_add != nullptr)
        {
            children["relay-adv-add"] = relay_adv_add.get();
        }
        else
        {
            relay_adv_add = std::make_unique<Amt::RelayAdvAdd>();
            relay_adv_add->parent = this;
            children["relay-adv-add"] = relay_adv_add.get();
        }
        return children.at("relay-adv-add");
    }

    if(child_yang_name == "relay-anycast-prefix")
    {
        if(relay_anycast_prefix != nullptr)
        {
            children["relay-anycast-prefix"] = relay_anycast_prefix.get();
        }
        else
        {
            relay_anycast_prefix = std::make_unique<Amt::RelayAnycastPrefix>();
            relay_anycast_prefix->parent = this;
            children["relay-anycast-prefix"] = relay_anycast_prefix.get();
        }
        return children.at("relay-anycast-prefix");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Amt::get_children()
{
    if(children.find("relay-adv-add") == children.end())
    {
        if(relay_adv_add != nullptr)
        {
            children["relay-adv-add"] = relay_adv_add.get();
        }
    }

    if(children.find("relay-anycast-prefix") == children.end())
    {
        if(relay_anycast_prefix != nullptr)
        {
            children["relay-anycast-prefix"] = relay_anycast_prefix.get();
        }
    }

    return children;
}

void Amt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "amtmtu")
    {
        amtmtu = value;
    }
    if(value_path == "amtqqic")
    {
        amtqqic = value;
    }
    if(value_path == "amttos")
    {
        amttos = value;
    }
    if(value_path == "amtttl")
    {
        amtttl = value;
    }
    if(value_path == "gateway-filter")
    {
        gateway_filter = value;
    }
    if(value_path == "maximum-gateway")
    {
        maximum_gateway = value;
    }
    if(value_path == "maximum-v4-route-gateway")
    {
        maximum_v4_route_gateway = value;
    }
    if(value_path == "maximum-v4-routes")
    {
        maximum_v4_routes = value;
    }
    if(value_path == "maximum-v6-route-gateway")
    {
        maximum_v6_route_gateway = value;
    }
    if(value_path == "maximum-v6-routes")
    {
        maximum_v6_routes = value;
    }
}

std::unique_ptr<Entity> Amt::clone_ptr()
{
    return std::make_unique<Amt>();
}
Mld::Vrfs::Vrf::Traffic::Traffic()
    :
    	profile{YType::str, "profile"}
{
    yang_name = "traffic"; yang_parent_name = "vrf";
}

Mld::Vrfs::Vrf::Traffic::~Traffic()
{
}

bool Mld::Vrfs::Vrf::Traffic::has_data() const
{
    return profile.is_set;
}

bool Mld::Vrfs::Vrf::Traffic::has_operation() const
{
    return is_set(operation)
	|| is_set(profile.operation);
}

std::string Mld::Vrfs::Vrf::Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::Traffic::get_entity_path(Entity* ancestor) const
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

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::Traffic::get_children()
{
    return children;
}

void Mld::Vrfs::Vrf::Traffic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
}

Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::MaximumGroupsPerInterfaceOor()
    :
    	access_list_name{YType::str, "access-list-name"},
	 maximum_groups{YType::uint32, "maximum-groups"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "maximum-groups-per-interface-oor"; yang_parent_name = "inheritable-defaults";
}

Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::~MaximumGroupsPerInterfaceOor()
{
}

bool Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::has_data() const
{
    return access_list_name.is_set
	|| maximum_groups.is_set
	|| warning_threshold.is_set;
}

bool Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(maximum_groups.operation)
	|| is_set(warning_threshold.operation);
}

std::string Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-groups-per-interface-oor";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (maximum_groups.is_set || is_set(maximum_groups.operation)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_children()
{
    return children;
}

void Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::ExplicitTracking()
    :
    	access_list_name{YType::str, "access-list-name"},
	 enable{YType::boolean, "enable"}
{
    yang_name = "explicit-tracking"; yang_parent_name = "inheritable-defaults";
}

Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::~ExplicitTracking()
{
}

bool Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::has_data() const
{
    return access_list_name.is_set
	|| enable.is_set;
}

bool Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(enable.operation);
}

std::string Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::get_children()
{
    return children;
}

void Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Mld::Vrfs::Vrf::InheritableDefaults::InheritableDefaults()
    :
    	access_group{YType::str, "access-group"},
	 query_interval{YType::uint32, "query-interval"},
	 query_max_response_time{YType::uint32, "query-max-response-time"},
	 query_timeout{YType::uint32, "query-timeout"},
	 router_enable{YType::boolean, "router-enable"},
	 version{YType::uint32, "version"}
    	,
    explicit_tracking(nullptr) // presence node
	,maximum_groups_per_interface_oor(std::make_unique<Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor>())
{
    maximum_groups_per_interface_oor->parent = this;
    children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();

    yang_name = "inheritable-defaults"; yang_parent_name = "vrf";
}

Mld::Vrfs::Vrf::InheritableDefaults::~InheritableDefaults()
{
}

bool Mld::Vrfs::Vrf::InheritableDefaults::has_data() const
{
    return access_group.is_set
	|| query_interval.is_set
	|| query_max_response_time.is_set
	|| query_timeout.is_set
	|| router_enable.is_set
	|| version.is_set
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data())
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_data());
}

bool Mld::Vrfs::Vrf::InheritableDefaults::has_operation() const
{
    return is_set(operation)
	|| is_set(access_group.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_max_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(router_enable.operation)
	|| is_set(version.operation)
	|| (explicit_tracking !=  nullptr && is_set(explicit_tracking->operation))
	|| (maximum_groups_per_interface_oor !=  nullptr && is_set(maximum_groups_per_interface_oor->operation));
}

std::string Mld::Vrfs::Vrf::InheritableDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritable-defaults";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::InheritableDefaults::get_entity_path(Entity* ancestor) const
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

    if (access_group.is_set || is_set(access_group.operation)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_max_response_time.is_set || is_set(query_max_response_time.operation)) leaf_name_data.push_back(query_max_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (router_enable.is_set || is_set(router_enable.operation)) leaf_name_data.push_back(router_enable.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::InheritableDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking != nullptr)
        {
            children["explicit-tracking"] = explicit_tracking.get();
        }
        else
        {
            explicit_tracking = std::make_unique<Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking>();
            explicit_tracking->parent = this;
            children["explicit-tracking"] = explicit_tracking.get();
        }
        return children.at("explicit-tracking");
    }

    if(child_yang_name == "maximum-groups-per-interface-oor")
    {
        if(maximum_groups_per_interface_oor != nullptr)
        {
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
        else
        {
            maximum_groups_per_interface_oor = std::make_unique<Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor>();
            maximum_groups_per_interface_oor->parent = this;
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
        return children.at("maximum-groups-per-interface-oor");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::InheritableDefaults::get_children()
{
    if(children.find("explicit-tracking") == children.end())
    {
        if(explicit_tracking != nullptr)
        {
            children["explicit-tracking"] = explicit_tracking.get();
        }
    }

    if(children.find("maximum-groups-per-interface-oor") == children.end())
    {
        if(maximum_groups_per_interface_oor != nullptr)
        {
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
    }

    return children;
}

void Mld::Vrfs::Vrf::InheritableDefaults::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-group")
    {
        access_group = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "router-enable")
    {
        router_enable = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::SsmAccessGroup()
    :
    	source_address{YType::str, "source-address"},
	 access_list_name{YType::str, "access-list-name"}
{
    yang_name = "ssm-access-group"; yang_parent_name = "ssm-access-groups";
}

Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::~SsmAccessGroup()
{
}

bool Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::has_data() const
{
    return source_address.is_set
	|| access_list_name.is_set;
}

bool Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(access_list_name.operation);
}

std::string Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-access-group" <<"[source-address='" <<source_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::get_entity_path(Entity* ancestor) const
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

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::get_children()
{
    return children;
}

void Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
}

Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroups()
{
    yang_name = "ssm-access-groups"; yang_parent_name = "vrf";
}

Mld::Vrfs::Vrf::SsmAccessGroups::~SsmAccessGroups()
{
}

bool Mld::Vrfs::Vrf::SsmAccessGroups::has_data() const
{
    for (std::size_t index=0; index<ssm_access_group.size(); index++)
    {
        if(ssm_access_group[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Vrfs::Vrf::SsmAccessGroups::has_operation() const
{
    for (std::size_t index=0; index<ssm_access_group.size(); index++)
    {
        if(ssm_access_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Vrfs::Vrf::SsmAccessGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-access-groups";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::SsmAccessGroups::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::SsmAccessGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ssm-access-group")
    {
        for(auto const & c : ssm_access_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup>();
        c->parent = this;
        ssm_access_group.push_back(std::move(c));
        children[segment_path] = ssm_access_group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::SsmAccessGroups::get_children()
{
    for (auto const & c : ssm_access_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Mld::Vrfs::Vrf::SsmAccessGroups::set_value(const std::string & value_path, std::string value)
{
}

Mld::Vrfs::Vrf::Maximum::Maximum()
    :
    	maximum_groups{YType::uint32, "maximum-groups"}
{
    yang_name = "maximum"; yang_parent_name = "vrf";
}

Mld::Vrfs::Vrf::Maximum::~Maximum()
{
}

bool Mld::Vrfs::Vrf::Maximum::has_data() const
{
    return maximum_groups.is_set;
}

bool Mld::Vrfs::Vrf::Maximum::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_groups.operation);
}

std::string Mld::Vrfs::Vrf::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::Maximum::get_entity_path(Entity* ancestor) const
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

    if (maximum_groups.is_set || is_set(maximum_groups.operation)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::Maximum::get_children()
{
    return children;
}

void Mld::Vrfs::Vrf::Maximum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
    }
}

Mld::Vrfs::Vrf::UnicastQosAdjust::UnicastQosAdjust()
    :
    	adjustment_delay{YType::uint32, "adjustment-delay"},
	 download_interval{YType::uint32, "download-interval"},
	 hold_off{YType::uint32, "hold-off"}
{
    yang_name = "unicast-qos-adjust"; yang_parent_name = "vrf";
}

Mld::Vrfs::Vrf::UnicastQosAdjust::~UnicastQosAdjust()
{
}

bool Mld::Vrfs::Vrf::UnicastQosAdjust::has_data() const
{
    return adjustment_delay.is_set
	|| download_interval.is_set
	|| hold_off.is_set;
}

bool Mld::Vrfs::Vrf::UnicastQosAdjust::has_operation() const
{
    return is_set(operation)
	|| is_set(adjustment_delay.operation)
	|| is_set(download_interval.operation)
	|| is_set(hold_off.operation);
}

std::string Mld::Vrfs::Vrf::UnicastQosAdjust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-qos-adjust";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::UnicastQosAdjust::get_entity_path(Entity* ancestor) const
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

    if (adjustment_delay.is_set || is_set(adjustment_delay.operation)) leaf_name_data.push_back(adjustment_delay.get_name_leafdata());
    if (download_interval.is_set || is_set(download_interval.operation)) leaf_name_data.push_back(download_interval.get_name_leafdata());
    if (hold_off.is_set || is_set(hold_off.operation)) leaf_name_data.push_back(hold_off.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::UnicastQosAdjust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::UnicastQosAdjust::get_children()
{
    return children;
}

void Mld::Vrfs::Vrf::UnicastQosAdjust::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjustment-delay")
    {
        adjustment_delay = value;
    }
    if(value_path == "download-interval")
    {
        download_interval = value;
    }
    if(value_path == "hold-off")
    {
        hold_off = value;
    }
}

Mld::Vrfs::Vrf::Accounting::Accounting()
    :
    	max_history{YType::uint32, "max-history"}
{
    yang_name = "accounting"; yang_parent_name = "vrf";
}

Mld::Vrfs::Vrf::Accounting::~Accounting()
{
}

bool Mld::Vrfs::Vrf::Accounting::has_data() const
{
    return max_history.is_set;
}

bool Mld::Vrfs::Vrf::Accounting::has_operation() const
{
    return is_set(operation)
	|| is_set(max_history.operation);
}

std::string Mld::Vrfs::Vrf::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::Accounting::get_entity_path(Entity* ancestor) const
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

    if (max_history.is_set || is_set(max_history.operation)) leaf_name_data.push_back(max_history.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::Accounting::get_children()
{
    return children;
}

void Mld::Vrfs::Vrf::Accounting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-history")
    {
        max_history = value;
    }
}

Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::JoinGroup()
    :
    	group_address{YType::str, "group-address"},
	 mode{YType::enumeration, "mode"}
{
    yang_name = "join-group"; yang_parent_name = "join-groups";
}

Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::~JoinGroup()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::has_data() const
{
    return group_address.is_set
	|| mode.is_set;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(mode.operation);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-group" <<"[group-address='" <<group_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::get_children()
{
    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::JoinGroupSourceAddress()
    :
    	group_address{YType::str, "group-address"},
	 source_address{YType::str, "source-address"},
	 mode{YType::enumeration, "mode"}
{
    yang_name = "join-group-source-address"; yang_parent_name = "join-groups";
}

Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::~JoinGroupSourceAddress()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| mode.is_set;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(source_address.operation)
	|| is_set(mode.operation);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-group-source-address" <<"[group-address='" <<group_address.get() <<"']" <<"[source-address='" <<source_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_children()
{
    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroups()
{
    yang_name = "join-groups"; yang_parent_name = "interface";
}

Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::~JoinGroups()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::has_data() const
{
    for (std::size_t index=0; index<join_group.size(); index++)
    {
        if(join_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<join_group_source_address.size(); index++)
    {
        if(join_group_source_address[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::has_operation() const
{
    for (std::size_t index=0; index<join_group.size(); index++)
    {
        if(join_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<join_group_source_address.size(); index++)
    {
        if(join_group_source_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-groups";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "join-group")
    {
        for(auto const & c : join_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup>();
        c->parent = this;
        join_group.push_back(std::move(c));
        children[segment_path] = join_group.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "join-group-source-address")
    {
        for(auto const & c : join_group_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress>();
        c->parent = this;
        join_group_source_address.push_back(std::move(c));
        children[segment_path] = join_group_source_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::get_children()
{
    for (auto const & c : join_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : join_group_source_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::set_value(const std::string & value_path, std::string value)
{
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::StaticGroupGroupAddress()
    :
    	group_address{YType::str, "group-address"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address"; yang_parent_name = "static-group-group-addresses";
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::~StaticGroupGroupAddress()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::has_data() const
{
    return group_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address" <<"[group-address='" <<group_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_children()
{
    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::StaticGroupGroupAddressSourceAddress()
    :
    	group_address{YType::str, "group-address"},
	 source_address{YType::str, "source-address"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address-source-address"; yang_parent_name = "static-group-group-addresses";
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::~StaticGroupGroupAddressSourceAddress()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(source_address.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-source-address" <<"[group-address='" <<group_address.get() <<"']" <<"[source-address='" <<source_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_children()
{
    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::StaticGroupGroupAddressSourceAddressSourceAddressMask()
    :
    	group_address{YType::str, "group-address"},
	 source_address{YType::str, "source-address"},
	 source_address_mask{YType::str, "source-address-mask"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address-source-address-source-address-mask"; yang_parent_name = "static-group-group-addresses";
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::~StaticGroupGroupAddressSourceAddressSourceAddressMask()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| source_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(source_address.operation)
	|| is_set(source_address_mask.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-source-address-source-address-mask" <<"[group-address='" <<group_address.get() <<"']" <<"[source-address='" <<source_address.get() <<"']" <<"[source-address-mask='" <<source_address_mask.get() <<"']";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_address_mask.is_set || is_set(source_address_mask.operation)) leaf_name_data.push_back(source_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_children()
{
    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::StaticGroupGroupAddressGroupAddressMask()
    :
    	group_address{YType::str, "group-address"},
	 group_address_mask{YType::str, "group-address-mask"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address-group-address-mask"; yang_parent_name = "static-group-group-addresses";
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::~StaticGroupGroupAddressGroupAddressMask()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(group_address_mask.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask" <<"[group-address='" <<group_address.get() <<"']" <<"[group-address-mask='" <<group_address_mask.get() <<"']";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.operation)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_children()
{
    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::StaticGroupGroupAddressGroupAddressMaskSourceAddress()
    :
    	group_address{YType::str, "group-address"},
	 group_address_mask{YType::str, "group-address-mask"},
	 source_address{YType::str, "source-address"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address-group-address-mask-source-address"; yang_parent_name = "static-group-group-addresses";
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::~StaticGroupGroupAddressGroupAddressMaskSourceAddress()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| source_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(group_address_mask.operation)
	|| is_set(source_address.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask-source-address" <<"[group-address='" <<group_address.get() <<"']" <<"[group-address-mask='" <<group_address_mask.get() <<"']" <<"[source-address='" <<source_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.operation)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_children()
{
    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask()
    :
    	group_address{YType::str, "group-address"},
	 group_address_mask{YType::str, "group-address-mask"},
	 source_address{YType::str, "source-address"},
	 source_address_mask{YType::str, "source-address-mask"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address-group-address-mask-source-address-source-address-mask"; yang_parent_name = "static-group-group-addresses";
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::~StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| source_address.is_set
	|| source_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(group_address_mask.operation)
	|| is_set(source_address.operation)
	|| is_set(source_address_mask.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask-source-address-source-address-mask" <<"[group-address='" <<group_address.get() <<"']" <<"[group-address-mask='" <<group_address_mask.get() <<"']" <<"[source-address='" <<source_address.get() <<"']" <<"[source-address-mask='" <<source_address_mask.get() <<"']";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.operation)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_address_mask.is_set || is_set(source_address_mask.operation)) leaf_name_data.push_back(source_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_children()
{
    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddresses()
{
    yang_name = "static-group-group-addresses"; yang_parent_name = "interface";
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::~StaticGroupGroupAddresses()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::has_data() const
{
    for (std::size_t index=0; index<static_group_group_address.size(); index++)
    {
        if(static_group_group_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address_source_address_mask[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address.size(); index++)
    {
        if(static_group_group_address_source_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_source_address_source_address_mask[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::has_operation() const
{
    for (std::size_t index=0; index<static_group_group_address.size(); index++)
    {
        if(static_group_group_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address_source_address_mask[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address.size(); index++)
    {
        if(static_group_group_address_source_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_source_address_source_address_mask[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-addresses";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address")
    {
        for(auto const & c : static_group_group_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress>();
        c->parent = this;
        static_group_group_address.push_back(std::move(c));
        children[segment_path] = static_group_group_address.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address-group-address-mask")
    {
        for(auto const & c : static_group_group_address_group_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask>();
        c->parent = this;
        static_group_group_address_group_address_mask.push_back(std::move(c));
        children[segment_path] = static_group_group_address_group_address_mask.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address-group-address-mask-source-address")
    {
        for(auto const & c : static_group_group_address_group_address_mask_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress>();
        c->parent = this;
        static_group_group_address_group_address_mask_source_address.push_back(std::move(c));
        children[segment_path] = static_group_group_address_group_address_mask_source_address.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address-group-address-mask-source-address-source-address-mask")
    {
        for(auto const & c : static_group_group_address_group_address_mask_source_address_source_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask>();
        c->parent = this;
        static_group_group_address_group_address_mask_source_address_source_address_mask.push_back(std::move(c));
        children[segment_path] = static_group_group_address_group_address_mask_source_address_source_address_mask.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address-source-address")
    {
        for(auto const & c : static_group_group_address_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress>();
        c->parent = this;
        static_group_group_address_source_address.push_back(std::move(c));
        children[segment_path] = static_group_group_address_source_address.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address-source-address-source-address-mask")
    {
        for(auto const & c : static_group_group_address_source_address_source_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask>();
        c->parent = this;
        static_group_group_address_source_address_source_address_mask.push_back(std::move(c));
        children[segment_path] = static_group_group_address_source_address_source_address_mask.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::get_children()
{
    for (auto const & c : static_group_group_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : static_group_group_address_group_address_mask)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : static_group_group_address_group_address_mask_source_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : static_group_group_address_group_address_mask_source_address_source_address_mask)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : static_group_group_address_source_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : static_group_group_address_source_address_source_address_mask)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::set_value(const std::string & value_path, std::string value)
{
}

Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::MaximumGroupsPerInterfaceOor()
    :
    	access_list_name{YType::str, "access-list-name"},
	 maximum_groups{YType::uint32, "maximum-groups"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "maximum-groups-per-interface-oor"; yang_parent_name = "interface";
}

Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::~MaximumGroupsPerInterfaceOor()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::has_data() const
{
    return access_list_name.is_set
	|| maximum_groups.is_set
	|| warning_threshold.is_set;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(maximum_groups.operation)
	|| is_set(warning_threshold.operation);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-groups-per-interface-oor";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (maximum_groups.is_set || is_set(maximum_groups.operation)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_children()
{
    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::ExplicitTracking()
    :
    	access_list_name{YType::str, "access-list-name"},
	 enable{YType::boolean, "enable"}
{
    yang_name = "explicit-tracking"; yang_parent_name = "interface";
}

Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::~ExplicitTracking()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::has_data() const
{
    return access_list_name.is_set
	|| enable.is_set;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(enable.operation);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::get_children()
{
    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Mld::Vrfs::Vrf::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 access_group{YType::str, "access-group"},
	 query_interval{YType::uint32, "query-interval"},
	 query_max_response_time{YType::uint32, "query-max-response-time"},
	 query_timeout{YType::uint32, "query-timeout"},
	 router_enable{YType::boolean, "router-enable"},
	 version{YType::uint32, "version"}
    	,
    explicit_tracking(nullptr) // presence node
	,join_groups(nullptr) // presence node
	,maximum_groups_per_interface_oor(std::make_unique<Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor>())
	,static_group_group_addresses(std::make_unique<Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses>())
{
    maximum_groups_per_interface_oor->parent = this;
    children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();

    static_group_group_addresses->parent = this;
    children["static-group-group-addresses"] = static_group_group_addresses.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Mld::Vrfs::Vrf::Interfaces::Interface::~Interface()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| access_group.is_set
	|| query_interval.is_set
	|| query_max_response_time.is_set
	|| query_timeout.is_set
	|| router_enable.is_set
	|| version.is_set
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data())
	|| (join_groups !=  nullptr && join_groups->has_data())
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_data())
	|| (static_group_group_addresses !=  nullptr && static_group_group_addresses->has_data());
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(access_group.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_max_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(router_enable.operation)
	|| is_set(version.operation)
	|| (explicit_tracking !=  nullptr && is_set(explicit_tracking->operation))
	|| (join_groups !=  nullptr && is_set(join_groups->operation))
	|| (maximum_groups_per_interface_oor !=  nullptr && is_set(maximum_groups_per_interface_oor->operation))
	|| (static_group_group_addresses !=  nullptr && is_set(static_group_group_addresses->operation));
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::Interfaces::Interface::get_entity_path(Entity* ancestor) const
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
    if (access_group.is_set || is_set(access_group.operation)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_max_response_time.is_set || is_set(query_max_response_time.operation)) leaf_name_data.push_back(query_max_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (router_enable.is_set || is_set(router_enable.operation)) leaf_name_data.push_back(router_enable.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking != nullptr)
        {
            children["explicit-tracking"] = explicit_tracking.get();
        }
        else
        {
            explicit_tracking = std::make_unique<Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking>();
            explicit_tracking->parent = this;
            children["explicit-tracking"] = explicit_tracking.get();
        }
        return children.at("explicit-tracking");
    }

    if(child_yang_name == "join-groups")
    {
        if(join_groups != nullptr)
        {
            children["join-groups"] = join_groups.get();
        }
        else
        {
            join_groups = std::make_unique<Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups>();
            join_groups->parent = this;
            children["join-groups"] = join_groups.get();
        }
        return children.at("join-groups");
    }

    if(child_yang_name == "maximum-groups-per-interface-oor")
    {
        if(maximum_groups_per_interface_oor != nullptr)
        {
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
        else
        {
            maximum_groups_per_interface_oor = std::make_unique<Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor>();
            maximum_groups_per_interface_oor->parent = this;
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
        return children.at("maximum-groups-per-interface-oor");
    }

    if(child_yang_name == "static-group-group-addresses")
    {
        if(static_group_group_addresses != nullptr)
        {
            children["static-group-group-addresses"] = static_group_group_addresses.get();
        }
        else
        {
            static_group_group_addresses = std::make_unique<Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses>();
            static_group_group_addresses->parent = this;
            children["static-group-group-addresses"] = static_group_group_addresses.get();
        }
        return children.at("static-group-group-addresses");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::Interfaces::Interface::get_children()
{
    if(children.find("explicit-tracking") == children.end())
    {
        if(explicit_tracking != nullptr)
        {
            children["explicit-tracking"] = explicit_tracking.get();
        }
    }

    if(children.find("join-groups") == children.end())
    {
        if(join_groups != nullptr)
        {
            children["join-groups"] = join_groups.get();
        }
    }

    if(children.find("maximum-groups-per-interface-oor") == children.end())
    {
        if(maximum_groups_per_interface_oor != nullptr)
        {
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
    }

    if(children.find("static-group-group-addresses") == children.end())
    {
        if(static_group_group_addresses != nullptr)
        {
            children["static-group-group-addresses"] = static_group_group_addresses.get();
        }
    }

    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "access-group")
    {
        access_group = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "router-enable")
    {
        router_enable = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Mld::Vrfs::Vrf::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "vrf";
}

Mld::Vrfs::Vrf::Interfaces::~Interfaces()
{
}

bool Mld::Vrfs::Vrf::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Vrfs::Vrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Vrfs::Vrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::Interfaces::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Mld::Vrfs::Vrf::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::Interfaces::get_children()
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

void Mld::Vrfs::Vrf::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Mld::Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"},
	 robustness{YType::uint32, "robustness"},
	 ssmdns_query_group{YType::empty, "ssmdns-query-group"}
    	,
    accounting(std::make_unique<Mld::Vrfs::Vrf::Accounting>())
	,inheritable_defaults(std::make_unique<Mld::Vrfs::Vrf::InheritableDefaults>())
	,interfaces(std::make_unique<Mld::Vrfs::Vrf::Interfaces>())
	,maximum(std::make_unique<Mld::Vrfs::Vrf::Maximum>())
	,ssm_access_groups(std::make_unique<Mld::Vrfs::Vrf::SsmAccessGroups>())
	,traffic(std::make_unique<Mld::Vrfs::Vrf::Traffic>())
	,unicast_qos_adjust(std::make_unique<Mld::Vrfs::Vrf::UnicastQosAdjust>())
{
    accounting->parent = this;
    children["accounting"] = accounting.get();

    inheritable_defaults->parent = this;
    children["inheritable-defaults"] = inheritable_defaults.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    maximum->parent = this;
    children["maximum"] = maximum.get();

    ssm_access_groups->parent = this;
    children["ssm-access-groups"] = ssm_access_groups.get();

    traffic->parent = this;
    children["traffic"] = traffic.get();

    unicast_qos_adjust->parent = this;
    children["unicast-qos-adjust"] = unicast_qos_adjust.get();

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Mld::Vrfs::Vrf::~Vrf()
{
}

bool Mld::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| robustness.is_set
	|| ssmdns_query_group.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (ssm_access_groups !=  nullptr && ssm_access_groups->has_data())
	|| (traffic !=  nullptr && traffic->has_data())
	|| (unicast_qos_adjust !=  nullptr && unicast_qos_adjust->has_data());
}

bool Mld::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(robustness.operation)
	|| is_set(ssmdns_query_group.operation)
	|| (accounting !=  nullptr && is_set(accounting->operation))
	|| (inheritable_defaults !=  nullptr && is_set(inheritable_defaults->operation))
	|| (interfaces !=  nullptr && is_set(interfaces->operation))
	|| (maximum !=  nullptr && is_set(maximum->operation))
	|| (ssm_access_groups !=  nullptr && is_set(ssm_access_groups->operation))
	|| (traffic !=  nullptr && is_set(traffic->operation))
	|| (unicast_qos_adjust !=  nullptr && is_set(unicast_qos_adjust->operation));
}

std::string Mld::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/vrfs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (ssmdns_query_group.is_set || is_set(ssmdns_query_group.operation)) leaf_name_data.push_back(ssmdns_query_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accounting")
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting.get();
        }
        else
        {
            accounting = std::make_unique<Mld::Vrfs::Vrf::Accounting>();
            accounting->parent = this;
            children["accounting"] = accounting.get();
        }
        return children.at("accounting");
    }

    if(child_yang_name == "inheritable-defaults")
    {
        if(inheritable_defaults != nullptr)
        {
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
        else
        {
            inheritable_defaults = std::make_unique<Mld::Vrfs::Vrf::InheritableDefaults>();
            inheritable_defaults->parent = this;
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
        return children.at("inheritable-defaults");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<Mld::Vrfs::Vrf::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "maximum")
    {
        if(maximum != nullptr)
        {
            children["maximum"] = maximum.get();
        }
        else
        {
            maximum = std::make_unique<Mld::Vrfs::Vrf::Maximum>();
            maximum->parent = this;
            children["maximum"] = maximum.get();
        }
        return children.at("maximum");
    }

    if(child_yang_name == "ssm-access-groups")
    {
        if(ssm_access_groups != nullptr)
        {
            children["ssm-access-groups"] = ssm_access_groups.get();
        }
        else
        {
            ssm_access_groups = std::make_unique<Mld::Vrfs::Vrf::SsmAccessGroups>();
            ssm_access_groups->parent = this;
            children["ssm-access-groups"] = ssm_access_groups.get();
        }
        return children.at("ssm-access-groups");
    }

    if(child_yang_name == "traffic")
    {
        if(traffic != nullptr)
        {
            children["traffic"] = traffic.get();
        }
        else
        {
            traffic = std::make_unique<Mld::Vrfs::Vrf::Traffic>();
            traffic->parent = this;
            children["traffic"] = traffic.get();
        }
        return children.at("traffic");
    }

    if(child_yang_name == "unicast-qos-adjust")
    {
        if(unicast_qos_adjust != nullptr)
        {
            children["unicast-qos-adjust"] = unicast_qos_adjust.get();
        }
        else
        {
            unicast_qos_adjust = std::make_unique<Mld::Vrfs::Vrf::UnicastQosAdjust>();
            unicast_qos_adjust->parent = this;
            children["unicast-qos-adjust"] = unicast_qos_adjust.get();
        }
        return children.at("unicast-qos-adjust");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::Vrf::get_children()
{
    if(children.find("accounting") == children.end())
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting.get();
        }
    }

    if(children.find("inheritable-defaults") == children.end())
    {
        if(inheritable_defaults != nullptr)
        {
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("maximum") == children.end())
    {
        if(maximum != nullptr)
        {
            children["maximum"] = maximum.get();
        }
    }

    if(children.find("ssm-access-groups") == children.end())
    {
        if(ssm_access_groups != nullptr)
        {
            children["ssm-access-groups"] = ssm_access_groups.get();
        }
    }

    if(children.find("traffic") == children.end())
    {
        if(traffic != nullptr)
        {
            children["traffic"] = traffic.get();
        }
    }

    if(children.find("unicast-qos-adjust") == children.end())
    {
        if(unicast_qos_adjust != nullptr)
        {
            children["unicast-qos-adjust"] = unicast_qos_adjust.get();
        }
    }

    return children;
}

void Mld::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "ssmdns-query-group")
    {
        ssmdns_query_group = value;
    }
}

Mld::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "mld";
}

Mld::Vrfs::~Vrfs()
{
}

bool Mld::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Mld::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Mld::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::Vrfs::get_children()
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

void Mld::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Mld::DefaultContext::Nsf::Nsf()
    :
    	lifetime{YType::uint32, "lifetime"}
{
    yang_name = "nsf"; yang_parent_name = "default-context";
}

Mld::DefaultContext::Nsf::~Nsf()
{
}

bool Mld::DefaultContext::Nsf::has_data() const
{
    return lifetime.is_set;
}

bool Mld::DefaultContext::Nsf::has_operation() const
{
    return is_set(operation)
	|| is_set(lifetime.operation);
}

std::string Mld::DefaultContext::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::Nsf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lifetime.is_set || is_set(lifetime.operation)) leaf_name_data.push_back(lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::Nsf::get_children()
{
    return children;
}

void Mld::DefaultContext::Nsf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lifetime")
    {
        lifetime = value;
    }
}

Mld::DefaultContext::Traffic::Traffic()
    :
    	profile{YType::str, "profile"}
{
    yang_name = "traffic"; yang_parent_name = "default-context";
}

Mld::DefaultContext::Traffic::~Traffic()
{
}

bool Mld::DefaultContext::Traffic::has_data() const
{
    return profile.is_set;
}

bool Mld::DefaultContext::Traffic::has_operation() const
{
    return is_set(operation)
	|| is_set(profile.operation);
}

std::string Mld::DefaultContext::Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::Traffic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::Traffic::get_children()
{
    return children;
}

void Mld::DefaultContext::Traffic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
}

Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::MaximumGroupsPerInterfaceOor()
    :
    	access_list_name{YType::str, "access-list-name"},
	 maximum_groups{YType::uint32, "maximum-groups"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "maximum-groups-per-interface-oor"; yang_parent_name = "inheritable-defaults";
}

Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::~MaximumGroupsPerInterfaceOor()
{
}

bool Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::has_data() const
{
    return access_list_name.is_set
	|| maximum_groups.is_set
	|| warning_threshold.is_set;
}

bool Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(maximum_groups.operation)
	|| is_set(warning_threshold.operation);
}

std::string Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-groups-per-interface-oor";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/inheritable-defaults/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (maximum_groups.is_set || is_set(maximum_groups.operation)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_children()
{
    return children;
}

void Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Mld::DefaultContext::InheritableDefaults::ExplicitTracking::ExplicitTracking()
    :
    	access_list_name{YType::str, "access-list-name"},
	 enable{YType::boolean, "enable"}
{
    yang_name = "explicit-tracking"; yang_parent_name = "inheritable-defaults";
}

Mld::DefaultContext::InheritableDefaults::ExplicitTracking::~ExplicitTracking()
{
}

bool Mld::DefaultContext::InheritableDefaults::ExplicitTracking::has_data() const
{
    return access_list_name.is_set
	|| enable.is_set;
}

bool Mld::DefaultContext::InheritableDefaults::ExplicitTracking::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(enable.operation);
}

std::string Mld::DefaultContext::InheritableDefaults::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::InheritableDefaults::ExplicitTracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/inheritable-defaults/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::InheritableDefaults::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::InheritableDefaults::ExplicitTracking::get_children()
{
    return children;
}

void Mld::DefaultContext::InheritableDefaults::ExplicitTracking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Mld::DefaultContext::InheritableDefaults::InheritableDefaults()
    :
    	access_group{YType::str, "access-group"},
	 query_interval{YType::uint32, "query-interval"},
	 query_max_response_time{YType::uint32, "query-max-response-time"},
	 query_timeout{YType::uint32, "query-timeout"},
	 router_enable{YType::boolean, "router-enable"},
	 version{YType::uint32, "version"}
    	,
    explicit_tracking(nullptr) // presence node
	,maximum_groups_per_interface_oor(std::make_unique<Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor>())
{
    maximum_groups_per_interface_oor->parent = this;
    children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();

    yang_name = "inheritable-defaults"; yang_parent_name = "default-context";
}

Mld::DefaultContext::InheritableDefaults::~InheritableDefaults()
{
}

bool Mld::DefaultContext::InheritableDefaults::has_data() const
{
    return access_group.is_set
	|| query_interval.is_set
	|| query_max_response_time.is_set
	|| query_timeout.is_set
	|| router_enable.is_set
	|| version.is_set
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data())
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_data());
}

bool Mld::DefaultContext::InheritableDefaults::has_operation() const
{
    return is_set(operation)
	|| is_set(access_group.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_max_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(router_enable.operation)
	|| is_set(version.operation)
	|| (explicit_tracking !=  nullptr && is_set(explicit_tracking->operation))
	|| (maximum_groups_per_interface_oor !=  nullptr && is_set(maximum_groups_per_interface_oor->operation));
}

std::string Mld::DefaultContext::InheritableDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritable-defaults";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::InheritableDefaults::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_group.is_set || is_set(access_group.operation)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_max_response_time.is_set || is_set(query_max_response_time.operation)) leaf_name_data.push_back(query_max_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (router_enable.is_set || is_set(router_enable.operation)) leaf_name_data.push_back(router_enable.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::InheritableDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking != nullptr)
        {
            children["explicit-tracking"] = explicit_tracking.get();
        }
        else
        {
            explicit_tracking = std::make_unique<Mld::DefaultContext::InheritableDefaults::ExplicitTracking>();
            explicit_tracking->parent = this;
            children["explicit-tracking"] = explicit_tracking.get();
        }
        return children.at("explicit-tracking");
    }

    if(child_yang_name == "maximum-groups-per-interface-oor")
    {
        if(maximum_groups_per_interface_oor != nullptr)
        {
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
        else
        {
            maximum_groups_per_interface_oor = std::make_unique<Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor>();
            maximum_groups_per_interface_oor->parent = this;
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
        return children.at("maximum-groups-per-interface-oor");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::InheritableDefaults::get_children()
{
    if(children.find("explicit-tracking") == children.end())
    {
        if(explicit_tracking != nullptr)
        {
            children["explicit-tracking"] = explicit_tracking.get();
        }
    }

    if(children.find("maximum-groups-per-interface-oor") == children.end())
    {
        if(maximum_groups_per_interface_oor != nullptr)
        {
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
    }

    return children;
}

void Mld::DefaultContext::InheritableDefaults::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-group")
    {
        access_group = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "router-enable")
    {
        router_enable = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup::SsmAccessGroup()
    :
    	source_address{YType::str, "source-address"},
	 access_list_name{YType::str, "access-list-name"}
{
    yang_name = "ssm-access-group"; yang_parent_name = "ssm-access-groups";
}

Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup::~SsmAccessGroup()
{
}

bool Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup::has_data() const
{
    return source_address.is_set
	|| access_list_name.is_set;
}

bool Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(access_list_name.operation);
}

std::string Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-access-group" <<"[source-address='" <<source_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/ssm-access-groups/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup::get_children()
{
    return children;
}

void Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
}

Mld::DefaultContext::SsmAccessGroups::SsmAccessGroups()
{
    yang_name = "ssm-access-groups"; yang_parent_name = "default-context";
}

Mld::DefaultContext::SsmAccessGroups::~SsmAccessGroups()
{
}

bool Mld::DefaultContext::SsmAccessGroups::has_data() const
{
    for (std::size_t index=0; index<ssm_access_group.size(); index++)
    {
        if(ssm_access_group[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::DefaultContext::SsmAccessGroups::has_operation() const
{
    for (std::size_t index=0; index<ssm_access_group.size(); index++)
    {
        if(ssm_access_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::DefaultContext::SsmAccessGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-access-groups";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::SsmAccessGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::SsmAccessGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ssm-access-group")
    {
        for(auto const & c : ssm_access_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup>();
        c->parent = this;
        ssm_access_group.push_back(std::move(c));
        children[segment_path] = ssm_access_group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::SsmAccessGroups::get_children()
{
    for (auto const & c : ssm_access_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Mld::DefaultContext::SsmAccessGroups::set_value(const std::string & value_path, std::string value)
{
}

Mld::DefaultContext::Maximum::Maximum()
    :
    	maximum_groups{YType::uint32, "maximum-groups"}
{
    yang_name = "maximum"; yang_parent_name = "default-context";
}

Mld::DefaultContext::Maximum::~Maximum()
{
}

bool Mld::DefaultContext::Maximum::has_data() const
{
    return maximum_groups.is_set;
}

bool Mld::DefaultContext::Maximum::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_groups.operation);
}

std::string Mld::DefaultContext::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_groups.is_set || is_set(maximum_groups.operation)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::Maximum::get_children()
{
    return children;
}

void Mld::DefaultContext::Maximum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
    }
}

Mld::DefaultContext::UnicastQosAdjust::UnicastQosAdjust()
    :
    	adjustment_delay{YType::uint32, "adjustment-delay"},
	 download_interval{YType::uint32, "download-interval"},
	 hold_off{YType::uint32, "hold-off"}
{
    yang_name = "unicast-qos-adjust"; yang_parent_name = "default-context";
}

Mld::DefaultContext::UnicastQosAdjust::~UnicastQosAdjust()
{
}

bool Mld::DefaultContext::UnicastQosAdjust::has_data() const
{
    return adjustment_delay.is_set
	|| download_interval.is_set
	|| hold_off.is_set;
}

bool Mld::DefaultContext::UnicastQosAdjust::has_operation() const
{
    return is_set(operation)
	|| is_set(adjustment_delay.operation)
	|| is_set(download_interval.operation)
	|| is_set(hold_off.operation);
}

std::string Mld::DefaultContext::UnicastQosAdjust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-qos-adjust";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::UnicastQosAdjust::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjustment_delay.is_set || is_set(adjustment_delay.operation)) leaf_name_data.push_back(adjustment_delay.get_name_leafdata());
    if (download_interval.is_set || is_set(download_interval.operation)) leaf_name_data.push_back(download_interval.get_name_leafdata());
    if (hold_off.is_set || is_set(hold_off.operation)) leaf_name_data.push_back(hold_off.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::UnicastQosAdjust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::UnicastQosAdjust::get_children()
{
    return children;
}

void Mld::DefaultContext::UnicastQosAdjust::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjustment-delay")
    {
        adjustment_delay = value;
    }
    if(value_path == "download-interval")
    {
        download_interval = value;
    }
    if(value_path == "hold-off")
    {
        hold_off = value;
    }
}

Mld::DefaultContext::Accounting::Accounting()
    :
    	max_history{YType::uint32, "max-history"}
{
    yang_name = "accounting"; yang_parent_name = "default-context";
}

Mld::DefaultContext::Accounting::~Accounting()
{
}

bool Mld::DefaultContext::Accounting::has_data() const
{
    return max_history.is_set;
}

bool Mld::DefaultContext::Accounting::has_operation() const
{
    return is_set(operation)
	|| is_set(max_history.operation);
}

std::string Mld::DefaultContext::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::Accounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_history.is_set || is_set(max_history.operation)) leaf_name_data.push_back(max_history.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::Accounting::get_children()
{
    return children;
}

void Mld::DefaultContext::Accounting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-history")
    {
        max_history = value;
    }
}

Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::JoinGroup()
    :
    	group_address{YType::str, "group-address"},
	 mode{YType::enumeration, "mode"}
{
    yang_name = "join-group"; yang_parent_name = "join-groups";
}

Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::~JoinGroup()
{
}

bool Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::has_data() const
{
    return group_address.is_set
	|| mode.is_set;
}

bool Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(mode.operation);
}

std::string Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-group" <<"[group-address='" <<group_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::get_children()
{
    return children;
}

void Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::JoinGroupSourceAddress()
    :
    	group_address{YType::str, "group-address"},
	 source_address{YType::str, "source-address"},
	 mode{YType::enumeration, "mode"}
{
    yang_name = "join-group-source-address"; yang_parent_name = "join-groups";
}

Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::~JoinGroupSourceAddress()
{
}

bool Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| mode.is_set;
}

bool Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(source_address.operation)
	|| is_set(mode.operation);
}

std::string Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-group-source-address" <<"[group-address='" <<group_address.get() <<"']" <<"[source-address='" <<source_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_children()
{
    return children;
}

void Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroups()
{
    yang_name = "join-groups"; yang_parent_name = "interface";
}

Mld::DefaultContext::Interfaces::Interface::JoinGroups::~JoinGroups()
{
}

bool Mld::DefaultContext::Interfaces::Interface::JoinGroups::has_data() const
{
    for (std::size_t index=0; index<join_group.size(); index++)
    {
        if(join_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<join_group_source_address.size(); index++)
    {
        if(join_group_source_address[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::DefaultContext::Interfaces::Interface::JoinGroups::has_operation() const
{
    for (std::size_t index=0; index<join_group.size(); index++)
    {
        if(join_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<join_group_source_address.size(); index++)
    {
        if(join_group_source_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::DefaultContext::Interfaces::Interface::JoinGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-groups";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::Interfaces::Interface::JoinGroups::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::Interfaces::Interface::JoinGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "join-group")
    {
        for(auto const & c : join_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup>();
        c->parent = this;
        join_group.push_back(std::move(c));
        children[segment_path] = join_group.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "join-group-source-address")
    {
        for(auto const & c : join_group_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress>();
        c->parent = this;
        join_group_source_address.push_back(std::move(c));
        children[segment_path] = join_group_source_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::Interfaces::Interface::JoinGroups::get_children()
{
    for (auto const & c : join_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : join_group_source_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Mld::DefaultContext::Interfaces::Interface::JoinGroups::set_value(const std::string & value_path, std::string value)
{
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::StaticGroupGroupAddress()
    :
    	group_address{YType::str, "group-address"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address"; yang_parent_name = "static-group-group-addresses";
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::~StaticGroupGroupAddress()
{
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::has_data() const
{
    return group_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address" <<"[group-address='" <<group_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_children()
{
    return children;
}

void Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::StaticGroupGroupAddressSourceAddress()
    :
    	group_address{YType::str, "group-address"},
	 source_address{YType::str, "source-address"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address-source-address"; yang_parent_name = "static-group-group-addresses";
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::~StaticGroupGroupAddressSourceAddress()
{
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(source_address.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-source-address" <<"[group-address='" <<group_address.get() <<"']" <<"[source-address='" <<source_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_children()
{
    return children;
}

void Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::StaticGroupGroupAddressSourceAddressSourceAddressMask()
    :
    	group_address{YType::str, "group-address"},
	 source_address{YType::str, "source-address"},
	 source_address_mask{YType::str, "source-address-mask"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address-source-address-source-address-mask"; yang_parent_name = "static-group-group-addresses";
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::~StaticGroupGroupAddressSourceAddressSourceAddressMask()
{
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| source_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(source_address.operation)
	|| is_set(source_address_mask.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-source-address-source-address-mask" <<"[group-address='" <<group_address.get() <<"']" <<"[source-address='" <<source_address.get() <<"']" <<"[source-address-mask='" <<source_address_mask.get() <<"']";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_address_mask.is_set || is_set(source_address_mask.operation)) leaf_name_data.push_back(source_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_children()
{
    return children;
}

void Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::StaticGroupGroupAddressGroupAddressMask()
    :
    	group_address{YType::str, "group-address"},
	 group_address_mask{YType::str, "group-address-mask"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address-group-address-mask"; yang_parent_name = "static-group-group-addresses";
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::~StaticGroupGroupAddressGroupAddressMask()
{
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(group_address_mask.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask" <<"[group-address='" <<group_address.get() <<"']" <<"[group-address-mask='" <<group_address_mask.get() <<"']";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.operation)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_children()
{
    return children;
}

void Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::StaticGroupGroupAddressGroupAddressMaskSourceAddress()
    :
    	group_address{YType::str, "group-address"},
	 group_address_mask{YType::str, "group-address-mask"},
	 source_address{YType::str, "source-address"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address-group-address-mask-source-address"; yang_parent_name = "static-group-group-addresses";
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::~StaticGroupGroupAddressGroupAddressMaskSourceAddress()
{
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| source_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(group_address_mask.operation)
	|| is_set(source_address.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask-source-address" <<"[group-address='" <<group_address.get() <<"']" <<"[group-address-mask='" <<group_address_mask.get() <<"']" <<"[source-address='" <<source_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.operation)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_children()
{
    return children;
}

void Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask()
    :
    	group_address{YType::str, "group-address"},
	 group_address_mask{YType::str, "group-address-mask"},
	 source_address{YType::str, "source-address"},
	 source_address_mask{YType::str, "source-address-mask"},
	 group_count{YType::uint32, "group-count"},
	 source_count{YType::uint32, "source-count"},
	 suppress_report{YType::boolean, "suppress-report"}
{
    yang_name = "static-group-group-address-group-address-mask-source-address-source-address-mask"; yang_parent_name = "static-group-group-addresses";
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::~StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask()
{
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| source_address.is_set
	|| source_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(group_address_mask.operation)
	|| is_set(source_address.operation)
	|| is_set(source_address_mask.operation)
	|| is_set(group_count.operation)
	|| is_set(source_count.operation)
	|| is_set(suppress_report.operation);
}

std::string Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask-source-address-source-address-mask" <<"[group-address='" <<group_address.get() <<"']" <<"[group-address-mask='" <<group_address_mask.get() <<"']" <<"[source-address='" <<source_address.get() <<"']" <<"[source-address-mask='" <<source_address_mask.get() <<"']";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.operation)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_address_mask.is_set || is_set(source_address_mask.operation)) leaf_name_data.push_back(source_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.operation)) leaf_name_data.push_back(suppress_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_children()
{
    return children;
}

void Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
    }
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddresses()
{
    yang_name = "static-group-group-addresses"; yang_parent_name = "interface";
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::~StaticGroupGroupAddresses()
{
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::has_data() const
{
    for (std::size_t index=0; index<static_group_group_address.size(); index++)
    {
        if(static_group_group_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address_source_address_mask[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address.size(); index++)
    {
        if(static_group_group_address_source_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_source_address_source_address_mask[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::has_operation() const
{
    for (std::size_t index=0; index<static_group_group_address.size(); index++)
    {
        if(static_group_group_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address_source_address_mask[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address.size(); index++)
    {
        if(static_group_group_address_source_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_source_address_source_address_mask[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-addresses";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address")
    {
        for(auto const & c : static_group_group_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress>();
        c->parent = this;
        static_group_group_address.push_back(std::move(c));
        children[segment_path] = static_group_group_address.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address-group-address-mask")
    {
        for(auto const & c : static_group_group_address_group_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask>();
        c->parent = this;
        static_group_group_address_group_address_mask.push_back(std::move(c));
        children[segment_path] = static_group_group_address_group_address_mask.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address-group-address-mask-source-address")
    {
        for(auto const & c : static_group_group_address_group_address_mask_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress>();
        c->parent = this;
        static_group_group_address_group_address_mask_source_address.push_back(std::move(c));
        children[segment_path] = static_group_group_address_group_address_mask_source_address.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address-group-address-mask-source-address-source-address-mask")
    {
        for(auto const & c : static_group_group_address_group_address_mask_source_address_source_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask>();
        c->parent = this;
        static_group_group_address_group_address_mask_source_address_source_address_mask.push_back(std::move(c));
        children[segment_path] = static_group_group_address_group_address_mask_source_address_source_address_mask.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address-source-address")
    {
        for(auto const & c : static_group_group_address_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress>();
        c->parent = this;
        static_group_group_address_source_address.push_back(std::move(c));
        children[segment_path] = static_group_group_address_source_address.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "static-group-group-address-source-address-source-address-mask")
    {
        for(auto const & c : static_group_group_address_source_address_source_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask>();
        c->parent = this;
        static_group_group_address_source_address_source_address_mask.push_back(std::move(c));
        children[segment_path] = static_group_group_address_source_address_source_address_mask.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::get_children()
{
    for (auto const & c : static_group_group_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : static_group_group_address_group_address_mask)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : static_group_group_address_group_address_mask_source_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : static_group_group_address_group_address_mask_source_address_source_address_mask)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : static_group_group_address_source_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : static_group_group_address_source_address_source_address_mask)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::set_value(const std::string & value_path, std::string value)
{
}

Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::MaximumGroupsPerInterfaceOor()
    :
    	access_list_name{YType::str, "access-list-name"},
	 maximum_groups{YType::uint32, "maximum-groups"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "maximum-groups-per-interface-oor"; yang_parent_name = "interface";
}

Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::~MaximumGroupsPerInterfaceOor()
{
}

bool Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::has_data() const
{
    return access_list_name.is_set
	|| maximum_groups.is_set
	|| warning_threshold.is_set;
}

bool Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(maximum_groups.operation)
	|| is_set(warning_threshold.operation);
}

std::string Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-groups-per-interface-oor";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (maximum_groups.is_set || is_set(maximum_groups.operation)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_children()
{
    return children;
}

void Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Mld::DefaultContext::Interfaces::Interface::ExplicitTracking::ExplicitTracking()
    :
    	access_list_name{YType::str, "access-list-name"},
	 enable{YType::boolean, "enable"}
{
    yang_name = "explicit-tracking"; yang_parent_name = "interface";
}

Mld::DefaultContext::Interfaces::Interface::ExplicitTracking::~ExplicitTracking()
{
}

bool Mld::DefaultContext::Interfaces::Interface::ExplicitTracking::has_data() const
{
    return access_list_name.is_set
	|| enable.is_set;
}

bool Mld::DefaultContext::Interfaces::Interface::ExplicitTracking::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(enable.operation);
}

std::string Mld::DefaultContext::Interfaces::Interface::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::Interfaces::Interface::ExplicitTracking::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::Interfaces::Interface::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::Interfaces::Interface::ExplicitTracking::get_children()
{
    return children;
}

void Mld::DefaultContext::Interfaces::Interface::ExplicitTracking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Mld::DefaultContext::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 access_group{YType::str, "access-group"},
	 query_interval{YType::uint32, "query-interval"},
	 query_max_response_time{YType::uint32, "query-max-response-time"},
	 query_timeout{YType::uint32, "query-timeout"},
	 router_enable{YType::boolean, "router-enable"},
	 version{YType::uint32, "version"}
    	,
    explicit_tracking(nullptr) // presence node
	,join_groups(nullptr) // presence node
	,maximum_groups_per_interface_oor(std::make_unique<Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor>())
	,static_group_group_addresses(std::make_unique<Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses>())
{
    maximum_groups_per_interface_oor->parent = this;
    children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();

    static_group_group_addresses->parent = this;
    children["static-group-group-addresses"] = static_group_group_addresses.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Mld::DefaultContext::Interfaces::Interface::~Interface()
{
}

bool Mld::DefaultContext::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| access_group.is_set
	|| query_interval.is_set
	|| query_max_response_time.is_set
	|| query_timeout.is_set
	|| router_enable.is_set
	|| version.is_set
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data())
	|| (join_groups !=  nullptr && join_groups->has_data())
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_data())
	|| (static_group_group_addresses !=  nullptr && static_group_group_addresses->has_data());
}

bool Mld::DefaultContext::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(access_group.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_max_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(router_enable.operation)
	|| is_set(version.operation)
	|| (explicit_tracking !=  nullptr && is_set(explicit_tracking->operation))
	|| (join_groups !=  nullptr && is_set(join_groups->operation))
	|| (maximum_groups_per_interface_oor !=  nullptr && is_set(maximum_groups_per_interface_oor->operation))
	|| (static_group_group_addresses !=  nullptr && is_set(static_group_group_addresses->operation));
}

std::string Mld::DefaultContext::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/interfaces/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (access_group.is_set || is_set(access_group.operation)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_max_response_time.is_set || is_set(query_max_response_time.operation)) leaf_name_data.push_back(query_max_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (router_enable.is_set || is_set(router_enable.operation)) leaf_name_data.push_back(router_enable.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking != nullptr)
        {
            children["explicit-tracking"] = explicit_tracking.get();
        }
        else
        {
            explicit_tracking = std::make_unique<Mld::DefaultContext::Interfaces::Interface::ExplicitTracking>();
            explicit_tracking->parent = this;
            children["explicit-tracking"] = explicit_tracking.get();
        }
        return children.at("explicit-tracking");
    }

    if(child_yang_name == "join-groups")
    {
        if(join_groups != nullptr)
        {
            children["join-groups"] = join_groups.get();
        }
        else
        {
            join_groups = std::make_unique<Mld::DefaultContext::Interfaces::Interface::JoinGroups>();
            join_groups->parent = this;
            children["join-groups"] = join_groups.get();
        }
        return children.at("join-groups");
    }

    if(child_yang_name == "maximum-groups-per-interface-oor")
    {
        if(maximum_groups_per_interface_oor != nullptr)
        {
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
        else
        {
            maximum_groups_per_interface_oor = std::make_unique<Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor>();
            maximum_groups_per_interface_oor->parent = this;
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
        return children.at("maximum-groups-per-interface-oor");
    }

    if(child_yang_name == "static-group-group-addresses")
    {
        if(static_group_group_addresses != nullptr)
        {
            children["static-group-group-addresses"] = static_group_group_addresses.get();
        }
        else
        {
            static_group_group_addresses = std::make_unique<Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses>();
            static_group_group_addresses->parent = this;
            children["static-group-group-addresses"] = static_group_group_addresses.get();
        }
        return children.at("static-group-group-addresses");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::Interfaces::Interface::get_children()
{
    if(children.find("explicit-tracking") == children.end())
    {
        if(explicit_tracking != nullptr)
        {
            children["explicit-tracking"] = explicit_tracking.get();
        }
    }

    if(children.find("join-groups") == children.end())
    {
        if(join_groups != nullptr)
        {
            children["join-groups"] = join_groups.get();
        }
    }

    if(children.find("maximum-groups-per-interface-oor") == children.end())
    {
        if(maximum_groups_per_interface_oor != nullptr)
        {
            children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor.get();
        }
    }

    if(children.find("static-group-group-addresses") == children.end())
    {
        if(static_group_group_addresses != nullptr)
        {
            children["static-group-group-addresses"] = static_group_group_addresses.get();
        }
    }

    return children;
}

void Mld::DefaultContext::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "access-group")
    {
        access_group = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "router-enable")
    {
        router_enable = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Mld::DefaultContext::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "default-context";
}

Mld::DefaultContext::Interfaces::~Interfaces()
{
}

bool Mld::DefaultContext::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::DefaultContext::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::DefaultContext::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Mld::DefaultContext::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::Interfaces::get_children()
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

void Mld::DefaultContext::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Mld::DefaultContext::DefaultContext()
    :
    	robustness{YType::uint32, "robustness"},
	 ssmdns_query_group{YType::empty, "ssmdns-query-group"}
    	,
    accounting(std::make_unique<Mld::DefaultContext::Accounting>())
	,inheritable_defaults(std::make_unique<Mld::DefaultContext::InheritableDefaults>())
	,interfaces(std::make_unique<Mld::DefaultContext::Interfaces>())
	,maximum(std::make_unique<Mld::DefaultContext::Maximum>())
	,nsf(std::make_unique<Mld::DefaultContext::Nsf>())
	,ssm_access_groups(std::make_unique<Mld::DefaultContext::SsmAccessGroups>())
	,traffic(std::make_unique<Mld::DefaultContext::Traffic>())
	,unicast_qos_adjust(std::make_unique<Mld::DefaultContext::UnicastQosAdjust>())
{
    accounting->parent = this;
    children["accounting"] = accounting.get();

    inheritable_defaults->parent = this;
    children["inheritable-defaults"] = inheritable_defaults.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    maximum->parent = this;
    children["maximum"] = maximum.get();

    nsf->parent = this;
    children["nsf"] = nsf.get();

    ssm_access_groups->parent = this;
    children["ssm-access-groups"] = ssm_access_groups.get();

    traffic->parent = this;
    children["traffic"] = traffic.get();

    unicast_qos_adjust->parent = this;
    children["unicast-qos-adjust"] = unicast_qos_adjust.get();

    yang_name = "default-context"; yang_parent_name = "mld";
}

Mld::DefaultContext::~DefaultContext()
{
}

bool Mld::DefaultContext::has_data() const
{
    return robustness.is_set
	|| ssmdns_query_group.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (ssm_access_groups !=  nullptr && ssm_access_groups->has_data())
	|| (traffic !=  nullptr && traffic->has_data())
	|| (unicast_qos_adjust !=  nullptr && unicast_qos_adjust->has_data());
}

bool Mld::DefaultContext::has_operation() const
{
    return is_set(operation)
	|| is_set(robustness.operation)
	|| is_set(ssmdns_query_group.operation)
	|| (accounting !=  nullptr && is_set(accounting->operation))
	|| (inheritable_defaults !=  nullptr && is_set(inheritable_defaults->operation))
	|| (interfaces !=  nullptr && is_set(interfaces->operation))
	|| (maximum !=  nullptr && is_set(maximum->operation))
	|| (nsf !=  nullptr && is_set(nsf->operation))
	|| (ssm_access_groups !=  nullptr && is_set(ssm_access_groups->operation))
	|| (traffic !=  nullptr && is_set(traffic->operation))
	|| (unicast_qos_adjust !=  nullptr && is_set(unicast_qos_adjust->operation));
}

std::string Mld::DefaultContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-context";

    return path_buffer.str();

}

EntityPath Mld::DefaultContext::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (ssmdns_query_group.is_set || is_set(ssmdns_query_group.operation)) leaf_name_data.push_back(ssmdns_query_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Mld::DefaultContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accounting")
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting.get();
        }
        else
        {
            accounting = std::make_unique<Mld::DefaultContext::Accounting>();
            accounting->parent = this;
            children["accounting"] = accounting.get();
        }
        return children.at("accounting");
    }

    if(child_yang_name == "inheritable-defaults")
    {
        if(inheritable_defaults != nullptr)
        {
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
        else
        {
            inheritable_defaults = std::make_unique<Mld::DefaultContext::InheritableDefaults>();
            inheritable_defaults->parent = this;
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
        return children.at("inheritable-defaults");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<Mld::DefaultContext::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "maximum")
    {
        if(maximum != nullptr)
        {
            children["maximum"] = maximum.get();
        }
        else
        {
            maximum = std::make_unique<Mld::DefaultContext::Maximum>();
            maximum->parent = this;
            children["maximum"] = maximum.get();
        }
        return children.at("maximum");
    }

    if(child_yang_name == "nsf")
    {
        if(nsf != nullptr)
        {
            children["nsf"] = nsf.get();
        }
        else
        {
            nsf = std::make_unique<Mld::DefaultContext::Nsf>();
            nsf->parent = this;
            children["nsf"] = nsf.get();
        }
        return children.at("nsf");
    }

    if(child_yang_name == "ssm-access-groups")
    {
        if(ssm_access_groups != nullptr)
        {
            children["ssm-access-groups"] = ssm_access_groups.get();
        }
        else
        {
            ssm_access_groups = std::make_unique<Mld::DefaultContext::SsmAccessGroups>();
            ssm_access_groups->parent = this;
            children["ssm-access-groups"] = ssm_access_groups.get();
        }
        return children.at("ssm-access-groups");
    }

    if(child_yang_name == "traffic")
    {
        if(traffic != nullptr)
        {
            children["traffic"] = traffic.get();
        }
        else
        {
            traffic = std::make_unique<Mld::DefaultContext::Traffic>();
            traffic->parent = this;
            children["traffic"] = traffic.get();
        }
        return children.at("traffic");
    }

    if(child_yang_name == "unicast-qos-adjust")
    {
        if(unicast_qos_adjust != nullptr)
        {
            children["unicast-qos-adjust"] = unicast_qos_adjust.get();
        }
        else
        {
            unicast_qos_adjust = std::make_unique<Mld::DefaultContext::UnicastQosAdjust>();
            unicast_qos_adjust->parent = this;
            children["unicast-qos-adjust"] = unicast_qos_adjust.get();
        }
        return children.at("unicast-qos-adjust");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::DefaultContext::get_children()
{
    if(children.find("accounting") == children.end())
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting.get();
        }
    }

    if(children.find("inheritable-defaults") == children.end())
    {
        if(inheritable_defaults != nullptr)
        {
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("maximum") == children.end())
    {
        if(maximum != nullptr)
        {
            children["maximum"] = maximum.get();
        }
    }

    if(children.find("nsf") == children.end())
    {
        if(nsf != nullptr)
        {
            children["nsf"] = nsf.get();
        }
    }

    if(children.find("ssm-access-groups") == children.end())
    {
        if(ssm_access_groups != nullptr)
        {
            children["ssm-access-groups"] = ssm_access_groups.get();
        }
    }

    if(children.find("traffic") == children.end())
    {
        if(traffic != nullptr)
        {
            children["traffic"] = traffic.get();
        }
    }

    if(children.find("unicast-qos-adjust") == children.end())
    {
        if(unicast_qos_adjust != nullptr)
        {
            children["unicast-qos-adjust"] = unicast_qos_adjust.get();
        }
    }

    return children;
}

void Mld::DefaultContext::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "ssmdns-query-group")
    {
        ssmdns_query_group = value;
    }
}

Mld::Mld()
    :
    default_context(nullptr) // presence node
	,vrfs(std::make_unique<Mld::Vrfs>())
{
    vrfs->parent = this;
    children["vrfs"] = vrfs.get();

    yang_name = "mld"; yang_parent_name = "Cisco-IOS-XR-ipv4-igmp-cfg";
}

Mld::~Mld()
{
}

bool Mld::has_data() const
{
    return (default_context !=  nullptr && default_context->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Mld::has_operation() const
{
    return is_set(operation)
	|| (default_context !=  nullptr && is_set(default_context->operation))
	|| (vrfs !=  nullptr && is_set(vrfs->operation));
}

std::string Mld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld";

    return path_buffer.str();

}

EntityPath Mld::get_entity_path(Entity* ancestor) const
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

Entity* Mld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-context")
    {
        if(default_context != nullptr)
        {
            children["default-context"] = default_context.get();
        }
        else
        {
            default_context = std::make_unique<Mld::DefaultContext>();
            default_context->parent = this;
            children["default-context"] = default_context.get();
        }
        return children.at("default-context");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
        else
        {
            vrfs = std::make_unique<Mld::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs.get();
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Mld::get_children()
{
    if(children.find("default-context") == children.end())
    {
        if(default_context != nullptr)
        {
            children["default-context"] = default_context.get();
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

void Mld::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Mld::clone_ptr()
{
    return std::make_unique<Mld>();
}

const Enum::Value IgmpFilterEnum::include {0, "include"};
const Enum::Value IgmpFilterEnum::exclude {1, "exclude"};


}
}

