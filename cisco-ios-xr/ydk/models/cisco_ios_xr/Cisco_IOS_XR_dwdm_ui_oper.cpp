
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_dwdm_ui_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_dwdm_ui_oper {

Dwdm::Dwdm()
    :
    ports(std::make_shared<Dwdm::Ports>())
{
    ports->parent = this;

    yang_name = "dwdm"; yang_parent_name = "Cisco-IOS-XR-dwdm-ui-oper";
}

Dwdm::~Dwdm()
{
}

bool Dwdm::has_data() const
{
    return (ports !=  nullptr && ports->has_data());
}

bool Dwdm::has_operation() const
{
    return is_set(operation)
	|| (ports !=  nullptr && ports->has_operation());
}

std::string Dwdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dwdm-ui-oper:dwdm";

    return path_buffer.str();

}

const EntityPath Dwdm::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Dwdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ports")
    {
        if(ports == nullptr)
        {
            ports = std::make_shared<Dwdm::Ports>();
        }
        return ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ports != nullptr)
    {
        children["ports"] = ports;
    }

    return children;
}

void Dwdm::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Dwdm::clone_ptr() const
{
    return std::make_shared<Dwdm>();
}

std::string Dwdm::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Dwdm::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Dwdm::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Dwdm::Ports::Ports()
{
    yang_name = "ports"; yang_parent_name = "dwdm";
}

Dwdm::Ports::~Ports()
{
}

bool Dwdm::Ports::has_data() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_data())
            return true;
    }
    return false;
}

bool Dwdm::Ports::has_operation() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Dwdm::Ports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ports";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-dwdm-ui-oper:dwdm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        for(auto const & c : port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dwdm::Ports::Port>();
        c->parent = this;
        port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dwdm::Ports::set_value(const std::string & value_path, std::string value)
{
}

Dwdm::Ports::Port::Port()
    :
    name{YType::str, "name"}
    	,
    info(std::make_shared<Dwdm::Ports::Port::Info>())
	,optics(std::make_shared<Dwdm::Ports::Port::Optics>())
	,prbs(std::make_shared<Dwdm::Ports::Port::Prbs>())
{
    info->parent = this;

    optics->parent = this;

    prbs->parent = this;

    yang_name = "port"; yang_parent_name = "ports";
}

Dwdm::Ports::Port::~Port()
{
}

bool Dwdm::Ports::Port::has_data() const
{
    return name.is_set
	|| (info !=  nullptr && info->has_data())
	|| (optics !=  nullptr && optics->has_data())
	|| (prbs !=  nullptr && prbs->has_data());
}

bool Dwdm::Ports::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (info !=  nullptr && info->has_operation())
	|| (optics !=  nullptr && optics->has_operation())
	|| (prbs !=  nullptr && prbs->has_operation());
}

std::string Dwdm::Ports::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-dwdm-ui-oper:dwdm/ports/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<Dwdm::Ports::Port::Info>();
        }
        return info;
    }

    if(child_yang_name == "optics")
    {
        if(optics == nullptr)
        {
            optics = std::make_shared<Dwdm::Ports::Port::Optics>();
        }
        return optics;
    }

    if(child_yang_name == "prbs")
    {
        if(prbs == nullptr)
        {
            prbs = std::make_shared<Dwdm::Ports::Port::Prbs>();
        }
        return prbs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(info != nullptr)
    {
        children["info"] = info;
    }

    if(optics != nullptr)
    {
        children["optics"] = optics;
    }

    if(prbs != nullptr)
    {
        children["prbs"] = prbs;
    }

    return children;
}

void Dwdm::Ports::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Dwdm::Ports::Port::Prbs::Prbs()
    :
    fifteen_minutes_bucket(std::make_shared<Dwdm::Ports::Port::Prbs::FifteenMinutesBucket>())
	,twenty_four_hours_bucket(std::make_shared<Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket>())
{
    fifteen_minutes_bucket->parent = this;

    twenty_four_hours_bucket->parent = this;

    yang_name = "prbs"; yang_parent_name = "port";
}

Dwdm::Ports::Port::Prbs::~Prbs()
{
}

bool Dwdm::Ports::Port::Prbs::has_data() const
{
    return (fifteen_minutes_bucket !=  nullptr && fifteen_minutes_bucket->has_data())
	|| (twenty_four_hours_bucket !=  nullptr && twenty_four_hours_bucket->has_data());
}

bool Dwdm::Ports::Port::Prbs::has_operation() const
{
    return is_set(operation)
	|| (fifteen_minutes_bucket !=  nullptr && fifteen_minutes_bucket->has_operation())
	|| (twenty_four_hours_bucket !=  nullptr && twenty_four_hours_bucket->has_operation());
}

std::string Dwdm::Ports::Port::Prbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Prbs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prbs' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Prbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fifteen-minutes-bucket")
    {
        if(fifteen_minutes_bucket == nullptr)
        {
            fifteen_minutes_bucket = std::make_shared<Dwdm::Ports::Port::Prbs::FifteenMinutesBucket>();
        }
        return fifteen_minutes_bucket;
    }

    if(child_yang_name == "twenty-four-hours-bucket")
    {
        if(twenty_four_hours_bucket == nullptr)
        {
            twenty_four_hours_bucket = std::make_shared<Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket>();
        }
        return twenty_four_hours_bucket;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Prbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fifteen_minutes_bucket != nullptr)
    {
        children["fifteen-minutes-bucket"] = fifteen_minutes_bucket;
    }

    if(twenty_four_hours_bucket != nullptr)
    {
        children["twenty-four-hours-bucket"] = twenty_four_hours_bucket;
    }

    return children;
}

void Dwdm::Ports::Port::Prbs::set_value(const std::string & value_path, std::string value)
{
}

Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursBucket()
    :
    twenty_four_hours_statistics(std::make_shared<Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics>())
{
    twenty_four_hours_statistics->parent = this;

    yang_name = "twenty-four-hours-bucket"; yang_parent_name = "prbs";
}

Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::~TwentyFourHoursBucket()
{
}

bool Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::has_data() const
{
    return (twenty_four_hours_statistics !=  nullptr && twenty_four_hours_statistics->has_data());
}

bool Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::has_operation() const
{
    return is_set(operation)
	|| (twenty_four_hours_statistics !=  nullptr && twenty_four_hours_statistics->has_operation());
}

std::string Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "twenty-four-hours-bucket";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwentyFourHoursBucket' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "twenty-four-hours-statistics")
    {
        if(twenty_four_hours_statistics == nullptr)
        {
            twenty_four_hours_statistics = std::make_shared<Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics>();
        }
        return twenty_four_hours_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(twenty_four_hours_statistics != nullptr)
    {
        children["twenty-four-hours-statistics"] = twenty_four_hours_statistics;
    }

    return children;
}

void Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::set_value(const std::string & value_path, std::string value)
{
}

Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::TwentyFourHoursStatistics()
    :
    is_prbs_enabled{YType::boolean, "is-prbs-enabled"},
    prbs_config_mode{YType::enumeration, "prbs-config-mode"}
{
    yang_name = "twenty-four-hours-statistics"; yang_parent_name = "twenty-four-hours-bucket";
}

Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::~TwentyFourHoursStatistics()
{
}

bool Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::has_data() const
{
    for (std::size_t index=0; index<prbs_entry.size(); index++)
    {
        if(prbs_entry[index]->has_data())
            return true;
    }
    return is_prbs_enabled.is_set
	|| prbs_config_mode.is_set;
}

bool Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::has_operation() const
{
    for (std::size_t index=0; index<prbs_entry.size(); index++)
    {
        if(prbs_entry[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(is_prbs_enabled.operation)
	|| is_set(prbs_config_mode.operation);
}

std::string Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "twenty-four-hours-statistics";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwentyFourHoursStatistics' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_prbs_enabled.is_set || is_set(is_prbs_enabled.operation)) leaf_name_data.push_back(is_prbs_enabled.get_name_leafdata());
    if (prbs_config_mode.is_set || is_set(prbs_config_mode.operation)) leaf_name_data.push_back(prbs_config_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prbs-entry")
    {
        for(auto const & c : prbs_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry>();
        c->parent = this;
        prbs_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prbs_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-prbs-enabled")
    {
        is_prbs_enabled = value;
    }
    if(value_path == "prbs-config-mode")
    {
        prbs_config_mode = value;
    }
}

Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry::PrbsEntry()
    :
    bit_error_count{YType::uint64, "bit-error-count"},
    configured_pattern{YType::enumeration, "configured-pattern"},
    found_at{YType::str, "found-at"},
    found_count{YType::uint64, "found-count"},
    interval_index{YType::enumeration, "interval-index"},
    lost_at{YType::str, "lost-at"},
    lost_count{YType::uint64, "lost-count"},
    received_pattern{YType::enumeration, "received-pattern"},
    start_at{YType::str, "start-at"},
    stop_at{YType::str, "stop-at"}
{
    yang_name = "prbs-entry"; yang_parent_name = "twenty-four-hours-statistics";
}

Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry::~PrbsEntry()
{
}

bool Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry::has_data() const
{
    return bit_error_count.is_set
	|| configured_pattern.is_set
	|| found_at.is_set
	|| found_count.is_set
	|| interval_index.is_set
	|| lost_at.is_set
	|| lost_count.is_set
	|| received_pattern.is_set
	|| start_at.is_set
	|| stop_at.is_set;
}

bool Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(bit_error_count.operation)
	|| is_set(configured_pattern.operation)
	|| is_set(found_at.operation)
	|| is_set(found_count.operation)
	|| is_set(interval_index.operation)
	|| is_set(lost_at.operation)
	|| is_set(lost_count.operation)
	|| is_set(received_pattern.operation)
	|| is_set(start_at.operation)
	|| is_set(stop_at.operation);
}

std::string Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs-entry";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrbsEntry' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_error_count.is_set || is_set(bit_error_count.operation)) leaf_name_data.push_back(bit_error_count.get_name_leafdata());
    if (configured_pattern.is_set || is_set(configured_pattern.operation)) leaf_name_data.push_back(configured_pattern.get_name_leafdata());
    if (found_at.is_set || is_set(found_at.operation)) leaf_name_data.push_back(found_at.get_name_leafdata());
    if (found_count.is_set || is_set(found_count.operation)) leaf_name_data.push_back(found_count.get_name_leafdata());
    if (interval_index.is_set || is_set(interval_index.operation)) leaf_name_data.push_back(interval_index.get_name_leafdata());
    if (lost_at.is_set || is_set(lost_at.operation)) leaf_name_data.push_back(lost_at.get_name_leafdata());
    if (lost_count.is_set || is_set(lost_count.operation)) leaf_name_data.push_back(lost_count.get_name_leafdata());
    if (received_pattern.is_set || is_set(received_pattern.operation)) leaf_name_data.push_back(received_pattern.get_name_leafdata());
    if (start_at.is_set || is_set(start_at.operation)) leaf_name_data.push_back(start_at.get_name_leafdata());
    if (stop_at.is_set || is_set(stop_at.operation)) leaf_name_data.push_back(stop_at.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-error-count")
    {
        bit_error_count = value;
    }
    if(value_path == "configured-pattern")
    {
        configured_pattern = value;
    }
    if(value_path == "found-at")
    {
        found_at = value;
    }
    if(value_path == "found-count")
    {
        found_count = value;
    }
    if(value_path == "interval-index")
    {
        interval_index = value;
    }
    if(value_path == "lost-at")
    {
        lost_at = value;
    }
    if(value_path == "lost-count")
    {
        lost_count = value;
    }
    if(value_path == "received-pattern")
    {
        received_pattern = value;
    }
    if(value_path == "start-at")
    {
        start_at = value;
    }
    if(value_path == "stop-at")
    {
        stop_at = value;
    }
}

Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesBucket()
    :
    fifteen_minutes_statistics(std::make_shared<Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics>())
{
    fifteen_minutes_statistics->parent = this;

    yang_name = "fifteen-minutes-bucket"; yang_parent_name = "prbs";
}

Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::~FifteenMinutesBucket()
{
}

bool Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::has_data() const
{
    return (fifteen_minutes_statistics !=  nullptr && fifteen_minutes_statistics->has_data());
}

bool Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::has_operation() const
{
    return is_set(operation)
	|| (fifteen_minutes_statistics !=  nullptr && fifteen_minutes_statistics->has_operation());
}

std::string Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fifteen-minutes-bucket";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FifteenMinutesBucket' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fifteen-minutes-statistics")
    {
        if(fifteen_minutes_statistics == nullptr)
        {
            fifteen_minutes_statistics = std::make_shared<Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics>();
        }
        return fifteen_minutes_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fifteen_minutes_statistics != nullptr)
    {
        children["fifteen-minutes-statistics"] = fifteen_minutes_statistics;
    }

    return children;
}

void Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::set_value(const std::string & value_path, std::string value)
{
}

Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::FifteenMinutesStatistics()
    :
    is_prbs_enabled{YType::boolean, "is-prbs-enabled"},
    prbs_config_mode{YType::enumeration, "prbs-config-mode"}
{
    yang_name = "fifteen-minutes-statistics"; yang_parent_name = "fifteen-minutes-bucket";
}

Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::~FifteenMinutesStatistics()
{
}

bool Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::has_data() const
{
    for (std::size_t index=0; index<prbs_entry.size(); index++)
    {
        if(prbs_entry[index]->has_data())
            return true;
    }
    return is_prbs_enabled.is_set
	|| prbs_config_mode.is_set;
}

bool Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::has_operation() const
{
    for (std::size_t index=0; index<prbs_entry.size(); index++)
    {
        if(prbs_entry[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(is_prbs_enabled.operation)
	|| is_set(prbs_config_mode.operation);
}

std::string Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fifteen-minutes-statistics";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FifteenMinutesStatistics' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_prbs_enabled.is_set || is_set(is_prbs_enabled.operation)) leaf_name_data.push_back(is_prbs_enabled.get_name_leafdata());
    if (prbs_config_mode.is_set || is_set(prbs_config_mode.operation)) leaf_name_data.push_back(prbs_config_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prbs-entry")
    {
        for(auto const & c : prbs_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry>();
        c->parent = this;
        prbs_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prbs_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-prbs-enabled")
    {
        is_prbs_enabled = value;
    }
    if(value_path == "prbs-config-mode")
    {
        prbs_config_mode = value;
    }
}

Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry::PrbsEntry()
    :
    bit_error_count{YType::uint64, "bit-error-count"},
    configured_pattern{YType::enumeration, "configured-pattern"},
    found_at{YType::str, "found-at"},
    found_count{YType::uint64, "found-count"},
    interval_index{YType::enumeration, "interval-index"},
    lost_at{YType::str, "lost-at"},
    lost_count{YType::uint64, "lost-count"},
    received_pattern{YType::enumeration, "received-pattern"},
    start_at{YType::str, "start-at"},
    stop_at{YType::str, "stop-at"}
{
    yang_name = "prbs-entry"; yang_parent_name = "fifteen-minutes-statistics";
}

Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry::~PrbsEntry()
{
}

bool Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry::has_data() const
{
    return bit_error_count.is_set
	|| configured_pattern.is_set
	|| found_at.is_set
	|| found_count.is_set
	|| interval_index.is_set
	|| lost_at.is_set
	|| lost_count.is_set
	|| received_pattern.is_set
	|| start_at.is_set
	|| stop_at.is_set;
}

bool Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(bit_error_count.operation)
	|| is_set(configured_pattern.operation)
	|| is_set(found_at.operation)
	|| is_set(found_count.operation)
	|| is_set(interval_index.operation)
	|| is_set(lost_at.operation)
	|| is_set(lost_count.operation)
	|| is_set(received_pattern.operation)
	|| is_set(start_at.operation)
	|| is_set(stop_at.operation);
}

std::string Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs-entry";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrbsEntry' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_error_count.is_set || is_set(bit_error_count.operation)) leaf_name_data.push_back(bit_error_count.get_name_leafdata());
    if (configured_pattern.is_set || is_set(configured_pattern.operation)) leaf_name_data.push_back(configured_pattern.get_name_leafdata());
    if (found_at.is_set || is_set(found_at.operation)) leaf_name_data.push_back(found_at.get_name_leafdata());
    if (found_count.is_set || is_set(found_count.operation)) leaf_name_data.push_back(found_count.get_name_leafdata());
    if (interval_index.is_set || is_set(interval_index.operation)) leaf_name_data.push_back(interval_index.get_name_leafdata());
    if (lost_at.is_set || is_set(lost_at.operation)) leaf_name_data.push_back(lost_at.get_name_leafdata());
    if (lost_count.is_set || is_set(lost_count.operation)) leaf_name_data.push_back(lost_count.get_name_leafdata());
    if (received_pattern.is_set || is_set(received_pattern.operation)) leaf_name_data.push_back(received_pattern.get_name_leafdata());
    if (start_at.is_set || is_set(start_at.operation)) leaf_name_data.push_back(start_at.get_name_leafdata());
    if (stop_at.is_set || is_set(stop_at.operation)) leaf_name_data.push_back(stop_at.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-error-count")
    {
        bit_error_count = value;
    }
    if(value_path == "configured-pattern")
    {
        configured_pattern = value;
    }
    if(value_path == "found-at")
    {
        found_at = value;
    }
    if(value_path == "found-count")
    {
        found_count = value;
    }
    if(value_path == "interval-index")
    {
        interval_index = value;
    }
    if(value_path == "lost-at")
    {
        lost_at = value;
    }
    if(value_path == "lost-count")
    {
        lost_count = value;
    }
    if(value_path == "received-pattern")
    {
        received_pattern = value;
    }
    if(value_path == "start-at")
    {
        start_at = value;
    }
    if(value_path == "stop-at")
    {
        stop_at = value;
    }
}

Dwdm::Ports::Port::Optics::Optics()
    :
    wave_info(std::make_shared<Dwdm::Ports::Port::Optics::WaveInfo>())
{
    wave_info->parent = this;

    yang_name = "optics"; yang_parent_name = "port";
}

Dwdm::Ports::Port::Optics::~Optics()
{
}

bool Dwdm::Ports::Port::Optics::has_data() const
{
    return (wave_info !=  nullptr && wave_info->has_data());
}

bool Dwdm::Ports::Port::Optics::has_operation() const
{
    return is_set(operation)
	|| (wave_info !=  nullptr && wave_info->has_operation());
}

std::string Dwdm::Ports::Port::Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Optics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Optics' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wave-info")
    {
        if(wave_info == nullptr)
        {
            wave_info = std::make_shared<Dwdm::Ports::Port::Optics::WaveInfo>();
        }
        return wave_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Optics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(wave_info != nullptr)
    {
        children["wave-info"] = wave_info;
    }

    return children;
}

void Dwdm::Ports::Port::Optics::set_value(const std::string & value_path, std::string value)
{
}

Dwdm::Ports::Port::Optics::WaveInfo::WaveInfo()
    :
    wave_band{YType::uint32, "wave-band"},
    wave_channel_max{YType::uint32, "wave-channel-max"},
    wave_channel_min{YType::uint32, "wave-channel-min"}
{
    yang_name = "wave-info"; yang_parent_name = "optics";
}

Dwdm::Ports::Port::Optics::WaveInfo::~WaveInfo()
{
}

bool Dwdm::Ports::Port::Optics::WaveInfo::has_data() const
{
    return wave_band.is_set
	|| wave_channel_max.is_set
	|| wave_channel_min.is_set;
}

bool Dwdm::Ports::Port::Optics::WaveInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(wave_band.operation)
	|| is_set(wave_channel_max.operation)
	|| is_set(wave_channel_min.operation);
}

std::string Dwdm::Ports::Port::Optics::WaveInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wave-info";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Optics::WaveInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WaveInfo' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wave_band.is_set || is_set(wave_band.operation)) leaf_name_data.push_back(wave_band.get_name_leafdata());
    if (wave_channel_max.is_set || is_set(wave_channel_max.operation)) leaf_name_data.push_back(wave_channel_max.get_name_leafdata());
    if (wave_channel_min.is_set || is_set(wave_channel_min.operation)) leaf_name_data.push_back(wave_channel_min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Optics::WaveInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Optics::WaveInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Optics::WaveInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "wave-band")
    {
        wave_band = value;
    }
    if(value_path == "wave-channel-max")
    {
        wave_channel_max = value;
    }
    if(value_path == "wave-channel-min")
    {
        wave_channel_min = value;
    }
}

Dwdm::Ports::Port::Info::Info()
    :
    controller_state{YType::enumeration, "controller-state"},
    slice_state{YType::boolean, "slice-state"},
    transport_admin_state{YType::enumeration, "transport-admin-state"}
    	,
    g709_info(std::make_shared<Dwdm::Ports::Port::Info::G709Info>())
	,network_srlg_info(std::make_shared<Dwdm::Ports::Port::Info::NetworkSrlgInfo>())
	,optics_info(std::make_shared<Dwdm::Ports::Port::Info::OpticsInfo>())
	,proactive(std::make_shared<Dwdm::Ports::Port::Info::Proactive>())
	,signal_log(std::make_shared<Dwdm::Ports::Port::Info::SignalLog>())
	,tdc_info(std::make_shared<Dwdm::Ports::Port::Info::TdcInfo>())
{
    g709_info->parent = this;

    network_srlg_info->parent = this;

    optics_info->parent = this;

    proactive->parent = this;

    signal_log->parent = this;

    tdc_info->parent = this;

    yang_name = "info"; yang_parent_name = "port";
}

Dwdm::Ports::Port::Info::~Info()
{
}

bool Dwdm::Ports::Port::Info::has_data() const
{
    return controller_state.is_set
	|| slice_state.is_set
	|| transport_admin_state.is_set
	|| (g709_info !=  nullptr && g709_info->has_data())
	|| (network_srlg_info !=  nullptr && network_srlg_info->has_data())
	|| (optics_info !=  nullptr && optics_info->has_data())
	|| (proactive !=  nullptr && proactive->has_data())
	|| (signal_log !=  nullptr && signal_log->has_data())
	|| (tdc_info !=  nullptr && tdc_info->has_data());
}

bool Dwdm::Ports::Port::Info::has_operation() const
{
    return is_set(operation)
	|| is_set(controller_state.operation)
	|| is_set(slice_state.operation)
	|| is_set(transport_admin_state.operation)
	|| (g709_info !=  nullptr && g709_info->has_operation())
	|| (network_srlg_info !=  nullptr && network_srlg_info->has_operation())
	|| (optics_info !=  nullptr && optics_info->has_operation())
	|| (proactive !=  nullptr && proactive->has_operation())
	|| (signal_log !=  nullptr && signal_log->has_operation())
	|| (tdc_info !=  nullptr && tdc_info->has_operation());
}

std::string Dwdm::Ports::Port::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Info' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_state.is_set || is_set(controller_state.operation)) leaf_name_data.push_back(controller_state.get_name_leafdata());
    if (slice_state.is_set || is_set(slice_state.operation)) leaf_name_data.push_back(slice_state.get_name_leafdata());
    if (transport_admin_state.is_set || is_set(transport_admin_state.operation)) leaf_name_data.push_back(transport_admin_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709-info")
    {
        if(g709_info == nullptr)
        {
            g709_info = std::make_shared<Dwdm::Ports::Port::Info::G709Info>();
        }
        return g709_info;
    }

    if(child_yang_name == "network-srlg-info")
    {
        if(network_srlg_info == nullptr)
        {
            network_srlg_info = std::make_shared<Dwdm::Ports::Port::Info::NetworkSrlgInfo>();
        }
        return network_srlg_info;
    }

    if(child_yang_name == "optics-info")
    {
        if(optics_info == nullptr)
        {
            optics_info = std::make_shared<Dwdm::Ports::Port::Info::OpticsInfo>();
        }
        return optics_info;
    }

    if(child_yang_name == "proactive")
    {
        if(proactive == nullptr)
        {
            proactive = std::make_shared<Dwdm::Ports::Port::Info::Proactive>();
        }
        return proactive;
    }

    if(child_yang_name == "signal-log")
    {
        if(signal_log == nullptr)
        {
            signal_log = std::make_shared<Dwdm::Ports::Port::Info::SignalLog>();
        }
        return signal_log;
    }

    if(child_yang_name == "tdc-info")
    {
        if(tdc_info == nullptr)
        {
            tdc_info = std::make_shared<Dwdm::Ports::Port::Info::TdcInfo>();
        }
        return tdc_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(g709_info != nullptr)
    {
        children["g709-info"] = g709_info;
    }

    if(network_srlg_info != nullptr)
    {
        children["network-srlg-info"] = network_srlg_info;
    }

    if(optics_info != nullptr)
    {
        children["optics-info"] = optics_info;
    }

    if(proactive != nullptr)
    {
        children["proactive"] = proactive;
    }

    if(signal_log != nullptr)
    {
        children["signal-log"] = signal_log;
    }

    if(tdc_info != nullptr)
    {
        children["tdc-info"] = tdc_info;
    }

    return children;
}

void Dwdm::Ports::Port::Info::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "controller-state")
    {
        controller_state = value;
    }
    if(value_path == "slice-state")
    {
        slice_state = value;
    }
    if(value_path == "transport-admin-state")
    {
        transport_admin_state = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::G709Info()
    :
    ec{YType::uint64, "ec"},
    ec_accum{YType::uint64, "ec-accum"},
    efec_mode{YType::enumeration, "efec-mode"},
    fe_cstr{YType::str, "fe-cstr"},
    fec_ber{YType::uint64, "fec-ber"},
    fec_ber_man{YType::int32, "fec-ber-man"},
    fec_mode{YType::int32, "fec-mode"},
    g709_prbs_mode{YType::enumeration, "g709-prbs-mode"},
    g709_prbs_pattern{YType::enumeration, "g709-prbs-pattern"},
    is_fec_mode_default{YType::boolean, "is-fec-mode-default"},
    is_g709_enabled{YType::boolean, "is-g709-enabled"},
    is_prbs_enabled{YType::boolean, "is-prbs-enabled"},
    loopback_mode{YType::int32, "loopback-mode"},
    network_conn_id{YType::str, "network-conn-id"},
    network_port_id{YType::str, "network-port-id"},
    prbs_time_stamp{YType::uint64, "prbs-time-stamp"},
    q{YType::uint64, "q"},
    q_margin{YType::uint64, "q-margin"},
    qmargin_str{YType::str, "qmargin-str"},
    qstr{YType::str, "qstr"},
    remote_fec_mode{YType::int32, "remote-fec-mode"},
    uc{YType::uint64, "uc"}
    	,
    ec_tca(std::make_shared<Dwdm::Ports::Port::Info::G709Info::EcTca>())
	,fec_mismatch(std::make_shared<Dwdm::Ports::Port::Info::G709Info::FecMismatch>())
	,odu_info(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo>())
	,otu_info(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo>())
	,uc_tca(std::make_shared<Dwdm::Ports::Port::Info::G709Info::UcTca>())
{
    ec_tca->parent = this;

    fec_mismatch->parent = this;

    odu_info->parent = this;

    otu_info->parent = this;

    uc_tca->parent = this;

    yang_name = "g709-info"; yang_parent_name = "info";
}

Dwdm::Ports::Port::Info::G709Info::~G709Info()
{
}

bool Dwdm::Ports::Port::Info::G709Info::has_data() const
{
    return ec.is_set
	|| ec_accum.is_set
	|| efec_mode.is_set
	|| fe_cstr.is_set
	|| fec_ber.is_set
	|| fec_ber_man.is_set
	|| fec_mode.is_set
	|| g709_prbs_mode.is_set
	|| g709_prbs_pattern.is_set
	|| is_fec_mode_default.is_set
	|| is_g709_enabled.is_set
	|| is_prbs_enabled.is_set
	|| loopback_mode.is_set
	|| network_conn_id.is_set
	|| network_port_id.is_set
	|| prbs_time_stamp.is_set
	|| q.is_set
	|| q_margin.is_set
	|| qmargin_str.is_set
	|| qstr.is_set
	|| remote_fec_mode.is_set
	|| uc.is_set
	|| (ec_tca !=  nullptr && ec_tca->has_data())
	|| (fec_mismatch !=  nullptr && fec_mismatch->has_data())
	|| (odu_info !=  nullptr && odu_info->has_data())
	|| (otu_info !=  nullptr && otu_info->has_data())
	|| (uc_tca !=  nullptr && uc_tca->has_data());
}

bool Dwdm::Ports::Port::Info::G709Info::has_operation() const
{
    return is_set(operation)
	|| is_set(ec.operation)
	|| is_set(ec_accum.operation)
	|| is_set(efec_mode.operation)
	|| is_set(fe_cstr.operation)
	|| is_set(fec_ber.operation)
	|| is_set(fec_ber_man.operation)
	|| is_set(fec_mode.operation)
	|| is_set(g709_prbs_mode.operation)
	|| is_set(g709_prbs_pattern.operation)
	|| is_set(is_fec_mode_default.operation)
	|| is_set(is_g709_enabled.operation)
	|| is_set(is_prbs_enabled.operation)
	|| is_set(loopback_mode.operation)
	|| is_set(network_conn_id.operation)
	|| is_set(network_port_id.operation)
	|| is_set(prbs_time_stamp.operation)
	|| is_set(q.operation)
	|| is_set(q_margin.operation)
	|| is_set(qmargin_str.operation)
	|| is_set(qstr.operation)
	|| is_set(remote_fec_mode.operation)
	|| is_set(uc.operation)
	|| (ec_tca !=  nullptr && ec_tca->has_operation())
	|| (fec_mismatch !=  nullptr && fec_mismatch->has_operation())
	|| (odu_info !=  nullptr && odu_info->has_operation())
	|| (otu_info !=  nullptr && otu_info->has_operation())
	|| (uc_tca !=  nullptr && uc_tca->has_operation());
}

std::string Dwdm::Ports::Port::Info::G709Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709-info";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'G709Info' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ec.is_set || is_set(ec.operation)) leaf_name_data.push_back(ec.get_name_leafdata());
    if (ec_accum.is_set || is_set(ec_accum.operation)) leaf_name_data.push_back(ec_accum.get_name_leafdata());
    if (efec_mode.is_set || is_set(efec_mode.operation)) leaf_name_data.push_back(efec_mode.get_name_leafdata());
    if (fe_cstr.is_set || is_set(fe_cstr.operation)) leaf_name_data.push_back(fe_cstr.get_name_leafdata());
    if (fec_ber.is_set || is_set(fec_ber.operation)) leaf_name_data.push_back(fec_ber.get_name_leafdata());
    if (fec_ber_man.is_set || is_set(fec_ber_man.operation)) leaf_name_data.push_back(fec_ber_man.get_name_leafdata());
    if (fec_mode.is_set || is_set(fec_mode.operation)) leaf_name_data.push_back(fec_mode.get_name_leafdata());
    if (g709_prbs_mode.is_set || is_set(g709_prbs_mode.operation)) leaf_name_data.push_back(g709_prbs_mode.get_name_leafdata());
    if (g709_prbs_pattern.is_set || is_set(g709_prbs_pattern.operation)) leaf_name_data.push_back(g709_prbs_pattern.get_name_leafdata());
    if (is_fec_mode_default.is_set || is_set(is_fec_mode_default.operation)) leaf_name_data.push_back(is_fec_mode_default.get_name_leafdata());
    if (is_g709_enabled.is_set || is_set(is_g709_enabled.operation)) leaf_name_data.push_back(is_g709_enabled.get_name_leafdata());
    if (is_prbs_enabled.is_set || is_set(is_prbs_enabled.operation)) leaf_name_data.push_back(is_prbs_enabled.get_name_leafdata());
    if (loopback_mode.is_set || is_set(loopback_mode.operation)) leaf_name_data.push_back(loopback_mode.get_name_leafdata());
    if (network_conn_id.is_set || is_set(network_conn_id.operation)) leaf_name_data.push_back(network_conn_id.get_name_leafdata());
    if (network_port_id.is_set || is_set(network_port_id.operation)) leaf_name_data.push_back(network_port_id.get_name_leafdata());
    if (prbs_time_stamp.is_set || is_set(prbs_time_stamp.operation)) leaf_name_data.push_back(prbs_time_stamp.get_name_leafdata());
    if (q.is_set || is_set(q.operation)) leaf_name_data.push_back(q.get_name_leafdata());
    if (q_margin.is_set || is_set(q_margin.operation)) leaf_name_data.push_back(q_margin.get_name_leafdata());
    if (qmargin_str.is_set || is_set(qmargin_str.operation)) leaf_name_data.push_back(qmargin_str.get_name_leafdata());
    if (qstr.is_set || is_set(qstr.operation)) leaf_name_data.push_back(qstr.get_name_leafdata());
    if (remote_fec_mode.is_set || is_set(remote_fec_mode.operation)) leaf_name_data.push_back(remote_fec_mode.get_name_leafdata());
    if (uc.is_set || is_set(uc.operation)) leaf_name_data.push_back(uc.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-tca")
    {
        if(ec_tca == nullptr)
        {
            ec_tca = std::make_shared<Dwdm::Ports::Port::Info::G709Info::EcTca>();
        }
        return ec_tca;
    }

    if(child_yang_name == "fec-mismatch")
    {
        if(fec_mismatch == nullptr)
        {
            fec_mismatch = std::make_shared<Dwdm::Ports::Port::Info::G709Info::FecMismatch>();
        }
        return fec_mismatch;
    }

    if(child_yang_name == "odu-info")
    {
        if(odu_info == nullptr)
        {
            odu_info = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo>();
        }
        return odu_info;
    }

    if(child_yang_name == "otu-info")
    {
        if(otu_info == nullptr)
        {
            otu_info = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo>();
        }
        return otu_info;
    }

    if(child_yang_name == "uc-tca")
    {
        if(uc_tca == nullptr)
        {
            uc_tca = std::make_shared<Dwdm::Ports::Port::Info::G709Info::UcTca>();
        }
        return uc_tca;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ec_tca != nullptr)
    {
        children["ec-tca"] = ec_tca;
    }

    if(fec_mismatch != nullptr)
    {
        children["fec-mismatch"] = fec_mismatch;
    }

    if(odu_info != nullptr)
    {
        children["odu-info"] = odu_info;
    }

    if(otu_info != nullptr)
    {
        children["otu-info"] = otu_info;
    }

    if(uc_tca != nullptr)
    {
        children["uc-tca"] = uc_tca;
    }

    return children;
}

void Dwdm::Ports::Port::Info::G709Info::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ec")
    {
        ec = value;
    }
    if(value_path == "ec-accum")
    {
        ec_accum = value;
    }
    if(value_path == "efec-mode")
    {
        efec_mode = value;
    }
    if(value_path == "fe-cstr")
    {
        fe_cstr = value;
    }
    if(value_path == "fec-ber")
    {
        fec_ber = value;
    }
    if(value_path == "fec-ber-man")
    {
        fec_ber_man = value;
    }
    if(value_path == "fec-mode")
    {
        fec_mode = value;
    }
    if(value_path == "g709-prbs-mode")
    {
        g709_prbs_mode = value;
    }
    if(value_path == "g709-prbs-pattern")
    {
        g709_prbs_pattern = value;
    }
    if(value_path == "is-fec-mode-default")
    {
        is_fec_mode_default = value;
    }
    if(value_path == "is-g709-enabled")
    {
        is_g709_enabled = value;
    }
    if(value_path == "is-prbs-enabled")
    {
        is_prbs_enabled = value;
    }
    if(value_path == "loopback-mode")
    {
        loopback_mode = value;
    }
    if(value_path == "network-conn-id")
    {
        network_conn_id = value;
    }
    if(value_path == "network-port-id")
    {
        network_port_id = value;
    }
    if(value_path == "prbs-time-stamp")
    {
        prbs_time_stamp = value;
    }
    if(value_path == "q")
    {
        q = value;
    }
    if(value_path == "q-margin")
    {
        q_margin = value;
    }
    if(value_path == "qmargin-str")
    {
        qmargin_str = value;
    }
    if(value_path == "qstr")
    {
        qstr = value;
    }
    if(value_path == "remote-fec-mode")
    {
        remote_fec_mode = value;
    }
    if(value_path == "uc")
    {
        uc = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::FecMismatch::FecMismatch()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "fec-mismatch"; yang_parent_name = "g709-info";
}

Dwdm::Ports::Port::Info::G709Info::FecMismatch::~FecMismatch()
{
}

bool Dwdm::Ports::Port::Info::G709Info::FecMismatch::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::FecMismatch::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::FecMismatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-mismatch";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::FecMismatch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FecMismatch' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::FecMismatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::FecMismatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::FecMismatch::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::EcTca::EcTca()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{
    yang_name = "ec-tca"; yang_parent_name = "g709-info";
}

Dwdm::Ports::Port::Info::G709Info::EcTca::~EcTca()
{
}

bool Dwdm::Ports::Port::Info::G709Info::EcTca::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::EcTca::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::EcTca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-tca";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::EcTca::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EcTca' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::EcTca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::EcTca::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::EcTca::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::UcTca::UcTca()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{
    yang_name = "uc-tca"; yang_parent_name = "g709-info";
}

Dwdm::Ports::Port::Info::G709Info::UcTca::~UcTca()
{
}

bool Dwdm::Ports::Port::Info::G709Info::UcTca::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::UcTca::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::UcTca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-tca";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::UcTca::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UcTca' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::UcTca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::UcTca::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::UcTca::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::OtuInfo()
    :
    bei{YType::uint64, "bei"},
    bip{YType::uint64, "bip"}
    	,
    ais(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais>())
	,bbe(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe>())
	,bbe_tca(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca>())
	,bber(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber>())
	,bdi(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi>())
	,eoc(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc>())
	,es(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es>())
	,es_tca(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca>())
	,esr(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr>())
	,fc(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc>())
	,iae(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae>())
	,lof(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof>())
	,lom(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom>())
	,los(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los>())
	,oof(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof>())
	,oom(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom>())
	,prefec_sd_ber(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer>())
	,prefec_sf_ber(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer>())
	,sd_ber(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer>())
	,ses(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses>())
	,sesr(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr>())
	,sf_ber(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer>())
	,tim(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim>())
	,tti(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti>())
	,uas(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas>())
{
    ais->parent = this;

    bbe->parent = this;

    bbe_tca->parent = this;

    bber->parent = this;

    bdi->parent = this;

    eoc->parent = this;

    es->parent = this;

    es_tca->parent = this;

    esr->parent = this;

    fc->parent = this;

    iae->parent = this;

    lof->parent = this;

    lom->parent = this;

    los->parent = this;

    oof->parent = this;

    oom->parent = this;

    prefec_sd_ber->parent = this;

    prefec_sf_ber->parent = this;

    sd_ber->parent = this;

    ses->parent = this;

    sesr->parent = this;

    sf_ber->parent = this;

    tim->parent = this;

    tti->parent = this;

    uas->parent = this;

    yang_name = "otu-info"; yang_parent_name = "g709-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::~OtuInfo()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::has_data() const
{
    return bei.is_set
	|| bip.is_set
	|| (ais !=  nullptr && ais->has_data())
	|| (bbe !=  nullptr && bbe->has_data())
	|| (bbe_tca !=  nullptr && bbe_tca->has_data())
	|| (bber !=  nullptr && bber->has_data())
	|| (bdi !=  nullptr && bdi->has_data())
	|| (eoc !=  nullptr && eoc->has_data())
	|| (es !=  nullptr && es->has_data())
	|| (es_tca !=  nullptr && es_tca->has_data())
	|| (esr !=  nullptr && esr->has_data())
	|| (fc !=  nullptr && fc->has_data())
	|| (iae !=  nullptr && iae->has_data())
	|| (lof !=  nullptr && lof->has_data())
	|| (lom !=  nullptr && lom->has_data())
	|| (los !=  nullptr && los->has_data())
	|| (oof !=  nullptr && oof->has_data())
	|| (oom !=  nullptr && oom->has_data())
	|| (prefec_sd_ber !=  nullptr && prefec_sd_ber->has_data())
	|| (prefec_sf_ber !=  nullptr && prefec_sf_ber->has_data())
	|| (sd_ber !=  nullptr && sd_ber->has_data())
	|| (ses !=  nullptr && ses->has_data())
	|| (sesr !=  nullptr && sesr->has_data())
	|| (sf_ber !=  nullptr && sf_ber->has_data())
	|| (tim !=  nullptr && tim->has_data())
	|| (tti !=  nullptr && tti->has_data())
	|| (uas !=  nullptr && uas->has_data());
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bei.operation)
	|| is_set(bip.operation)
	|| (ais !=  nullptr && ais->has_operation())
	|| (bbe !=  nullptr && bbe->has_operation())
	|| (bbe_tca !=  nullptr && bbe_tca->has_operation())
	|| (bber !=  nullptr && bber->has_operation())
	|| (bdi !=  nullptr && bdi->has_operation())
	|| (eoc !=  nullptr && eoc->has_operation())
	|| (es !=  nullptr && es->has_operation())
	|| (es_tca !=  nullptr && es_tca->has_operation())
	|| (esr !=  nullptr && esr->has_operation())
	|| (fc !=  nullptr && fc->has_operation())
	|| (iae !=  nullptr && iae->has_operation())
	|| (lof !=  nullptr && lof->has_operation())
	|| (lom !=  nullptr && lom->has_operation())
	|| (los !=  nullptr && los->has_operation())
	|| (oof !=  nullptr && oof->has_operation())
	|| (oom !=  nullptr && oom->has_operation())
	|| (prefec_sd_ber !=  nullptr && prefec_sd_ber->has_operation())
	|| (prefec_sf_ber !=  nullptr && prefec_sf_ber->has_operation())
	|| (sd_ber !=  nullptr && sd_ber->has_operation())
	|| (ses !=  nullptr && ses->has_operation())
	|| (sesr !=  nullptr && sesr->has_operation())
	|| (sf_ber !=  nullptr && sf_ber->has_operation())
	|| (tim !=  nullptr && tim->has_operation())
	|| (tti !=  nullptr && tti->has_operation())
	|| (uas !=  nullptr && uas->has_operation());
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-info";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuInfo' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bei.is_set || is_set(bei.operation)) leaf_name_data.push_back(bei.get_name_leafdata());
    if (bip.is_set || is_set(bip.operation)) leaf_name_data.push_back(bip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ais")
    {
        if(ais == nullptr)
        {
            ais = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais>();
        }
        return ais;
    }

    if(child_yang_name == "bbe")
    {
        if(bbe == nullptr)
        {
            bbe = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe>();
        }
        return bbe;
    }

    if(child_yang_name == "bbe-tca")
    {
        if(bbe_tca == nullptr)
        {
            bbe_tca = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca>();
        }
        return bbe_tca;
    }

    if(child_yang_name == "bber")
    {
        if(bber == nullptr)
        {
            bber = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber>();
        }
        return bber;
    }

    if(child_yang_name == "bdi")
    {
        if(bdi == nullptr)
        {
            bdi = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi>();
        }
        return bdi;
    }

    if(child_yang_name == "eoc")
    {
        if(eoc == nullptr)
        {
            eoc = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc>();
        }
        return eoc;
    }

    if(child_yang_name == "es")
    {
        if(es == nullptr)
        {
            es = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es>();
        }
        return es;
    }

    if(child_yang_name == "es-tca")
    {
        if(es_tca == nullptr)
        {
            es_tca = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca>();
        }
        return es_tca;
    }

    if(child_yang_name == "esr")
    {
        if(esr == nullptr)
        {
            esr = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr>();
        }
        return esr;
    }

    if(child_yang_name == "fc")
    {
        if(fc == nullptr)
        {
            fc = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc>();
        }
        return fc;
    }

    if(child_yang_name == "iae")
    {
        if(iae == nullptr)
        {
            iae = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae>();
        }
        return iae;
    }

    if(child_yang_name == "lof")
    {
        if(lof == nullptr)
        {
            lof = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof>();
        }
        return lof;
    }

    if(child_yang_name == "lom")
    {
        if(lom == nullptr)
        {
            lom = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom>();
        }
        return lom;
    }

    if(child_yang_name == "los")
    {
        if(los == nullptr)
        {
            los = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los>();
        }
        return los;
    }

    if(child_yang_name == "oof")
    {
        if(oof == nullptr)
        {
            oof = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof>();
        }
        return oof;
    }

    if(child_yang_name == "oom")
    {
        if(oom == nullptr)
        {
            oom = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom>();
        }
        return oom;
    }

    if(child_yang_name == "prefec-sd-ber")
    {
        if(prefec_sd_ber == nullptr)
        {
            prefec_sd_ber = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer>();
        }
        return prefec_sd_ber;
    }

    if(child_yang_name == "prefec-sf-ber")
    {
        if(prefec_sf_ber == nullptr)
        {
            prefec_sf_ber = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer>();
        }
        return prefec_sf_ber;
    }

    if(child_yang_name == "sd-ber")
    {
        if(sd_ber == nullptr)
        {
            sd_ber = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer>();
        }
        return sd_ber;
    }

    if(child_yang_name == "ses")
    {
        if(ses == nullptr)
        {
            ses = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses>();
        }
        return ses;
    }

    if(child_yang_name == "sesr")
    {
        if(sesr == nullptr)
        {
            sesr = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr>();
        }
        return sesr;
    }

    if(child_yang_name == "sf-ber")
    {
        if(sf_ber == nullptr)
        {
            sf_ber = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer>();
        }
        return sf_ber;
    }

    if(child_yang_name == "tim")
    {
        if(tim == nullptr)
        {
            tim = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim>();
        }
        return tim;
    }

    if(child_yang_name == "tti")
    {
        if(tti == nullptr)
        {
            tti = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti>();
        }
        return tti;
    }

    if(child_yang_name == "uas")
    {
        if(uas == nullptr)
        {
            uas = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas>();
        }
        return uas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ais != nullptr)
    {
        children["ais"] = ais;
    }

    if(bbe != nullptr)
    {
        children["bbe"] = bbe;
    }

    if(bbe_tca != nullptr)
    {
        children["bbe-tca"] = bbe_tca;
    }

    if(bber != nullptr)
    {
        children["bber"] = bber;
    }

    if(bdi != nullptr)
    {
        children["bdi"] = bdi;
    }

    if(eoc != nullptr)
    {
        children["eoc"] = eoc;
    }

    if(es != nullptr)
    {
        children["es"] = es;
    }

    if(es_tca != nullptr)
    {
        children["es-tca"] = es_tca;
    }

    if(esr != nullptr)
    {
        children["esr"] = esr;
    }

    if(fc != nullptr)
    {
        children["fc"] = fc;
    }

    if(iae != nullptr)
    {
        children["iae"] = iae;
    }

    if(lof != nullptr)
    {
        children["lof"] = lof;
    }

    if(lom != nullptr)
    {
        children["lom"] = lom;
    }

    if(los != nullptr)
    {
        children["los"] = los;
    }

    if(oof != nullptr)
    {
        children["oof"] = oof;
    }

    if(oom != nullptr)
    {
        children["oom"] = oom;
    }

    if(prefec_sd_ber != nullptr)
    {
        children["prefec-sd-ber"] = prefec_sd_ber;
    }

    if(prefec_sf_ber != nullptr)
    {
        children["prefec-sf-ber"] = prefec_sf_ber;
    }

    if(sd_ber != nullptr)
    {
        children["sd-ber"] = sd_ber;
    }

    if(ses != nullptr)
    {
        children["ses"] = ses;
    }

    if(sesr != nullptr)
    {
        children["sesr"] = sesr;
    }

    if(sf_ber != nullptr)
    {
        children["sf-ber"] = sf_ber;
    }

    if(tim != nullptr)
    {
        children["tim"] = tim;
    }

    if(tti != nullptr)
    {
        children["tti"] = tti;
    }

    if(uas != nullptr)
    {
        children["uas"] = uas;
    }

    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bei")
    {
        bei = value;
    }
    if(value_path == "bip")
    {
        bip = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los::Los()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "los"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los::~Los()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "los";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Los' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof::Lof()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "lof"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof::~Lof()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lof";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lof' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom::Lom()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "lom"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom::~Lom()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lom";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lom' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof::Oof()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "oof"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof::~Oof()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oof";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Oof' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom::Oom()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "oom"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom::~Oom()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oom";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Oom' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais::Ais()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "ais"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais::~Ais()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ais";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ais' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae::Iae()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "iae"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae::~Iae()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iae";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Iae' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi::Bdi()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "bdi"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi::~Bdi()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdi";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bdi' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim::Tim()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "tim"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim::~Tim()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tim";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tim' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc::Eoc()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "eoc"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc::~Eoc()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eoc";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eoc' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer::SfBer()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{
    yang_name = "sf-ber"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer::~SfBer()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf-ber";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SfBer' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer::SdBer()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{
    yang_name = "sd-ber"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer::~SdBer()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sd-ber";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SdBer' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer::PrefecSfBer()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{
    yang_name = "prefec-sf-ber"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer::~PrefecSfBer()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefec-sf-ber";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefecSfBer' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer::PrefecSdBer()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{
    yang_name = "prefec-sd-ber"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer::~PrefecSdBer()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefec-sd-ber";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefecSdBer' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca::BbeTca()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{
    yang_name = "bbe-tca"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca::~BbeTca()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-tca";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BbeTca' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca::EsTca()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{
    yang_name = "es-tca"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca::~EsTca()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-tca";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsTca' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe::Bbe()
    :
    counter{YType::uint64, "counter"}
{
    yang_name = "bbe"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe::~Bbe()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bbe' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es::Es()
    :
    counter{YType::uint64, "counter"}
{
    yang_name = "es"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es::~Es()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Es' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses::Ses()
    :
    counter{YType::uint64, "counter"}
{
    yang_name = "ses"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses::~Ses()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ses' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas::Uas()
    :
    counter{YType::uint64, "counter"}
{
    yang_name = "uas"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas::~Uas()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uas' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc::Fc()
    :
    counter{YType::uint64, "counter"}
{
    yang_name = "fc"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc::~Fc()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fc' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber::Bber()
    :
    counter{YType::uint64, "counter"}
{
    yang_name = "bber"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber::~Bber()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bber' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr::Esr()
    :
    counter{YType::uint64, "counter"}
{
    yang_name = "esr"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr::~Esr()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Esr' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr::Sesr()
    :
    counter{YType::uint64, "counter"}
{
    yang_name = "sesr"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr::~Sesr()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sesr' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti::Tti()
    :
    exp_dapi_range{YType::str, "exp-dapi-range"},
    exp_oper_spec_range{YType::str, "exp-oper-spec-range"},
    exp_sapi_range{YType::str, "exp-sapi-range"},
    expected_dapi{YType::str, "expected-dapi"},
    expected_dapi0{YType::str, "expected-dapi0"},
    expected_oper_spec{YType::str, "expected-oper-spec"},
    expected_sapi{YType::str, "expected-sapi"},
    expected_sapi0{YType::str, "expected-sapi0"},
    expected_string_type{YType::uint32, "expected-string-type"},
    expected_tti{YType::str, "expected-tti"},
    rx_dapi{YType::str, "rx-dapi"},
    rx_dapi0{YType::str, "rx-dapi0"},
    rx_dapi_range{YType::str, "rx-dapi-range"},
    rx_oper_spec{YType::str, "rx-oper-spec"},
    rx_oper_spec_range{YType::str, "rx-oper-spec-range"},
    rx_sapi{YType::str, "rx-sapi"},
    rx_sapi0{YType::str, "rx-sapi0"},
    rx_sapi_range{YType::str, "rx-sapi-range"},
    rx_string_type{YType::uint32, "rx-string-type"},
    rx_tti{YType::str, "rx-tti"},
    tx_dapi{YType::str, "tx-dapi"},
    tx_dapi0{YType::str, "tx-dapi0"},
    tx_dapi_range{YType::str, "tx-dapi-range"},
    tx_oper_spec{YType::str, "tx-oper-spec"},
    tx_oper_spec_range{YType::str, "tx-oper-spec-range"},
    tx_sapi{YType::str, "tx-sapi"},
    tx_sapi0{YType::str, "tx-sapi0"},
    tx_sapi_range{YType::str, "tx-sapi-range"},
    tx_string_type{YType::uint32, "tx-string-type"},
    tx_tti{YType::str, "tx-tti"}
{
    yang_name = "tti"; yang_parent_name = "otu-info";
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti::~Tti()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti::has_data() const
{
    return exp_dapi_range.is_set
	|| exp_oper_spec_range.is_set
	|| exp_sapi_range.is_set
	|| expected_dapi.is_set
	|| expected_dapi0.is_set
	|| expected_oper_spec.is_set
	|| expected_sapi.is_set
	|| expected_sapi0.is_set
	|| expected_string_type.is_set
	|| expected_tti.is_set
	|| rx_dapi.is_set
	|| rx_dapi0.is_set
	|| rx_dapi_range.is_set
	|| rx_oper_spec.is_set
	|| rx_oper_spec_range.is_set
	|| rx_sapi.is_set
	|| rx_sapi0.is_set
	|| rx_sapi_range.is_set
	|| rx_string_type.is_set
	|| rx_tti.is_set
	|| tx_dapi.is_set
	|| tx_dapi0.is_set
	|| tx_dapi_range.is_set
	|| tx_oper_spec.is_set
	|| tx_oper_spec_range.is_set
	|| tx_sapi.is_set
	|| tx_sapi0.is_set
	|| tx_sapi_range.is_set
	|| tx_string_type.is_set
	|| tx_tti.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti::has_operation() const
{
    return is_set(operation)
	|| is_set(exp_dapi_range.operation)
	|| is_set(exp_oper_spec_range.operation)
	|| is_set(exp_sapi_range.operation)
	|| is_set(expected_dapi.operation)
	|| is_set(expected_dapi0.operation)
	|| is_set(expected_oper_spec.operation)
	|| is_set(expected_sapi.operation)
	|| is_set(expected_sapi0.operation)
	|| is_set(expected_string_type.operation)
	|| is_set(expected_tti.operation)
	|| is_set(rx_dapi.operation)
	|| is_set(rx_dapi0.operation)
	|| is_set(rx_dapi_range.operation)
	|| is_set(rx_oper_spec.operation)
	|| is_set(rx_oper_spec_range.operation)
	|| is_set(rx_sapi.operation)
	|| is_set(rx_sapi0.operation)
	|| is_set(rx_sapi_range.operation)
	|| is_set(rx_string_type.operation)
	|| is_set(rx_tti.operation)
	|| is_set(tx_dapi.operation)
	|| is_set(tx_dapi0.operation)
	|| is_set(tx_dapi_range.operation)
	|| is_set(tx_oper_spec.operation)
	|| is_set(tx_oper_spec_range.operation)
	|| is_set(tx_sapi.operation)
	|| is_set(tx_sapi0.operation)
	|| is_set(tx_sapi_range.operation)
	|| is_set(tx_string_type.operation)
	|| is_set(tx_tti.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tti";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tti' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp_dapi_range.is_set || is_set(exp_dapi_range.operation)) leaf_name_data.push_back(exp_dapi_range.get_name_leafdata());
    if (exp_oper_spec_range.is_set || is_set(exp_oper_spec_range.operation)) leaf_name_data.push_back(exp_oper_spec_range.get_name_leafdata());
    if (exp_sapi_range.is_set || is_set(exp_sapi_range.operation)) leaf_name_data.push_back(exp_sapi_range.get_name_leafdata());
    if (expected_dapi.is_set || is_set(expected_dapi.operation)) leaf_name_data.push_back(expected_dapi.get_name_leafdata());
    if (expected_dapi0.is_set || is_set(expected_dapi0.operation)) leaf_name_data.push_back(expected_dapi0.get_name_leafdata());
    if (expected_oper_spec.is_set || is_set(expected_oper_spec.operation)) leaf_name_data.push_back(expected_oper_spec.get_name_leafdata());
    if (expected_sapi.is_set || is_set(expected_sapi.operation)) leaf_name_data.push_back(expected_sapi.get_name_leafdata());
    if (expected_sapi0.is_set || is_set(expected_sapi0.operation)) leaf_name_data.push_back(expected_sapi0.get_name_leafdata());
    if (expected_string_type.is_set || is_set(expected_string_type.operation)) leaf_name_data.push_back(expected_string_type.get_name_leafdata());
    if (expected_tti.is_set || is_set(expected_tti.operation)) leaf_name_data.push_back(expected_tti.get_name_leafdata());
    if (rx_dapi.is_set || is_set(rx_dapi.operation)) leaf_name_data.push_back(rx_dapi.get_name_leafdata());
    if (rx_dapi0.is_set || is_set(rx_dapi0.operation)) leaf_name_data.push_back(rx_dapi0.get_name_leafdata());
    if (rx_dapi_range.is_set || is_set(rx_dapi_range.operation)) leaf_name_data.push_back(rx_dapi_range.get_name_leafdata());
    if (rx_oper_spec.is_set || is_set(rx_oper_spec.operation)) leaf_name_data.push_back(rx_oper_spec.get_name_leafdata());
    if (rx_oper_spec_range.is_set || is_set(rx_oper_spec_range.operation)) leaf_name_data.push_back(rx_oper_spec_range.get_name_leafdata());
    if (rx_sapi.is_set || is_set(rx_sapi.operation)) leaf_name_data.push_back(rx_sapi.get_name_leafdata());
    if (rx_sapi0.is_set || is_set(rx_sapi0.operation)) leaf_name_data.push_back(rx_sapi0.get_name_leafdata());
    if (rx_sapi_range.is_set || is_set(rx_sapi_range.operation)) leaf_name_data.push_back(rx_sapi_range.get_name_leafdata());
    if (rx_string_type.is_set || is_set(rx_string_type.operation)) leaf_name_data.push_back(rx_string_type.get_name_leafdata());
    if (rx_tti.is_set || is_set(rx_tti.operation)) leaf_name_data.push_back(rx_tti.get_name_leafdata());
    if (tx_dapi.is_set || is_set(tx_dapi.operation)) leaf_name_data.push_back(tx_dapi.get_name_leafdata());
    if (tx_dapi0.is_set || is_set(tx_dapi0.operation)) leaf_name_data.push_back(tx_dapi0.get_name_leafdata());
    if (tx_dapi_range.is_set || is_set(tx_dapi_range.operation)) leaf_name_data.push_back(tx_dapi_range.get_name_leafdata());
    if (tx_oper_spec.is_set || is_set(tx_oper_spec.operation)) leaf_name_data.push_back(tx_oper_spec.get_name_leafdata());
    if (tx_oper_spec_range.is_set || is_set(tx_oper_spec_range.operation)) leaf_name_data.push_back(tx_oper_spec_range.get_name_leafdata());
    if (tx_sapi.is_set || is_set(tx_sapi.operation)) leaf_name_data.push_back(tx_sapi.get_name_leafdata());
    if (tx_sapi0.is_set || is_set(tx_sapi0.operation)) leaf_name_data.push_back(tx_sapi0.get_name_leafdata());
    if (tx_sapi_range.is_set || is_set(tx_sapi_range.operation)) leaf_name_data.push_back(tx_sapi_range.get_name_leafdata());
    if (tx_string_type.is_set || is_set(tx_string_type.operation)) leaf_name_data.push_back(tx_string_type.get_name_leafdata());
    if (tx_tti.is_set || is_set(tx_tti.operation)) leaf_name_data.push_back(tx_tti.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exp-dapi-range")
    {
        exp_dapi_range = value;
    }
    if(value_path == "exp-oper-spec-range")
    {
        exp_oper_spec_range = value;
    }
    if(value_path == "exp-sapi-range")
    {
        exp_sapi_range = value;
    }
    if(value_path == "expected-dapi")
    {
        expected_dapi = value;
    }
    if(value_path == "expected-dapi0")
    {
        expected_dapi0 = value;
    }
    if(value_path == "expected-oper-spec")
    {
        expected_oper_spec = value;
    }
    if(value_path == "expected-sapi")
    {
        expected_sapi = value;
    }
    if(value_path == "expected-sapi0")
    {
        expected_sapi0 = value;
    }
    if(value_path == "expected-string-type")
    {
        expected_string_type = value;
    }
    if(value_path == "expected-tti")
    {
        expected_tti = value;
    }
    if(value_path == "rx-dapi")
    {
        rx_dapi = value;
    }
    if(value_path == "rx-dapi0")
    {
        rx_dapi0 = value;
    }
    if(value_path == "rx-dapi-range")
    {
        rx_dapi_range = value;
    }
    if(value_path == "rx-oper-spec")
    {
        rx_oper_spec = value;
    }
    if(value_path == "rx-oper-spec-range")
    {
        rx_oper_spec_range = value;
    }
    if(value_path == "rx-sapi")
    {
        rx_sapi = value;
    }
    if(value_path == "rx-sapi0")
    {
        rx_sapi0 = value;
    }
    if(value_path == "rx-sapi-range")
    {
        rx_sapi_range = value;
    }
    if(value_path == "rx-string-type")
    {
        rx_string_type = value;
    }
    if(value_path == "rx-tti")
    {
        rx_tti = value;
    }
    if(value_path == "tx-dapi")
    {
        tx_dapi = value;
    }
    if(value_path == "tx-dapi0")
    {
        tx_dapi0 = value;
    }
    if(value_path == "tx-dapi-range")
    {
        tx_dapi_range = value;
    }
    if(value_path == "tx-oper-spec")
    {
        tx_oper_spec = value;
    }
    if(value_path == "tx-oper-spec-range")
    {
        tx_oper_spec_range = value;
    }
    if(value_path == "tx-sapi")
    {
        tx_sapi = value;
    }
    if(value_path == "tx-sapi0")
    {
        tx_sapi0 = value;
    }
    if(value_path == "tx-sapi-range")
    {
        tx_sapi_range = value;
    }
    if(value_path == "tx-string-type")
    {
        tx_string_type = value;
    }
    if(value_path == "tx-tti")
    {
        tx_tti = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::OduInfo()
    :
    bei{YType::uint64, "bei"},
    bip{YType::uint64, "bip"}
    	,
    ais(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais>())
	,bbe(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe>())
	,bbe_tca(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca>())
	,bber(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber>())
	,bdi(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi>())
	,eoc(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc>())
	,es(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Es>())
	,es_tca(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca>())
	,esr(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr>())
	,fc(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc>())
	,lck(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck>())
	,oci(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci>())
	,ptim(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim>())
	,sd_ber(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer>())
	,ses(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses>())
	,sesr(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr>())
	,sf_ber(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer>())
	,tim(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim>())
	,tti(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti>())
	,uas(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas>())
{
    ais->parent = this;

    bbe->parent = this;

    bbe_tca->parent = this;

    bber->parent = this;

    bdi->parent = this;

    eoc->parent = this;

    es->parent = this;

    es_tca->parent = this;

    esr->parent = this;

    fc->parent = this;

    lck->parent = this;

    oci->parent = this;

    ptim->parent = this;

    sd_ber->parent = this;

    ses->parent = this;

    sesr->parent = this;

    sf_ber->parent = this;

    tim->parent = this;

    tti->parent = this;

    uas->parent = this;

    yang_name = "odu-info"; yang_parent_name = "g709-info";
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::~OduInfo()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::has_data() const
{
    return bei.is_set
	|| bip.is_set
	|| (ais !=  nullptr && ais->has_data())
	|| (bbe !=  nullptr && bbe->has_data())
	|| (bbe_tca !=  nullptr && bbe_tca->has_data())
	|| (bber !=  nullptr && bber->has_data())
	|| (bdi !=  nullptr && bdi->has_data())
	|| (eoc !=  nullptr && eoc->has_data())
	|| (es !=  nullptr && es->has_data())
	|| (es_tca !=  nullptr && es_tca->has_data())
	|| (esr !=  nullptr && esr->has_data())
	|| (fc !=  nullptr && fc->has_data())
	|| (lck !=  nullptr && lck->has_data())
	|| (oci !=  nullptr && oci->has_data())
	|| (ptim !=  nullptr && ptim->has_data())
	|| (sd_ber !=  nullptr && sd_ber->has_data())
	|| (ses !=  nullptr && ses->has_data())
	|| (sesr !=  nullptr && sesr->has_data())
	|| (sf_ber !=  nullptr && sf_ber->has_data())
	|| (tim !=  nullptr && tim->has_data())
	|| (tti !=  nullptr && tti->has_data())
	|| (uas !=  nullptr && uas->has_data());
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bei.operation)
	|| is_set(bip.operation)
	|| (ais !=  nullptr && ais->has_operation())
	|| (bbe !=  nullptr && bbe->has_operation())
	|| (bbe_tca !=  nullptr && bbe_tca->has_operation())
	|| (bber !=  nullptr && bber->has_operation())
	|| (bdi !=  nullptr && bdi->has_operation())
	|| (eoc !=  nullptr && eoc->has_operation())
	|| (es !=  nullptr && es->has_operation())
	|| (es_tca !=  nullptr && es_tca->has_operation())
	|| (esr !=  nullptr && esr->has_operation())
	|| (fc !=  nullptr && fc->has_operation())
	|| (lck !=  nullptr && lck->has_operation())
	|| (oci !=  nullptr && oci->has_operation())
	|| (ptim !=  nullptr && ptim->has_operation())
	|| (sd_ber !=  nullptr && sd_ber->has_operation())
	|| (ses !=  nullptr && ses->has_operation())
	|| (sesr !=  nullptr && sesr->has_operation())
	|| (sf_ber !=  nullptr && sf_ber->has_operation())
	|| (tim !=  nullptr && tim->has_operation())
	|| (tti !=  nullptr && tti->has_operation())
	|| (uas !=  nullptr && uas->has_operation());
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-info";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OduInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduInfo' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bei.is_set || is_set(bei.operation)) leaf_name_data.push_back(bei.get_name_leafdata());
    if (bip.is_set || is_set(bip.operation)) leaf_name_data.push_back(bip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ais")
    {
        if(ais == nullptr)
        {
            ais = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais>();
        }
        return ais;
    }

    if(child_yang_name == "bbe")
    {
        if(bbe == nullptr)
        {
            bbe = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe>();
        }
        return bbe;
    }

    if(child_yang_name == "bbe-tca")
    {
        if(bbe_tca == nullptr)
        {
            bbe_tca = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca>();
        }
        return bbe_tca;
    }

    if(child_yang_name == "bber")
    {
        if(bber == nullptr)
        {
            bber = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber>();
        }
        return bber;
    }

    if(child_yang_name == "bdi")
    {
        if(bdi == nullptr)
        {
            bdi = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi>();
        }
        return bdi;
    }

    if(child_yang_name == "eoc")
    {
        if(eoc == nullptr)
        {
            eoc = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc>();
        }
        return eoc;
    }

    if(child_yang_name == "es")
    {
        if(es == nullptr)
        {
            es = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Es>();
        }
        return es;
    }

    if(child_yang_name == "es-tca")
    {
        if(es_tca == nullptr)
        {
            es_tca = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca>();
        }
        return es_tca;
    }

    if(child_yang_name == "esr")
    {
        if(esr == nullptr)
        {
            esr = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr>();
        }
        return esr;
    }

    if(child_yang_name == "fc")
    {
        if(fc == nullptr)
        {
            fc = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc>();
        }
        return fc;
    }

    if(child_yang_name == "lck")
    {
        if(lck == nullptr)
        {
            lck = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck>();
        }
        return lck;
    }

    if(child_yang_name == "oci")
    {
        if(oci == nullptr)
        {
            oci = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci>();
        }
        return oci;
    }

    if(child_yang_name == "ptim")
    {
        if(ptim == nullptr)
        {
            ptim = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim>();
        }
        return ptim;
    }

    if(child_yang_name == "sd-ber")
    {
        if(sd_ber == nullptr)
        {
            sd_ber = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer>();
        }
        return sd_ber;
    }

    if(child_yang_name == "ses")
    {
        if(ses == nullptr)
        {
            ses = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses>();
        }
        return ses;
    }

    if(child_yang_name == "sesr")
    {
        if(sesr == nullptr)
        {
            sesr = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr>();
        }
        return sesr;
    }

    if(child_yang_name == "sf-ber")
    {
        if(sf_ber == nullptr)
        {
            sf_ber = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer>();
        }
        return sf_ber;
    }

    if(child_yang_name == "tim")
    {
        if(tim == nullptr)
        {
            tim = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim>();
        }
        return tim;
    }

    if(child_yang_name == "tti")
    {
        if(tti == nullptr)
        {
            tti = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti>();
        }
        return tti;
    }

    if(child_yang_name == "uas")
    {
        if(uas == nullptr)
        {
            uas = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas>();
        }
        return uas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ais != nullptr)
    {
        children["ais"] = ais;
    }

    if(bbe != nullptr)
    {
        children["bbe"] = bbe;
    }

    if(bbe_tca != nullptr)
    {
        children["bbe-tca"] = bbe_tca;
    }

    if(bber != nullptr)
    {
        children["bber"] = bber;
    }

    if(bdi != nullptr)
    {
        children["bdi"] = bdi;
    }

    if(eoc != nullptr)
    {
        children["eoc"] = eoc;
    }

    if(es != nullptr)
    {
        children["es"] = es;
    }

    if(es_tca != nullptr)
    {
        children["es-tca"] = es_tca;
    }

    if(esr != nullptr)
    {
        children["esr"] = esr;
    }

    if(fc != nullptr)
    {
        children["fc"] = fc;
    }

    if(lck != nullptr)
    {
        children["lck"] = lck;
    }

    if(oci != nullptr)
    {
        children["oci"] = oci;
    }

    if(ptim != nullptr)
    {
        children["ptim"] = ptim;
    }

    if(sd_ber != nullptr)
    {
        children["sd-ber"] = sd_ber;
    }

    if(ses != nullptr)
    {
        children["ses"] = ses;
    }

    if(sesr != nullptr)
    {
        children["sesr"] = sesr;
    }

    if(sf_ber != nullptr)
    {
        children["sf-ber"] = sf_ber;
    }

    if(tim != nullptr)
    {
        children["tim"] = tim;
    }

    if(tti != nullptr)
    {
        children["tti"] = tti;
    }

    if(uas != nullptr)
    {
        children["uas"] = uas;
    }

    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bei")
    {
        bei = value;
    }
    if(value_path == "bip")
    {
        bip = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci::Oci()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "oci"; yang_parent_name = "odu-info";
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci::~Oci()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oci";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Oci' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais::Ais()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "ais"; yang_parent_name = "odu-info";
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais::~Ais()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ais";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ais' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck::Lck()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "lck"; yang_parent_name = "odu-info";
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck::~Lck()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lck";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lck' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi::Bdi()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "bdi"; yang_parent_name = "odu-info";
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi::~Bdi()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdi";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bdi' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc::Eoc()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "eoc"; yang_parent_name = "odu-info";
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc::~Eoc()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eoc";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eoc' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim::Ptim()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "ptim"; yang_parent_name = "odu-info";
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim::~Ptim()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptim";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ptim' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim::Tim()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "tim"; yang_parent_name = "odu-info";
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim::~Tim()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tim";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tim' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer::SfBer()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{
    yang_name = "sf-ber"; yang_parent_name = "odu-info";
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer::~SfBer()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf-ber";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SfBer' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer::SdBer()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{
    yang_name = "sd-ber"; yang_parent_name = "odu-info";
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer::~SdBer()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sd-ber";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SdBer' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca::BbeTca()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{
    yang_name = "bbe-tca"; yang_parent_name = "odu-info";
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca::~BbeTca()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-tca";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BbeTca' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca::EsTca()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{
    yang_name = "es-tca"; yang_parent_name = "odu-info";
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca::~EsTca()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-tca";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsTca' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe::Bbe()
    :
    counter{YType::uint64, "counter"}
{
    yang_name = "bbe"; yang_parent_name = "odu-info";
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe::~Bbe()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bbe' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Es::Es()
    :
    counter{YType::uint64, "counter"}
{
    yang_name = "es"; yang_parent_name = "odu-info";
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Es::~Es()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Es::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Es::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Es::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OduInfo::Es::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Es' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Es::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Es::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Es::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses::Ses()
    :
    counter{YType::uint64, "counter"}
{
    yang_name = "ses"; yang_parent_name = "odu-info";
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses::~Ses()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ses' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas::Uas()
    :
    counter{YType::uint64, "counter"}
{
    yang_name = "uas"; yang_parent_name = "odu-info";
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas::~Uas()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uas' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc::Fc()
    :
    counter{YType::uint64, "counter"}
{
    yang_name = "fc"; yang_parent_name = "odu-info";
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc::~Fc()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fc' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber::Bber()
    :
    counter{YType::uint64, "counter"}
{
    yang_name = "bber"; yang_parent_name = "odu-info";
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber::~Bber()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bber' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr::Esr()
    :
    counter{YType::uint64, "counter"}
{
    yang_name = "esr"; yang_parent_name = "odu-info";
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr::~Esr()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Esr' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr::Sesr()
    :
    counter{YType::uint64, "counter"}
{
    yang_name = "sesr"; yang_parent_name = "odu-info";
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr::~Sesr()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sesr' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti::Tti()
    :
    exp_dapi_range{YType::str, "exp-dapi-range"},
    exp_oper_spec_range{YType::str, "exp-oper-spec-range"},
    exp_sapi_range{YType::str, "exp-sapi-range"},
    expected_dapi{YType::str, "expected-dapi"},
    expected_dapi0{YType::str, "expected-dapi0"},
    expected_oper_spec{YType::str, "expected-oper-spec"},
    expected_sapi{YType::str, "expected-sapi"},
    expected_sapi0{YType::str, "expected-sapi0"},
    expected_string_type{YType::uint32, "expected-string-type"},
    expected_tti{YType::str, "expected-tti"},
    rx_dapi{YType::str, "rx-dapi"},
    rx_dapi0{YType::str, "rx-dapi0"},
    rx_dapi_range{YType::str, "rx-dapi-range"},
    rx_oper_spec{YType::str, "rx-oper-spec"},
    rx_oper_spec_range{YType::str, "rx-oper-spec-range"},
    rx_sapi{YType::str, "rx-sapi"},
    rx_sapi0{YType::str, "rx-sapi0"},
    rx_sapi_range{YType::str, "rx-sapi-range"},
    rx_string_type{YType::uint32, "rx-string-type"},
    rx_tti{YType::str, "rx-tti"},
    tx_dapi{YType::str, "tx-dapi"},
    tx_dapi0{YType::str, "tx-dapi0"},
    tx_dapi_range{YType::str, "tx-dapi-range"},
    tx_oper_spec{YType::str, "tx-oper-spec"},
    tx_oper_spec_range{YType::str, "tx-oper-spec-range"},
    tx_sapi{YType::str, "tx-sapi"},
    tx_sapi0{YType::str, "tx-sapi0"},
    tx_sapi_range{YType::str, "tx-sapi-range"},
    tx_string_type{YType::uint32, "tx-string-type"},
    tx_tti{YType::str, "tx-tti"}
{
    yang_name = "tti"; yang_parent_name = "odu-info";
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti::~Tti()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti::has_data() const
{
    return exp_dapi_range.is_set
	|| exp_oper_spec_range.is_set
	|| exp_sapi_range.is_set
	|| expected_dapi.is_set
	|| expected_dapi0.is_set
	|| expected_oper_spec.is_set
	|| expected_sapi.is_set
	|| expected_sapi0.is_set
	|| expected_string_type.is_set
	|| expected_tti.is_set
	|| rx_dapi.is_set
	|| rx_dapi0.is_set
	|| rx_dapi_range.is_set
	|| rx_oper_spec.is_set
	|| rx_oper_spec_range.is_set
	|| rx_sapi.is_set
	|| rx_sapi0.is_set
	|| rx_sapi_range.is_set
	|| rx_string_type.is_set
	|| rx_tti.is_set
	|| tx_dapi.is_set
	|| tx_dapi0.is_set
	|| tx_dapi_range.is_set
	|| tx_oper_spec.is_set
	|| tx_oper_spec_range.is_set
	|| tx_sapi.is_set
	|| tx_sapi0.is_set
	|| tx_sapi_range.is_set
	|| tx_string_type.is_set
	|| tx_tti.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti::has_operation() const
{
    return is_set(operation)
	|| is_set(exp_dapi_range.operation)
	|| is_set(exp_oper_spec_range.operation)
	|| is_set(exp_sapi_range.operation)
	|| is_set(expected_dapi.operation)
	|| is_set(expected_dapi0.operation)
	|| is_set(expected_oper_spec.operation)
	|| is_set(expected_sapi.operation)
	|| is_set(expected_sapi0.operation)
	|| is_set(expected_string_type.operation)
	|| is_set(expected_tti.operation)
	|| is_set(rx_dapi.operation)
	|| is_set(rx_dapi0.operation)
	|| is_set(rx_dapi_range.operation)
	|| is_set(rx_oper_spec.operation)
	|| is_set(rx_oper_spec_range.operation)
	|| is_set(rx_sapi.operation)
	|| is_set(rx_sapi0.operation)
	|| is_set(rx_sapi_range.operation)
	|| is_set(rx_string_type.operation)
	|| is_set(rx_tti.operation)
	|| is_set(tx_dapi.operation)
	|| is_set(tx_dapi0.operation)
	|| is_set(tx_dapi_range.operation)
	|| is_set(tx_oper_spec.operation)
	|| is_set(tx_oper_spec_range.operation)
	|| is_set(tx_sapi.operation)
	|| is_set(tx_sapi0.operation)
	|| is_set(tx_sapi_range.operation)
	|| is_set(tx_string_type.operation)
	|| is_set(tx_tti.operation);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tti";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tti' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp_dapi_range.is_set || is_set(exp_dapi_range.operation)) leaf_name_data.push_back(exp_dapi_range.get_name_leafdata());
    if (exp_oper_spec_range.is_set || is_set(exp_oper_spec_range.operation)) leaf_name_data.push_back(exp_oper_spec_range.get_name_leafdata());
    if (exp_sapi_range.is_set || is_set(exp_sapi_range.operation)) leaf_name_data.push_back(exp_sapi_range.get_name_leafdata());
    if (expected_dapi.is_set || is_set(expected_dapi.operation)) leaf_name_data.push_back(expected_dapi.get_name_leafdata());
    if (expected_dapi0.is_set || is_set(expected_dapi0.operation)) leaf_name_data.push_back(expected_dapi0.get_name_leafdata());
    if (expected_oper_spec.is_set || is_set(expected_oper_spec.operation)) leaf_name_data.push_back(expected_oper_spec.get_name_leafdata());
    if (expected_sapi.is_set || is_set(expected_sapi.operation)) leaf_name_data.push_back(expected_sapi.get_name_leafdata());
    if (expected_sapi0.is_set || is_set(expected_sapi0.operation)) leaf_name_data.push_back(expected_sapi0.get_name_leafdata());
    if (expected_string_type.is_set || is_set(expected_string_type.operation)) leaf_name_data.push_back(expected_string_type.get_name_leafdata());
    if (expected_tti.is_set || is_set(expected_tti.operation)) leaf_name_data.push_back(expected_tti.get_name_leafdata());
    if (rx_dapi.is_set || is_set(rx_dapi.operation)) leaf_name_data.push_back(rx_dapi.get_name_leafdata());
    if (rx_dapi0.is_set || is_set(rx_dapi0.operation)) leaf_name_data.push_back(rx_dapi0.get_name_leafdata());
    if (rx_dapi_range.is_set || is_set(rx_dapi_range.operation)) leaf_name_data.push_back(rx_dapi_range.get_name_leafdata());
    if (rx_oper_spec.is_set || is_set(rx_oper_spec.operation)) leaf_name_data.push_back(rx_oper_spec.get_name_leafdata());
    if (rx_oper_spec_range.is_set || is_set(rx_oper_spec_range.operation)) leaf_name_data.push_back(rx_oper_spec_range.get_name_leafdata());
    if (rx_sapi.is_set || is_set(rx_sapi.operation)) leaf_name_data.push_back(rx_sapi.get_name_leafdata());
    if (rx_sapi0.is_set || is_set(rx_sapi0.operation)) leaf_name_data.push_back(rx_sapi0.get_name_leafdata());
    if (rx_sapi_range.is_set || is_set(rx_sapi_range.operation)) leaf_name_data.push_back(rx_sapi_range.get_name_leafdata());
    if (rx_string_type.is_set || is_set(rx_string_type.operation)) leaf_name_data.push_back(rx_string_type.get_name_leafdata());
    if (rx_tti.is_set || is_set(rx_tti.operation)) leaf_name_data.push_back(rx_tti.get_name_leafdata());
    if (tx_dapi.is_set || is_set(tx_dapi.operation)) leaf_name_data.push_back(tx_dapi.get_name_leafdata());
    if (tx_dapi0.is_set || is_set(tx_dapi0.operation)) leaf_name_data.push_back(tx_dapi0.get_name_leafdata());
    if (tx_dapi_range.is_set || is_set(tx_dapi_range.operation)) leaf_name_data.push_back(tx_dapi_range.get_name_leafdata());
    if (tx_oper_spec.is_set || is_set(tx_oper_spec.operation)) leaf_name_data.push_back(tx_oper_spec.get_name_leafdata());
    if (tx_oper_spec_range.is_set || is_set(tx_oper_spec_range.operation)) leaf_name_data.push_back(tx_oper_spec_range.get_name_leafdata());
    if (tx_sapi.is_set || is_set(tx_sapi.operation)) leaf_name_data.push_back(tx_sapi.get_name_leafdata());
    if (tx_sapi0.is_set || is_set(tx_sapi0.operation)) leaf_name_data.push_back(tx_sapi0.get_name_leafdata());
    if (tx_sapi_range.is_set || is_set(tx_sapi_range.operation)) leaf_name_data.push_back(tx_sapi_range.get_name_leafdata());
    if (tx_string_type.is_set || is_set(tx_string_type.operation)) leaf_name_data.push_back(tx_string_type.get_name_leafdata());
    if (tx_tti.is_set || is_set(tx_tti.operation)) leaf_name_data.push_back(tx_tti.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exp-dapi-range")
    {
        exp_dapi_range = value;
    }
    if(value_path == "exp-oper-spec-range")
    {
        exp_oper_spec_range = value;
    }
    if(value_path == "exp-sapi-range")
    {
        exp_sapi_range = value;
    }
    if(value_path == "expected-dapi")
    {
        expected_dapi = value;
    }
    if(value_path == "expected-dapi0")
    {
        expected_dapi0 = value;
    }
    if(value_path == "expected-oper-spec")
    {
        expected_oper_spec = value;
    }
    if(value_path == "expected-sapi")
    {
        expected_sapi = value;
    }
    if(value_path == "expected-sapi0")
    {
        expected_sapi0 = value;
    }
    if(value_path == "expected-string-type")
    {
        expected_string_type = value;
    }
    if(value_path == "expected-tti")
    {
        expected_tti = value;
    }
    if(value_path == "rx-dapi")
    {
        rx_dapi = value;
    }
    if(value_path == "rx-dapi0")
    {
        rx_dapi0 = value;
    }
    if(value_path == "rx-dapi-range")
    {
        rx_dapi_range = value;
    }
    if(value_path == "rx-oper-spec")
    {
        rx_oper_spec = value;
    }
    if(value_path == "rx-oper-spec-range")
    {
        rx_oper_spec_range = value;
    }
    if(value_path == "rx-sapi")
    {
        rx_sapi = value;
    }
    if(value_path == "rx-sapi0")
    {
        rx_sapi0 = value;
    }
    if(value_path == "rx-sapi-range")
    {
        rx_sapi_range = value;
    }
    if(value_path == "rx-string-type")
    {
        rx_string_type = value;
    }
    if(value_path == "rx-tti")
    {
        rx_tti = value;
    }
    if(value_path == "tx-dapi")
    {
        tx_dapi = value;
    }
    if(value_path == "tx-dapi0")
    {
        tx_dapi0 = value;
    }
    if(value_path == "tx-dapi-range")
    {
        tx_dapi_range = value;
    }
    if(value_path == "tx-oper-spec")
    {
        tx_oper_spec = value;
    }
    if(value_path == "tx-oper-spec-range")
    {
        tx_oper_spec_range = value;
    }
    if(value_path == "tx-sapi")
    {
        tx_sapi = value;
    }
    if(value_path == "tx-sapi0")
    {
        tx_sapi0 = value;
    }
    if(value_path == "tx-sapi-range")
    {
        tx_sapi_range = value;
    }
    if(value_path == "tx-string-type")
    {
        tx_string_type = value;
    }
    if(value_path == "tx-tti")
    {
        tx_tti = value;
    }
}

Dwdm::Ports::Port::Info::OpticsInfo::OpticsInfo()
    :
    chromatic_dispersion{YType::int32, "chromatic-dispersion"},
    clock_source{YType::uint8, "clock-source"},
    configured_wave_channel{YType::uint16, "configured-wave-channel"},
    default_wave_channel{YType::uint16, "default-wave-channel"},
    differential_group_delay{YType::int32, "differential-group-delay"},
    gmpls_set_wave_channel{YType::uint16, "gmpls-set-wave-channel"},
    input_power_fail{YType::uint32, "input-power-fail"},
    is_rx_los_threshold_supported{YType::boolean, "is-rx-los-threshold-supported"},
    is_wave_frequency_progressive_valid{YType::boolean, "is-wave-frequency-progressive-valid"},
    is_wave_frequency_valid{YType::boolean, "is-wave-frequency-valid"},
    laser_bias_current_avg{YType::int32, "laser-bias-current-avg"},
    laser_bias_current_max{YType::int32, "laser-bias-current-max"},
    laser_bias_current_min{YType::int32, "laser-bias-current-min"},
    laser_current_bias{YType::int32, "laser-current-bias"},
    laser_current_bias_threshold{YType::int32, "laser-current-bias-threshold"},
    optics_type{YType::str, "optics-type"},
    output_power_fail{YType::uint32, "output-power-fail"},
    phase_noise{YType::uint32, "phase-noise"},
    polarization_change_rate{YType::uint32, "polarization-change-rate"},
    polarization_dependent_loss{YType::int32, "polarization-dependent-loss"},
    polarization_mode_dispersion{YType::int32, "polarization-mode-dispersion"},
    receive_power{YType::int32, "receive-power"},
    receive_power_avg{YType::int32, "receive-power-avg"},
    receive_power_max{YType::int32, "receive-power-max"},
    receive_power_min{YType::int32, "receive-power-min"},
    rx_los_threshold{YType::int32, "rx-los-threshold"},
    signal_to_noise_ratio{YType::int32, "signal-to-noise-ratio"},
    transmit_power{YType::int32, "transmit-power"},
    transmit_power_avg{YType::int32, "transmit-power-avg"},
    transmit_power_max{YType::int32, "transmit-power-max"},
    transmit_power_min{YType::int32, "transmit-power-min"},
    transmit_power_threshold{YType::int32, "transmit-power-threshold"},
    wave_band{YType::uint32, "wave-band"},
    wave_channel{YType::uint32, "wave-channel"},
    wave_channel_owner{YType::enumeration, "wave-channel-owner"},
    wave_frequency{YType::uint32, "wave-frequency"},
    wave_frequency_progressive_string{YType::str, "wave-frequency-progressive-string"},
    wavelength_progressive{YType::uint32, "wavelength-progressive"},
    wavelength_progressive_string{YType::str, "wavelength-progressive-string"}
{
    yang_name = "optics-info"; yang_parent_name = "info";
}

Dwdm::Ports::Port::Info::OpticsInfo::~OpticsInfo()
{
}

bool Dwdm::Ports::Port::Info::OpticsInfo::has_data() const
{
    return chromatic_dispersion.is_set
	|| clock_source.is_set
	|| configured_wave_channel.is_set
	|| default_wave_channel.is_set
	|| differential_group_delay.is_set
	|| gmpls_set_wave_channel.is_set
	|| input_power_fail.is_set
	|| is_rx_los_threshold_supported.is_set
	|| is_wave_frequency_progressive_valid.is_set
	|| is_wave_frequency_valid.is_set
	|| laser_bias_current_avg.is_set
	|| laser_bias_current_max.is_set
	|| laser_bias_current_min.is_set
	|| laser_current_bias.is_set
	|| laser_current_bias_threshold.is_set
	|| optics_type.is_set
	|| output_power_fail.is_set
	|| phase_noise.is_set
	|| polarization_change_rate.is_set
	|| polarization_dependent_loss.is_set
	|| polarization_mode_dispersion.is_set
	|| receive_power.is_set
	|| receive_power_avg.is_set
	|| receive_power_max.is_set
	|| receive_power_min.is_set
	|| rx_los_threshold.is_set
	|| signal_to_noise_ratio.is_set
	|| transmit_power.is_set
	|| transmit_power_avg.is_set
	|| transmit_power_max.is_set
	|| transmit_power_min.is_set
	|| transmit_power_threshold.is_set
	|| wave_band.is_set
	|| wave_channel.is_set
	|| wave_channel_owner.is_set
	|| wave_frequency.is_set
	|| wave_frequency_progressive_string.is_set
	|| wavelength_progressive.is_set
	|| wavelength_progressive_string.is_set;
}

bool Dwdm::Ports::Port::Info::OpticsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(chromatic_dispersion.operation)
	|| is_set(clock_source.operation)
	|| is_set(configured_wave_channel.operation)
	|| is_set(default_wave_channel.operation)
	|| is_set(differential_group_delay.operation)
	|| is_set(gmpls_set_wave_channel.operation)
	|| is_set(input_power_fail.operation)
	|| is_set(is_rx_los_threshold_supported.operation)
	|| is_set(is_wave_frequency_progressive_valid.operation)
	|| is_set(is_wave_frequency_valid.operation)
	|| is_set(laser_bias_current_avg.operation)
	|| is_set(laser_bias_current_max.operation)
	|| is_set(laser_bias_current_min.operation)
	|| is_set(laser_current_bias.operation)
	|| is_set(laser_current_bias_threshold.operation)
	|| is_set(optics_type.operation)
	|| is_set(output_power_fail.operation)
	|| is_set(phase_noise.operation)
	|| is_set(polarization_change_rate.operation)
	|| is_set(polarization_dependent_loss.operation)
	|| is_set(polarization_mode_dispersion.operation)
	|| is_set(receive_power.operation)
	|| is_set(receive_power_avg.operation)
	|| is_set(receive_power_max.operation)
	|| is_set(receive_power_min.operation)
	|| is_set(rx_los_threshold.operation)
	|| is_set(signal_to_noise_ratio.operation)
	|| is_set(transmit_power.operation)
	|| is_set(transmit_power_avg.operation)
	|| is_set(transmit_power_max.operation)
	|| is_set(transmit_power_min.operation)
	|| is_set(transmit_power_threshold.operation)
	|| is_set(wave_band.operation)
	|| is_set(wave_channel.operation)
	|| is_set(wave_channel_owner.operation)
	|| is_set(wave_frequency.operation)
	|| is_set(wave_frequency_progressive_string.operation)
	|| is_set(wavelength_progressive.operation)
	|| is_set(wavelength_progressive_string.operation);
}

std::string Dwdm::Ports::Port::Info::OpticsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-info";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::OpticsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsInfo' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chromatic_dispersion.is_set || is_set(chromatic_dispersion.operation)) leaf_name_data.push_back(chromatic_dispersion.get_name_leafdata());
    if (clock_source.is_set || is_set(clock_source.operation)) leaf_name_data.push_back(clock_source.get_name_leafdata());
    if (configured_wave_channel.is_set || is_set(configured_wave_channel.operation)) leaf_name_data.push_back(configured_wave_channel.get_name_leafdata());
    if (default_wave_channel.is_set || is_set(default_wave_channel.operation)) leaf_name_data.push_back(default_wave_channel.get_name_leafdata());
    if (differential_group_delay.is_set || is_set(differential_group_delay.operation)) leaf_name_data.push_back(differential_group_delay.get_name_leafdata());
    if (gmpls_set_wave_channel.is_set || is_set(gmpls_set_wave_channel.operation)) leaf_name_data.push_back(gmpls_set_wave_channel.get_name_leafdata());
    if (input_power_fail.is_set || is_set(input_power_fail.operation)) leaf_name_data.push_back(input_power_fail.get_name_leafdata());
    if (is_rx_los_threshold_supported.is_set || is_set(is_rx_los_threshold_supported.operation)) leaf_name_data.push_back(is_rx_los_threshold_supported.get_name_leafdata());
    if (is_wave_frequency_progressive_valid.is_set || is_set(is_wave_frequency_progressive_valid.operation)) leaf_name_data.push_back(is_wave_frequency_progressive_valid.get_name_leafdata());
    if (is_wave_frequency_valid.is_set || is_set(is_wave_frequency_valid.operation)) leaf_name_data.push_back(is_wave_frequency_valid.get_name_leafdata());
    if (laser_bias_current_avg.is_set || is_set(laser_bias_current_avg.operation)) leaf_name_data.push_back(laser_bias_current_avg.get_name_leafdata());
    if (laser_bias_current_max.is_set || is_set(laser_bias_current_max.operation)) leaf_name_data.push_back(laser_bias_current_max.get_name_leafdata());
    if (laser_bias_current_min.is_set || is_set(laser_bias_current_min.operation)) leaf_name_data.push_back(laser_bias_current_min.get_name_leafdata());
    if (laser_current_bias.is_set || is_set(laser_current_bias.operation)) leaf_name_data.push_back(laser_current_bias.get_name_leafdata());
    if (laser_current_bias_threshold.is_set || is_set(laser_current_bias_threshold.operation)) leaf_name_data.push_back(laser_current_bias_threshold.get_name_leafdata());
    if (optics_type.is_set || is_set(optics_type.operation)) leaf_name_data.push_back(optics_type.get_name_leafdata());
    if (output_power_fail.is_set || is_set(output_power_fail.operation)) leaf_name_data.push_back(output_power_fail.get_name_leafdata());
    if (phase_noise.is_set || is_set(phase_noise.operation)) leaf_name_data.push_back(phase_noise.get_name_leafdata());
    if (polarization_change_rate.is_set || is_set(polarization_change_rate.operation)) leaf_name_data.push_back(polarization_change_rate.get_name_leafdata());
    if (polarization_dependent_loss.is_set || is_set(polarization_dependent_loss.operation)) leaf_name_data.push_back(polarization_dependent_loss.get_name_leafdata());
    if (polarization_mode_dispersion.is_set || is_set(polarization_mode_dispersion.operation)) leaf_name_data.push_back(polarization_mode_dispersion.get_name_leafdata());
    if (receive_power.is_set || is_set(receive_power.operation)) leaf_name_data.push_back(receive_power.get_name_leafdata());
    if (receive_power_avg.is_set || is_set(receive_power_avg.operation)) leaf_name_data.push_back(receive_power_avg.get_name_leafdata());
    if (receive_power_max.is_set || is_set(receive_power_max.operation)) leaf_name_data.push_back(receive_power_max.get_name_leafdata());
    if (receive_power_min.is_set || is_set(receive_power_min.operation)) leaf_name_data.push_back(receive_power_min.get_name_leafdata());
    if (rx_los_threshold.is_set || is_set(rx_los_threshold.operation)) leaf_name_data.push_back(rx_los_threshold.get_name_leafdata());
    if (signal_to_noise_ratio.is_set || is_set(signal_to_noise_ratio.operation)) leaf_name_data.push_back(signal_to_noise_ratio.get_name_leafdata());
    if (transmit_power.is_set || is_set(transmit_power.operation)) leaf_name_data.push_back(transmit_power.get_name_leafdata());
    if (transmit_power_avg.is_set || is_set(transmit_power_avg.operation)) leaf_name_data.push_back(transmit_power_avg.get_name_leafdata());
    if (transmit_power_max.is_set || is_set(transmit_power_max.operation)) leaf_name_data.push_back(transmit_power_max.get_name_leafdata());
    if (transmit_power_min.is_set || is_set(transmit_power_min.operation)) leaf_name_data.push_back(transmit_power_min.get_name_leafdata());
    if (transmit_power_threshold.is_set || is_set(transmit_power_threshold.operation)) leaf_name_data.push_back(transmit_power_threshold.get_name_leafdata());
    if (wave_band.is_set || is_set(wave_band.operation)) leaf_name_data.push_back(wave_band.get_name_leafdata());
    if (wave_channel.is_set || is_set(wave_channel.operation)) leaf_name_data.push_back(wave_channel.get_name_leafdata());
    if (wave_channel_owner.is_set || is_set(wave_channel_owner.operation)) leaf_name_data.push_back(wave_channel_owner.get_name_leafdata());
    if (wave_frequency.is_set || is_set(wave_frequency.operation)) leaf_name_data.push_back(wave_frequency.get_name_leafdata());
    if (wave_frequency_progressive_string.is_set || is_set(wave_frequency_progressive_string.operation)) leaf_name_data.push_back(wave_frequency_progressive_string.get_name_leafdata());
    if (wavelength_progressive.is_set || is_set(wavelength_progressive.operation)) leaf_name_data.push_back(wavelength_progressive.get_name_leafdata());
    if (wavelength_progressive_string.is_set || is_set(wavelength_progressive_string.operation)) leaf_name_data.push_back(wavelength_progressive_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::OpticsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::OpticsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::OpticsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "chromatic-dispersion")
    {
        chromatic_dispersion = value;
    }
    if(value_path == "clock-source")
    {
        clock_source = value;
    }
    if(value_path == "configured-wave-channel")
    {
        configured_wave_channel = value;
    }
    if(value_path == "default-wave-channel")
    {
        default_wave_channel = value;
    }
    if(value_path == "differential-group-delay")
    {
        differential_group_delay = value;
    }
    if(value_path == "gmpls-set-wave-channel")
    {
        gmpls_set_wave_channel = value;
    }
    if(value_path == "input-power-fail")
    {
        input_power_fail = value;
    }
    if(value_path == "is-rx-los-threshold-supported")
    {
        is_rx_los_threshold_supported = value;
    }
    if(value_path == "is-wave-frequency-progressive-valid")
    {
        is_wave_frequency_progressive_valid = value;
    }
    if(value_path == "is-wave-frequency-valid")
    {
        is_wave_frequency_valid = value;
    }
    if(value_path == "laser-bias-current-avg")
    {
        laser_bias_current_avg = value;
    }
    if(value_path == "laser-bias-current-max")
    {
        laser_bias_current_max = value;
    }
    if(value_path == "laser-bias-current-min")
    {
        laser_bias_current_min = value;
    }
    if(value_path == "laser-current-bias")
    {
        laser_current_bias = value;
    }
    if(value_path == "laser-current-bias-threshold")
    {
        laser_current_bias_threshold = value;
    }
    if(value_path == "optics-type")
    {
        optics_type = value;
    }
    if(value_path == "output-power-fail")
    {
        output_power_fail = value;
    }
    if(value_path == "phase-noise")
    {
        phase_noise = value;
    }
    if(value_path == "polarization-change-rate")
    {
        polarization_change_rate = value;
    }
    if(value_path == "polarization-dependent-loss")
    {
        polarization_dependent_loss = value;
    }
    if(value_path == "polarization-mode-dispersion")
    {
        polarization_mode_dispersion = value;
    }
    if(value_path == "receive-power")
    {
        receive_power = value;
    }
    if(value_path == "receive-power-avg")
    {
        receive_power_avg = value;
    }
    if(value_path == "receive-power-max")
    {
        receive_power_max = value;
    }
    if(value_path == "receive-power-min")
    {
        receive_power_min = value;
    }
    if(value_path == "rx-los-threshold")
    {
        rx_los_threshold = value;
    }
    if(value_path == "signal-to-noise-ratio")
    {
        signal_to_noise_ratio = value;
    }
    if(value_path == "transmit-power")
    {
        transmit_power = value;
    }
    if(value_path == "transmit-power-avg")
    {
        transmit_power_avg = value;
    }
    if(value_path == "transmit-power-max")
    {
        transmit_power_max = value;
    }
    if(value_path == "transmit-power-min")
    {
        transmit_power_min = value;
    }
    if(value_path == "transmit-power-threshold")
    {
        transmit_power_threshold = value;
    }
    if(value_path == "wave-band")
    {
        wave_band = value;
    }
    if(value_path == "wave-channel")
    {
        wave_channel = value;
    }
    if(value_path == "wave-channel-owner")
    {
        wave_channel_owner = value;
    }
    if(value_path == "wave-frequency")
    {
        wave_frequency = value;
    }
    if(value_path == "wave-frequency-progressive-string")
    {
        wave_frequency_progressive_string = value;
    }
    if(value_path == "wavelength-progressive")
    {
        wavelength_progressive = value;
    }
    if(value_path == "wavelength-progressive-string")
    {
        wavelength_progressive_string = value;
    }
}

Dwdm::Ports::Port::Info::TdcInfo::TdcInfo()
    :
    dispersion_offset{YType::int32, "dispersion-offset"},
    is_reroute_control_enabled{YType::boolean, "is-reroute-control-enabled"},
    major_alarm{YType::boolean, "major-alarm"},
    operation_mode{YType::boolean, "operation-mode"},
    reroute_ber{YType::int32, "reroute-ber"},
    tdc_status{YType::boolean, "tdc-status"},
    tdc_valid{YType::boolean, "tdc-valid"}
{
    yang_name = "tdc-info"; yang_parent_name = "info";
}

Dwdm::Ports::Port::Info::TdcInfo::~TdcInfo()
{
}

bool Dwdm::Ports::Port::Info::TdcInfo::has_data() const
{
    return dispersion_offset.is_set
	|| is_reroute_control_enabled.is_set
	|| major_alarm.is_set
	|| operation_mode.is_set
	|| reroute_ber.is_set
	|| tdc_status.is_set
	|| tdc_valid.is_set;
}

bool Dwdm::Ports::Port::Info::TdcInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(dispersion_offset.operation)
	|| is_set(is_reroute_control_enabled.operation)
	|| is_set(major_alarm.operation)
	|| is_set(operation_mode.operation)
	|| is_set(reroute_ber.operation)
	|| is_set(tdc_status.operation)
	|| is_set(tdc_valid.operation);
}

std::string Dwdm::Ports::Port::Info::TdcInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdc-info";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::TdcInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TdcInfo' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dispersion_offset.is_set || is_set(dispersion_offset.operation)) leaf_name_data.push_back(dispersion_offset.get_name_leafdata());
    if (is_reroute_control_enabled.is_set || is_set(is_reroute_control_enabled.operation)) leaf_name_data.push_back(is_reroute_control_enabled.get_name_leafdata());
    if (major_alarm.is_set || is_set(major_alarm.operation)) leaf_name_data.push_back(major_alarm.get_name_leafdata());
    if (operation_mode.is_set || is_set(operation_mode.operation)) leaf_name_data.push_back(operation_mode.get_name_leafdata());
    if (reroute_ber.is_set || is_set(reroute_ber.operation)) leaf_name_data.push_back(reroute_ber.get_name_leafdata());
    if (tdc_status.is_set || is_set(tdc_status.operation)) leaf_name_data.push_back(tdc_status.get_name_leafdata());
    if (tdc_valid.is_set || is_set(tdc_valid.operation)) leaf_name_data.push_back(tdc_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::TdcInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::TdcInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::TdcInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dispersion-offset")
    {
        dispersion_offset = value;
    }
    if(value_path == "is-reroute-control-enabled")
    {
        is_reroute_control_enabled = value;
    }
    if(value_path == "major-alarm")
    {
        major_alarm = value;
    }
    if(value_path == "operation-mode")
    {
        operation_mode = value;
    }
    if(value_path == "reroute-ber")
    {
        reroute_ber = value;
    }
    if(value_path == "tdc-status")
    {
        tdc_status = value;
    }
    if(value_path == "tdc-valid")
    {
        tdc_valid = value;
    }
}

Dwdm::Ports::Port::Info::NetworkSrlgInfo::NetworkSrlgInfo()
    :
    network_srlg{YType::uint32, "network-srlg"}
{
    yang_name = "network-srlg-info"; yang_parent_name = "info";
}

Dwdm::Ports::Port::Info::NetworkSrlgInfo::~NetworkSrlgInfo()
{
}

bool Dwdm::Ports::Port::Info::NetworkSrlgInfo::has_data() const
{
    for (auto const & leaf : network_srlg.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Dwdm::Ports::Port::Info::NetworkSrlgInfo::has_operation() const
{
    for (auto const & leaf : network_srlg.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(network_srlg.operation);
}

std::string Dwdm::Ports::Port::Info::NetworkSrlgInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlg-info";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::NetworkSrlgInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkSrlgInfo' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto network_srlg_name_datas = network_srlg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), network_srlg_name_datas.begin(), network_srlg_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::NetworkSrlgInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::NetworkSrlgInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::NetworkSrlgInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "network-srlg")
    {
        network_srlg.append(value);
    }
}

Dwdm::Ports::Port::Info::Proactive::Proactive()
    :
    alarm_state{YType::boolean, "alarm-state"},
    default_rvrt_thresh_coeff{YType::uint8, "default-rvrt-thresh-coeff"},
    default_rvrt_thresh_power{YType::uint8, "default-rvrt-thresh-power"},
    default_trig_thresh_coeff{YType::uint8, "default-trig-thresh-coeff"},
    default_trig_thresh_power{YType::uint8, "default-trig-thresh-power"},
    interface_trigger{YType::boolean, "interface-trigger"},
    prefec_thresh_crossed{YType::boolean, "prefec-thresh-crossed"},
    proactive_feature{YType::boolean, "proactive-feature"},
    proactive_fsm_if_state{YType::enumeration, "proactive-fsm-if-state"},
    proactive_fsm_state{YType::enumeration, "proactive-fsm-state"},
    proactive_mode{YType::enumeration, "proactive-mode"},
    protection_trigger{YType::boolean, "protection-trigger"},
    revert_window{YType::uint32, "revert-window"},
    rvrt_ec_cnt{YType::uint32, "rvrt-ec-cnt"},
    rvrt_samples{YType::uint8, "rvrt-samples"},
    rvrt_thresh_coeff{YType::uint8, "rvrt-thresh-coeff"},
    rvrt_thresh_power{YType::uint8, "rvrt-thresh-power"},
    rx_aps{YType::uint8, "rx-aps"},
    rx_aps_descr{YType::enumeration, "rx-aps-descr"},
    tas_state{YType::enumeration, "tas-state"},
    trig_ec_cnt{YType::uint32, "trig-ec-cnt"},
    trig_samples{YType::uint8, "trig-samples"},
    trig_thresh_coeff{YType::uint8, "trig-thresh-coeff"},
    trig_thresh_power{YType::uint8, "trig-thresh-power"},
    trigger_window{YType::uint32, "trigger-window"},
    tx_aps{YType::uint8, "tx-aps"},
    tx_aps_descr{YType::enumeration, "tx-aps-descr"}
{
    yang_name = "proactive"; yang_parent_name = "info";
}

Dwdm::Ports::Port::Info::Proactive::~Proactive()
{
}

bool Dwdm::Ports::Port::Info::Proactive::has_data() const
{
    return alarm_state.is_set
	|| default_rvrt_thresh_coeff.is_set
	|| default_rvrt_thresh_power.is_set
	|| default_trig_thresh_coeff.is_set
	|| default_trig_thresh_power.is_set
	|| interface_trigger.is_set
	|| prefec_thresh_crossed.is_set
	|| proactive_feature.is_set
	|| proactive_fsm_if_state.is_set
	|| proactive_fsm_state.is_set
	|| proactive_mode.is_set
	|| protection_trigger.is_set
	|| revert_window.is_set
	|| rvrt_ec_cnt.is_set
	|| rvrt_samples.is_set
	|| rvrt_thresh_coeff.is_set
	|| rvrt_thresh_power.is_set
	|| rx_aps.is_set
	|| rx_aps_descr.is_set
	|| tas_state.is_set
	|| trig_ec_cnt.is_set
	|| trig_samples.is_set
	|| trig_thresh_coeff.is_set
	|| trig_thresh_power.is_set
	|| trigger_window.is_set
	|| tx_aps.is_set
	|| tx_aps_descr.is_set;
}

bool Dwdm::Ports::Port::Info::Proactive::has_operation() const
{
    return is_set(operation)
	|| is_set(alarm_state.operation)
	|| is_set(default_rvrt_thresh_coeff.operation)
	|| is_set(default_rvrt_thresh_power.operation)
	|| is_set(default_trig_thresh_coeff.operation)
	|| is_set(default_trig_thresh_power.operation)
	|| is_set(interface_trigger.operation)
	|| is_set(prefec_thresh_crossed.operation)
	|| is_set(proactive_feature.operation)
	|| is_set(proactive_fsm_if_state.operation)
	|| is_set(proactive_fsm_state.operation)
	|| is_set(proactive_mode.operation)
	|| is_set(protection_trigger.operation)
	|| is_set(revert_window.operation)
	|| is_set(rvrt_ec_cnt.operation)
	|| is_set(rvrt_samples.operation)
	|| is_set(rvrt_thresh_coeff.operation)
	|| is_set(rvrt_thresh_power.operation)
	|| is_set(rx_aps.operation)
	|| is_set(rx_aps_descr.operation)
	|| is_set(tas_state.operation)
	|| is_set(trig_ec_cnt.operation)
	|| is_set(trig_samples.operation)
	|| is_set(trig_thresh_coeff.operation)
	|| is_set(trig_thresh_power.operation)
	|| is_set(trigger_window.operation)
	|| is_set(tx_aps.operation)
	|| is_set(tx_aps_descr.operation);
}

std::string Dwdm::Ports::Port::Info::Proactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proactive";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::Proactive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Proactive' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_state.is_set || is_set(alarm_state.operation)) leaf_name_data.push_back(alarm_state.get_name_leafdata());
    if (default_rvrt_thresh_coeff.is_set || is_set(default_rvrt_thresh_coeff.operation)) leaf_name_data.push_back(default_rvrt_thresh_coeff.get_name_leafdata());
    if (default_rvrt_thresh_power.is_set || is_set(default_rvrt_thresh_power.operation)) leaf_name_data.push_back(default_rvrt_thresh_power.get_name_leafdata());
    if (default_trig_thresh_coeff.is_set || is_set(default_trig_thresh_coeff.operation)) leaf_name_data.push_back(default_trig_thresh_coeff.get_name_leafdata());
    if (default_trig_thresh_power.is_set || is_set(default_trig_thresh_power.operation)) leaf_name_data.push_back(default_trig_thresh_power.get_name_leafdata());
    if (interface_trigger.is_set || is_set(interface_trigger.operation)) leaf_name_data.push_back(interface_trigger.get_name_leafdata());
    if (prefec_thresh_crossed.is_set || is_set(prefec_thresh_crossed.operation)) leaf_name_data.push_back(prefec_thresh_crossed.get_name_leafdata());
    if (proactive_feature.is_set || is_set(proactive_feature.operation)) leaf_name_data.push_back(proactive_feature.get_name_leafdata());
    if (proactive_fsm_if_state.is_set || is_set(proactive_fsm_if_state.operation)) leaf_name_data.push_back(proactive_fsm_if_state.get_name_leafdata());
    if (proactive_fsm_state.is_set || is_set(proactive_fsm_state.operation)) leaf_name_data.push_back(proactive_fsm_state.get_name_leafdata());
    if (proactive_mode.is_set || is_set(proactive_mode.operation)) leaf_name_data.push_back(proactive_mode.get_name_leafdata());
    if (protection_trigger.is_set || is_set(protection_trigger.operation)) leaf_name_data.push_back(protection_trigger.get_name_leafdata());
    if (revert_window.is_set || is_set(revert_window.operation)) leaf_name_data.push_back(revert_window.get_name_leafdata());
    if (rvrt_ec_cnt.is_set || is_set(rvrt_ec_cnt.operation)) leaf_name_data.push_back(rvrt_ec_cnt.get_name_leafdata());
    if (rvrt_samples.is_set || is_set(rvrt_samples.operation)) leaf_name_data.push_back(rvrt_samples.get_name_leafdata());
    if (rvrt_thresh_coeff.is_set || is_set(rvrt_thresh_coeff.operation)) leaf_name_data.push_back(rvrt_thresh_coeff.get_name_leafdata());
    if (rvrt_thresh_power.is_set || is_set(rvrt_thresh_power.operation)) leaf_name_data.push_back(rvrt_thresh_power.get_name_leafdata());
    if (rx_aps.is_set || is_set(rx_aps.operation)) leaf_name_data.push_back(rx_aps.get_name_leafdata());
    if (rx_aps_descr.is_set || is_set(rx_aps_descr.operation)) leaf_name_data.push_back(rx_aps_descr.get_name_leafdata());
    if (tas_state.is_set || is_set(tas_state.operation)) leaf_name_data.push_back(tas_state.get_name_leafdata());
    if (trig_ec_cnt.is_set || is_set(trig_ec_cnt.operation)) leaf_name_data.push_back(trig_ec_cnt.get_name_leafdata());
    if (trig_samples.is_set || is_set(trig_samples.operation)) leaf_name_data.push_back(trig_samples.get_name_leafdata());
    if (trig_thresh_coeff.is_set || is_set(trig_thresh_coeff.operation)) leaf_name_data.push_back(trig_thresh_coeff.get_name_leafdata());
    if (trig_thresh_power.is_set || is_set(trig_thresh_power.operation)) leaf_name_data.push_back(trig_thresh_power.get_name_leafdata());
    if (trigger_window.is_set || is_set(trigger_window.operation)) leaf_name_data.push_back(trigger_window.get_name_leafdata());
    if (tx_aps.is_set || is_set(tx_aps.operation)) leaf_name_data.push_back(tx_aps.get_name_leafdata());
    if (tx_aps_descr.is_set || is_set(tx_aps_descr.operation)) leaf_name_data.push_back(tx_aps_descr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::Proactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::Proactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::Proactive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-state")
    {
        alarm_state = value;
    }
    if(value_path == "default-rvrt-thresh-coeff")
    {
        default_rvrt_thresh_coeff = value;
    }
    if(value_path == "default-rvrt-thresh-power")
    {
        default_rvrt_thresh_power = value;
    }
    if(value_path == "default-trig-thresh-coeff")
    {
        default_trig_thresh_coeff = value;
    }
    if(value_path == "default-trig-thresh-power")
    {
        default_trig_thresh_power = value;
    }
    if(value_path == "interface-trigger")
    {
        interface_trigger = value;
    }
    if(value_path == "prefec-thresh-crossed")
    {
        prefec_thresh_crossed = value;
    }
    if(value_path == "proactive-feature")
    {
        proactive_feature = value;
    }
    if(value_path == "proactive-fsm-if-state")
    {
        proactive_fsm_if_state = value;
    }
    if(value_path == "proactive-fsm-state")
    {
        proactive_fsm_state = value;
    }
    if(value_path == "proactive-mode")
    {
        proactive_mode = value;
    }
    if(value_path == "protection-trigger")
    {
        protection_trigger = value;
    }
    if(value_path == "revert-window")
    {
        revert_window = value;
    }
    if(value_path == "rvrt-ec-cnt")
    {
        rvrt_ec_cnt = value;
    }
    if(value_path == "rvrt-samples")
    {
        rvrt_samples = value;
    }
    if(value_path == "rvrt-thresh-coeff")
    {
        rvrt_thresh_coeff = value;
    }
    if(value_path == "rvrt-thresh-power")
    {
        rvrt_thresh_power = value;
    }
    if(value_path == "rx-aps")
    {
        rx_aps = value;
    }
    if(value_path == "rx-aps-descr")
    {
        rx_aps_descr = value;
    }
    if(value_path == "tas-state")
    {
        tas_state = value;
    }
    if(value_path == "trig-ec-cnt")
    {
        trig_ec_cnt = value;
    }
    if(value_path == "trig-samples")
    {
        trig_samples = value;
    }
    if(value_path == "trig-thresh-coeff")
    {
        trig_thresh_coeff = value;
    }
    if(value_path == "trig-thresh-power")
    {
        trig_thresh_power = value;
    }
    if(value_path == "trigger-window")
    {
        trigger_window = value;
    }
    if(value_path == "tx-aps")
    {
        tx_aps = value;
    }
    if(value_path == "tx-aps-descr")
    {
        tx_aps_descr = value;
    }
}

Dwdm::Ports::Port::Info::SignalLog::SignalLog()
    :
    is_log_enabled{YType::boolean, "is-log-enabled"},
    log_filename{YType::str, "log-filename"}
{
    yang_name = "signal-log"; yang_parent_name = "info";
}

Dwdm::Ports::Port::Info::SignalLog::~SignalLog()
{
}

bool Dwdm::Ports::Port::Info::SignalLog::has_data() const
{
    return is_log_enabled.is_set
	|| log_filename.is_set;
}

bool Dwdm::Ports::Port::Info::SignalLog::has_operation() const
{
    return is_set(operation)
	|| is_set(is_log_enabled.operation)
	|| is_set(log_filename.operation);
}

std::string Dwdm::Ports::Port::Info::SignalLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signal-log";

    return path_buffer.str();

}

const EntityPath Dwdm::Ports::Port::Info::SignalLog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SignalLog' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_log_enabled.is_set || is_set(is_log_enabled.operation)) leaf_name_data.push_back(is_log_enabled.get_name_leafdata());
    if (log_filename.is_set || is_set(log_filename.operation)) leaf_name_data.push_back(log_filename.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::SignalLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::SignalLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::SignalLog::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-log-enabled")
    {
        is_log_enabled = value;
    }
    if(value_path == "log-filename")
    {
        log_filename = value;
    }
}

Vtxp::Vtxp()
    :
    dwdm_vtxp(std::make_shared<Vtxp::DwdmVtxp>())
{
    dwdm_vtxp->parent = this;

    yang_name = "vtxp"; yang_parent_name = "Cisco-IOS-XR-dwdm-ui-oper";
}

Vtxp::~Vtxp()
{
}

bool Vtxp::has_data() const
{
    return (dwdm_vtxp !=  nullptr && dwdm_vtxp->has_data());
}

bool Vtxp::has_operation() const
{
    return is_set(operation)
	|| (dwdm_vtxp !=  nullptr && dwdm_vtxp->has_operation());
}

std::string Vtxp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dwdm-ui-oper:vtxp";

    return path_buffer.str();

}

const EntityPath Vtxp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Vtxp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dwdm-vtxp")
    {
        if(dwdm_vtxp == nullptr)
        {
            dwdm_vtxp = std::make_shared<Vtxp::DwdmVtxp>();
        }
        return dwdm_vtxp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vtxp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dwdm_vtxp != nullptr)
    {
        children["dwdm-vtxp"] = dwdm_vtxp;
    }

    return children;
}

void Vtxp::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Vtxp::clone_ptr() const
{
    return std::make_shared<Vtxp>();
}

std::string Vtxp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Vtxp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Vtxp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Vtxp::DwdmVtxp::DwdmVtxp()
    :
    port_vtxps(std::make_shared<Vtxp::DwdmVtxp::PortVtxps>())
{
    port_vtxps->parent = this;

    yang_name = "dwdm-vtxp"; yang_parent_name = "vtxp";
}

Vtxp::DwdmVtxp::~DwdmVtxp()
{
}

bool Vtxp::DwdmVtxp::has_data() const
{
    return (port_vtxps !=  nullptr && port_vtxps->has_data());
}

bool Vtxp::DwdmVtxp::has_operation() const
{
    return is_set(operation)
	|| (port_vtxps !=  nullptr && port_vtxps->has_operation());
}

std::string Vtxp::DwdmVtxp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-vtxp";

    return path_buffer.str();

}

const EntityPath Vtxp::DwdmVtxp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-dwdm-ui-oper:vtxp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vtxp::DwdmVtxp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-vtxps")
    {
        if(port_vtxps == nullptr)
        {
            port_vtxps = std::make_shared<Vtxp::DwdmVtxp::PortVtxps>();
        }
        return port_vtxps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vtxp::DwdmVtxp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_vtxps != nullptr)
    {
        children["port-vtxps"] = port_vtxps;
    }

    return children;
}

void Vtxp::DwdmVtxp::set_value(const std::string & value_path, std::string value)
{
}

Vtxp::DwdmVtxp::PortVtxps::PortVtxps()
{
    yang_name = "port-vtxps"; yang_parent_name = "dwdm-vtxp";
}

Vtxp::DwdmVtxp::PortVtxps::~PortVtxps()
{
}

bool Vtxp::DwdmVtxp::PortVtxps::has_data() const
{
    for (std::size_t index=0; index<port_vtxp.size(); index++)
    {
        if(port_vtxp[index]->has_data())
            return true;
    }
    return false;
}

bool Vtxp::DwdmVtxp::PortVtxps::has_operation() const
{
    for (std::size_t index=0; index<port_vtxp.size(); index++)
    {
        if(port_vtxp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vtxp::DwdmVtxp::PortVtxps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-vtxps";

    return path_buffer.str();

}

const EntityPath Vtxp::DwdmVtxp::PortVtxps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-dwdm-ui-oper:vtxp/dwdm-vtxp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vtxp::DwdmVtxp::PortVtxps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-vtxp")
    {
        for(auto const & c : port_vtxp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vtxp::DwdmVtxp::PortVtxps::PortVtxp>();
        c->parent = this;
        port_vtxp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vtxp::DwdmVtxp::PortVtxps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : port_vtxp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vtxp::DwdmVtxp::PortVtxps::set_value(const std::string & value_path, std::string value)
{
}

Vtxp::DwdmVtxp::PortVtxps::PortVtxp::PortVtxp()
    :
    name{YType::str, "name"}
    	,
    info(std::make_shared<Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info>())
{
    info->parent = this;

    yang_name = "port-vtxp"; yang_parent_name = "port-vtxps";
}

Vtxp::DwdmVtxp::PortVtxps::PortVtxp::~PortVtxp()
{
}

bool Vtxp::DwdmVtxp::PortVtxps::PortVtxp::has_data() const
{
    return name.is_set
	|| (info !=  nullptr && info->has_data());
}

bool Vtxp::DwdmVtxp::PortVtxps::PortVtxp::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (info !=  nullptr && info->has_operation());
}

std::string Vtxp::DwdmVtxp::PortVtxps::PortVtxp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-vtxp" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Vtxp::DwdmVtxp::PortVtxps::PortVtxp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-dwdm-ui-oper:vtxp/dwdm-vtxp/port-vtxps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vtxp::DwdmVtxp::PortVtxps::PortVtxp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info>();
        }
        return info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vtxp::DwdmVtxp::PortVtxps::PortVtxp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(info != nullptr)
    {
        children["info"] = info;
    }

    return children;
}

void Vtxp::DwdmVtxp::PortVtxps::PortVtxp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info::Info()
    :
    vtxp_enable{YType::boolean, "vtxp-enable"}
{
    yang_name = "info"; yang_parent_name = "port-vtxp";
}

Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info::~Info()
{
}

bool Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info::has_data() const
{
    return vtxp_enable.is_set;
}

bool Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info::has_operation() const
{
    return is_set(operation)
	|| is_set(vtxp_enable.operation);
}

std::string Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";

    return path_buffer.str();

}

const EntityPath Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Info' in Cisco_IOS_XR_dwdm_ui_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vtxp_enable.is_set || is_set(vtxp_enable.operation)) leaf_name_data.push_back(vtxp_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vtxp-enable")
    {
        vtxp_enable = value;
    }
}

const Enum::YLeaf G709PpintfStateEnum::pp_intf_up {0, "pp-intf-up"};
const Enum::YLeaf G709PpintfStateEnum::pp_intf_failing {1, "pp-intf-failing"};
const Enum::YLeaf G709PpintfStateEnum::pp_intf_down {2, "pp-intf-down"};

const Enum::YLeaf G709PpfsmModeEnum::pp_disable {0, "pp-disable"};
const Enum::YLeaf G709PpfsmModeEnum::pp_default_mode {1, "pp-default-mode"};
const Enum::YLeaf G709PpfsmModeEnum::pp_graceful_mode {2, "pp-graceful-mode"};

const Enum::YLeaf DwdmControllerStateEnum::dwdm_ui_state_up {0, "dwdm-ui-state-up"};
const Enum::YLeaf DwdmControllerStateEnum::dwdm_ui_state_down {1, "dwdm-ui-state-down"};
const Enum::YLeaf DwdmControllerStateEnum::dwdm_ui_state_admin_down {2, "dwdm-ui-state-admin-down"};

const Enum::YLeaf DwdmtasStateEnum::tas_oos {0, "tas-oos"};
const Enum::YLeaf DwdmtasStateEnum::tas_is {1, "tas-is"};
const Enum::YLeaf DwdmtasStateEnum::tas_oos_mt {2, "tas-oos-mt"};
const Enum::YLeaf DwdmtasStateEnum::tas_is_cfg {3, "tas-is-cfg"};

const Enum::YLeaf G709PrbsModeEnum::mode_source {0, "mode-source"};
const Enum::YLeaf G709PrbsModeEnum::mode_sink {1, "mode-sink"};
const Enum::YLeaf G709PrbsModeEnum::mode_source_sink {2, "mode-source-sink"};
const Enum::YLeaf G709PrbsModeEnum::mode_invalid {3, "mode-invalid"};

const Enum::YLeaf G709PpfsmStateEnum::in_active {0, "in-active"};
const Enum::YLeaf G709PpfsmStateEnum::disabled {1, "disabled"};
const Enum::YLeaf G709PpfsmStateEnum::normal_state {2, "normal-state"};
const Enum::YLeaf G709PpfsmStateEnum::local_failing {3, "local-failing"};
const Enum::YLeaf G709PpfsmStateEnum::remote_failing {4, "remote-failing"};
const Enum::YLeaf G709PpfsmStateEnum::main_t_failing {5, "main-t-failing"};
const Enum::YLeaf G709PpfsmStateEnum::regen_failing {6, "regen-failing"};
const Enum::YLeaf G709PpfsmStateEnum::local_failed {7, "local-failed"};
const Enum::YLeaf G709PpfsmStateEnum::remote_failed {8, "remote-failed"};
const Enum::YLeaf G709PpfsmStateEnum::main_t_failed {9, "main-t-failed"};
const Enum::YLeaf G709PpfsmStateEnum::regen_failed {10, "regen-failed"};

const Enum::YLeaf G709PrbsIntervalEnum::current_interval {0, "current-interval"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval {1, "previous-interval"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval2 {2, "previous-interval2"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval3 {3, "previous-interval3"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval4 {4, "previous-interval4"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval5 {5, "previous-interval5"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval6 {6, "previous-interval6"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval7 {7, "previous-interval7"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval8 {8, "previous-interval8"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval9 {9, "previous-interval9"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval10 {10, "previous-interval10"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval11 {11, "previous-interval11"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval12 {12, "previous-interval12"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval13 {13, "previous-interval13"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval14 {14, "previous-interval14"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval15 {15, "previous-interval15"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval16 {16, "previous-interval16"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval17 {17, "previous-interval17"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval18 {18, "previous-interval18"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval19 {19, "previous-interval19"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval20 {20, "previous-interval20"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval21 {21, "previous-interval21"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval22 {22, "previous-interval22"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval23 {23, "previous-interval23"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval24 {24, "previous-interval24"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval25 {25, "previous-interval25"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval26 {26, "previous-interval26"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval27 {27, "previous-interval27"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval28 {28, "previous-interval28"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval29 {29, "previous-interval29"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval30 {30, "previous-interval30"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval31 {31, "previous-interval31"};
const Enum::YLeaf G709PrbsIntervalEnum::previous_interval32 {32, "previous-interval32"};

const Enum::YLeaf DwdmWaveChannelOwnerEnum::default_ {0, "default"};
const Enum::YLeaf DwdmWaveChannelOwnerEnum::configuration {1, "configuration"};
const Enum::YLeaf DwdmWaveChannelOwnerEnum::gmpls {2, "gmpls"};

const Enum::YLeaf G709EfecModeEnum::g975_none {0, "g975-none"};
const Enum::YLeaf G709EfecModeEnum::g975_1_i4 {1, "g975-1-i4"};
const Enum::YLeaf G709EfecModeEnum::g975_1_i7 {2, "g975-1-i7"};

const Enum::YLeaf G709PrbsPatternEnum::pattern_none {0, "pattern-none"};
const Enum::YLeaf G709PrbsPatternEnum::pattern_null {1, "pattern-null"};
const Enum::YLeaf G709PrbsPatternEnum::pattern_pn11 {2, "pattern-pn11"};
const Enum::YLeaf G709PrbsPatternEnum::pattern_pn23 {3, "pattern-pn23"};
const Enum::YLeaf G709PrbsPatternEnum::pattern_pn31 {4, "pattern-pn31"};

const Enum::YLeaf G709ApsByteEnum::pp_no_protect {0, "pp-no-protect"};
const Enum::YLeaf G709ApsByteEnum::pp_no_request {15, "pp-no-request"};
const Enum::YLeaf G709ApsByteEnum::pp_regen_degrade {63, "pp-regen-degrade"};
const Enum::YLeaf G709ApsByteEnum::pp_sig_degrade {175, "pp-sig-degrade"};
const Enum::YLeaf G709ApsByteEnum::pp_remote_main {239, "pp-remote-main"};
const Enum::YLeaf G709ApsByteEnum::pp_aps_unknown {255, "pp-aps-unknown"};


}
}

