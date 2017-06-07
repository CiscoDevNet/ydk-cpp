
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_igmp_oper_2.hpp"
#include "Cisco_IOS_XR_ipv4_igmp_oper_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_igmp_oper {

Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::LastReporter()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "last-reporter"; yang_parent_name = "group-info";
}

Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::~LastReporter()
{
}

bool Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reporter";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/detail-groups/detail-group/group-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "group-info";
}

Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::~SourceAddress()
{
}

bool Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/detail-groups/detail-group/group-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::Source()
    :
    expiration_time{YType::int32, "expiration-time"},
    flags{YType::int32, "flags"},
    is_added{YType::boolean, "is-added"},
    is_forward{YType::boolean, "is-forward"},
    is_local{YType::boolean, "is-local"},
    is_remote{YType::boolean, "is-remote"},
    is_we_report{YType::boolean, "is-we-report"},
    uptime{YType::uint64, "uptime"}
    	,
    source_address(std::make_shared<Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress>())
{
    source_address->parent = this;

    yang_name = "source"; yang_parent_name = "detail-group";
}

Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::~Source()
{
}

bool Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::has_data() const
{
    return expiration_time.is_set
	|| flags.is_set
	|| is_added.is_set
	|| is_forward.is_set
	|| is_local.is_set
	|| is_remote.is_set
	|| is_we_report.is_set
	|| uptime.is_set
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(flags.operation)
	|| is_set(is_added.operation)
	|| is_set(is_forward.operation)
	|| is_set(is_local.operation)
	|| is_set(is_remote.operation)
	|| is_set(is_we_report.operation)
	|| is_set(uptime.operation)
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/detail-groups/detail-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.operation)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_forward.is_set || is_set(is_forward.operation)) leaf_name_data.push_back(is_forward.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.operation)) leaf_name_data.push_back(is_local.get_name_leafdata());
    if (is_remote.is_set || is_set(is_remote.operation)) leaf_name_data.push_back(is_remote.get_name_leafdata());
    if (is_we_report.is_set || is_set(is_we_report.operation)) leaf_name_data.push_back(is_we_report.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "is-added")
    {
        is_added = value;
    }
    if(value_path == "is-forward")
    {
        is_forward = value;
    }
    if(value_path == "is-local")
    {
        is_local = value;
    }
    if(value_path == "is-remote")
    {
        is_remote = value;
    }
    if(value_path == "is-we-report")
    {
        is_we_report = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "source";
}

Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::~SourceAddress()
{
}

bool Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/detail-groups/detail-group/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups()
{
    yang_name = "non-active-groups"; yang_parent_name = "default-context";
}

Mld::Active::DefaultContext::NonActiveGroups::~NonActiveGroups()
{
}

bool Mld::Active::DefaultContext::NonActiveGroups::has_data() const
{
    for (std::size_t index=0; index<non_active_groups.size(); index++)
    {
        if(non_active_groups[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::DefaultContext::NonActiveGroups::has_operation() const
{
    for (std::size_t index=0; index<non_active_groups.size(); index++)
    {
        if(non_active_groups[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::DefaultContext::NonActiveGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-active-groups";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::NonActiveGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::NonActiveGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-active-groups")
    {
        for(auto const & c : non_active_groups)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_>();
        c->parent = this;
        non_active_groups.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::NonActiveGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : non_active_groups)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::DefaultContext::NonActiveGroups::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::NonActiveGroups_()
    :
    interface{YType::str, "interface"},
    reason_for_non_activity{YType::str, "reason-for-non-activity"}
    	,
    group_address(std::make_shared<Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress>())
	,source_address(std::make_shared<Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress>())
{
    group_address->parent = this;

    source_address->parent = this;

    yang_name = "non-active-groups"; yang_parent_name = "non-active-groups";
}

Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::~NonActiveGroups_()
{
}

bool Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::has_data() const
{
    return interface.is_set
	|| reason_for_non_activity.is_set
	|| (group_address !=  nullptr && group_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(reason_for_non_activity.operation)
	|| (group_address !=  nullptr && group_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-active-groups";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/non-active-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (reason_for_non_activity.is_set || is_set(reason_for_non_activity.operation)) leaf_name_data.push_back(reason_for_non_activity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address")
    {
        if(group_address == nullptr)
        {
            group_address = std::make_shared<Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress>();
        }
        return group_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address != nullptr)
    {
        children["group-address"] = group_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "reason-for-non-activity")
    {
        reason_for_non_activity = value;
    }
}

Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address"; yang_parent_name = "non-active-groups";
}

Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::~GroupAddress()
{
}

bool Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/non-active-groups/non-active-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "non-active-groups";
}

Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::~SourceAddress()
{
}

bool Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/non-active-groups/non-active-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::SsmMaps::SsmMaps()
{
    yang_name = "ssm-maps"; yang_parent_name = "default-context";
}

Mld::Active::DefaultContext::SsmMaps::~SsmMaps()
{
}

bool Mld::Active::DefaultContext::SsmMaps::has_data() const
{
    for (std::size_t index=0; index<ssm_map.size(); index++)
    {
        if(ssm_map[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::DefaultContext::SsmMaps::has_operation() const
{
    for (std::size_t index=0; index<ssm_map.size(); index++)
    {
        if(ssm_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::DefaultContext::SsmMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-maps";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::SsmMaps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::SsmMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssm-map")
    {
        for(auto const & c : ssm_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::DefaultContext::SsmMaps::SsmMap>();
        c->parent = this;
        ssm_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::SsmMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ssm_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::DefaultContext::SsmMaps::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::DefaultContext::SsmMaps::SsmMap::SsmMap()
    :
    group_address{YType::str, "group-address"},
    map_type{YType::uint32, "map-type"},
    source_counts{YType::uint32, "source-counts"},
    ssm_map_type{YType::enumeration, "ssm-map-type"}
    	,
    group_address_xr(std::make_shared<Mld::Active::DefaultContext::SsmMaps::SsmMap::GroupAddressXr>())
{
    group_address_xr->parent = this;

    yang_name = "ssm-map"; yang_parent_name = "ssm-maps";
}

Mld::Active::DefaultContext::SsmMaps::SsmMap::~SsmMap()
{
}

bool Mld::Active::DefaultContext::SsmMaps::SsmMap::has_data() const
{
    return group_address.is_set
	|| map_type.is_set
	|| source_counts.is_set
	|| ssm_map_type.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data());
}

bool Mld::Active::DefaultContext::SsmMaps::SsmMap::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(map_type.operation)
	|| is_set(source_counts.operation)
	|| is_set(ssm_map_type.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Mld::Active::DefaultContext::SsmMaps::SsmMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::SsmMaps::SsmMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/ssm-maps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (map_type.is_set || is_set(map_type.operation)) leaf_name_data.push_back(map_type.get_name_leafdata());
    if (source_counts.is_set || is_set(source_counts.operation)) leaf_name_data.push_back(source_counts.get_name_leafdata());
    if (ssm_map_type.is_set || is_set(ssm_map_type.operation)) leaf_name_data.push_back(ssm_map_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::SsmMaps::SsmMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Mld::Active::DefaultContext::SsmMaps::SsmMap::GroupAddressXr>();
        }
        return group_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::SsmMaps::SsmMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    return children;
}

void Mld::Active::DefaultContext::SsmMaps::SsmMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "map-type")
    {
        map_type = value;
    }
    if(value_path == "source-counts")
    {
        source_counts = value;
    }
    if(value_path == "ssm-map-type")
    {
        ssm_map_type = value;
    }
}

Mld::Active::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "ssm-map";
}

Mld::Active::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::~GroupAddressXr()
{
}

bool Mld::Active::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/ssm-maps/ssm-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroups()
{
    yang_name = "explicit-groups"; yang_parent_name = "default-context";
}

Mld::Active::DefaultContext::ExplicitGroups::~ExplicitGroups()
{
}

bool Mld::Active::DefaultContext::ExplicitGroups::has_data() const
{
    for (std::size_t index=0; index<explicit_group.size(); index++)
    {
        if(explicit_group[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::DefaultContext::ExplicitGroups::has_operation() const
{
    for (std::size_t index=0; index<explicit_group.size(); index++)
    {
        if(explicit_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::DefaultContext::ExplicitGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-groups";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::ExplicitGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::ExplicitGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit-group")
    {
        for(auto const & c : explicit_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup>();
        c->parent = this;
        explicit_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::ExplicitGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : explicit_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::DefaultContext::ExplicitGroups::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::ExplicitGroup()
    :
    exclude_hosts{YType::uint32, "exclude-hosts"},
    group_address{YType::str, "group-address"},
    include_hosts{YType::uint32, "include-hosts"},
    interface_name{YType::str, "interface-name"},
    source_address{YType::str, "source-address"}
    	,
    group_info(std::make_shared<Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo>())
{
    group_info->parent = this;

    yang_name = "explicit-group"; yang_parent_name = "explicit-groups";
}

Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::~ExplicitGroup()
{
}

bool Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return exclude_hosts.is_set
	|| group_address.is_set
	|| include_hosts.is_set
	|| interface_name.is_set
	|| source_address.is_set
	|| (group_info !=  nullptr && group_info->has_data());
}

bool Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(exclude_hosts.operation)
	|| is_set(group_address.operation)
	|| is_set(include_hosts.operation)
	|| is_set(interface_name.operation)
	|| is_set(source_address.operation)
	|| (group_info !=  nullptr && group_info->has_operation());
}

std::string Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-group";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/explicit-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclude_hosts.is_set || is_set(exclude_hosts.operation)) leaf_name_data.push_back(exclude_hosts.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (include_hosts.is_set || is_set(include_hosts.operation)) leaf_name_data.push_back(include_hosts.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-info")
    {
        if(group_info == nullptr)
        {
            group_info = std::make_shared<Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo>();
        }
        return group_info;
    }

    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_info != nullptr)
    {
        children["group-info"] = group_info;
    }

    for (auto const & c : host)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exclude-hosts")
    {
        exclude_hosts = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "include-hosts")
    {
        include_hosts = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
}

Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupInfo()
    :
    expiration_time{YType::int32, "expiration-time"},
    explicit_tracking_enabled{YType::boolean, "explicit-tracking-enabled"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_added{YType::boolean, "is-added"},
    is_low_memory{YType::boolean, "is-low-memory"},
    is_self_join{YType::boolean, "is-self-join"},
    is_suppressed{YType::boolean, "is-suppressed"},
    older_host_version1_timer{YType::uint32, "older-host-version1-timer"},
    older_host_version2_timer{YType::uint32, "older-host-version2-timer"},
    router_filter_mode{YType::uint8, "router-filter-mode"},
    row_status{YType::str, "row-status"},
    uptime{YType::uint64, "uptime"}
    	,
    group_address_xr(std::make_shared<Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr>())
	,last_reporter(std::make_shared<Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter>())
	,source_address(std::make_shared<Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress>())
{
    group_address_xr->parent = this;

    last_reporter->parent = this;

    source_address->parent = this;

    yang_name = "group-info"; yang_parent_name = "explicit-group";
}

Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::~GroupInfo()
{
}

bool Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::has_data() const
{
    return expiration_time.is_set
	|| explicit_tracking_enabled.is_set
	|| interface_name_xr.is_set
	|| is_added.is_set
	|| is_low_memory.is_set
	|| is_self_join.is_set
	|| is_suppressed.is_set
	|| older_host_version1_timer.is_set
	|| older_host_version2_timer.is_set
	|| router_filter_mode.is_set
	|| row_status.is_set
	|| uptime.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (last_reporter !=  nullptr && last_reporter->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(explicit_tracking_enabled.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_added.operation)
	|| is_set(is_low_memory.operation)
	|| is_set(is_self_join.operation)
	|| is_set(is_suppressed.operation)
	|| is_set(older_host_version1_timer.operation)
	|| is_set(older_host_version2_timer.operation)
	|| is_set(router_filter_mode.operation)
	|| is_set(row_status.operation)
	|| is_set(uptime.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (last_reporter !=  nullptr && last_reporter->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-info";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/explicit-groups/explicit-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (explicit_tracking_enabled.is_set || is_set(explicit_tracking_enabled.operation)) leaf_name_data.push_back(explicit_tracking_enabled.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.operation)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.operation)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (is_self_join.is_set || is_set(is_self_join.operation)) leaf_name_data.push_back(is_self_join.get_name_leafdata());
    if (is_suppressed.is_set || is_set(is_suppressed.operation)) leaf_name_data.push_back(is_suppressed.get_name_leafdata());
    if (older_host_version1_timer.is_set || is_set(older_host_version1_timer.operation)) leaf_name_data.push_back(older_host_version1_timer.get_name_leafdata());
    if (older_host_version2_timer.is_set || is_set(older_host_version2_timer.operation)) leaf_name_data.push_back(older_host_version2_timer.get_name_leafdata());
    if (router_filter_mode.is_set || is_set(router_filter_mode.operation)) leaf_name_data.push_back(router_filter_mode.get_name_leafdata());
    if (row_status.is_set || is_set(row_status.operation)) leaf_name_data.push_back(row_status.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "last-reporter")
    {
        if(last_reporter == nullptr)
        {
            last_reporter = std::make_shared<Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter>();
        }
        return last_reporter;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    if(last_reporter != nullptr)
    {
        children["last-reporter"] = last_reporter;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "explicit-tracking-enabled")
    {
        explicit_tracking_enabled = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-added")
    {
        is_added = value;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
    }
    if(value_path == "is-self-join")
    {
        is_self_join = value;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed = value;
    }
    if(value_path == "older-host-version1-timer")
    {
        older_host_version1_timer = value;
    }
    if(value_path == "older-host-version2-timer")
    {
        older_host_version2_timer = value;
    }
    if(value_path == "router-filter-mode")
    {
        router_filter_mode = value;
    }
    if(value_path == "row-status")
    {
        row_status = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "group-info";
}

Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::~GroupAddressXr()
{
}

bool Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/explicit-groups/explicit-group/group-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::LastReporter()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "last-reporter"; yang_parent_name = "group-info";
}

Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::~LastReporter()
{
}

bool Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reporter";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/explicit-groups/explicit-group/group-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "group-info";
}

Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::~SourceAddress()
{
}

bool Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/explicit-groups/explicit-group/group-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Host()
    :
    expiration_time{YType::uint32, "expiration-time"},
    is_exclude{YType::boolean, "is-exclude"},
    source_count{YType::uint32, "source-count"},
    uptime{YType::uint32, "uptime"}
    	,
    address(std::make_shared<Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address>())
{
    address->parent = this;

    yang_name = "host"; yang_parent_name = "explicit-group";
}

Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::~Host()
{
}

bool Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::has_data() const
{
    for (std::size_t index=0; index<source_address.size(); index++)
    {
        if(source_address[index]->has_data())
            return true;
    }
    return expiration_time.is_set
	|| is_exclude.is_set
	|| source_count.is_set
	|| uptime.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::has_operation() const
{
    for (std::size_t index=0; index<source_address.size(); index++)
    {
        if(source_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(is_exclude.operation)
	|| is_set(source_count.operation)
	|| is_set(uptime.operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/explicit-groups/explicit-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (is_exclude.is_set || is_set(is_exclude.operation)) leaf_name_data.push_back(is_exclude.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address>();
        }
        return address;
    }

    if(child_yang_name == "source-address")
    {
        for(auto const & c : source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress>();
        c->parent = this;
        source_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    for (auto const & c : source_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "is-exclude")
    {
        is_exclude = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "host";
}

Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::~Address()
{
}

bool Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/explicit-groups/explicit-group/host/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "host";
}

Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::~SourceAddress()
{
}

bool Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/explicit-groups/explicit-group/host/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::InterfaceTable::InterfaceTable()
{
    yang_name = "interface-table"; yang_parent_name = "default-context";
}

Mld::Active::DefaultContext::InterfaceTable::~InterfaceTable()
{
}

bool Mld::Active::DefaultContext::InterfaceTable::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::DefaultContext::InterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::DefaultContext::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Active::DefaultContext::InterfaceTable::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::DefaultContext::InterfaceTable::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::DefaultContext::InterfaceTable::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Mld::Active::DefaultContext::InterfaceTable::Interface::Address>())
	,querier_address(std::make_shared<Mld::Active::DefaultContext::InterfaceTable::Interface::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Active::DefaultContext::InterfaceTable::Interface::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "interface"; yang_parent_name = "interface-table";
}

Mld::Active::DefaultContext::InterfaceTable::Interface::~Interface()
{
}

bool Mld::Active::DefaultContext::InterfaceTable::Interface::has_data() const
{
    return interface_name.is_set
	|| configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Mld::Active::DefaultContext::InterfaceTable::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Mld::Active::DefaultContext::InterfaceTable::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceTable::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/interface-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceTable::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Active::DefaultContext::InterfaceTable::Interface::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Active::DefaultContext::InterfaceTable::Interface::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Active::DefaultContext::InterfaceTable::Interface::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceTable::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(querier_address != nullptr)
    {
        children["querier-address"] = querier_address;
    }

    if(subscriber_address != nullptr)
    {
        children["subscriber-address"] = subscriber_address;
    }

    return children;
}

void Mld::Active::DefaultContext::InterfaceTable::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Mld::Active::DefaultContext::InterfaceTable::Interface::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface";
}

Mld::Active::DefaultContext::InterfaceTable::Interface::Address::~Address()
{
}

bool Mld::Active::DefaultContext::InterfaceTable::Interface::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::InterfaceTable::Interface::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::InterfaceTable::Interface::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceTable::Interface::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceTable::Interface::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceTable::Interface::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::InterfaceTable::Interface::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::InterfaceTable::Interface::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface";
}

Mld::Active::DefaultContext::InterfaceTable::Interface::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Active::DefaultContext::InterfaceTable::Interface::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::InterfaceTable::Interface::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::InterfaceTable::Interface::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceTable::Interface::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceTable::Interface::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceTable::Interface::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::InterfaceTable::Interface::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::InterfaceTable::Interface::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface";
}

Mld::Active::DefaultContext::InterfaceTable::Interface::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Active::DefaultContext::InterfaceTable::Interface::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::InterfaceTable::Interface::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::InterfaceTable::Interface::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceTable::Interface::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceTable::Interface::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceTable::Interface::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::InterfaceTable::Interface::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormats()
{
    yang_name = "interface-old-formats"; yang_parent_name = "default-context";
}

Mld::Active::DefaultContext::InterfaceOldFormats::~InterfaceOldFormats()
{
}

bool Mld::Active::DefaultContext::InterfaceOldFormats::has_data() const
{
    for (std::size_t index=0; index<interface_old_format.size(); index++)
    {
        if(interface_old_format[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::DefaultContext::InterfaceOldFormats::has_operation() const
{
    for (std::size_t index=0; index<interface_old_format.size(); index++)
    {
        if(interface_old_format[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::DefaultContext::InterfaceOldFormats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-formats";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceOldFormats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceOldFormats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-old-format")
    {
        for(auto const & c : interface_old_format)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat>();
        c->parent = this;
        interface_old_format.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceOldFormats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_old_format)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::DefaultContext::InterfaceOldFormats::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceOldFormat()
    :
    interface_name{YType::str, "interface-name"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address>())
	,querier_address(std::make_shared<Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "interface-old-format"; yang_parent_name = "interface-old-formats";
}

Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::~InterfaceOldFormat()
{
}

bool Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::has_data() const
{
    return interface_name.is_set
	|| configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-format" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/interface-old-formats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(querier_address != nullptr)
    {
        children["querier-address"] = querier_address;
    }

    if(subscriber_address != nullptr)
    {
        children["subscriber-address"] = subscriber_address;
    }

    return children;
}

void Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-old-format";
}

Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address::~Address()
{
}

bool Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-old-format";
}

Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-old-format";
}

Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormats()
{
    yang_name = "interface-state-off-old-formats"; yang_parent_name = "default-context";
}

Mld::Active::DefaultContext::InterfaceStateOffOldFormats::~InterfaceStateOffOldFormats()
{
}

bool Mld::Active::DefaultContext::InterfaceStateOffOldFormats::has_data() const
{
    for (std::size_t index=0; index<interface_state_off_old_format.size(); index++)
    {
        if(interface_state_off_old_format[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::DefaultContext::InterfaceStateOffOldFormats::has_operation() const
{
    for (std::size_t index=0; index<interface_state_off_old_format.size(); index++)
    {
        if(interface_state_off_old_format[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::DefaultContext::InterfaceStateOffOldFormats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-off-old-formats";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceStateOffOldFormats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceStateOffOldFormats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-state-off-old-format")
    {
        for(auto const & c : interface_state_off_old_format)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat>();
        c->parent = this;
        interface_state_off_old_format.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceStateOffOldFormats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_state_off_old_format)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::DefaultContext::InterfaceStateOffOldFormats::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::InterfaceStateOffOldFormat()
    :
    interface_name{YType::str, "interface-name"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address>())
	,querier_address(std::make_shared<Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "interface-state-off-old-format"; yang_parent_name = "interface-state-off-old-formats";
}

Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::~InterfaceStateOffOldFormat()
{
}

bool Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::has_data() const
{
    return interface_name.is_set
	|| configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-off-old-format" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/interface-state-off-old-formats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(querier_address != nullptr)
    {
        children["querier-address"] = querier_address;
    }

    if(subscriber_address != nullptr)
    {
        children["subscriber-address"] = subscriber_address;
    }

    return children;
}

void Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-state-off-old-format";
}

Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::~Address()
{
}

bool Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-state-off-old-format";
}

Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-state-off-old-format";
}

Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjusts()
{
    yang_name = "interface-unicast-qos-adjusts"; yang_parent_name = "default-context";
}

Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::~InterfaceUnicastQosAdjusts()
{
}

bool Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::has_data() const
{
    for (std::size_t index=0; index<interface_unicast_qos_adjust.size(); index++)
    {
        if(interface_unicast_qos_adjust[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::has_operation() const
{
    for (std::size_t index=0; index<interface_unicast_qos_adjust.size(); index++)
    {
        if(interface_unicast_qos_adjust[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-unicast-qos-adjusts";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-unicast-qos-adjust")
    {
        for(auto const & c : interface_unicast_qos_adjust)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust>();
        c->parent = this;
        interface_unicast_qos_adjust.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_unicast_qos_adjust)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::InterfaceUnicastQosAdjust()
    :
    interface_name{YType::str, "interface-name"},
    is_virtual_access{YType::boolean, "is-virtual-access"},
    rate{YType::uint32, "rate"},
    rate_decrements{YType::uint32, "rate-decrements"},
    rate_increments{YType::uint32, "rate-increments"}
{
    yang_name = "interface-unicast-qos-adjust"; yang_parent_name = "interface-unicast-qos-adjusts";
}

Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::~InterfaceUnicastQosAdjust()
{
}

bool Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::has_data() const
{
    for (std::size_t index=0; index<update.size(); index++)
    {
        if(update[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| is_virtual_access.is_set
	|| rate.is_set
	|| rate_decrements.is_set
	|| rate_increments.is_set;
}

bool Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::has_operation() const
{
    for (std::size_t index=0; index<update.size(); index++)
    {
        if(update[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_virtual_access.operation)
	|| is_set(rate.operation)
	|| is_set(rate_decrements.operation)
	|| is_set(rate_increments.operation);
}

std::string Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-unicast-qos-adjust" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/interface-unicast-qos-adjusts/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_virtual_access.is_set || is_set(is_virtual_access.operation)) leaf_name_data.push_back(is_virtual_access.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (rate_decrements.is_set || is_set(rate_decrements.operation)) leaf_name_data.push_back(rate_decrements.get_name_leafdata());
    if (rate_increments.is_set || is_set(rate_increments.operation)) leaf_name_data.push_back(rate_increments.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update")
    {
        for(auto const & c : update)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update>();
        c->parent = this;
        update.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : update)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-virtual-access")
    {
        is_virtual_access = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
    if(value_path == "rate-decrements")
    {
        rate_decrements = value;
    }
    if(value_path == "rate-increments")
    {
        rate_increments = value;
    }
}

Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::Update()
    :
    is_add{YType::boolean, "is-add"},
    received_time{YType::uint64, "received-time"},
    weight{YType::uint32, "weight"}
    	,
    group_address(std::make_shared<Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress>())
	,source_address(std::make_shared<Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress>())
{
    group_address->parent = this;

    source_address->parent = this;

    yang_name = "update"; yang_parent_name = "interface-unicast-qos-adjust";
}

Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::~Update()
{
}

bool Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::has_data() const
{
    return is_add.is_set
	|| received_time.is_set
	|| weight.is_set
	|| (group_address !=  nullptr && group_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::has_operation() const
{
    return is_set(operation)
	|| is_set(is_add.operation)
	|| is_set(received_time.operation)
	|| is_set(weight.operation)
	|| (group_address !=  nullptr && group_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Update' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_add.is_set || is_set(is_add.operation)) leaf_name_data.push_back(is_add.get_name_leafdata());
    if (received_time.is_set || is_set(received_time.operation)) leaf_name_data.push_back(received_time.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address")
    {
        if(group_address == nullptr)
        {
            group_address = std::make_shared<Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress>();
        }
        return group_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address != nullptr)
    {
        children["group-address"] = group_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-add")
    {
        is_add = value;
    }
    if(value_path == "received-time")
    {
        received_time = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "update";
}

Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::~SourceAddress()
{
}

bool Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address"; yang_parent_name = "update";
}

Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::~GroupAddress()
{
}

bool Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::Ranges::Ranges()
{
    yang_name = "ranges"; yang_parent_name = "default-context";
}

Mld::Active::DefaultContext::Ranges::~Ranges()
{
}

bool Mld::Active::DefaultContext::Ranges::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::DefaultContext::Ranges::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::DefaultContext::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::Ranges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::DefaultContext::Ranges::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::Ranges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::DefaultContext::Ranges::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::DefaultContext::Ranges::Range::Range()
    :
    group_address{YType::str, "group-address"},
    group_mask{YType::int32, "group-mask"},
    is_stale{YType::boolean, "is-stale"},
    prefix_length{YType::uint32, "prefix-length"},
    protocol{YType::enumeration, "protocol"}
    	,
    group_address_xr(std::make_shared<Mld::Active::DefaultContext::Ranges::Range::GroupAddressXr>())
{
    group_address_xr->parent = this;

    yang_name = "range"; yang_parent_name = "ranges";
}

Mld::Active::DefaultContext::Ranges::Range::~Range()
{
}

bool Mld::Active::DefaultContext::Ranges::Range::has_data() const
{
    return group_address.is_set
	|| group_mask.is_set
	|| is_stale.is_set
	|| prefix_length.is_set
	|| protocol.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data());
}

bool Mld::Active::DefaultContext::Ranges::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(group_mask.operation)
	|| is_set(is_stale.operation)
	|| is_set(prefix_length.operation)
	|| is_set(protocol.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Mld::Active::DefaultContext::Ranges::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::Ranges::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/ranges/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_mask.is_set || is_set(group_mask.operation)) leaf_name_data.push_back(group_mask.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.operation)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::Ranges::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Mld::Active::DefaultContext::Ranges::Range::GroupAddressXr>();
        }
        return group_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::Ranges::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    return children;
}

void Mld::Active::DefaultContext::Ranges::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-mask")
    {
        group_mask = value;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Mld::Active::DefaultContext::Ranges::Range::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "range";
}

Mld::Active::DefaultContext::Ranges::Range::GroupAddressXr::~GroupAddressXr()
{
}

bool Mld::Active::DefaultContext::Ranges::Range::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::Ranges::Range::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::Ranges::Range::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::Ranges::Range::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/ranges/range/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::Ranges::Range::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::Ranges::Range::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::Ranges::Range::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterfaces()
{
    yang_name = "ifrs-interfaces"; yang_parent_name = "default-context";
}

Mld::Active::DefaultContext::IfrsInterfaces::~IfrsInterfaces()
{
}

bool Mld::Active::DefaultContext::IfrsInterfaces::has_data() const
{
    for (std::size_t index=0; index<ifrs_interface.size(); index++)
    {
        if(ifrs_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::DefaultContext::IfrsInterfaces::has_operation() const
{
    for (std::size_t index=0; index<ifrs_interface.size(); index++)
    {
        if(ifrs_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::DefaultContext::IfrsInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interfaces";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::IfrsInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::IfrsInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifrs-interface")
    {
        for(auto const & c : ifrs_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface>();
        c->parent = this;
        ifrs_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::IfrsInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ifrs_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::DefaultContext::IfrsInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IfrsInterface()
    :
    interface_name{YType::str, "interface-name"},
    join_group_count{YType::uint32, "join-group-count"}
    	,
    igmp_interface_entry(std::make_shared<Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry>())
{
    igmp_interface_entry->parent = this;

    yang_name = "ifrs-interface"; yang_parent_name = "ifrs-interfaces";
}

Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::~IfrsInterface()
{
}

bool Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::has_data() const
{
    return interface_name.is_set
	|| join_group_count.is_set
	|| (igmp_interface_entry !=  nullptr && igmp_interface_entry->has_data());
}

bool Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(join_group_count.operation)
	|| (igmp_interface_entry !=  nullptr && igmp_interface_entry->has_operation());
}

std::string Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/ifrs-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (join_group_count.is_set || is_set(join_group_count.operation)) leaf_name_data.push_back(join_group_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igmp-interface-entry")
    {
        if(igmp_interface_entry == nullptr)
        {
            igmp_interface_entry = std::make_shared<Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry>();
        }
        return igmp_interface_entry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igmp_interface_entry != nullptr)
    {
        children["igmp-interface-entry"] = igmp_interface_entry;
    }

    return children;
}

void Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "join-group-count")
    {
        join_group_count = value;
    }
}

Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::IgmpInterfaceEntry()
    :
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address>())
	,querier_address(std::make_shared<Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "igmp-interface-entry"; yang_parent_name = "ifrs-interface";
}

Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::~IgmpInterfaceEntry()
{
}

bool Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::has_data() const
{
    return configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp-interface-entry";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgmpInterfaceEntry' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(querier_address != nullptr)
    {
        children["querier-address"] = querier_address;
    }

    if(subscriber_address != nullptr)
    {
        children["subscriber-address"] = subscriber_address;
    }

    return children;
}

void Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "igmp-interface-entry";
}

Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::~Address()
{
}

bool Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "igmp-interface-entry";
}

Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "igmp-interface-entry";
}

Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::TrafficCounters::TrafficCounters()
    :
    auxillary_data_length_errors{YType::uint32, "auxillary-data-length-errors"},
    bad_scope_errors{YType::uint32, "bad-scope-errors"},
    checksum_errors{YType::uint32, "checksum-errors"},
    elapsed_time{YType::uint32, "elapsed-time"},
    format_errors{YType::uint32, "format-errors"},
    get_packet_failure{YType::uint32, "get-packet-failure"},
    input_disabled_idb{YType::uint32, "input-disabled-idb"},
    input_dvmrp{YType::uint32, "input-dvmrp"},
    input_leaves{YType::uint32, "input-leaves"},
    input_martian_address{YType::uint32, "input-martian-address"},
    input_mtrace{YType::uint32, "input-mtrace"},
    input_no_assigned_vrf_id{YType::uint32, "input-no-assigned-vrf-id"},
    input_no_idb{YType::uint32, "input-no-idb"},
    input_no_platform_support_mtrace{YType::uint32, "input-no-platform-support-mtrace"},
    input_no_vrf_in_idb{YType::uint32, "input-no-vrf-in-idb"},
    input_no_vrf_mtrace{YType::uint32, "input-no-vrf-mtrace"},
    input_pim{YType::uint32, "input-pim"},
    input_queries{YType::uint32, "input-queries"},
    input_reports{YType::uint32, "input-reports"},
    invalid_source_address_errors{YType::uint32, "invalid-source-address-errors"},
    miscellaneous_errors{YType::uint32, "miscellaneous-errors"},
    no_socket_connection{YType::uint32, "no-socket-connection"},
    output_dvmrp{YType::uint32, "output-dvmrp"},
    output_leaves{YType::uint32, "output-leaves"},
    output_mtrace{YType::uint32, "output-mtrace"},
    output_no_parent_interface_handle{YType::uint32, "output-no-parent-interface-handle"},
    output_pim{YType::uint32, "output-pim"},
    output_queries{YType::uint32, "output-queries"},
    output_reports{YType::uint32, "output-reports"},
    packet_manager_input_errors{YType::uint32, "packet-manager-input-errors"},
    packet_manager_output_errors{YType::uint32, "packet-manager-output-errors"},
    packets_in{YType::uint32, "packets-in"},
    packets_out{YType::uint32, "packets-out"},
    receive_socket_errors{YType::uint32, "receive-socket-errors"},
    socket_errors{YType::uint32, "socket-errors"}
{
    yang_name = "traffic-counters"; yang_parent_name = "default-context";
}

Mld::Active::DefaultContext::TrafficCounters::~TrafficCounters()
{
}

bool Mld::Active::DefaultContext::TrafficCounters::has_data() const
{
    return auxillary_data_length_errors.is_set
	|| bad_scope_errors.is_set
	|| checksum_errors.is_set
	|| elapsed_time.is_set
	|| format_errors.is_set
	|| get_packet_failure.is_set
	|| input_disabled_idb.is_set
	|| input_dvmrp.is_set
	|| input_leaves.is_set
	|| input_martian_address.is_set
	|| input_mtrace.is_set
	|| input_no_assigned_vrf_id.is_set
	|| input_no_idb.is_set
	|| input_no_platform_support_mtrace.is_set
	|| input_no_vrf_in_idb.is_set
	|| input_no_vrf_mtrace.is_set
	|| input_pim.is_set
	|| input_queries.is_set
	|| input_reports.is_set
	|| invalid_source_address_errors.is_set
	|| miscellaneous_errors.is_set
	|| no_socket_connection.is_set
	|| output_dvmrp.is_set
	|| output_leaves.is_set
	|| output_mtrace.is_set
	|| output_no_parent_interface_handle.is_set
	|| output_pim.is_set
	|| output_queries.is_set
	|| output_reports.is_set
	|| packet_manager_input_errors.is_set
	|| packet_manager_output_errors.is_set
	|| packets_in.is_set
	|| packets_out.is_set
	|| receive_socket_errors.is_set
	|| socket_errors.is_set;
}

bool Mld::Active::DefaultContext::TrafficCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(auxillary_data_length_errors.operation)
	|| is_set(bad_scope_errors.operation)
	|| is_set(checksum_errors.operation)
	|| is_set(elapsed_time.operation)
	|| is_set(format_errors.operation)
	|| is_set(get_packet_failure.operation)
	|| is_set(input_disabled_idb.operation)
	|| is_set(input_dvmrp.operation)
	|| is_set(input_leaves.operation)
	|| is_set(input_martian_address.operation)
	|| is_set(input_mtrace.operation)
	|| is_set(input_no_assigned_vrf_id.operation)
	|| is_set(input_no_idb.operation)
	|| is_set(input_no_platform_support_mtrace.operation)
	|| is_set(input_no_vrf_in_idb.operation)
	|| is_set(input_no_vrf_mtrace.operation)
	|| is_set(input_pim.operation)
	|| is_set(input_queries.operation)
	|| is_set(input_reports.operation)
	|| is_set(invalid_source_address_errors.operation)
	|| is_set(miscellaneous_errors.operation)
	|| is_set(no_socket_connection.operation)
	|| is_set(output_dvmrp.operation)
	|| is_set(output_leaves.operation)
	|| is_set(output_mtrace.operation)
	|| is_set(output_no_parent_interface_handle.operation)
	|| is_set(output_pim.operation)
	|| is_set(output_queries.operation)
	|| is_set(output_reports.operation)
	|| is_set(packet_manager_input_errors.operation)
	|| is_set(packet_manager_output_errors.operation)
	|| is_set(packets_in.operation)
	|| is_set(packets_out.operation)
	|| is_set(receive_socket_errors.operation)
	|| is_set(socket_errors.operation);
}

std::string Mld::Active::DefaultContext::TrafficCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-counters";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::TrafficCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auxillary_data_length_errors.is_set || is_set(auxillary_data_length_errors.operation)) leaf_name_data.push_back(auxillary_data_length_errors.get_name_leafdata());
    if (bad_scope_errors.is_set || is_set(bad_scope_errors.operation)) leaf_name_data.push_back(bad_scope_errors.get_name_leafdata());
    if (checksum_errors.is_set || is_set(checksum_errors.operation)) leaf_name_data.push_back(checksum_errors.get_name_leafdata());
    if (elapsed_time.is_set || is_set(elapsed_time.operation)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (format_errors.is_set || is_set(format_errors.operation)) leaf_name_data.push_back(format_errors.get_name_leafdata());
    if (get_packet_failure.is_set || is_set(get_packet_failure.operation)) leaf_name_data.push_back(get_packet_failure.get_name_leafdata());
    if (input_disabled_idb.is_set || is_set(input_disabled_idb.operation)) leaf_name_data.push_back(input_disabled_idb.get_name_leafdata());
    if (input_dvmrp.is_set || is_set(input_dvmrp.operation)) leaf_name_data.push_back(input_dvmrp.get_name_leafdata());
    if (input_leaves.is_set || is_set(input_leaves.operation)) leaf_name_data.push_back(input_leaves.get_name_leafdata());
    if (input_martian_address.is_set || is_set(input_martian_address.operation)) leaf_name_data.push_back(input_martian_address.get_name_leafdata());
    if (input_mtrace.is_set || is_set(input_mtrace.operation)) leaf_name_data.push_back(input_mtrace.get_name_leafdata());
    if (input_no_assigned_vrf_id.is_set || is_set(input_no_assigned_vrf_id.operation)) leaf_name_data.push_back(input_no_assigned_vrf_id.get_name_leafdata());
    if (input_no_idb.is_set || is_set(input_no_idb.operation)) leaf_name_data.push_back(input_no_idb.get_name_leafdata());
    if (input_no_platform_support_mtrace.is_set || is_set(input_no_platform_support_mtrace.operation)) leaf_name_data.push_back(input_no_platform_support_mtrace.get_name_leafdata());
    if (input_no_vrf_in_idb.is_set || is_set(input_no_vrf_in_idb.operation)) leaf_name_data.push_back(input_no_vrf_in_idb.get_name_leafdata());
    if (input_no_vrf_mtrace.is_set || is_set(input_no_vrf_mtrace.operation)) leaf_name_data.push_back(input_no_vrf_mtrace.get_name_leafdata());
    if (input_pim.is_set || is_set(input_pim.operation)) leaf_name_data.push_back(input_pim.get_name_leafdata());
    if (input_queries.is_set || is_set(input_queries.operation)) leaf_name_data.push_back(input_queries.get_name_leafdata());
    if (input_reports.is_set || is_set(input_reports.operation)) leaf_name_data.push_back(input_reports.get_name_leafdata());
    if (invalid_source_address_errors.is_set || is_set(invalid_source_address_errors.operation)) leaf_name_data.push_back(invalid_source_address_errors.get_name_leafdata());
    if (miscellaneous_errors.is_set || is_set(miscellaneous_errors.operation)) leaf_name_data.push_back(miscellaneous_errors.get_name_leafdata());
    if (no_socket_connection.is_set || is_set(no_socket_connection.operation)) leaf_name_data.push_back(no_socket_connection.get_name_leafdata());
    if (output_dvmrp.is_set || is_set(output_dvmrp.operation)) leaf_name_data.push_back(output_dvmrp.get_name_leafdata());
    if (output_leaves.is_set || is_set(output_leaves.operation)) leaf_name_data.push_back(output_leaves.get_name_leafdata());
    if (output_mtrace.is_set || is_set(output_mtrace.operation)) leaf_name_data.push_back(output_mtrace.get_name_leafdata());
    if (output_no_parent_interface_handle.is_set || is_set(output_no_parent_interface_handle.operation)) leaf_name_data.push_back(output_no_parent_interface_handle.get_name_leafdata());
    if (output_pim.is_set || is_set(output_pim.operation)) leaf_name_data.push_back(output_pim.get_name_leafdata());
    if (output_queries.is_set || is_set(output_queries.operation)) leaf_name_data.push_back(output_queries.get_name_leafdata());
    if (output_reports.is_set || is_set(output_reports.operation)) leaf_name_data.push_back(output_reports.get_name_leafdata());
    if (packet_manager_input_errors.is_set || is_set(packet_manager_input_errors.operation)) leaf_name_data.push_back(packet_manager_input_errors.get_name_leafdata());
    if (packet_manager_output_errors.is_set || is_set(packet_manager_output_errors.operation)) leaf_name_data.push_back(packet_manager_output_errors.get_name_leafdata());
    if (packets_in.is_set || is_set(packets_in.operation)) leaf_name_data.push_back(packets_in.get_name_leafdata());
    if (packets_out.is_set || is_set(packets_out.operation)) leaf_name_data.push_back(packets_out.get_name_leafdata());
    if (receive_socket_errors.is_set || is_set(receive_socket_errors.operation)) leaf_name_data.push_back(receive_socket_errors.get_name_leafdata());
    if (socket_errors.is_set || is_set(socket_errors.operation)) leaf_name_data.push_back(socket_errors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::TrafficCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::TrafficCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::TrafficCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auxillary-data-length-errors")
    {
        auxillary_data_length_errors = value;
    }
    if(value_path == "bad-scope-errors")
    {
        bad_scope_errors = value;
    }
    if(value_path == "checksum-errors")
    {
        checksum_errors = value;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
    }
    if(value_path == "format-errors")
    {
        format_errors = value;
    }
    if(value_path == "get-packet-failure")
    {
        get_packet_failure = value;
    }
    if(value_path == "input-disabled-idb")
    {
        input_disabled_idb = value;
    }
    if(value_path == "input-dvmrp")
    {
        input_dvmrp = value;
    }
    if(value_path == "input-leaves")
    {
        input_leaves = value;
    }
    if(value_path == "input-martian-address")
    {
        input_martian_address = value;
    }
    if(value_path == "input-mtrace")
    {
        input_mtrace = value;
    }
    if(value_path == "input-no-assigned-vrf-id")
    {
        input_no_assigned_vrf_id = value;
    }
    if(value_path == "input-no-idb")
    {
        input_no_idb = value;
    }
    if(value_path == "input-no-platform-support-mtrace")
    {
        input_no_platform_support_mtrace = value;
    }
    if(value_path == "input-no-vrf-in-idb")
    {
        input_no_vrf_in_idb = value;
    }
    if(value_path == "input-no-vrf-mtrace")
    {
        input_no_vrf_mtrace = value;
    }
    if(value_path == "input-pim")
    {
        input_pim = value;
    }
    if(value_path == "input-queries")
    {
        input_queries = value;
    }
    if(value_path == "input-reports")
    {
        input_reports = value;
    }
    if(value_path == "invalid-source-address-errors")
    {
        invalid_source_address_errors = value;
    }
    if(value_path == "miscellaneous-errors")
    {
        miscellaneous_errors = value;
    }
    if(value_path == "no-socket-connection")
    {
        no_socket_connection = value;
    }
    if(value_path == "output-dvmrp")
    {
        output_dvmrp = value;
    }
    if(value_path == "output-leaves")
    {
        output_leaves = value;
    }
    if(value_path == "output-mtrace")
    {
        output_mtrace = value;
    }
    if(value_path == "output-no-parent-interface-handle")
    {
        output_no_parent_interface_handle = value;
    }
    if(value_path == "output-pim")
    {
        output_pim = value;
    }
    if(value_path == "output-queries")
    {
        output_queries = value;
    }
    if(value_path == "output-reports")
    {
        output_reports = value;
    }
    if(value_path == "packet-manager-input-errors")
    {
        packet_manager_input_errors = value;
    }
    if(value_path == "packet-manager-output-errors")
    {
        packet_manager_output_errors = value;
    }
    if(value_path == "packets-in")
    {
        packets_in = value;
    }
    if(value_path == "packets-out")
    {
        packets_out = value;
    }
    if(value_path == "receive-socket-errors")
    {
        receive_socket_errors = value;
    }
    if(value_path == "socket-errors")
    {
        socket_errors = value;
    }
}

Mld::Active::DefaultContext::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "default-context";
}

Mld::Active::DefaultContext::Groups::~Groups()
{
}

bool Mld::Active::DefaultContext::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::DefaultContext::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::DefaultContext::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::DefaultContext::Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::DefaultContext::Groups::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::DefaultContext::Groups::Group::Group()
    :
    expiration_time{YType::int32, "expiration-time"},
    explicit_tracking_enabled{YType::boolean, "explicit-tracking-enabled"},
    group_address{YType::str, "group-address"},
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_added{YType::boolean, "is-added"},
    is_low_memory{YType::boolean, "is-low-memory"},
    is_self_join{YType::boolean, "is-self-join"},
    is_suppressed{YType::boolean, "is-suppressed"},
    older_host_version1_timer{YType::uint32, "older-host-version1-timer"},
    older_host_version2_timer{YType::uint32, "older-host-version2-timer"},
    router_filter_mode{YType::uint8, "router-filter-mode"},
    row_status{YType::str, "row-status"},
    uptime{YType::uint64, "uptime"}
    	,
    group_address_xr(std::make_shared<Mld::Active::DefaultContext::Groups::Group::GroupAddressXr>())
	,last_reporter(std::make_shared<Mld::Active::DefaultContext::Groups::Group::LastReporter>())
	,source_address(std::make_shared<Mld::Active::DefaultContext::Groups::Group::SourceAddress>())
{
    group_address_xr->parent = this;

    last_reporter->parent = this;

    source_address->parent = this;

    yang_name = "group"; yang_parent_name = "groups";
}

Mld::Active::DefaultContext::Groups::Group::~Group()
{
}

bool Mld::Active::DefaultContext::Groups::Group::has_data() const
{
    return expiration_time.is_set
	|| explicit_tracking_enabled.is_set
	|| group_address.is_set
	|| interface_name.is_set
	|| interface_name_xr.is_set
	|| is_added.is_set
	|| is_low_memory.is_set
	|| is_self_join.is_set
	|| is_suppressed.is_set
	|| older_host_version1_timer.is_set
	|| older_host_version2_timer.is_set
	|| router_filter_mode.is_set
	|| row_status.is_set
	|| uptime.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (last_reporter !=  nullptr && last_reporter->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Mld::Active::DefaultContext::Groups::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(explicit_tracking_enabled.operation)
	|| is_set(group_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_added.operation)
	|| is_set(is_low_memory.operation)
	|| is_set(is_self_join.operation)
	|| is_set(is_suppressed.operation)
	|| is_set(older_host_version1_timer.operation)
	|| is_set(older_host_version2_timer.operation)
	|| is_set(router_filter_mode.operation)
	|| is_set(row_status.operation)
	|| is_set(uptime.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (last_reporter !=  nullptr && last_reporter->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Mld::Active::DefaultContext::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::Groups::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (explicit_tracking_enabled.is_set || is_set(explicit_tracking_enabled.operation)) leaf_name_data.push_back(explicit_tracking_enabled.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.operation)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.operation)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (is_self_join.is_set || is_set(is_self_join.operation)) leaf_name_data.push_back(is_self_join.get_name_leafdata());
    if (is_suppressed.is_set || is_set(is_suppressed.operation)) leaf_name_data.push_back(is_suppressed.get_name_leafdata());
    if (older_host_version1_timer.is_set || is_set(older_host_version1_timer.operation)) leaf_name_data.push_back(older_host_version1_timer.get_name_leafdata());
    if (older_host_version2_timer.is_set || is_set(older_host_version2_timer.operation)) leaf_name_data.push_back(older_host_version2_timer.get_name_leafdata());
    if (router_filter_mode.is_set || is_set(router_filter_mode.operation)) leaf_name_data.push_back(router_filter_mode.get_name_leafdata());
    if (row_status.is_set || is_set(row_status.operation)) leaf_name_data.push_back(row_status.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Mld::Active::DefaultContext::Groups::Group::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "last-reporter")
    {
        if(last_reporter == nullptr)
        {
            last_reporter = std::make_shared<Mld::Active::DefaultContext::Groups::Group::LastReporter>();
        }
        return last_reporter;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Mld::Active::DefaultContext::Groups::Group::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    if(last_reporter != nullptr)
    {
        children["last-reporter"] = last_reporter;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Mld::Active::DefaultContext::Groups::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "explicit-tracking-enabled")
    {
        explicit_tracking_enabled = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-added")
    {
        is_added = value;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
    }
    if(value_path == "is-self-join")
    {
        is_self_join = value;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed = value;
    }
    if(value_path == "older-host-version1-timer")
    {
        older_host_version1_timer = value;
    }
    if(value_path == "older-host-version2-timer")
    {
        older_host_version2_timer = value;
    }
    if(value_path == "router-filter-mode")
    {
        router_filter_mode = value;
    }
    if(value_path == "row-status")
    {
        row_status = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Mld::Active::DefaultContext::Groups::Group::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "group";
}

Mld::Active::DefaultContext::Groups::Group::GroupAddressXr::~GroupAddressXr()
{
}

bool Mld::Active::DefaultContext::Groups::Group::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::Groups::Group::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::Groups::Group::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::Groups::Group::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/groups/group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::Groups::Group::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::Groups::Group::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::Groups::Group::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::Groups::Group::LastReporter::LastReporter()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "last-reporter"; yang_parent_name = "group";
}

Mld::Active::DefaultContext::Groups::Group::LastReporter::~LastReporter()
{
}

bool Mld::Active::DefaultContext::Groups::Group::LastReporter::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::Groups::Group::LastReporter::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::Groups::Group::LastReporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reporter";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::Groups::Group::LastReporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/groups/group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::Groups::Group::LastReporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::Groups::Group::LastReporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::Groups::Group::LastReporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::Groups::Group::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "group";
}

Mld::Active::DefaultContext::Groups::Group::SourceAddress::~SourceAddress()
{
}

bool Mld::Active::DefaultContext::Groups::Group::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::Groups::Group::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::Groups::Group::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::Groups::Group::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/groups/group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::Groups::Group::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::Groups::Group::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::Groups::Group::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::GroupSummary::GroupSummary()
    :
    group_count{YType::uint32, "group-count"},
    groutes{YType::uint32, "groutes"},
    is_low_memory{YType::boolean, "is-low-memory"},
    sg_routes{YType::uint32, "sg-routes"}
{
    yang_name = "group-summary"; yang_parent_name = "default-context";
}

Mld::Active::DefaultContext::GroupSummary::~GroupSummary()
{
}

bool Mld::Active::DefaultContext::GroupSummary::has_data() const
{
    return group_count.is_set
	|| groutes.is_set
	|| is_low_memory.is_set
	|| sg_routes.is_set;
}

bool Mld::Active::DefaultContext::GroupSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(group_count.operation)
	|| is_set(groutes.operation)
	|| is_set(is_low_memory.operation)
	|| is_set(sg_routes.operation);
}

std::string Mld::Active::DefaultContext::GroupSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-summary";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::GroupSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (groutes.is_set || is_set(groutes.operation)) leaf_name_data.push_back(groutes.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.operation)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (sg_routes.is_set || is_set(sg_routes.operation)) leaf_name_data.push_back(sg_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::GroupSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::GroupSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::GroupSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "groutes")
    {
        groutes = value;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
    }
    if(value_path == "sg-routes")
    {
        sg_routes = value;
    }
}

Mld::Active::DefaultContext::IfrsInterfaceSummary::IfrsInterfaceSummary()
    :
    configuration_count{YType::uint32, "configuration-count"},
    interface_count{YType::uint32, "interface-count"}
{
    yang_name = "ifrs-interface-summary"; yang_parent_name = "default-context";
}

Mld::Active::DefaultContext::IfrsInterfaceSummary::~IfrsInterfaceSummary()
{
}

bool Mld::Active::DefaultContext::IfrsInterfaceSummary::has_data() const
{
    return configuration_count.is_set
	|| interface_count.is_set;
}

bool Mld::Active::DefaultContext::IfrsInterfaceSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(configuration_count.operation)
	|| is_set(interface_count.operation);
}

std::string Mld::Active::DefaultContext::IfrsInterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface-summary";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::IfrsInterfaceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configuration_count.is_set || is_set(configuration_count.operation)) leaf_name_data.push_back(configuration_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.operation)) leaf_name_data.push_back(interface_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::IfrsInterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::IfrsInterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::IfrsInterfaceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configuration-count")
    {
        configuration_count = value;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
    }
}

Mld::Active::DefaultContext::GlobalInterfaceTable::GlobalInterfaceTable()
{
    yang_name = "global-interface-table"; yang_parent_name = "default-context";
}

Mld::Active::DefaultContext::GlobalInterfaceTable::~GlobalInterfaceTable()
{
}

bool Mld::Active::DefaultContext::GlobalInterfaceTable::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::DefaultContext::GlobalInterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::DefaultContext::GlobalInterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-interface-table";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::GlobalInterfaceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::GlobalInterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Active::DefaultContext::GlobalInterfaceTable::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::GlobalInterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::DefaultContext::GlobalInterfaceTable::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::Address>())
	,querier_address(std::make_shared<Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "interface"; yang_parent_name = "global-interface-table";
}

Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::~Interface()
{
}

bool Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::has_data() const
{
    return interface_name.is_set
	|| configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/global-interface-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(querier_address != nullptr)
    {
        children["querier-address"] = querier_address;
    }

    if(subscriber_address != nullptr)
    {
        children["subscriber-address"] = subscriber_address;
    }

    return children;
}

void Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface";
}

Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::~Address()
{
}

bool Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface";
}

Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface";
}

Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetails()
{
    yang_name = "ssm-map-details"; yang_parent_name = "default-context";
}

Mld::Active::DefaultContext::SsmMapDetails::~SsmMapDetails()
{
}

bool Mld::Active::DefaultContext::SsmMapDetails::has_data() const
{
    for (std::size_t index=0; index<ssm_map_detail.size(); index++)
    {
        if(ssm_map_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::DefaultContext::SsmMapDetails::has_operation() const
{
    for (std::size_t index=0; index<ssm_map_detail.size(); index++)
    {
        if(ssm_map_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::DefaultContext::SsmMapDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map-details";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::SsmMapDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::SsmMapDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssm-map-detail")
    {
        for(auto const & c : ssm_map_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail>();
        c->parent = this;
        ssm_map_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::SsmMapDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ssm_map_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::DefaultContext::SsmMapDetails::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::SsmMapDetail()
    :
    elapsed_time{YType::uint64, "elapsed-time"},
    expiration_time{YType::uint32, "expiration-time"},
    group_address{YType::str, "group-address"},
    query_interval{YType::uint32, "query-interval"},
    response_pending{YType::boolean, "response-pending"},
    ssm_map_type{YType::enumeration, "ssm-map-type"}
    	,
    map_info(std::make_shared<Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo>())
{
    map_info->parent = this;

    yang_name = "ssm-map-detail"; yang_parent_name = "ssm-map-details";
}

Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::~SsmMapDetail()
{
}

bool Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::has_data() const
{
    for (std::size_t index=0; index<sources.size(); index++)
    {
        if(sources[index]->has_data())
            return true;
    }
    return elapsed_time.is_set
	|| expiration_time.is_set
	|| group_address.is_set
	|| query_interval.is_set
	|| response_pending.is_set
	|| ssm_map_type.is_set
	|| (map_info !=  nullptr && map_info->has_data());
}

bool Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::has_operation() const
{
    for (std::size_t index=0; index<sources.size(); index++)
    {
        if(sources[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(elapsed_time.operation)
	|| is_set(expiration_time.operation)
	|| is_set(group_address.operation)
	|| is_set(query_interval.operation)
	|| is_set(response_pending.operation)
	|| is_set(ssm_map_type.operation)
	|| (map_info !=  nullptr && map_info->has_operation());
}

std::string Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map-detail";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/ssm-map-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (elapsed_time.is_set || is_set(elapsed_time.operation)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (response_pending.is_set || is_set(response_pending.operation)) leaf_name_data.push_back(response_pending.get_name_leafdata());
    if (ssm_map_type.is_set || is_set(ssm_map_type.operation)) leaf_name_data.push_back(ssm_map_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-info")
    {
        if(map_info == nullptr)
        {
            map_info = std::make_shared<Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo>();
        }
        return map_info;
    }

    if(child_yang_name == "sources")
    {
        for(auto const & c : sources)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources>();
        c->parent = this;
        sources.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_info != nullptr)
    {
        children["map-info"] = map_info;
    }

    for (auto const & c : sources)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
    }
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "response-pending")
    {
        response_pending = value;
    }
    if(value_path == "ssm-map-type")
    {
        ssm_map_type = value;
    }
}

Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::MapInfo()
    :
    map_type{YType::uint32, "map-type"},
    source_counts{YType::uint32, "source-counts"}
    	,
    group_address_xr(std::make_shared<Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr>())
{
    group_address_xr->parent = this;

    yang_name = "map-info"; yang_parent_name = "ssm-map-detail";
}

Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::~MapInfo()
{
}

bool Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::has_data() const
{
    return map_type.is_set
	|| source_counts.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data());
}

bool Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(map_type.operation)
	|| is_set(source_counts.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-info";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/ssm-map-details/ssm-map-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_type.is_set || is_set(map_type.operation)) leaf_name_data.push_back(map_type.get_name_leafdata());
    if (source_counts.is_set || is_set(source_counts.operation)) leaf_name_data.push_back(source_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr>();
        }
        return group_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    return children;
}

void Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-type")
    {
        map_type = value;
    }
    if(value_path == "source-counts")
    {
        source_counts = value;
    }
}

Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "map-info";
}

Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::~GroupAddressXr()
{
}

bool Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/ssm-map-details/ssm-map-detail/map-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::Sources()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "sources"; yang_parent_name = "ssm-map-detail";
}

Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::~Sources()
{
}

bool Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sources";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/ssm-map-details/ssm-map-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOffs()
{
    yang_name = "interface-state-offs"; yang_parent_name = "default-context";
}

Mld::Active::DefaultContext::InterfaceStateOffs::~InterfaceStateOffs()
{
}

bool Mld::Active::DefaultContext::InterfaceStateOffs::has_data() const
{
    for (std::size_t index=0; index<interface_state_off.size(); index++)
    {
        if(interface_state_off[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::DefaultContext::InterfaceStateOffs::has_operation() const
{
    for (std::size_t index=0; index<interface_state_off.size(); index++)
    {
        if(interface_state_off[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::DefaultContext::InterfaceStateOffs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-offs";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceStateOffs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceStateOffs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-state-off")
    {
        for(auto const & c : interface_state_off)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff>();
        c->parent = this;
        interface_state_off.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceStateOffs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_state_off)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::DefaultContext::InterfaceStateOffs::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::InterfaceStateOff()
    :
    interface_name{YType::str, "interface-name"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address>())
	,querier_address(std::make_shared<Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "interface-state-off"; yang_parent_name = "interface-state-offs";
}

Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::~InterfaceStateOff()
{
}

bool Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::has_data() const
{
    return interface_name.is_set
	|| configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-off" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/interface-state-offs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(querier_address != nullptr)
    {
        children["querier-address"] = querier_address;
    }

    if(subscriber_address != nullptr)
    {
        children["subscriber-address"] = subscriber_address;
    }

    return children;
}

void Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-state-off";
}

Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::~Address()
{
}

bool Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-state-off";
}

Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-state-off";
}

Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOns()
{
    yang_name = "interface-old-format-state-ons"; yang_parent_name = "default-context";
}

Mld::Active::DefaultContext::InterfaceOldFormatStateOns::~InterfaceOldFormatStateOns()
{
}

bool Mld::Active::DefaultContext::InterfaceOldFormatStateOns::has_data() const
{
    for (std::size_t index=0; index<interface_old_format_state_on.size(); index++)
    {
        if(interface_old_format_state_on[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::DefaultContext::InterfaceOldFormatStateOns::has_operation() const
{
    for (std::size_t index=0; index<interface_old_format_state_on.size(); index++)
    {
        if(interface_old_format_state_on[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::DefaultContext::InterfaceOldFormatStateOns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-format-state-ons";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceOldFormatStateOns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceOldFormatStateOns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-old-format-state-on")
    {
        for(auto const & c : interface_old_format_state_on)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn>();
        c->parent = this;
        interface_old_format_state_on.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceOldFormatStateOns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_old_format_state_on)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::DefaultContext::InterfaceOldFormatStateOns::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::InterfaceOldFormatStateOn()
    :
    interface_name{YType::str, "interface-name"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address>())
	,querier_address(std::make_shared<Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "interface-old-format-state-on"; yang_parent_name = "interface-old-format-state-ons";
}

Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::~InterfaceOldFormatStateOn()
{
}

bool Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::has_data() const
{
    return interface_name.is_set
	|| configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-format-state-on" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/interface-old-format-state-ons/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(querier_address != nullptr)
    {
        children["querier-address"] = querier_address;
    }

    if(subscriber_address != nullptr)
    {
        children["subscriber-address"] = subscriber_address;
    }

    return children;
}

void Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-old-format-state-on";
}

Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::~Address()
{
}

bool Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-old-format-state-on";
}

Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-old-format-state-on";
}

Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Igmp()
    :
    active(std::make_shared<Igmp::Active>())
	,standby(std::make_shared<Igmp::Standby>())
{
    active->parent = this;

    standby->parent = this;

    yang_name = "igmp"; yang_parent_name = "Cisco-IOS-XR-ipv4-igmp-oper";
}

Igmp::~Igmp()
{
}

bool Igmp::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (standby !=  nullptr && standby->has_data());
}

bool Igmp::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (standby !=  nullptr && standby->has_operation());
}

std::string Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp";

    return path_buffer.str();

}

const EntityPath Igmp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<Igmp::Active>();
        }
        return active;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Igmp::Standby>();
        }
        return standby;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(standby != nullptr)
    {
        children["standby"] = standby;
    }

    return children;
}

void Igmp::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Igmp::clone_ptr() const
{
    return std::make_shared<Igmp>();
}

std::string Igmp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Igmp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Igmp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Igmp::Standby::Standby()
    :
    default_context(std::make_shared<Igmp::Standby::DefaultContext>())
	,process(std::make_shared<Igmp::Standby::Process>())
	,vrfs(std::make_shared<Igmp::Standby::Vrfs>())
{
    default_context->parent = this;

    process->parent = this;

    vrfs->parent = this;

    yang_name = "standby"; yang_parent_name = "igmp";
}

Igmp::Standby::~Standby()
{
}

bool Igmp::Standby::has_data() const
{
    return (default_context !=  nullptr && default_context->has_data())
	|| (process !=  nullptr && process->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Igmp::Standby::has_operation() const
{
    return is_set(operation)
	|| (default_context !=  nullptr && default_context->has_operation())
	|| (process !=  nullptr && process->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Igmp::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-context")
    {
        if(default_context == nullptr)
        {
            default_context = std::make_shared<Igmp::Standby::DefaultContext>();
        }
        return default_context;
    }

    if(child_yang_name == "process")
    {
        if(process == nullptr)
        {
            process = std::make_shared<Igmp::Standby::Process>();
        }
        return process;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Igmp::Standby::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_context != nullptr)
    {
        children["default-context"] = default_context;
    }

    if(process != nullptr)
    {
        children["process"] = process;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Igmp::Standby::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "standby";
}

Igmp::Standby::Vrfs::~Vrfs()
{
}

bool Igmp::Standby::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Igmp::Standby::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Standby::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    detail_groups(std::make_shared<Igmp::Standby::Vrfs::Vrf::DetailGroups>())
	,explicit_groups(std::make_shared<Igmp::Standby::Vrfs::Vrf::ExplicitGroups>())
	,global_interface_table(std::make_shared<Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable>())
	,group_summary(std::make_shared<Igmp::Standby::Vrfs::Vrf::GroupSummary>())
	,groups(std::make_shared<Igmp::Standby::Vrfs::Vrf::Groups>())
	,ifrs_interface_summary(std::make_shared<Igmp::Standby::Vrfs::Vrf::IfrsInterfaceSummary>())
	,ifrs_interfaces(std::make_shared<Igmp::Standby::Vrfs::Vrf::IfrsInterfaces>())
	,interface_old_format_state_ons(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns>())
	,interface_old_formats(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats>())
	,interface_state_off_old_formats(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats>())
	,interface_state_offs(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs>())
	,interface_state_ons(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOns>())
	,interface_table(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceTable>())
	,interface_unicast_qos_adjusts(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts>())
	,non_active_groups(std::make_shared<Igmp::Standby::Vrfs::Vrf::NonActiveGroups>())
	,ranges(std::make_shared<Igmp::Standby::Vrfs::Vrf::Ranges>())
	,ssm_map_details(std::make_shared<Igmp::Standby::Vrfs::Vrf::SsmMapDetails>())
	,ssm_maps(std::make_shared<Igmp::Standby::Vrfs::Vrf::SsmMaps>())
	,summary(std::make_shared<Igmp::Standby::Vrfs::Vrf::Summary>())
	,traffic_counters(std::make_shared<Igmp::Standby::Vrfs::Vrf::TrafficCounters>())
{
    detail_groups->parent = this;

    explicit_groups->parent = this;

    global_interface_table->parent = this;

    group_summary->parent = this;

    groups->parent = this;

    ifrs_interface_summary->parent = this;

    ifrs_interfaces->parent = this;

    interface_old_format_state_ons->parent = this;

    interface_old_formats->parent = this;

    interface_state_off_old_formats->parent = this;

    interface_state_offs->parent = this;

    interface_state_ons->parent = this;

    interface_table->parent = this;

    interface_unicast_qos_adjusts->parent = this;

    non_active_groups->parent = this;

    ranges->parent = this;

    ssm_map_details->parent = this;

    ssm_maps->parent = this;

    summary->parent = this;

    traffic_counters->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Igmp::Standby::Vrfs::Vrf::~Vrf()
{
}

bool Igmp::Standby::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (detail_groups !=  nullptr && detail_groups->has_data())
	|| (explicit_groups !=  nullptr && explicit_groups->has_data())
	|| (global_interface_table !=  nullptr && global_interface_table->has_data())
	|| (group_summary !=  nullptr && group_summary->has_data())
	|| (groups !=  nullptr && groups->has_data())
	|| (ifrs_interface_summary !=  nullptr && ifrs_interface_summary->has_data())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_data())
	|| (interface_old_format_state_ons !=  nullptr && interface_old_format_state_ons->has_data())
	|| (interface_old_formats !=  nullptr && interface_old_formats->has_data())
	|| (interface_state_off_old_formats !=  nullptr && interface_state_off_old_formats->has_data())
	|| (interface_state_offs !=  nullptr && interface_state_offs->has_data())
	|| (interface_state_ons !=  nullptr && interface_state_ons->has_data())
	|| (interface_table !=  nullptr && interface_table->has_data())
	|| (interface_unicast_qos_adjusts !=  nullptr && interface_unicast_qos_adjusts->has_data())
	|| (non_active_groups !=  nullptr && non_active_groups->has_data())
	|| (ranges !=  nullptr && ranges->has_data())
	|| (ssm_map_details !=  nullptr && ssm_map_details->has_data())
	|| (ssm_maps !=  nullptr && ssm_maps->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (traffic_counters !=  nullptr && traffic_counters->has_data());
}

bool Igmp::Standby::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (detail_groups !=  nullptr && detail_groups->has_operation())
	|| (explicit_groups !=  nullptr && explicit_groups->has_operation())
	|| (global_interface_table !=  nullptr && global_interface_table->has_operation())
	|| (group_summary !=  nullptr && group_summary->has_operation())
	|| (groups !=  nullptr && groups->has_operation())
	|| (ifrs_interface_summary !=  nullptr && ifrs_interface_summary->has_operation())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_operation())
	|| (interface_old_format_state_ons !=  nullptr && interface_old_format_state_ons->has_operation())
	|| (interface_old_formats !=  nullptr && interface_old_formats->has_operation())
	|| (interface_state_off_old_formats !=  nullptr && interface_state_off_old_formats->has_operation())
	|| (interface_state_offs !=  nullptr && interface_state_offs->has_operation())
	|| (interface_state_ons !=  nullptr && interface_state_ons->has_operation())
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (interface_unicast_qos_adjusts !=  nullptr && interface_unicast_qos_adjusts->has_operation())
	|| (non_active_groups !=  nullptr && non_active_groups->has_operation())
	|| (ranges !=  nullptr && ranges->has_operation())
	|| (ssm_map_details !=  nullptr && ssm_map_details->has_operation())
	|| (ssm_maps !=  nullptr && ssm_maps->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (traffic_counters !=  nullptr && traffic_counters->has_operation());
}

std::string Igmp::Standby::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/vrfs/" << get_segment_path();
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

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-groups")
    {
        if(detail_groups == nullptr)
        {
            detail_groups = std::make_shared<Igmp::Standby::Vrfs::Vrf::DetailGroups>();
        }
        return detail_groups;
    }

    if(child_yang_name == "explicit-groups")
    {
        if(explicit_groups == nullptr)
        {
            explicit_groups = std::make_shared<Igmp::Standby::Vrfs::Vrf::ExplicitGroups>();
        }
        return explicit_groups;
    }

    if(child_yang_name == "global-interface-table")
    {
        if(global_interface_table == nullptr)
        {
            global_interface_table = std::make_shared<Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable>();
        }
        return global_interface_table;
    }

    if(child_yang_name == "group-summary")
    {
        if(group_summary == nullptr)
        {
            group_summary = std::make_shared<Igmp::Standby::Vrfs::Vrf::GroupSummary>();
        }
        return group_summary;
    }

    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<Igmp::Standby::Vrfs::Vrf::Groups>();
        }
        return groups;
    }

    if(child_yang_name == "ifrs-interface-summary")
    {
        if(ifrs_interface_summary == nullptr)
        {
            ifrs_interface_summary = std::make_shared<Igmp::Standby::Vrfs::Vrf::IfrsInterfaceSummary>();
        }
        return ifrs_interface_summary;
    }

    if(child_yang_name == "ifrs-interfaces")
    {
        if(ifrs_interfaces == nullptr)
        {
            ifrs_interfaces = std::make_shared<Igmp::Standby::Vrfs::Vrf::IfrsInterfaces>();
        }
        return ifrs_interfaces;
    }

    if(child_yang_name == "interface-old-format-state-ons")
    {
        if(interface_old_format_state_ons == nullptr)
        {
            interface_old_format_state_ons = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns>();
        }
        return interface_old_format_state_ons;
    }

    if(child_yang_name == "interface-old-formats")
    {
        if(interface_old_formats == nullptr)
        {
            interface_old_formats = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats>();
        }
        return interface_old_formats;
    }

    if(child_yang_name == "interface-state-off-old-formats")
    {
        if(interface_state_off_old_formats == nullptr)
        {
            interface_state_off_old_formats = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats>();
        }
        return interface_state_off_old_formats;
    }

    if(child_yang_name == "interface-state-offs")
    {
        if(interface_state_offs == nullptr)
        {
            interface_state_offs = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs>();
        }
        return interface_state_offs;
    }

    if(child_yang_name == "interface-state-ons")
    {
        if(interface_state_ons == nullptr)
        {
            interface_state_ons = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOns>();
        }
        return interface_state_ons;
    }

    if(child_yang_name == "interface-table")
    {
        if(interface_table == nullptr)
        {
            interface_table = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceTable>();
        }
        return interface_table;
    }

    if(child_yang_name == "interface-unicast-qos-adjusts")
    {
        if(interface_unicast_qos_adjusts == nullptr)
        {
            interface_unicast_qos_adjusts = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts>();
        }
        return interface_unicast_qos_adjusts;
    }

    if(child_yang_name == "non-active-groups")
    {
        if(non_active_groups == nullptr)
        {
            non_active_groups = std::make_shared<Igmp::Standby::Vrfs::Vrf::NonActiveGroups>();
        }
        return non_active_groups;
    }

    if(child_yang_name == "ranges")
    {
        if(ranges == nullptr)
        {
            ranges = std::make_shared<Igmp::Standby::Vrfs::Vrf::Ranges>();
        }
        return ranges;
    }

    if(child_yang_name == "ssm-map-details")
    {
        if(ssm_map_details == nullptr)
        {
            ssm_map_details = std::make_shared<Igmp::Standby::Vrfs::Vrf::SsmMapDetails>();
        }
        return ssm_map_details;
    }

    if(child_yang_name == "ssm-maps")
    {
        if(ssm_maps == nullptr)
        {
            ssm_maps = std::make_shared<Igmp::Standby::Vrfs::Vrf::SsmMaps>();
        }
        return ssm_maps;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Igmp::Standby::Vrfs::Vrf::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "traffic-counters")
    {
        if(traffic_counters == nullptr)
        {
            traffic_counters = std::make_shared<Igmp::Standby::Vrfs::Vrf::TrafficCounters>();
        }
        return traffic_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail_groups != nullptr)
    {
        children["detail-groups"] = detail_groups;
    }

    if(explicit_groups != nullptr)
    {
        children["explicit-groups"] = explicit_groups;
    }

    if(global_interface_table != nullptr)
    {
        children["global-interface-table"] = global_interface_table;
    }

    if(group_summary != nullptr)
    {
        children["group-summary"] = group_summary;
    }

    if(groups != nullptr)
    {
        children["groups"] = groups;
    }

    if(ifrs_interface_summary != nullptr)
    {
        children["ifrs-interface-summary"] = ifrs_interface_summary;
    }

    if(ifrs_interfaces != nullptr)
    {
        children["ifrs-interfaces"] = ifrs_interfaces;
    }

    if(interface_old_format_state_ons != nullptr)
    {
        children["interface-old-format-state-ons"] = interface_old_format_state_ons;
    }

    if(interface_old_formats != nullptr)
    {
        children["interface-old-formats"] = interface_old_formats;
    }

    if(interface_state_off_old_formats != nullptr)
    {
        children["interface-state-off-old-formats"] = interface_state_off_old_formats;
    }

    if(interface_state_offs != nullptr)
    {
        children["interface-state-offs"] = interface_state_offs;
    }

    if(interface_state_ons != nullptr)
    {
        children["interface-state-ons"] = interface_state_ons;
    }

    if(interface_table != nullptr)
    {
        children["interface-table"] = interface_table;
    }

    if(interface_unicast_qos_adjusts != nullptr)
    {
        children["interface-unicast-qos-adjusts"] = interface_unicast_qos_adjusts;
    }

    if(non_active_groups != nullptr)
    {
        children["non-active-groups"] = non_active_groups;
    }

    if(ranges != nullptr)
    {
        children["ranges"] = ranges;
    }

    if(ssm_map_details != nullptr)
    {
        children["ssm-map-details"] = ssm_map_details;
    }

    if(ssm_maps != nullptr)
    {
        children["ssm-maps"] = ssm_maps;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(traffic_counters != nullptr)
    {
        children["traffic-counters"] = traffic_counters;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Igmp::Standby::Vrfs::Vrf::Summary::Summary()
    :
    disabled_interface_count{YType::uint32, "disabled-interface-count"},
    enabled_interface_count{YType::uint32, "enabled-interface-count"},
    group_count{YType::uint32, "group-count"},
    group_limit{YType::uint32, "group-limit"},
    is_disabled{YType::boolean, "is-disabled"},
    node_low_memory{YType::boolean, "node-low-memory"},
    robustness{YType::uint32, "robustness"},
    supported_interfaces{YType::uint32, "supported-interfaces"},
    tunnel_mte_config_count{YType::uint32, "tunnel-mte-config-count"},
    unsupported_interfaces{YType::uint32, "unsupported-interfaces"}
{
    yang_name = "summary"; yang_parent_name = "vrf";
}

Igmp::Standby::Vrfs::Vrf::Summary::~Summary()
{
}

bool Igmp::Standby::Vrfs::Vrf::Summary::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return disabled_interface_count.is_set
	|| enabled_interface_count.is_set
	|| group_count.is_set
	|| group_limit.is_set
	|| is_disabled.is_set
	|| node_low_memory.is_set
	|| robustness.is_set
	|| supported_interfaces.is_set
	|| tunnel_mte_config_count.is_set
	|| unsupported_interfaces.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::Summary::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(disabled_interface_count.operation)
	|| is_set(enabled_interface_count.operation)
	|| is_set(group_count.operation)
	|| is_set(group_limit.operation)
	|| is_set(is_disabled.operation)
	|| is_set(node_low_memory.operation)
	|| is_set(robustness.operation)
	|| is_set(supported_interfaces.operation)
	|| is_set(tunnel_mte_config_count.operation)
	|| is_set(unsupported_interfaces.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disabled_interface_count.is_set || is_set(disabled_interface_count.operation)) leaf_name_data.push_back(disabled_interface_count.get_name_leafdata());
    if (enabled_interface_count.is_set || is_set(enabled_interface_count.operation)) leaf_name_data.push_back(enabled_interface_count.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (group_limit.is_set || is_set(group_limit.operation)) leaf_name_data.push_back(group_limit.get_name_leafdata());
    if (is_disabled.is_set || is_set(is_disabled.operation)) leaf_name_data.push_back(is_disabled.get_name_leafdata());
    if (node_low_memory.is_set || is_set(node_low_memory.operation)) leaf_name_data.push_back(node_low_memory.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (supported_interfaces.is_set || is_set(supported_interfaces.operation)) leaf_name_data.push_back(supported_interfaces.get_name_leafdata());
    if (tunnel_mte_config_count.is_set || is_set(tunnel_mte_config_count.operation)) leaf_name_data.push_back(tunnel_mte_config_count.get_name_leafdata());
    if (unsupported_interfaces.is_set || is_set(unsupported_interfaces.operation)) leaf_name_data.push_back(unsupported_interfaces.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Igmp::Standby::Vrfs::Vrf::Summary::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disabled-interface-count")
    {
        disabled_interface_count = value;
    }
    if(value_path == "enabled-interface-count")
    {
        enabled_interface_count = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "group-limit")
    {
        group_limit = value;
    }
    if(value_path == "is-disabled")
    {
        is_disabled = value;
    }
    if(value_path == "node-low-memory")
    {
        node_low_memory = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "supported-interfaces")
    {
        supported_interfaces = value;
    }
    if(value_path == "tunnel-mte-config-count")
    {
        tunnel_mte_config_count = value;
    }
    if(value_path == "unsupported-interfaces")
    {
        unsupported_interfaces = value;
    }
}

Igmp::Standby::Vrfs::Vrf::Summary::Interface::Interface()
    :
    group_count{YType::uint32, "group-count"},
    group_limit{YType::uint32, "group-limit"},
    interface_name{YType::str, "interface-name"},
    on_off{YType::boolean, "on-off"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"}
{
    yang_name = "interface"; yang_parent_name = "summary";
}

Igmp::Standby::Vrfs::Vrf::Summary::Interface::~Interface()
{
}

bool Igmp::Standby::Vrfs::Vrf::Summary::Interface::has_data() const
{
    return group_count.is_set
	|| group_limit.is_set
	|| interface_name.is_set
	|| on_off.is_set
	|| parent_ifhandle.is_set
	|| router_uptime_in_seconds.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::Summary::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(group_count.operation)
	|| is_set(group_limit.operation)
	|| is_set(interface_name.operation)
	|| is_set(on_off.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::Summary::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::Summary::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (group_limit.is_set || is_set(group_limit.operation)) leaf_name_data.push_back(group_limit.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (on_off.is_set || is_set(on_off.operation)) leaf_name_data.push_back(on_off.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::Summary::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::Summary::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::Summary::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "group-limit")
    {
        group_limit = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "on-off")
    {
        on_off = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOns()
{
    yang_name = "interface-state-ons"; yang_parent_name = "vrf";
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::~InterfaceStateOns()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::has_data() const
{
    for (std::size_t index=0; index<interface_state_on.size(); index++)
    {
        if(interface_state_on[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::has_operation() const
{
    for (std::size_t index=0; index<interface_state_on.size(); index++)
    {
        if(interface_state_on[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-ons";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStateOns' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-state-on")
    {
        for(auto const & c : interface_state_on)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn>();
        c->parent = this;
        interface_state_on.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_state_on)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::InterfaceStateOn()
    :
    interface_name{YType::str, "interface-name"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address>())
	,querier_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress>())
	,subscriber_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "interface-state-on"; yang_parent_name = "interface-state-ons";
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::~InterfaceStateOn()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::has_data() const
{
    return interface_name.is_set
	|| configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-on" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStateOn' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(querier_address != nullptr)
    {
        children["querier-address"] = querier_address;
    }

    if(subscriber_address != nullptr)
    {
        children["subscriber-address"] = subscriber_address;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-state-on";
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::~Address()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-state-on";
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-state-on";
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroups()
{
    yang_name = "detail-groups"; yang_parent_name = "vrf";
}

Igmp::Standby::Vrfs::Vrf::DetailGroups::~DetailGroups()
{
}

bool Igmp::Standby::Vrfs::Vrf::DetailGroups::has_data() const
{
    for (std::size_t index=0; index<detail_group.size(); index++)
    {
        if(detail_group[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::Vrfs::Vrf::DetailGroups::has_operation() const
{
    for (std::size_t index=0; index<detail_group.size(); index++)
    {
        if(detail_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::Vrfs::Vrf::DetailGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-groups";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::DetailGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DetailGroups' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::DetailGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-group")
    {
        for(auto const & c : detail_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup>();
        c->parent = this;
        detail_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::DetailGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : detail_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::DetailGroups::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::DetailGroup()
    :
    group_address{YType::str, "group-address"},
    interface_name{YType::str, "interface-name"},
    is_host_exclude_mode{YType::boolean, "is-host-exclude-mode"},
    is_router_exclude_mode{YType::boolean, "is-router-exclude-mode"},
    source_address{YType::str, "source-address"}
    	,
    group_info(std::make_shared<Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo>())
{
    group_info->parent = this;

    yang_name = "detail-group"; yang_parent_name = "detail-groups";
}

Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::~DetailGroup()
{
}

bool Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::has_data() const
{
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_data())
            return true;
    }
    return group_address.is_set
	|| interface_name.is_set
	|| is_host_exclude_mode.is_set
	|| is_router_exclude_mode.is_set
	|| source_address.is_set
	|| (group_info !=  nullptr && group_info->has_data());
}

bool Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::has_operation() const
{
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(is_host_exclude_mode.operation)
	|| is_set(is_router_exclude_mode.operation)
	|| is_set(source_address.operation)
	|| (group_info !=  nullptr && group_info->has_operation());
}

std::string Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-group";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DetailGroup' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_host_exclude_mode.is_set || is_set(is_host_exclude_mode.operation)) leaf_name_data.push_back(is_host_exclude_mode.get_name_leafdata());
    if (is_router_exclude_mode.is_set || is_set(is_router_exclude_mode.operation)) leaf_name_data.push_back(is_router_exclude_mode.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-info")
    {
        if(group_info == nullptr)
        {
            group_info = std::make_shared<Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo>();
        }
        return group_info;
    }

    if(child_yang_name == "source")
    {
        for(auto const & c : source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source>();
        c->parent = this;
        source.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_info != nullptr)
    {
        children["group-info"] = group_info;
    }

    for (auto const & c : source)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-host-exclude-mode")
    {
        is_host_exclude_mode = value;
    }
    if(value_path == "is-router-exclude-mode")
    {
        is_router_exclude_mode = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupInfo()
    :
    expiration_time{YType::int32, "expiration-time"},
    explicit_tracking_enabled{YType::boolean, "explicit-tracking-enabled"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_added{YType::boolean, "is-added"},
    is_low_memory{YType::boolean, "is-low-memory"},
    is_self_join{YType::boolean, "is-self-join"},
    is_suppressed{YType::boolean, "is-suppressed"},
    older_host_version1_timer{YType::uint32, "older-host-version1-timer"},
    older_host_version2_timer{YType::uint32, "older-host-version2-timer"},
    router_filter_mode{YType::uint8, "router-filter-mode"},
    row_status{YType::str, "row-status"},
    uptime{YType::uint64, "uptime"}
    	,
    group_address_xr(std::make_shared<Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr>())
	,last_reporter(std::make_shared<Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter>())
	,source_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress>())
{
    group_address_xr->parent = this;

    last_reporter->parent = this;

    source_address->parent = this;

    yang_name = "group-info"; yang_parent_name = "detail-group";
}

Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::~GroupInfo()
{
}

bool Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::has_data() const
{
    return expiration_time.is_set
	|| explicit_tracking_enabled.is_set
	|| interface_name_xr.is_set
	|| is_added.is_set
	|| is_low_memory.is_set
	|| is_self_join.is_set
	|| is_suppressed.is_set
	|| older_host_version1_timer.is_set
	|| older_host_version2_timer.is_set
	|| router_filter_mode.is_set
	|| row_status.is_set
	|| uptime.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (last_reporter !=  nullptr && last_reporter->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(explicit_tracking_enabled.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_added.operation)
	|| is_set(is_low_memory.operation)
	|| is_set(is_self_join.operation)
	|| is_set(is_suppressed.operation)
	|| is_set(older_host_version1_timer.operation)
	|| is_set(older_host_version2_timer.operation)
	|| is_set(router_filter_mode.operation)
	|| is_set(row_status.operation)
	|| is_set(uptime.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (last_reporter !=  nullptr && last_reporter->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-info";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupInfo' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (explicit_tracking_enabled.is_set || is_set(explicit_tracking_enabled.operation)) leaf_name_data.push_back(explicit_tracking_enabled.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.operation)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.operation)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (is_self_join.is_set || is_set(is_self_join.operation)) leaf_name_data.push_back(is_self_join.get_name_leafdata());
    if (is_suppressed.is_set || is_set(is_suppressed.operation)) leaf_name_data.push_back(is_suppressed.get_name_leafdata());
    if (older_host_version1_timer.is_set || is_set(older_host_version1_timer.operation)) leaf_name_data.push_back(older_host_version1_timer.get_name_leafdata());
    if (older_host_version2_timer.is_set || is_set(older_host_version2_timer.operation)) leaf_name_data.push_back(older_host_version2_timer.get_name_leafdata());
    if (router_filter_mode.is_set || is_set(router_filter_mode.operation)) leaf_name_data.push_back(router_filter_mode.get_name_leafdata());
    if (row_status.is_set || is_set(row_status.operation)) leaf_name_data.push_back(row_status.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "last-reporter")
    {
        if(last_reporter == nullptr)
        {
            last_reporter = std::make_shared<Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter>();
        }
        return last_reporter;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    if(last_reporter != nullptr)
    {
        children["last-reporter"] = last_reporter;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "explicit-tracking-enabled")
    {
        explicit_tracking_enabled = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-added")
    {
        is_added = value;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
    }
    if(value_path == "is-self-join")
    {
        is_self_join = value;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed = value;
    }
    if(value_path == "older-host-version1-timer")
    {
        older_host_version1_timer = value;
    }
    if(value_path == "older-host-version2-timer")
    {
        older_host_version2_timer = value;
    }
    if(value_path == "router-filter-mode")
    {
        router_filter_mode = value;
    }
    if(value_path == "row-status")
    {
        row_status = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "group-info";
}

Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::~GroupAddressXr()
{
}

bool Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressXr' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::LastReporter()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "last-reporter"; yang_parent_name = "group-info";
}

Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::~LastReporter()
{
}

bool Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reporter";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastReporter' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "group-info";
}

Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::~SourceAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::Source()
    :
    expiration_time{YType::int32, "expiration-time"},
    flags{YType::int32, "flags"},
    is_added{YType::boolean, "is-added"},
    is_forward{YType::boolean, "is-forward"},
    is_local{YType::boolean, "is-local"},
    is_remote{YType::boolean, "is-remote"},
    is_we_report{YType::boolean, "is-we-report"},
    uptime{YType::uint64, "uptime"}
    	,
    source_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress>())
{
    source_address->parent = this;

    yang_name = "source"; yang_parent_name = "detail-group";
}

Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::~Source()
{
}

bool Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::has_data() const
{
    return expiration_time.is_set
	|| flags.is_set
	|| is_added.is_set
	|| is_forward.is_set
	|| is_local.is_set
	|| is_remote.is_set
	|| is_we_report.is_set
	|| uptime.is_set
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(flags.operation)
	|| is_set(is_added.operation)
	|| is_set(is_forward.operation)
	|| is_set(is_local.operation)
	|| is_set(is_remote.operation)
	|| is_set(is_we_report.operation)
	|| is_set(uptime.operation)
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.operation)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_forward.is_set || is_set(is_forward.operation)) leaf_name_data.push_back(is_forward.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.operation)) leaf_name_data.push_back(is_local.get_name_leafdata());
    if (is_remote.is_set || is_set(is_remote.operation)) leaf_name_data.push_back(is_remote.get_name_leafdata());
    if (is_we_report.is_set || is_set(is_we_report.operation)) leaf_name_data.push_back(is_we_report.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "is-added")
    {
        is_added = value;
    }
    if(value_path == "is-forward")
    {
        is_forward = value;
    }
    if(value_path == "is-local")
    {
        is_local = value;
    }
    if(value_path == "is-remote")
    {
        is_remote = value;
    }
    if(value_path == "is-we-report")
    {
        is_we_report = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "source";
}

Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::~SourceAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups()
{
    yang_name = "non-active-groups"; yang_parent_name = "vrf";
}

Igmp::Standby::Vrfs::Vrf::NonActiveGroups::~NonActiveGroups()
{
}

bool Igmp::Standby::Vrfs::Vrf::NonActiveGroups::has_data() const
{
    for (std::size_t index=0; index<non_active_groups.size(); index++)
    {
        if(non_active_groups[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::Vrfs::Vrf::NonActiveGroups::has_operation() const
{
    for (std::size_t index=0; index<non_active_groups.size(); index++)
    {
        if(non_active_groups[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::Vrfs::Vrf::NonActiveGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-active-groups";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::NonActiveGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonActiveGroups' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::NonActiveGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-active-groups")
    {
        for(auto const & c : non_active_groups)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_>();
        c->parent = this;
        non_active_groups.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::NonActiveGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : non_active_groups)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::NonActiveGroups::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::NonActiveGroups_()
    :
    interface{YType::str, "interface"},
    reason_for_non_activity{YType::str, "reason-for-non-activity"}
    	,
    group_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress>())
	,source_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress>())
{
    group_address->parent = this;

    source_address->parent = this;

    yang_name = "non-active-groups"; yang_parent_name = "non-active-groups";
}

Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::~NonActiveGroups_()
{
}

bool Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::has_data() const
{
    return interface.is_set
	|| reason_for_non_activity.is_set
	|| (group_address !=  nullptr && group_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(reason_for_non_activity.operation)
	|| (group_address !=  nullptr && group_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-active-groups";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonActiveGroups_' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (reason_for_non_activity.is_set || is_set(reason_for_non_activity.operation)) leaf_name_data.push_back(reason_for_non_activity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address")
    {
        if(group_address == nullptr)
        {
            group_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress>();
        }
        return group_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address != nullptr)
    {
        children["group-address"] = group_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "reason-for-non-activity")
    {
        reason_for_non_activity = value;
    }
}

Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address"; yang_parent_name = "non-active-groups";
}

Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::~GroupAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "non-active-groups";
}

Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::~SourceAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMaps()
{
    yang_name = "ssm-maps"; yang_parent_name = "vrf";
}

Igmp::Standby::Vrfs::Vrf::SsmMaps::~SsmMaps()
{
}

bool Igmp::Standby::Vrfs::Vrf::SsmMaps::has_data() const
{
    for (std::size_t index=0; index<ssm_map.size(); index++)
    {
        if(ssm_map[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::Vrfs::Vrf::SsmMaps::has_operation() const
{
    for (std::size_t index=0; index<ssm_map.size(); index++)
    {
        if(ssm_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::Vrfs::Vrf::SsmMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-maps";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::SsmMaps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SsmMaps' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::SsmMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssm-map")
    {
        for(auto const & c : ssm_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap>();
        c->parent = this;
        ssm_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::SsmMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ssm_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::SsmMaps::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::SsmMap()
    :
    group_address{YType::str, "group-address"},
    map_type{YType::uint32, "map-type"},
    source_counts{YType::uint32, "source-counts"},
    ssm_map_type{YType::enumeration, "ssm-map-type"}
    	,
    group_address_xr(std::make_shared<Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr>())
{
    group_address_xr->parent = this;

    yang_name = "ssm-map"; yang_parent_name = "ssm-maps";
}

Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::~SsmMap()
{
}

bool Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::has_data() const
{
    return group_address.is_set
	|| map_type.is_set
	|| source_counts.is_set
	|| ssm_map_type.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data());
}

bool Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(map_type.operation)
	|| is_set(source_counts.operation)
	|| is_set(ssm_map_type.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SsmMap' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (map_type.is_set || is_set(map_type.operation)) leaf_name_data.push_back(map_type.get_name_leafdata());
    if (source_counts.is_set || is_set(source_counts.operation)) leaf_name_data.push_back(source_counts.get_name_leafdata());
    if (ssm_map_type.is_set || is_set(ssm_map_type.operation)) leaf_name_data.push_back(ssm_map_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr>();
        }
        return group_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "map-type")
    {
        map_type = value;
    }
    if(value_path == "source-counts")
    {
        source_counts = value;
    }
    if(value_path == "ssm-map-type")
    {
        ssm_map_type = value;
    }
}

Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "ssm-map";
}

Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::~GroupAddressXr()
{
}

bool Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressXr' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroups()
{
    yang_name = "explicit-groups"; yang_parent_name = "vrf";
}

Igmp::Standby::Vrfs::Vrf::ExplicitGroups::~ExplicitGroups()
{
}

bool Igmp::Standby::Vrfs::Vrf::ExplicitGroups::has_data() const
{
    for (std::size_t index=0; index<explicit_group.size(); index++)
    {
        if(explicit_group[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::Vrfs::Vrf::ExplicitGroups::has_operation() const
{
    for (std::size_t index=0; index<explicit_group.size(); index++)
    {
        if(explicit_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::Vrfs::Vrf::ExplicitGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-groups";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::ExplicitGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExplicitGroups' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::ExplicitGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit-group")
    {
        for(auto const & c : explicit_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup>();
        c->parent = this;
        explicit_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::ExplicitGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : explicit_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::ExplicitGroups::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::ExplicitGroup()
    :
    exclude_hosts{YType::uint32, "exclude-hosts"},
    group_address{YType::str, "group-address"},
    include_hosts{YType::uint32, "include-hosts"},
    interface_name{YType::str, "interface-name"},
    source_address{YType::str, "source-address"}
    	,
    group_info(std::make_shared<Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo>())
{
    group_info->parent = this;

    yang_name = "explicit-group"; yang_parent_name = "explicit-groups";
}

Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::~ExplicitGroup()
{
}

bool Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return exclude_hosts.is_set
	|| group_address.is_set
	|| include_hosts.is_set
	|| interface_name.is_set
	|| source_address.is_set
	|| (group_info !=  nullptr && group_info->has_data());
}

bool Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(exclude_hosts.operation)
	|| is_set(group_address.operation)
	|| is_set(include_hosts.operation)
	|| is_set(interface_name.operation)
	|| is_set(source_address.operation)
	|| (group_info !=  nullptr && group_info->has_operation());
}

std::string Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-group";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExplicitGroup' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclude_hosts.is_set || is_set(exclude_hosts.operation)) leaf_name_data.push_back(exclude_hosts.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (include_hosts.is_set || is_set(include_hosts.operation)) leaf_name_data.push_back(include_hosts.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-info")
    {
        if(group_info == nullptr)
        {
            group_info = std::make_shared<Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo>();
        }
        return group_info;
    }

    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_info != nullptr)
    {
        children["group-info"] = group_info;
    }

    for (auto const & c : host)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exclude-hosts")
    {
        exclude_hosts = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "include-hosts")
    {
        include_hosts = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupInfo()
    :
    expiration_time{YType::int32, "expiration-time"},
    explicit_tracking_enabled{YType::boolean, "explicit-tracking-enabled"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_added{YType::boolean, "is-added"},
    is_low_memory{YType::boolean, "is-low-memory"},
    is_self_join{YType::boolean, "is-self-join"},
    is_suppressed{YType::boolean, "is-suppressed"},
    older_host_version1_timer{YType::uint32, "older-host-version1-timer"},
    older_host_version2_timer{YType::uint32, "older-host-version2-timer"},
    router_filter_mode{YType::uint8, "router-filter-mode"},
    row_status{YType::str, "row-status"},
    uptime{YType::uint64, "uptime"}
    	,
    group_address_xr(std::make_shared<Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr>())
	,last_reporter(std::make_shared<Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter>())
	,source_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress>())
{
    group_address_xr->parent = this;

    last_reporter->parent = this;

    source_address->parent = this;

    yang_name = "group-info"; yang_parent_name = "explicit-group";
}

Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::~GroupInfo()
{
}

bool Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::has_data() const
{
    return expiration_time.is_set
	|| explicit_tracking_enabled.is_set
	|| interface_name_xr.is_set
	|| is_added.is_set
	|| is_low_memory.is_set
	|| is_self_join.is_set
	|| is_suppressed.is_set
	|| older_host_version1_timer.is_set
	|| older_host_version2_timer.is_set
	|| router_filter_mode.is_set
	|| row_status.is_set
	|| uptime.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (last_reporter !=  nullptr && last_reporter->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(explicit_tracking_enabled.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_added.operation)
	|| is_set(is_low_memory.operation)
	|| is_set(is_self_join.operation)
	|| is_set(is_suppressed.operation)
	|| is_set(older_host_version1_timer.operation)
	|| is_set(older_host_version2_timer.operation)
	|| is_set(router_filter_mode.operation)
	|| is_set(row_status.operation)
	|| is_set(uptime.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (last_reporter !=  nullptr && last_reporter->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-info";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupInfo' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (explicit_tracking_enabled.is_set || is_set(explicit_tracking_enabled.operation)) leaf_name_data.push_back(explicit_tracking_enabled.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.operation)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.operation)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (is_self_join.is_set || is_set(is_self_join.operation)) leaf_name_data.push_back(is_self_join.get_name_leafdata());
    if (is_suppressed.is_set || is_set(is_suppressed.operation)) leaf_name_data.push_back(is_suppressed.get_name_leafdata());
    if (older_host_version1_timer.is_set || is_set(older_host_version1_timer.operation)) leaf_name_data.push_back(older_host_version1_timer.get_name_leafdata());
    if (older_host_version2_timer.is_set || is_set(older_host_version2_timer.operation)) leaf_name_data.push_back(older_host_version2_timer.get_name_leafdata());
    if (router_filter_mode.is_set || is_set(router_filter_mode.operation)) leaf_name_data.push_back(router_filter_mode.get_name_leafdata());
    if (row_status.is_set || is_set(row_status.operation)) leaf_name_data.push_back(row_status.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "last-reporter")
    {
        if(last_reporter == nullptr)
        {
            last_reporter = std::make_shared<Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter>();
        }
        return last_reporter;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    if(last_reporter != nullptr)
    {
        children["last-reporter"] = last_reporter;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "explicit-tracking-enabled")
    {
        explicit_tracking_enabled = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-added")
    {
        is_added = value;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
    }
    if(value_path == "is-self-join")
    {
        is_self_join = value;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed = value;
    }
    if(value_path == "older-host-version1-timer")
    {
        older_host_version1_timer = value;
    }
    if(value_path == "older-host-version2-timer")
    {
        older_host_version2_timer = value;
    }
    if(value_path == "router-filter-mode")
    {
        router_filter_mode = value;
    }
    if(value_path == "row-status")
    {
        row_status = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "group-info";
}

Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::~GroupAddressXr()
{
}

bool Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressXr' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::LastReporter()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "last-reporter"; yang_parent_name = "group-info";
}

Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::~LastReporter()
{
}

bool Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reporter";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastReporter' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "group-info";
}

Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::~SourceAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Host()
    :
    expiration_time{YType::uint32, "expiration-time"},
    is_exclude{YType::boolean, "is-exclude"},
    source_count{YType::uint32, "source-count"},
    uptime{YType::uint32, "uptime"}
    	,
    address(std::make_shared<Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address>())
{
    address->parent = this;

    yang_name = "host"; yang_parent_name = "explicit-group";
}

Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::~Host()
{
}

bool Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::has_data() const
{
    for (std::size_t index=0; index<source_address.size(); index++)
    {
        if(source_address[index]->has_data())
            return true;
    }
    return expiration_time.is_set
	|| is_exclude.is_set
	|| source_count.is_set
	|| uptime.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::has_operation() const
{
    for (std::size_t index=0; index<source_address.size(); index++)
    {
        if(source_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(is_exclude.operation)
	|| is_set(source_count.operation)
	|| is_set(uptime.operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (is_exclude.is_set || is_set(is_exclude.operation)) leaf_name_data.push_back(is_exclude.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address>();
        }
        return address;
    }

    if(child_yang_name == "source-address")
    {
        for(auto const & c : source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress>();
        c->parent = this;
        source_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    for (auto const & c : source_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "is-exclude")
    {
        is_exclude = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "host";
}

Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::~Address()
{
}

bool Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "host";
}

Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::~SourceAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceTable::InterfaceTable()
{
    yang_name = "interface-table"; yang_parent_name = "vrf";
}

Igmp::Standby::Vrfs::Vrf::InterfaceTable::~InterfaceTable()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceTable::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceTable' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceTable::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::Address>())
	,querier_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress>())
	,subscriber_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "interface"; yang_parent_name = "interface-table";
}

Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::~Interface()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::has_data() const
{
    return interface_name.is_set
	|| configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(querier_address != nullptr)
    {
        children["querier-address"] = querier_address;
    }

    if(subscriber_address != nullptr)
    {
        children["subscriber-address"] = subscriber_address;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface";
}

Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::Address::~Address()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface";
}

Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface";
}

Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormats()
{
    yang_name = "interface-old-formats"; yang_parent_name = "vrf";
}

Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::~InterfaceOldFormats()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::has_data() const
{
    for (std::size_t index=0; index<interface_old_format.size(); index++)
    {
        if(interface_old_format[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::has_operation() const
{
    for (std::size_t index=0; index<interface_old_format.size(); index++)
    {
        if(interface_old_format[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-formats";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceOldFormats' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-old-format")
    {
        for(auto const & c : interface_old_format)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat>();
        c->parent = this;
        interface_old_format.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_old_format)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceOldFormat()
    :
    interface_name{YType::str, "interface-name"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address>())
	,querier_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress>())
	,subscriber_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "interface-old-format"; yang_parent_name = "interface-old-formats";
}

Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::~InterfaceOldFormat()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::has_data() const
{
    return interface_name.is_set
	|| configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-format" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceOldFormat' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(querier_address != nullptr)
    {
        children["querier-address"] = querier_address;
    }

    if(subscriber_address != nullptr)
    {
        children["subscriber-address"] = subscriber_address;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-old-format";
}

Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address::~Address()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-old-format";
}

Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-old-format";
}

Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormats()
{
    yang_name = "interface-state-off-old-formats"; yang_parent_name = "vrf";
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::~InterfaceStateOffOldFormats()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::has_data() const
{
    for (std::size_t index=0; index<interface_state_off_old_format.size(); index++)
    {
        if(interface_state_off_old_format[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::has_operation() const
{
    for (std::size_t index=0; index<interface_state_off_old_format.size(); index++)
    {
        if(interface_state_off_old_format[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-off-old-formats";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStateOffOldFormats' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-state-off-old-format")
    {
        for(auto const & c : interface_state_off_old_format)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat>();
        c->parent = this;
        interface_state_off_old_format.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_state_off_old_format)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::InterfaceStateOffOldFormat()
    :
    interface_name{YType::str, "interface-name"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address>())
	,querier_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress>())
	,subscriber_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "interface-state-off-old-format"; yang_parent_name = "interface-state-off-old-formats";
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::~InterfaceStateOffOldFormat()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::has_data() const
{
    return interface_name.is_set
	|| configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-off-old-format" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStateOffOldFormat' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(querier_address != nullptr)
    {
        children["querier-address"] = querier_address;
    }

    if(subscriber_address != nullptr)
    {
        children["subscriber-address"] = subscriber_address;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-state-off-old-format";
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::~Address()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-state-off-old-format";
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-state-off-old-format";
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjusts()
{
    yang_name = "interface-unicast-qos-adjusts"; yang_parent_name = "vrf";
}

Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::~InterfaceUnicastQosAdjusts()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::has_data() const
{
    for (std::size_t index=0; index<interface_unicast_qos_adjust.size(); index++)
    {
        if(interface_unicast_qos_adjust[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::has_operation() const
{
    for (std::size_t index=0; index<interface_unicast_qos_adjust.size(); index++)
    {
        if(interface_unicast_qos_adjust[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-unicast-qos-adjusts";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceUnicastQosAdjusts' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-unicast-qos-adjust")
    {
        for(auto const & c : interface_unicast_qos_adjust)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust>();
        c->parent = this;
        interface_unicast_qos_adjust.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_unicast_qos_adjust)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::InterfaceUnicastQosAdjust()
    :
    interface_name{YType::str, "interface-name"},
    is_virtual_access{YType::boolean, "is-virtual-access"},
    rate{YType::uint32, "rate"},
    rate_decrements{YType::uint32, "rate-decrements"},
    rate_increments{YType::uint32, "rate-increments"}
{
    yang_name = "interface-unicast-qos-adjust"; yang_parent_name = "interface-unicast-qos-adjusts";
}

Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::~InterfaceUnicastQosAdjust()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::has_data() const
{
    for (std::size_t index=0; index<update.size(); index++)
    {
        if(update[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| is_virtual_access.is_set
	|| rate.is_set
	|| rate_decrements.is_set
	|| rate_increments.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::has_operation() const
{
    for (std::size_t index=0; index<update.size(); index++)
    {
        if(update[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_virtual_access.operation)
	|| is_set(rate.operation)
	|| is_set(rate_decrements.operation)
	|| is_set(rate_increments.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-unicast-qos-adjust" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceUnicastQosAdjust' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_virtual_access.is_set || is_set(is_virtual_access.operation)) leaf_name_data.push_back(is_virtual_access.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (rate_decrements.is_set || is_set(rate_decrements.operation)) leaf_name_data.push_back(rate_decrements.get_name_leafdata());
    if (rate_increments.is_set || is_set(rate_increments.operation)) leaf_name_data.push_back(rate_increments.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update")
    {
        for(auto const & c : update)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update>();
        c->parent = this;
        update.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : update)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-virtual-access")
    {
        is_virtual_access = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
    if(value_path == "rate-decrements")
    {
        rate_decrements = value;
    }
    if(value_path == "rate-increments")
    {
        rate_increments = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::Update()
    :
    is_add{YType::boolean, "is-add"},
    received_time{YType::uint64, "received-time"},
    weight{YType::uint32, "weight"}
    	,
    group_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress>())
	,source_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress>())
{
    group_address->parent = this;

    source_address->parent = this;

    yang_name = "update"; yang_parent_name = "interface-unicast-qos-adjust";
}

Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::~Update()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::has_data() const
{
    return is_add.is_set
	|| received_time.is_set
	|| weight.is_set
	|| (group_address !=  nullptr && group_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::has_operation() const
{
    return is_set(operation)
	|| is_set(is_add.operation)
	|| is_set(received_time.operation)
	|| is_set(weight.operation)
	|| (group_address !=  nullptr && group_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Update' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_add.is_set || is_set(is_add.operation)) leaf_name_data.push_back(is_add.get_name_leafdata());
    if (received_time.is_set || is_set(received_time.operation)) leaf_name_data.push_back(received_time.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address")
    {
        if(group_address == nullptr)
        {
            group_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress>();
        }
        return group_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address != nullptr)
    {
        children["group-address"] = group_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-add")
    {
        is_add = value;
    }
    if(value_path == "received-time")
    {
        received_time = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "update";
}

Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::~SourceAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address"; yang_parent_name = "update";
}

Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::~GroupAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::Ranges::Ranges()
{
    yang_name = "ranges"; yang_parent_name = "vrf";
}

Igmp::Standby::Vrfs::Vrf::Ranges::~Ranges()
{
}

bool Igmp::Standby::Vrfs::Vrf::Ranges::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::Vrfs::Vrf::Ranges::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::Vrfs::Vrf::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::Ranges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ranges' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Standby::Vrfs::Vrf::Ranges::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::Ranges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::Ranges::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::Vrfs::Vrf::Ranges::Range::Range()
    :
    group_address{YType::str, "group-address"},
    group_mask{YType::int32, "group-mask"},
    is_stale{YType::boolean, "is-stale"},
    prefix_length{YType::uint32, "prefix-length"},
    protocol{YType::enumeration, "protocol"}
    	,
    group_address_xr(std::make_shared<Igmp::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr>())
{
    group_address_xr->parent = this;

    yang_name = "range"; yang_parent_name = "ranges";
}

Igmp::Standby::Vrfs::Vrf::Ranges::Range::~Range()
{
}

bool Igmp::Standby::Vrfs::Vrf::Ranges::Range::has_data() const
{
    return group_address.is_set
	|| group_mask.is_set
	|| is_stale.is_set
	|| prefix_length.is_set
	|| protocol.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data());
}

bool Igmp::Standby::Vrfs::Vrf::Ranges::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(group_mask.operation)
	|| is_set(is_stale.operation)
	|| is_set(prefix_length.operation)
	|| is_set(protocol.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Igmp::Standby::Vrfs::Vrf::Ranges::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::Ranges::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_mask.is_set || is_set(group_mask.operation)) leaf_name_data.push_back(group_mask.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.operation)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::Ranges::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Igmp::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr>();
        }
        return group_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::Ranges::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::Ranges::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-mask")
    {
        group_mask = value;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Igmp::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "range";
}

Igmp::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr::~GroupAddressXr()
{
}

bool Igmp::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressXr' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterfaces()
{
    yang_name = "ifrs-interfaces"; yang_parent_name = "vrf";
}

Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::~IfrsInterfaces()
{
}

bool Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::has_data() const
{
    for (std::size_t index=0; index<ifrs_interface.size(); index++)
    {
        if(ifrs_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::has_operation() const
{
    for (std::size_t index=0; index<ifrs_interface.size(); index++)
    {
        if(ifrs_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interfaces";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IfrsInterfaces' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifrs-interface")
    {
        for(auto const & c : ifrs_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface>();
        c->parent = this;
        ifrs_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ifrs_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IfrsInterface()
    :
    interface_name{YType::str, "interface-name"},
    join_group_count{YType::uint32, "join-group-count"}
    	,
    igmp_interface_entry(std::make_shared<Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry>())
{
    igmp_interface_entry->parent = this;

    yang_name = "ifrs-interface"; yang_parent_name = "ifrs-interfaces";
}

Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::~IfrsInterface()
{
}

bool Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::has_data() const
{
    return interface_name.is_set
	|| join_group_count.is_set
	|| (igmp_interface_entry !=  nullptr && igmp_interface_entry->has_data());
}

bool Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(join_group_count.operation)
	|| (igmp_interface_entry !=  nullptr && igmp_interface_entry->has_operation());
}

std::string Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IfrsInterface' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (join_group_count.is_set || is_set(join_group_count.operation)) leaf_name_data.push_back(join_group_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igmp-interface-entry")
    {
        if(igmp_interface_entry == nullptr)
        {
            igmp_interface_entry = std::make_shared<Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry>();
        }
        return igmp_interface_entry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igmp_interface_entry != nullptr)
    {
        children["igmp-interface-entry"] = igmp_interface_entry;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "join-group-count")
    {
        join_group_count = value;
    }
}

Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::IgmpInterfaceEntry()
    :
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address>())
	,querier_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress>())
	,subscriber_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "igmp-interface-entry"; yang_parent_name = "ifrs-interface";
}

Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::~IgmpInterfaceEntry()
{
}

bool Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::has_data() const
{
    return configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp-interface-entry";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgmpInterfaceEntry' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(querier_address != nullptr)
    {
        children["querier-address"] = querier_address;
    }

    if(subscriber_address != nullptr)
    {
        children["subscriber-address"] = subscriber_address;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "igmp-interface-entry";
}

Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::~Address()
{
}

bool Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "igmp-interface-entry";
}

Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "igmp-interface-entry";
}

Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::TrafficCounters::TrafficCounters()
    :
    auxillary_data_length_errors{YType::uint32, "auxillary-data-length-errors"},
    bad_scope_errors{YType::uint32, "bad-scope-errors"},
    checksum_errors{YType::uint32, "checksum-errors"},
    elapsed_time{YType::uint32, "elapsed-time"},
    format_errors{YType::uint32, "format-errors"},
    get_packet_failure{YType::uint32, "get-packet-failure"},
    input_disabled_idb{YType::uint32, "input-disabled-idb"},
    input_dvmrp{YType::uint32, "input-dvmrp"},
    input_leaves{YType::uint32, "input-leaves"},
    input_martian_address{YType::uint32, "input-martian-address"},
    input_mtrace{YType::uint32, "input-mtrace"},
    input_no_assigned_vrf_id{YType::uint32, "input-no-assigned-vrf-id"},
    input_no_idb{YType::uint32, "input-no-idb"},
    input_no_platform_support_mtrace{YType::uint32, "input-no-platform-support-mtrace"},
    input_no_vrf_in_idb{YType::uint32, "input-no-vrf-in-idb"},
    input_no_vrf_mtrace{YType::uint32, "input-no-vrf-mtrace"},
    input_pim{YType::uint32, "input-pim"},
    input_queries{YType::uint32, "input-queries"},
    input_reports{YType::uint32, "input-reports"},
    invalid_source_address_errors{YType::uint32, "invalid-source-address-errors"},
    miscellaneous_errors{YType::uint32, "miscellaneous-errors"},
    no_socket_connection{YType::uint32, "no-socket-connection"},
    output_dvmrp{YType::uint32, "output-dvmrp"},
    output_leaves{YType::uint32, "output-leaves"},
    output_mtrace{YType::uint32, "output-mtrace"},
    output_no_parent_interface_handle{YType::uint32, "output-no-parent-interface-handle"},
    output_pim{YType::uint32, "output-pim"},
    output_queries{YType::uint32, "output-queries"},
    output_reports{YType::uint32, "output-reports"},
    packet_manager_input_errors{YType::uint32, "packet-manager-input-errors"},
    packet_manager_output_errors{YType::uint32, "packet-manager-output-errors"},
    packets_in{YType::uint32, "packets-in"},
    packets_out{YType::uint32, "packets-out"},
    receive_socket_errors{YType::uint32, "receive-socket-errors"},
    socket_errors{YType::uint32, "socket-errors"}
{
    yang_name = "traffic-counters"; yang_parent_name = "vrf";
}

Igmp::Standby::Vrfs::Vrf::TrafficCounters::~TrafficCounters()
{
}

bool Igmp::Standby::Vrfs::Vrf::TrafficCounters::has_data() const
{
    return auxillary_data_length_errors.is_set
	|| bad_scope_errors.is_set
	|| checksum_errors.is_set
	|| elapsed_time.is_set
	|| format_errors.is_set
	|| get_packet_failure.is_set
	|| input_disabled_idb.is_set
	|| input_dvmrp.is_set
	|| input_leaves.is_set
	|| input_martian_address.is_set
	|| input_mtrace.is_set
	|| input_no_assigned_vrf_id.is_set
	|| input_no_idb.is_set
	|| input_no_platform_support_mtrace.is_set
	|| input_no_vrf_in_idb.is_set
	|| input_no_vrf_mtrace.is_set
	|| input_pim.is_set
	|| input_queries.is_set
	|| input_reports.is_set
	|| invalid_source_address_errors.is_set
	|| miscellaneous_errors.is_set
	|| no_socket_connection.is_set
	|| output_dvmrp.is_set
	|| output_leaves.is_set
	|| output_mtrace.is_set
	|| output_no_parent_interface_handle.is_set
	|| output_pim.is_set
	|| output_queries.is_set
	|| output_reports.is_set
	|| packet_manager_input_errors.is_set
	|| packet_manager_output_errors.is_set
	|| packets_in.is_set
	|| packets_out.is_set
	|| receive_socket_errors.is_set
	|| socket_errors.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::TrafficCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(auxillary_data_length_errors.operation)
	|| is_set(bad_scope_errors.operation)
	|| is_set(checksum_errors.operation)
	|| is_set(elapsed_time.operation)
	|| is_set(format_errors.operation)
	|| is_set(get_packet_failure.operation)
	|| is_set(input_disabled_idb.operation)
	|| is_set(input_dvmrp.operation)
	|| is_set(input_leaves.operation)
	|| is_set(input_martian_address.operation)
	|| is_set(input_mtrace.operation)
	|| is_set(input_no_assigned_vrf_id.operation)
	|| is_set(input_no_idb.operation)
	|| is_set(input_no_platform_support_mtrace.operation)
	|| is_set(input_no_vrf_in_idb.operation)
	|| is_set(input_no_vrf_mtrace.operation)
	|| is_set(input_pim.operation)
	|| is_set(input_queries.operation)
	|| is_set(input_reports.operation)
	|| is_set(invalid_source_address_errors.operation)
	|| is_set(miscellaneous_errors.operation)
	|| is_set(no_socket_connection.operation)
	|| is_set(output_dvmrp.operation)
	|| is_set(output_leaves.operation)
	|| is_set(output_mtrace.operation)
	|| is_set(output_no_parent_interface_handle.operation)
	|| is_set(output_pim.operation)
	|| is_set(output_queries.operation)
	|| is_set(output_reports.operation)
	|| is_set(packet_manager_input_errors.operation)
	|| is_set(packet_manager_output_errors.operation)
	|| is_set(packets_in.operation)
	|| is_set(packets_out.operation)
	|| is_set(receive_socket_errors.operation)
	|| is_set(socket_errors.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::TrafficCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-counters";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::TrafficCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficCounters' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auxillary_data_length_errors.is_set || is_set(auxillary_data_length_errors.operation)) leaf_name_data.push_back(auxillary_data_length_errors.get_name_leafdata());
    if (bad_scope_errors.is_set || is_set(bad_scope_errors.operation)) leaf_name_data.push_back(bad_scope_errors.get_name_leafdata());
    if (checksum_errors.is_set || is_set(checksum_errors.operation)) leaf_name_data.push_back(checksum_errors.get_name_leafdata());
    if (elapsed_time.is_set || is_set(elapsed_time.operation)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (format_errors.is_set || is_set(format_errors.operation)) leaf_name_data.push_back(format_errors.get_name_leafdata());
    if (get_packet_failure.is_set || is_set(get_packet_failure.operation)) leaf_name_data.push_back(get_packet_failure.get_name_leafdata());
    if (input_disabled_idb.is_set || is_set(input_disabled_idb.operation)) leaf_name_data.push_back(input_disabled_idb.get_name_leafdata());
    if (input_dvmrp.is_set || is_set(input_dvmrp.operation)) leaf_name_data.push_back(input_dvmrp.get_name_leafdata());
    if (input_leaves.is_set || is_set(input_leaves.operation)) leaf_name_data.push_back(input_leaves.get_name_leafdata());
    if (input_martian_address.is_set || is_set(input_martian_address.operation)) leaf_name_data.push_back(input_martian_address.get_name_leafdata());
    if (input_mtrace.is_set || is_set(input_mtrace.operation)) leaf_name_data.push_back(input_mtrace.get_name_leafdata());
    if (input_no_assigned_vrf_id.is_set || is_set(input_no_assigned_vrf_id.operation)) leaf_name_data.push_back(input_no_assigned_vrf_id.get_name_leafdata());
    if (input_no_idb.is_set || is_set(input_no_idb.operation)) leaf_name_data.push_back(input_no_idb.get_name_leafdata());
    if (input_no_platform_support_mtrace.is_set || is_set(input_no_platform_support_mtrace.operation)) leaf_name_data.push_back(input_no_platform_support_mtrace.get_name_leafdata());
    if (input_no_vrf_in_idb.is_set || is_set(input_no_vrf_in_idb.operation)) leaf_name_data.push_back(input_no_vrf_in_idb.get_name_leafdata());
    if (input_no_vrf_mtrace.is_set || is_set(input_no_vrf_mtrace.operation)) leaf_name_data.push_back(input_no_vrf_mtrace.get_name_leafdata());
    if (input_pim.is_set || is_set(input_pim.operation)) leaf_name_data.push_back(input_pim.get_name_leafdata());
    if (input_queries.is_set || is_set(input_queries.operation)) leaf_name_data.push_back(input_queries.get_name_leafdata());
    if (input_reports.is_set || is_set(input_reports.operation)) leaf_name_data.push_back(input_reports.get_name_leafdata());
    if (invalid_source_address_errors.is_set || is_set(invalid_source_address_errors.operation)) leaf_name_data.push_back(invalid_source_address_errors.get_name_leafdata());
    if (miscellaneous_errors.is_set || is_set(miscellaneous_errors.operation)) leaf_name_data.push_back(miscellaneous_errors.get_name_leafdata());
    if (no_socket_connection.is_set || is_set(no_socket_connection.operation)) leaf_name_data.push_back(no_socket_connection.get_name_leafdata());
    if (output_dvmrp.is_set || is_set(output_dvmrp.operation)) leaf_name_data.push_back(output_dvmrp.get_name_leafdata());
    if (output_leaves.is_set || is_set(output_leaves.operation)) leaf_name_data.push_back(output_leaves.get_name_leafdata());
    if (output_mtrace.is_set || is_set(output_mtrace.operation)) leaf_name_data.push_back(output_mtrace.get_name_leafdata());
    if (output_no_parent_interface_handle.is_set || is_set(output_no_parent_interface_handle.operation)) leaf_name_data.push_back(output_no_parent_interface_handle.get_name_leafdata());
    if (output_pim.is_set || is_set(output_pim.operation)) leaf_name_data.push_back(output_pim.get_name_leafdata());
    if (output_queries.is_set || is_set(output_queries.operation)) leaf_name_data.push_back(output_queries.get_name_leafdata());
    if (output_reports.is_set || is_set(output_reports.operation)) leaf_name_data.push_back(output_reports.get_name_leafdata());
    if (packet_manager_input_errors.is_set || is_set(packet_manager_input_errors.operation)) leaf_name_data.push_back(packet_manager_input_errors.get_name_leafdata());
    if (packet_manager_output_errors.is_set || is_set(packet_manager_output_errors.operation)) leaf_name_data.push_back(packet_manager_output_errors.get_name_leafdata());
    if (packets_in.is_set || is_set(packets_in.operation)) leaf_name_data.push_back(packets_in.get_name_leafdata());
    if (packets_out.is_set || is_set(packets_out.operation)) leaf_name_data.push_back(packets_out.get_name_leafdata());
    if (receive_socket_errors.is_set || is_set(receive_socket_errors.operation)) leaf_name_data.push_back(receive_socket_errors.get_name_leafdata());
    if (socket_errors.is_set || is_set(socket_errors.operation)) leaf_name_data.push_back(socket_errors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::TrafficCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::TrafficCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::TrafficCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auxillary-data-length-errors")
    {
        auxillary_data_length_errors = value;
    }
    if(value_path == "bad-scope-errors")
    {
        bad_scope_errors = value;
    }
    if(value_path == "checksum-errors")
    {
        checksum_errors = value;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
    }
    if(value_path == "format-errors")
    {
        format_errors = value;
    }
    if(value_path == "get-packet-failure")
    {
        get_packet_failure = value;
    }
    if(value_path == "input-disabled-idb")
    {
        input_disabled_idb = value;
    }
    if(value_path == "input-dvmrp")
    {
        input_dvmrp = value;
    }
    if(value_path == "input-leaves")
    {
        input_leaves = value;
    }
    if(value_path == "input-martian-address")
    {
        input_martian_address = value;
    }
    if(value_path == "input-mtrace")
    {
        input_mtrace = value;
    }
    if(value_path == "input-no-assigned-vrf-id")
    {
        input_no_assigned_vrf_id = value;
    }
    if(value_path == "input-no-idb")
    {
        input_no_idb = value;
    }
    if(value_path == "input-no-platform-support-mtrace")
    {
        input_no_platform_support_mtrace = value;
    }
    if(value_path == "input-no-vrf-in-idb")
    {
        input_no_vrf_in_idb = value;
    }
    if(value_path == "input-no-vrf-mtrace")
    {
        input_no_vrf_mtrace = value;
    }
    if(value_path == "input-pim")
    {
        input_pim = value;
    }
    if(value_path == "input-queries")
    {
        input_queries = value;
    }
    if(value_path == "input-reports")
    {
        input_reports = value;
    }
    if(value_path == "invalid-source-address-errors")
    {
        invalid_source_address_errors = value;
    }
    if(value_path == "miscellaneous-errors")
    {
        miscellaneous_errors = value;
    }
    if(value_path == "no-socket-connection")
    {
        no_socket_connection = value;
    }
    if(value_path == "output-dvmrp")
    {
        output_dvmrp = value;
    }
    if(value_path == "output-leaves")
    {
        output_leaves = value;
    }
    if(value_path == "output-mtrace")
    {
        output_mtrace = value;
    }
    if(value_path == "output-no-parent-interface-handle")
    {
        output_no_parent_interface_handle = value;
    }
    if(value_path == "output-pim")
    {
        output_pim = value;
    }
    if(value_path == "output-queries")
    {
        output_queries = value;
    }
    if(value_path == "output-reports")
    {
        output_reports = value;
    }
    if(value_path == "packet-manager-input-errors")
    {
        packet_manager_input_errors = value;
    }
    if(value_path == "packet-manager-output-errors")
    {
        packet_manager_output_errors = value;
    }
    if(value_path == "packets-in")
    {
        packets_in = value;
    }
    if(value_path == "packets-out")
    {
        packets_out = value;
    }
    if(value_path == "receive-socket-errors")
    {
        receive_socket_errors = value;
    }
    if(value_path == "socket-errors")
    {
        socket_errors = value;
    }
}

Igmp::Standby::Vrfs::Vrf::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "vrf";
}

Igmp::Standby::Vrfs::Vrf::Groups::~Groups()
{
}

bool Igmp::Standby::Vrfs::Vrf::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::Vrfs::Vrf::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::Vrfs::Vrf::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Groups' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Standby::Vrfs::Vrf::Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::Groups::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::Vrfs::Vrf::Groups::Group::Group()
    :
    expiration_time{YType::int32, "expiration-time"},
    explicit_tracking_enabled{YType::boolean, "explicit-tracking-enabled"},
    group_address{YType::str, "group-address"},
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_added{YType::boolean, "is-added"},
    is_low_memory{YType::boolean, "is-low-memory"},
    is_self_join{YType::boolean, "is-self-join"},
    is_suppressed{YType::boolean, "is-suppressed"},
    older_host_version1_timer{YType::uint32, "older-host-version1-timer"},
    older_host_version2_timer{YType::uint32, "older-host-version2-timer"},
    router_filter_mode{YType::uint8, "router-filter-mode"},
    row_status{YType::str, "row-status"},
    uptime{YType::uint64, "uptime"}
    	,
    group_address_xr(std::make_shared<Igmp::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr>())
	,last_reporter(std::make_shared<Igmp::Standby::Vrfs::Vrf::Groups::Group::LastReporter>())
	,source_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::Groups::Group::SourceAddress>())
{
    group_address_xr->parent = this;

    last_reporter->parent = this;

    source_address->parent = this;

    yang_name = "group"; yang_parent_name = "groups";
}

Igmp::Standby::Vrfs::Vrf::Groups::Group::~Group()
{
}

bool Igmp::Standby::Vrfs::Vrf::Groups::Group::has_data() const
{
    return expiration_time.is_set
	|| explicit_tracking_enabled.is_set
	|| group_address.is_set
	|| interface_name.is_set
	|| interface_name_xr.is_set
	|| is_added.is_set
	|| is_low_memory.is_set
	|| is_self_join.is_set
	|| is_suppressed.is_set
	|| older_host_version1_timer.is_set
	|| older_host_version2_timer.is_set
	|| router_filter_mode.is_set
	|| row_status.is_set
	|| uptime.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (last_reporter !=  nullptr && last_reporter->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Igmp::Standby::Vrfs::Vrf::Groups::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(explicit_tracking_enabled.operation)
	|| is_set(group_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_added.operation)
	|| is_set(is_low_memory.operation)
	|| is_set(is_self_join.operation)
	|| is_set(is_suppressed.operation)
	|| is_set(older_host_version1_timer.operation)
	|| is_set(older_host_version2_timer.operation)
	|| is_set(router_filter_mode.operation)
	|| is_set(row_status.operation)
	|| is_set(uptime.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (last_reporter !=  nullptr && last_reporter->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Igmp::Standby::Vrfs::Vrf::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::Groups::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Group' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (explicit_tracking_enabled.is_set || is_set(explicit_tracking_enabled.operation)) leaf_name_data.push_back(explicit_tracking_enabled.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.operation)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.operation)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (is_self_join.is_set || is_set(is_self_join.operation)) leaf_name_data.push_back(is_self_join.get_name_leafdata());
    if (is_suppressed.is_set || is_set(is_suppressed.operation)) leaf_name_data.push_back(is_suppressed.get_name_leafdata());
    if (older_host_version1_timer.is_set || is_set(older_host_version1_timer.operation)) leaf_name_data.push_back(older_host_version1_timer.get_name_leafdata());
    if (older_host_version2_timer.is_set || is_set(older_host_version2_timer.operation)) leaf_name_data.push_back(older_host_version2_timer.get_name_leafdata());
    if (router_filter_mode.is_set || is_set(router_filter_mode.operation)) leaf_name_data.push_back(router_filter_mode.get_name_leafdata());
    if (row_status.is_set || is_set(row_status.operation)) leaf_name_data.push_back(row_status.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Igmp::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "last-reporter")
    {
        if(last_reporter == nullptr)
        {
            last_reporter = std::make_shared<Igmp::Standby::Vrfs::Vrf::Groups::Group::LastReporter>();
        }
        return last_reporter;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::Groups::Group::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    if(last_reporter != nullptr)
    {
        children["last-reporter"] = last_reporter;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::Groups::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "explicit-tracking-enabled")
    {
        explicit_tracking_enabled = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-added")
    {
        is_added = value;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
    }
    if(value_path == "is-self-join")
    {
        is_self_join = value;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed = value;
    }
    if(value_path == "older-host-version1-timer")
    {
        older_host_version1_timer = value;
    }
    if(value_path == "older-host-version2-timer")
    {
        older_host_version2_timer = value;
    }
    if(value_path == "router-filter-mode")
    {
        router_filter_mode = value;
    }
    if(value_path == "row-status")
    {
        row_status = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Igmp::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "group";
}

Igmp::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr::~GroupAddressXr()
{
}

bool Igmp::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressXr' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::Groups::Group::LastReporter::LastReporter()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "last-reporter"; yang_parent_name = "group";
}

Igmp::Standby::Vrfs::Vrf::Groups::Group::LastReporter::~LastReporter()
{
}

bool Igmp::Standby::Vrfs::Vrf::Groups::Group::LastReporter::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::Groups::Group::LastReporter::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::Groups::Group::LastReporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reporter";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::Groups::Group::LastReporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastReporter' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::Groups::Group::LastReporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::Groups::Group::LastReporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::Groups::Group::LastReporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::Groups::Group::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "group";
}

Igmp::Standby::Vrfs::Vrf::Groups::Group::SourceAddress::~SourceAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::Groups::Group::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::Groups::Group::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::Groups::Group::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::Groups::Group::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::Groups::Group::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::Groups::Group::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::Groups::Group::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::GroupSummary::GroupSummary()
    :
    group_count{YType::uint32, "group-count"},
    groutes{YType::uint32, "groutes"},
    is_low_memory{YType::boolean, "is-low-memory"},
    sg_routes{YType::uint32, "sg-routes"}
{
    yang_name = "group-summary"; yang_parent_name = "vrf";
}

Igmp::Standby::Vrfs::Vrf::GroupSummary::~GroupSummary()
{
}

bool Igmp::Standby::Vrfs::Vrf::GroupSummary::has_data() const
{
    return group_count.is_set
	|| groutes.is_set
	|| is_low_memory.is_set
	|| sg_routes.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::GroupSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(group_count.operation)
	|| is_set(groutes.operation)
	|| is_set(is_low_memory.operation)
	|| is_set(sg_routes.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::GroupSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-summary";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::GroupSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupSummary' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (groutes.is_set || is_set(groutes.operation)) leaf_name_data.push_back(groutes.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.operation)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (sg_routes.is_set || is_set(sg_routes.operation)) leaf_name_data.push_back(sg_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::GroupSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::GroupSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::GroupSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "groutes")
    {
        groutes = value;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
    }
    if(value_path == "sg-routes")
    {
        sg_routes = value;
    }
}

Igmp::Standby::Vrfs::Vrf::IfrsInterfaceSummary::IfrsInterfaceSummary()
    :
    configuration_count{YType::uint32, "configuration-count"},
    interface_count{YType::uint32, "interface-count"}
{
    yang_name = "ifrs-interface-summary"; yang_parent_name = "vrf";
}

Igmp::Standby::Vrfs::Vrf::IfrsInterfaceSummary::~IfrsInterfaceSummary()
{
}

bool Igmp::Standby::Vrfs::Vrf::IfrsInterfaceSummary::has_data() const
{
    return configuration_count.is_set
	|| interface_count.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::IfrsInterfaceSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(configuration_count.operation)
	|| is_set(interface_count.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::IfrsInterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface-summary";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::IfrsInterfaceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IfrsInterfaceSummary' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configuration_count.is_set || is_set(configuration_count.operation)) leaf_name_data.push_back(configuration_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.operation)) leaf_name_data.push_back(interface_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::IfrsInterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::IfrsInterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Standby::Vrfs::Vrf::IfrsInterfaceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configuration-count")
    {
        configuration_count = value;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
    }
}

Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::GlobalInterfaceTable()
{
    yang_name = "global-interface-table"; yang_parent_name = "vrf";
}

Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::~GlobalInterfaceTable()
{
}

bool Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-interface-table";

    return path_buffer.str();

}

const EntityPath Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalInterfaceTable' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::set_value(const std::string & value_path, std::string value)
{
}


}
}

