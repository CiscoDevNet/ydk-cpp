
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_infra_sla_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_sla_cfg {

Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize::BucketsSize()
    :
    	buckets_size{YType::uint32, "buckets-size"},
	 buckets_size_unit{YType::enumeration, "buckets-size-unit"}
{
    yang_name = "buckets-size"; yang_parent_name = "statistic";
}

Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize::~BucketsSize()
{
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize::has_data() const
{
    return buckets_size.is_set
	|| buckets_size_unit.is_set;
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize::has_operation() const
{
    return is_set(operation)
	|| is_set(buckets_size.operation)
	|| is_set(buckets_size_unit.operation);
}

std::string Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buckets-size";

    return path_buffer.str();

}

EntityPath Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buckets_size.is_set || is_set(buckets_size.operation)) leaf_name_data.push_back(buckets_size.get_name_leafdata());
    if (buckets_size_unit.is_set || is_set(buckets_size_unit.operation)) leaf_name_data.push_back(buckets_size_unit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize::get_children()
{
    return children;
}

void Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "buckets-size")
    {
        buckets_size = value;
    }
    if(value_path == "buckets-size-unit")
    {
        buckets_size_unit = value;
    }
}

Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation::Aggregation()
    :
    	bins_count{YType::uint32, "bins-count"},
	 bins_width{YType::uint32, "bins-width"},
	 bins_width_tenths{YType::uint32, "bins-width-tenths"}
{
    yang_name = "aggregation"; yang_parent_name = "statistic";
}

Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation::~Aggregation()
{
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation::has_data() const
{
    return bins_count.is_set
	|| bins_width.is_set
	|| bins_width_tenths.is_set;
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation::has_operation() const
{
    return is_set(operation)
	|| is_set(bins_count.operation)
	|| is_set(bins_width.operation)
	|| is_set(bins_width_tenths.operation);
}

std::string Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregation";

    return path_buffer.str();

}

EntityPath Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bins_count.is_set || is_set(bins_count.operation)) leaf_name_data.push_back(bins_count.get_name_leafdata());
    if (bins_width.is_set || is_set(bins_width.operation)) leaf_name_data.push_back(bins_width.get_name_leafdata());
    if (bins_width_tenths.is_set || is_set(bins_width_tenths.operation)) leaf_name_data.push_back(bins_width_tenths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation::get_children()
{
    return children;
}

void Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bins-count")
    {
        bins_count = value;
    }
    if(value_path == "bins-width")
    {
        bins_width = value;
    }
    if(value_path == "bins-width-tenths")
    {
        bins_width_tenths = value;
    }
}

Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Statistic()
    :
    	statistic_name{YType::enumeration, "statistic-name"},
	 buckets_archive{YType::uint32, "buckets-archive"},
	 enable{YType::empty, "enable"}
    	,
    aggregation(nullptr) // presence node
	,buckets_size(nullptr) // presence node
{
    yang_name = "statistic"; yang_parent_name = "statistics";
}

Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::~Statistic()
{
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::has_data() const
{
    return statistic_name.is_set
	|| buckets_archive.is_set
	|| enable.is_set
	|| (aggregation !=  nullptr && aggregation->has_data())
	|| (buckets_size !=  nullptr && buckets_size->has_data());
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::has_operation() const
{
    return is_set(operation)
	|| is_set(statistic_name.operation)
	|| is_set(buckets_archive.operation)
	|| is_set(enable.operation)
	|| (aggregation !=  nullptr && aggregation->has_operation())
	|| (buckets_size !=  nullptr && buckets_size->has_operation());
}

std::string Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic" <<"[statistic-name='" <<statistic_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (statistic_name.is_set || is_set(statistic_name.operation)) leaf_name_data.push_back(statistic_name.get_name_leafdata());
    if (buckets_archive.is_set || is_set(buckets_archive.operation)) leaf_name_data.push_back(buckets_archive.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "aggregation")
    {
        if(aggregation != nullptr)
        {
            children["aggregation"] = aggregation.get();
        }
        else
        {
            aggregation = std::make_unique<Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation>();
            aggregation->parent = this;
            children["aggregation"] = aggregation.get();
        }
        return children.at("aggregation");
    }

    if(child_yang_name == "buckets-size")
    {
        if(buckets_size != nullptr)
        {
            children["buckets-size"] = buckets_size.get();
        }
        else
        {
            buckets_size = std::make_unique<Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize>();
            buckets_size->parent = this;
            children["buckets-size"] = buckets_size.get();
        }
        return children.at("buckets-size");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::get_children()
{
    if(children.find("aggregation") == children.end())
    {
        if(aggregation != nullptr)
        {
            children["aggregation"] = aggregation.get();
        }
    }

    if(children.find("buckets-size") == children.end())
    {
        if(buckets_size != nullptr)
        {
            children["buckets-size"] = buckets_size.get();
        }
    }

    return children;
}

void Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "statistic-name")
    {
        statistic_name = value;
    }
    if(value_path == "buckets-archive")
    {
        buckets_archive = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistics()
{
    yang_name = "statistics"; yang_parent_name = "profile";
}

Sla::Protocols::Ethernet::Profiles::Profile::Statistics::~Statistics()
{
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Statistics::has_data() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Statistics::has_operation() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Sla::Protocols::Ethernet::Profiles::Profile::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath Sla::Protocols::Ethernet::Profiles::Profile::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sla::Protocols::Ethernet::Profiles::Profile::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistic")
    {
        for(auto const & c : statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic>();
        c->parent = this;
        statistic.push_back(std::move(c));
        children[segment_path] = statistic.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sla::Protocols::Ethernet::Profiles::Profile::Statistics::get_children()
{
    for (auto const & c : statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Sla::Protocols::Ethernet::Profiles::Profile::Statistics::set_value(const std::string & value_path, std::string value)
{
}

Sla::Protocols::Ethernet::Profiles::Profile::Schedule::Schedule()
    :
    	probe_duration{YType::uint32, "probe-duration"},
	 probe_duration_unit{YType::enumeration, "probe-duration-unit"},
	 probe_interval{YType::uint32, "probe-interval"},
	 probe_interval_day{YType::enumeration, "probe-interval-day"},
	 probe_interval_unit{YType::enumeration, "probe-interval-unit"},
	 start_time_hour{YType::uint32, "start-time-hour"},
	 start_time_minute{YType::uint32, "start-time-minute"},
	 start_time_second{YType::uint32, "start-time-second"}
{
    yang_name = "schedule"; yang_parent_name = "profile";
}

Sla::Protocols::Ethernet::Profiles::Profile::Schedule::~Schedule()
{
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Schedule::has_data() const
{
    return probe_duration.is_set
	|| probe_duration_unit.is_set
	|| probe_interval.is_set
	|| probe_interval_day.is_set
	|| probe_interval_unit.is_set
	|| start_time_hour.is_set
	|| start_time_minute.is_set
	|| start_time_second.is_set;
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Schedule::has_operation() const
{
    return is_set(operation)
	|| is_set(probe_duration.operation)
	|| is_set(probe_duration_unit.operation)
	|| is_set(probe_interval.operation)
	|| is_set(probe_interval_day.operation)
	|| is_set(probe_interval_unit.operation)
	|| is_set(start_time_hour.operation)
	|| is_set(start_time_minute.operation)
	|| is_set(start_time_second.operation);
}

std::string Sla::Protocols::Ethernet::Profiles::Profile::Schedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule";

    return path_buffer.str();

}

EntityPath Sla::Protocols::Ethernet::Profiles::Profile::Schedule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probe_duration.is_set || is_set(probe_duration.operation)) leaf_name_data.push_back(probe_duration.get_name_leafdata());
    if (probe_duration_unit.is_set || is_set(probe_duration_unit.operation)) leaf_name_data.push_back(probe_duration_unit.get_name_leafdata());
    if (probe_interval.is_set || is_set(probe_interval.operation)) leaf_name_data.push_back(probe_interval.get_name_leafdata());
    if (probe_interval_day.is_set || is_set(probe_interval_day.operation)) leaf_name_data.push_back(probe_interval_day.get_name_leafdata());
    if (probe_interval_unit.is_set || is_set(probe_interval_unit.operation)) leaf_name_data.push_back(probe_interval_unit.get_name_leafdata());
    if (start_time_hour.is_set || is_set(start_time_hour.operation)) leaf_name_data.push_back(start_time_hour.get_name_leafdata());
    if (start_time_minute.is_set || is_set(start_time_minute.operation)) leaf_name_data.push_back(start_time_minute.get_name_leafdata());
    if (start_time_second.is_set || is_set(start_time_second.operation)) leaf_name_data.push_back(start_time_second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sla::Protocols::Ethernet::Profiles::Profile::Schedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sla::Protocols::Ethernet::Profiles::Profile::Schedule::get_children()
{
    return children;
}

void Sla::Protocols::Ethernet::Profiles::Profile::Schedule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "probe-duration")
    {
        probe_duration = value;
    }
    if(value_path == "probe-duration-unit")
    {
        probe_duration_unit = value;
    }
    if(value_path == "probe-interval")
    {
        probe_interval = value;
    }
    if(value_path == "probe-interval-day")
    {
        probe_interval_day = value;
    }
    if(value_path == "probe-interval-unit")
    {
        probe_interval_unit = value;
    }
    if(value_path == "start-time-hour")
    {
        start_time_hour = value;
    }
    if(value_path == "start-time-minute")
    {
        start_time_minute = value;
    }
    if(value_path == "start-time-second")
    {
        start_time_second = value;
    }
}

Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send::Send()
    :
    	burst_interval{YType::uint32, "burst-interval"},
	 burst_interval_unit{YType::enumeration, "burst-interval-unit"},
	 packet_count{YType::uint32, "packet-count"},
	 packet_interval{YType::uint32, "packet-interval"},
	 packet_interval_unit{YType::enumeration, "packet-interval-unit"},
	 send_type{YType::enumeration, "send-type"}
{
    yang_name = "send"; yang_parent_name = "probe";
}

Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send::~Send()
{
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send::has_data() const
{
    return burst_interval.is_set
	|| burst_interval_unit.is_set
	|| packet_count.is_set
	|| packet_interval.is_set
	|| packet_interval_unit.is_set
	|| send_type.is_set;
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send::has_operation() const
{
    return is_set(operation)
	|| is_set(burst_interval.operation)
	|| is_set(burst_interval_unit.operation)
	|| is_set(packet_count.operation)
	|| is_set(packet_interval.operation)
	|| is_set(packet_interval_unit.operation)
	|| is_set(send_type.operation);
}

std::string Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";

    return path_buffer.str();

}

EntityPath Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst_interval.is_set || is_set(burst_interval.operation)) leaf_name_data.push_back(burst_interval.get_name_leafdata());
    if (burst_interval_unit.is_set || is_set(burst_interval_unit.operation)) leaf_name_data.push_back(burst_interval_unit.get_name_leafdata());
    if (packet_count.is_set || is_set(packet_count.operation)) leaf_name_data.push_back(packet_count.get_name_leafdata());
    if (packet_interval.is_set || is_set(packet_interval.operation)) leaf_name_data.push_back(packet_interval.get_name_leafdata());
    if (packet_interval_unit.is_set || is_set(packet_interval_unit.operation)) leaf_name_data.push_back(packet_interval_unit.get_name_leafdata());
    if (send_type.is_set || is_set(send_type.operation)) leaf_name_data.push_back(send_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send::get_children()
{
    return children;
}

void Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "burst-interval")
    {
        burst_interval = value;
    }
    if(value_path == "burst-interval-unit")
    {
        burst_interval_unit = value;
    }
    if(value_path == "packet-count")
    {
        packet_count = value;
    }
    if(value_path == "packet-interval")
    {
        packet_interval = value;
    }
    if(value_path == "packet-interval-unit")
    {
        packet_interval_unit = value;
    }
    if(value_path == "send-type")
    {
        send_type = value;
    }
}

Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding::PacketSizeAndPadding()
    :
    	padding_type{YType::enumeration, "padding-type"},
	 padding_value{YType::str, "padding-value"},
	 size{YType::uint32, "size"}
{
    yang_name = "packet-size-and-padding"; yang_parent_name = "probe";
}

Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding::~PacketSizeAndPadding()
{
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding::has_data() const
{
    return padding_type.is_set
	|| padding_value.is_set
	|| size.is_set;
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding::has_operation() const
{
    return is_set(operation)
	|| is_set(padding_type.operation)
	|| is_set(padding_value.operation)
	|| is_set(size.operation);
}

std::string Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-size-and-padding";

    return path_buffer.str();

}

EntityPath Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (padding_type.is_set || is_set(padding_type.operation)) leaf_name_data.push_back(padding_type.get_name_leafdata());
    if (padding_value.is_set || is_set(padding_value.operation)) leaf_name_data.push_back(padding_value.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding::get_children()
{
    return children;
}

void Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "padding-type")
    {
        padding_type = value;
    }
    if(value_path == "padding-value")
    {
        padding_value = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
}

Sla::Protocols::Ethernet::Profiles::Profile::Probe::Probe()
    :
    	priority{YType::uint32, "priority"},
	 synthetic_loss_calculation_packets{YType::uint32, "synthetic-loss-calculation-packets"}
    	,
    packet_size_and_padding(nullptr) // presence node
	,send(nullptr) // presence node
{
    yang_name = "probe"; yang_parent_name = "profile";
}

Sla::Protocols::Ethernet::Profiles::Profile::Probe::~Probe()
{
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Probe::has_data() const
{
    return priority.is_set
	|| synthetic_loss_calculation_packets.is_set
	|| (packet_size_and_padding !=  nullptr && packet_size_and_padding->has_data())
	|| (send !=  nullptr && send->has_data());
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Probe::has_operation() const
{
    return is_set(operation)
	|| is_set(priority.operation)
	|| is_set(synthetic_loss_calculation_packets.operation)
	|| (packet_size_and_padding !=  nullptr && packet_size_and_padding->has_operation())
	|| (send !=  nullptr && send->has_operation());
}

std::string Sla::Protocols::Ethernet::Profiles::Profile::Probe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe";

    return path_buffer.str();

}

EntityPath Sla::Protocols::Ethernet::Profiles::Profile::Probe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (synthetic_loss_calculation_packets.is_set || is_set(synthetic_loss_calculation_packets.operation)) leaf_name_data.push_back(synthetic_loss_calculation_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sla::Protocols::Ethernet::Profiles::Profile::Probe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "packet-size-and-padding")
    {
        if(packet_size_and_padding != nullptr)
        {
            children["packet-size-and-padding"] = packet_size_and_padding.get();
        }
        else
        {
            packet_size_and_padding = std::make_unique<Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding>();
            packet_size_and_padding->parent = this;
            children["packet-size-and-padding"] = packet_size_and_padding.get();
        }
        return children.at("packet-size-and-padding");
    }

    if(child_yang_name == "send")
    {
        if(send != nullptr)
        {
            children["send"] = send.get();
        }
        else
        {
            send = std::make_unique<Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send>();
            send->parent = this;
            children["send"] = send.get();
        }
        return children.at("send");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sla::Protocols::Ethernet::Profiles::Profile::Probe::get_children()
{
    if(children.find("packet-size-and-padding") == children.end())
    {
        if(packet_size_and_padding != nullptr)
        {
            children["packet-size-and-padding"] = packet_size_and_padding.get();
        }
    }

    if(children.find("send") == children.end())
    {
        if(send != nullptr)
        {
            children["send"] = send.get();
        }
    }

    return children;
}

void Sla::Protocols::Ethernet::Profiles::Profile::Probe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "synthetic-loss-calculation-packets")
    {
        synthetic_loss_calculation_packets = value;
    }
}

Sla::Protocols::Ethernet::Profiles::Profile::Profile()
    :
    	profile_name{YType::str, "profile-name"},
	 packet_type{YType::str, "packet-type"}
    	,
    probe(std::make_unique<Sla::Protocols::Ethernet::Profiles::Profile::Probe>())
	,schedule(nullptr) // presence node
	,statistics(std::make_unique<Sla::Protocols::Ethernet::Profiles::Profile::Statistics>())
{
    probe->parent = this;
    children["probe"] = probe.get();

    statistics->parent = this;
    children["statistics"] = statistics.get();

    yang_name = "profile"; yang_parent_name = "profiles";
}

Sla::Protocols::Ethernet::Profiles::Profile::~Profile()
{
}

bool Sla::Protocols::Ethernet::Profiles::Profile::has_data() const
{
    return profile_name.is_set
	|| packet_type.is_set
	|| (probe !=  nullptr && probe->has_data())
	|| (schedule !=  nullptr && schedule->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Sla::Protocols::Ethernet::Profiles::Profile::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_name.operation)
	|| is_set(packet_type.operation)
	|| (probe !=  nullptr && probe->has_operation())
	|| (schedule !=  nullptr && schedule->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Sla::Protocols::Ethernet::Profiles::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[profile-name='" <<profile_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Sla::Protocols::Ethernet::Profiles::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-cfg:sla/protocols/Cisco-IOS-XR-ethernet-cfm-cfg:ethernet/profiles/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (packet_type.is_set || is_set(packet_type.operation)) leaf_name_data.push_back(packet_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sla::Protocols::Ethernet::Profiles::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "probe")
    {
        if(probe != nullptr)
        {
            children["probe"] = probe.get();
        }
        else
        {
            probe = std::make_unique<Sla::Protocols::Ethernet::Profiles::Profile::Probe>();
            probe->parent = this;
            children["probe"] = probe.get();
        }
        return children.at("probe");
    }

    if(child_yang_name == "schedule")
    {
        if(schedule != nullptr)
        {
            children["schedule"] = schedule.get();
        }
        else
        {
            schedule = std::make_unique<Sla::Protocols::Ethernet::Profiles::Profile::Schedule>();
            schedule->parent = this;
            children["schedule"] = schedule.get();
        }
        return children.at("schedule");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
        else
        {
            statistics = std::make_unique<Sla::Protocols::Ethernet::Profiles::Profile::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics.get();
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sla::Protocols::Ethernet::Profiles::Profile::get_children()
{
    if(children.find("probe") == children.end())
    {
        if(probe != nullptr)
        {
            children["probe"] = probe.get();
        }
    }

    if(children.find("schedule") == children.end())
    {
        if(schedule != nullptr)
        {
            children["schedule"] = schedule.get();
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
    }

    return children;
}

void Sla::Protocols::Ethernet::Profiles::Profile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
    if(value_path == "packet-type")
    {
        packet_type = value;
    }
}

Sla::Protocols::Ethernet::Profiles::Profiles()
{
    yang_name = "profiles"; yang_parent_name = "ethernet";
}

Sla::Protocols::Ethernet::Profiles::~Profiles()
{
}

bool Sla::Protocols::Ethernet::Profiles::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Sla::Protocols::Ethernet::Profiles::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Sla::Protocols::Ethernet::Profiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profiles";

    return path_buffer.str();

}

EntityPath Sla::Protocols::Ethernet::Profiles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-cfg:sla/protocols/Cisco-IOS-XR-ethernet-cfm-cfg:ethernet/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sla::Protocols::Ethernet::Profiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Sla::Protocols::Ethernet::Profiles::Profile>();
        c->parent = this;
        profile.push_back(std::move(c));
        children[segment_path] = profile.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sla::Protocols::Ethernet::Profiles::get_children()
{
    for (auto const & c : profile)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Sla::Protocols::Ethernet::Profiles::set_value(const std::string & value_path, std::string value)
{
}

Sla::Protocols::Ethernet::Ethernet()
    :
    profiles(std::make_unique<Sla::Protocols::Ethernet::Profiles>())
{
    profiles->parent = this;
    children["profiles"] = profiles.get();

    yang_name = "ethernet"; yang_parent_name = "protocols";
}

Sla::Protocols::Ethernet::~Ethernet()
{
}

bool Sla::Protocols::Ethernet::has_data() const
{
    return (profiles !=  nullptr && profiles->has_data());
}

bool Sla::Protocols::Ethernet::has_operation() const
{
    return is_set(operation)
	|| (profiles !=  nullptr && profiles->has_operation());
}

std::string Sla::Protocols::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-cfm-cfg:ethernet";

    return path_buffer.str();

}

EntityPath Sla::Protocols::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-cfg:sla/protocols/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sla::Protocols::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "profiles")
    {
        if(profiles != nullptr)
        {
            children["profiles"] = profiles.get();
        }
        else
        {
            profiles = std::make_unique<Sla::Protocols::Ethernet::Profiles>();
            profiles->parent = this;
            children["profiles"] = profiles.get();
        }
        return children.at("profiles");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sla::Protocols::Ethernet::get_children()
{
    if(children.find("profiles") == children.end())
    {
        if(profiles != nullptr)
        {
            children["profiles"] = profiles.get();
        }
    }

    return children;
}

void Sla::Protocols::Ethernet::set_value(const std::string & value_path, std::string value)
{
}

Sla::Protocols::Protocols()
    :
    ethernet(std::make_unique<Sla::Protocols::Ethernet>())
{
    ethernet->parent = this;
    children["ethernet"] = ethernet.get();

    yang_name = "protocols"; yang_parent_name = "sla";
}

Sla::Protocols::~Protocols()
{
}

bool Sla::Protocols::has_data() const
{
    return (ethernet !=  nullptr && ethernet->has_data());
}

bool Sla::Protocols::has_operation() const
{
    return is_set(operation)
	|| (ethernet !=  nullptr && ethernet->has_operation());
}

std::string Sla::Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols";

    return path_buffer.str();

}

EntityPath Sla::Protocols::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-cfg:sla/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sla::Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet != nullptr)
        {
            children["ethernet"] = ethernet.get();
        }
        else
        {
            ethernet = std::make_unique<Sla::Protocols::Ethernet>();
            ethernet->parent = this;
            children["ethernet"] = ethernet.get();
        }
        return children.at("ethernet");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sla::Protocols::get_children()
{
    if(children.find("ethernet") == children.end())
    {
        if(ethernet != nullptr)
        {
            children["ethernet"] = ethernet.get();
        }
    }

    return children;
}

void Sla::Protocols::set_value(const std::string & value_path, std::string value)
{
}

Sla::Sla()
    :
    protocols(std::make_unique<Sla::Protocols>())
{
    protocols->parent = this;
    children["protocols"] = protocols.get();

    yang_name = "sla"; yang_parent_name = "Cisco-IOS-XR-infra-sla-cfg";
}

Sla::~Sla()
{
}

bool Sla::has_data() const
{
    return (protocols !=  nullptr && protocols->has_data());
}

bool Sla::has_operation() const
{
    return is_set(operation)
	|| (protocols !=  nullptr && protocols->has_operation());
}

std::string Sla::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-sla-cfg:sla";

    return path_buffer.str();

}

EntityPath Sla::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sla::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protocols")
    {
        if(protocols != nullptr)
        {
            children["protocols"] = protocols.get();
        }
        else
        {
            protocols = std::make_unique<Sla::Protocols>();
            protocols->parent = this;
            children["protocols"] = protocols.get();
        }
        return children.at("protocols");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sla::get_children()
{
    if(children.find("protocols") == children.end())
    {
        if(protocols != nullptr)
        {
            children["protocols"] = protocols.get();
        }
    }

    return children;
}

void Sla::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Sla::clone_ptr()
{
    return std::make_unique<Sla>();
}


}
}

