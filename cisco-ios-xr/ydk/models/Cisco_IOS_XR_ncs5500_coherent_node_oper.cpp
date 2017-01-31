
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ncs5500_coherent_node_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ncs5500_coherent_node_oper {

Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate::OptsEaBulkCreate()
    :
    	end{YType::str, "end"},
	 start{YType::str, "start"},
	 time_taken{YType::str, "time-taken"},
	 worst_time{YType::str, "worst-time"}
{
    yang_name = "opts-ea-bulk-create"; yang_parent_name = "coherent-time-stats";
}

Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate::~OptsEaBulkCreate()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate::has_data() const
{
    return end.is_set
	|| start.is_set
	|| time_taken.is_set
	|| worst_time.is_set;
}

bool Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate::has_operation() const
{
    return is_set(operation)
	|| is_set(end.operation)
	|| is_set(start.operation)
	|| is_set(time_taken.operation)
	|| is_set(worst_time.operation);
}

std::string Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opts-ea-bulk-create";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate::get_entity_path(Entity* ancestor) const
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

    if (end.is_set || is_set(end.operation)) leaf_name_data.push_back(end.get_name_leafdata());
    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());
    if (time_taken.is_set || is_set(time_taken.operation)) leaf_name_data.push_back(time_taken.get_name_leafdata());
    if (worst_time.is_set || is_set(worst_time.operation)) leaf_name_data.push_back(worst_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate::get_children()
{
    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end")
    {
        end = value;
    }
    if(value_path == "start")
    {
        start = value;
    }
    if(value_path == "time-taken")
    {
        time_taken = value;
    }
    if(value_path == "worst-time")
    {
        worst_time = value;
    }
}

Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate::OptsEaBulkUpdate()
    :
    	end{YType::str, "end"},
	 start{YType::str, "start"},
	 time_taken{YType::str, "time-taken"},
	 worst_time{YType::str, "worst-time"}
{
    yang_name = "opts-ea-bulk-update"; yang_parent_name = "coherent-time-stats";
}

Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate::~OptsEaBulkUpdate()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate::has_data() const
{
    return end.is_set
	|| start.is_set
	|| time_taken.is_set
	|| worst_time.is_set;
}

bool Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate::has_operation() const
{
    return is_set(operation)
	|| is_set(end.operation)
	|| is_set(start.operation)
	|| is_set(time_taken.operation)
	|| is_set(worst_time.operation);
}

std::string Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opts-ea-bulk-update";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate::get_entity_path(Entity* ancestor) const
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

    if (end.is_set || is_set(end.operation)) leaf_name_data.push_back(end.get_name_leafdata());
    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());
    if (time_taken.is_set || is_set(time_taken.operation)) leaf_name_data.push_back(time_taken.get_name_leafdata());
    if (worst_time.is_set || is_set(worst_time.operation)) leaf_name_data.push_back(worst_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate::get_children()
{
    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end")
    {
        end = value;
    }
    if(value_path == "start")
    {
        start = value;
    }
    if(value_path == "time-taken")
    {
        time_taken = value;
    }
    if(value_path == "worst-time")
    {
        worst_time = value;
    }
}

Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate::DspEaBulkCreate()
    :
    	end{YType::str, "end"},
	 start{YType::str, "start"},
	 time_taken{YType::str, "time-taken"},
	 worst_time{YType::str, "worst-time"}
{
    yang_name = "dsp-ea-bulk-create"; yang_parent_name = "coherent-time-stats";
}

Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate::~DspEaBulkCreate()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate::has_data() const
{
    return end.is_set
	|| start.is_set
	|| time_taken.is_set
	|| worst_time.is_set;
}

bool Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate::has_operation() const
{
    return is_set(operation)
	|| is_set(end.operation)
	|| is_set(start.operation)
	|| is_set(time_taken.operation)
	|| is_set(worst_time.operation);
}

std::string Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsp-ea-bulk-create";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate::get_entity_path(Entity* ancestor) const
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

    if (end.is_set || is_set(end.operation)) leaf_name_data.push_back(end.get_name_leafdata());
    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());
    if (time_taken.is_set || is_set(time_taken.operation)) leaf_name_data.push_back(time_taken.get_name_leafdata());
    if (worst_time.is_set || is_set(worst_time.operation)) leaf_name_data.push_back(worst_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate::get_children()
{
    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end")
    {
        end = value;
    }
    if(value_path == "start")
    {
        start = value;
    }
    if(value_path == "time-taken")
    {
        time_taken = value;
    }
    if(value_path == "worst-time")
    {
        worst_time = value;
    }
}

Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate::DspEaBulkUpdate()
    :
    	end{YType::str, "end"},
	 start{YType::str, "start"},
	 time_taken{YType::str, "time-taken"},
	 worst_time{YType::str, "worst-time"}
{
    yang_name = "dsp-ea-bulk-update"; yang_parent_name = "coherent-time-stats";
}

Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate::~DspEaBulkUpdate()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate::has_data() const
{
    return end.is_set
	|| start.is_set
	|| time_taken.is_set
	|| worst_time.is_set;
}

bool Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate::has_operation() const
{
    return is_set(operation)
	|| is_set(end.operation)
	|| is_set(start.operation)
	|| is_set(time_taken.operation)
	|| is_set(worst_time.operation);
}

std::string Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsp-ea-bulk-update";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate::get_entity_path(Entity* ancestor) const
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

    if (end.is_set || is_set(end.operation)) leaf_name_data.push_back(end.get_name_leafdata());
    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());
    if (time_taken.is_set || is_set(time_taken.operation)) leaf_name_data.push_back(time_taken.get_name_leafdata());
    if (worst_time.is_set || is_set(worst_time.operation)) leaf_name_data.push_back(worst_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate::get_children()
{
    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end")
    {
        end = value;
    }
    if(value_path == "start")
    {
        start = value;
    }
    if(value_path == "time-taken")
    {
        time_taken = value;
    }
    if(value_path == "worst-time")
    {
        worst_time = value;
    }
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats::LaserOnStats()
    :
    	end{YType::str, "end"},
	 start{YType::str, "start"},
	 time_taken{YType::str, "time-taken"},
	 worst_time{YType::str, "worst-time"}
{
    yang_name = "laser-on-stats"; yang_parent_name = "port-stat";
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats::~LaserOnStats()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats::has_data() const
{
    return end.is_set
	|| start.is_set
	|| time_taken.is_set
	|| worst_time.is_set;
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats::has_operation() const
{
    return is_set(operation)
	|| is_set(end.operation)
	|| is_set(start.operation)
	|| is_set(time_taken.operation)
	|| is_set(worst_time.operation);
}

std::string Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "laser-on-stats";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats::get_entity_path(Entity* ancestor) const
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

    if (end.is_set || is_set(end.operation)) leaf_name_data.push_back(end.get_name_leafdata());
    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());
    if (time_taken.is_set || is_set(time_taken.operation)) leaf_name_data.push_back(time_taken.get_name_leafdata());
    if (worst_time.is_set || is_set(worst_time.operation)) leaf_name_data.push_back(worst_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats::get_children()
{
    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end")
    {
        end = value;
    }
    if(value_path == "start")
    {
        start = value;
    }
    if(value_path == "time-taken")
    {
        time_taken = value;
    }
    if(value_path == "worst-time")
    {
        worst_time = value;
    }
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats::LaserOffStats()
    :
    	end{YType::str, "end"},
	 start{YType::str, "start"},
	 time_taken{YType::str, "time-taken"},
	 worst_time{YType::str, "worst-time"}
{
    yang_name = "laser-off-stats"; yang_parent_name = "port-stat";
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats::~LaserOffStats()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats::has_data() const
{
    return end.is_set
	|| start.is_set
	|| time_taken.is_set
	|| worst_time.is_set;
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats::has_operation() const
{
    return is_set(operation)
	|| is_set(end.operation)
	|| is_set(start.operation)
	|| is_set(time_taken.operation)
	|| is_set(worst_time.operation);
}

std::string Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "laser-off-stats";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats::get_entity_path(Entity* ancestor) const
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

    if (end.is_set || is_set(end.operation)) leaf_name_data.push_back(end.get_name_leafdata());
    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());
    if (time_taken.is_set || is_set(time_taken.operation)) leaf_name_data.push_back(time_taken.get_name_leafdata());
    if (worst_time.is_set || is_set(worst_time.operation)) leaf_name_data.push_back(worst_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats::get_children()
{
    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end")
    {
        end = value;
    }
    if(value_path == "start")
    {
        start = value;
    }
    if(value_path == "time-taken")
    {
        time_taken = value;
    }
    if(value_path == "worst-time")
    {
        worst_time = value;
    }
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats::WlOpStats()
    :
    	end{YType::str, "end"},
	 start{YType::str, "start"},
	 time_taken{YType::str, "time-taken"},
	 worst_time{YType::str, "worst-time"}
{
    yang_name = "wl-op-stats"; yang_parent_name = "port-stat";
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats::~WlOpStats()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats::has_data() const
{
    return end.is_set
	|| start.is_set
	|| time_taken.is_set
	|| worst_time.is_set;
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats::has_operation() const
{
    return is_set(operation)
	|| is_set(end.operation)
	|| is_set(start.operation)
	|| is_set(time_taken.operation)
	|| is_set(worst_time.operation);
}

std::string Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wl-op-stats";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats::get_entity_path(Entity* ancestor) const
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

    if (end.is_set || is_set(end.operation)) leaf_name_data.push_back(end.get_name_leafdata());
    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());
    if (time_taken.is_set || is_set(time_taken.operation)) leaf_name_data.push_back(time_taken.get_name_leafdata());
    if (worst_time.is_set || is_set(worst_time.operation)) leaf_name_data.push_back(worst_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats::get_children()
{
    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end")
    {
        end = value;
    }
    if(value_path == "start")
    {
        start = value;
    }
    if(value_path == "time-taken")
    {
        time_taken = value;
    }
    if(value_path == "worst-time")
    {
        worst_time = value;
    }
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats::TxpwrOpStats()
    :
    	end{YType::str, "end"},
	 start{YType::str, "start"},
	 time_taken{YType::str, "time-taken"},
	 worst_time{YType::str, "worst-time"}
{
    yang_name = "txpwr-op-stats"; yang_parent_name = "port-stat";
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats::~TxpwrOpStats()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats::has_data() const
{
    return end.is_set
	|| start.is_set
	|| time_taken.is_set
	|| worst_time.is_set;
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats::has_operation() const
{
    return is_set(operation)
	|| is_set(end.operation)
	|| is_set(start.operation)
	|| is_set(time_taken.operation)
	|| is_set(worst_time.operation);
}

std::string Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "txpwr-op-stats";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats::get_entity_path(Entity* ancestor) const
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

    if (end.is_set || is_set(end.operation)) leaf_name_data.push_back(end.get_name_leafdata());
    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());
    if (time_taken.is_set || is_set(time_taken.operation)) leaf_name_data.push_back(time_taken.get_name_leafdata());
    if (worst_time.is_set || is_set(worst_time.operation)) leaf_name_data.push_back(worst_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats::get_children()
{
    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end")
    {
        end = value;
    }
    if(value_path == "start")
    {
        start = value;
    }
    if(value_path == "time-taken")
    {
        time_taken = value;
    }
    if(value_path == "worst-time")
    {
        worst_time = value;
    }
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats::CdminOpStats()
    :
    	end{YType::str, "end"},
	 start{YType::str, "start"},
	 time_taken{YType::str, "time-taken"},
	 worst_time{YType::str, "worst-time"}
{
    yang_name = "cdmin-op-stats"; yang_parent_name = "port-stat";
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats::~CdminOpStats()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats::has_data() const
{
    return end.is_set
	|| start.is_set
	|| time_taken.is_set
	|| worst_time.is_set;
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats::has_operation() const
{
    return is_set(operation)
	|| is_set(end.operation)
	|| is_set(start.operation)
	|| is_set(time_taken.operation)
	|| is_set(worst_time.operation);
}

std::string Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdmin-op-stats";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats::get_entity_path(Entity* ancestor) const
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

    if (end.is_set || is_set(end.operation)) leaf_name_data.push_back(end.get_name_leafdata());
    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());
    if (time_taken.is_set || is_set(time_taken.operation)) leaf_name_data.push_back(time_taken.get_name_leafdata());
    if (worst_time.is_set || is_set(worst_time.operation)) leaf_name_data.push_back(worst_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats::get_children()
{
    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end")
    {
        end = value;
    }
    if(value_path == "start")
    {
        start = value;
    }
    if(value_path == "time-taken")
    {
        time_taken = value;
    }
    if(value_path == "worst-time")
    {
        worst_time = value;
    }
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats::CdmaxOpStats()
    :
    	end{YType::str, "end"},
	 start{YType::str, "start"},
	 time_taken{YType::str, "time-taken"},
	 worst_time{YType::str, "worst-time"}
{
    yang_name = "cdmax-op-stats"; yang_parent_name = "port-stat";
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats::~CdmaxOpStats()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats::has_data() const
{
    return end.is_set
	|| start.is_set
	|| time_taken.is_set
	|| worst_time.is_set;
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats::has_operation() const
{
    return is_set(operation)
	|| is_set(end.operation)
	|| is_set(start.operation)
	|| is_set(time_taken.operation)
	|| is_set(worst_time.operation);
}

std::string Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdmax-op-stats";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats::get_entity_path(Entity* ancestor) const
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

    if (end.is_set || is_set(end.operation)) leaf_name_data.push_back(end.get_name_leafdata());
    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());
    if (time_taken.is_set || is_set(time_taken.operation)) leaf_name_data.push_back(time_taken.get_name_leafdata());
    if (worst_time.is_set || is_set(worst_time.operation)) leaf_name_data.push_back(worst_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats::get_children()
{
    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end")
    {
        end = value;
    }
    if(value_path == "start")
    {
        start = value;
    }
    if(value_path == "time-taken")
    {
        time_taken = value;
    }
    if(value_path == "worst-time")
    {
        worst_time = value;
    }
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats::TraffictypeOpStats()
    :
    	end{YType::str, "end"},
	 start{YType::str, "start"},
	 time_taken{YType::str, "time-taken"},
	 worst_time{YType::str, "worst-time"}
{
    yang_name = "traffictype-op-stats"; yang_parent_name = "port-stat";
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats::~TraffictypeOpStats()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats::has_data() const
{
    return end.is_set
	|| start.is_set
	|| time_taken.is_set
	|| worst_time.is_set;
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats::has_operation() const
{
    return is_set(operation)
	|| is_set(end.operation)
	|| is_set(start.operation)
	|| is_set(time_taken.operation)
	|| is_set(worst_time.operation);
}

std::string Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffictype-op-stats";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats::get_entity_path(Entity* ancestor) const
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

    if (end.is_set || is_set(end.operation)) leaf_name_data.push_back(end.get_name_leafdata());
    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());
    if (time_taken.is_set || is_set(time_taken.operation)) leaf_name_data.push_back(time_taken.get_name_leafdata());
    if (worst_time.is_set || is_set(worst_time.operation)) leaf_name_data.push_back(worst_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats::get_children()
{
    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end")
    {
        end = value;
    }
    if(value_path == "start")
    {
        start = value;
    }
    if(value_path == "time-taken")
    {
        time_taken = value;
    }
    if(value_path == "worst-time")
    {
        worst_time = value;
    }
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::PortStat()
    :
    	cd_max{YType::uint32, "cd-max"},
	 cd_min{YType::uint32, "cd-min"},
	 laser_state{YType::boolean, "laser-state"},
	 traffic_type{YType::uint32, "traffic-type"},
	 tx_power{YType::uint32, "tx-power"},
	 wavelength{YType::uint32, "wavelength"}
    	,
    cdmax_op_stats(std::make_unique<Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats>())
	,cdmin_op_stats(std::make_unique<Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats>())
	,laser_off_stats(std::make_unique<Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats>())
	,laser_on_stats(std::make_unique<Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats>())
	,traffictype_op_stats(std::make_unique<Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats>())
	,txpwr_op_stats(std::make_unique<Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats>())
	,wl_op_stats(std::make_unique<Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats>())
{
    cdmax_op_stats->parent = this;
    children["cdmax-op-stats"] = cdmax_op_stats.get();

    cdmin_op_stats->parent = this;
    children["cdmin-op-stats"] = cdmin_op_stats.get();

    laser_off_stats->parent = this;
    children["laser-off-stats"] = laser_off_stats.get();

    laser_on_stats->parent = this;
    children["laser-on-stats"] = laser_on_stats.get();

    traffictype_op_stats->parent = this;
    children["traffictype-op-stats"] = traffictype_op_stats.get();

    txpwr_op_stats->parent = this;
    children["txpwr-op-stats"] = txpwr_op_stats.get();

    wl_op_stats->parent = this;
    children["wl-op-stats"] = wl_op_stats.get();

    yang_name = "port-stat"; yang_parent_name = "coherent-time-stats";
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::~PortStat()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::has_data() const
{
    return cd_max.is_set
	|| cd_min.is_set
	|| laser_state.is_set
	|| traffic_type.is_set
	|| tx_power.is_set
	|| wavelength.is_set
	|| (cdmax_op_stats !=  nullptr && cdmax_op_stats->has_data())
	|| (cdmin_op_stats !=  nullptr && cdmin_op_stats->has_data())
	|| (laser_off_stats !=  nullptr && laser_off_stats->has_data())
	|| (laser_on_stats !=  nullptr && laser_on_stats->has_data())
	|| (traffictype_op_stats !=  nullptr && traffictype_op_stats->has_data())
	|| (txpwr_op_stats !=  nullptr && txpwr_op_stats->has_data())
	|| (wl_op_stats !=  nullptr && wl_op_stats->has_data());
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::has_operation() const
{
    return is_set(operation)
	|| is_set(cd_max.operation)
	|| is_set(cd_min.operation)
	|| is_set(laser_state.operation)
	|| is_set(traffic_type.operation)
	|| is_set(tx_power.operation)
	|| is_set(wavelength.operation)
	|| (cdmax_op_stats !=  nullptr && cdmax_op_stats->has_operation())
	|| (cdmin_op_stats !=  nullptr && cdmin_op_stats->has_operation())
	|| (laser_off_stats !=  nullptr && laser_off_stats->has_operation())
	|| (laser_on_stats !=  nullptr && laser_on_stats->has_operation())
	|| (traffictype_op_stats !=  nullptr && traffictype_op_stats->has_operation())
	|| (txpwr_op_stats !=  nullptr && txpwr_op_stats->has_operation())
	|| (wl_op_stats !=  nullptr && wl_op_stats->has_operation());
}

std::string Coherent::Nodes::Node::CoherentTimeStats::PortStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-stat";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::Node::CoherentTimeStats::PortStat::get_entity_path(Entity* ancestor) const
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

    if (cd_max.is_set || is_set(cd_max.operation)) leaf_name_data.push_back(cd_max.get_name_leafdata());
    if (cd_min.is_set || is_set(cd_min.operation)) leaf_name_data.push_back(cd_min.get_name_leafdata());
    if (laser_state.is_set || is_set(laser_state.operation)) leaf_name_data.push_back(laser_state.get_name_leafdata());
    if (traffic_type.is_set || is_set(traffic_type.operation)) leaf_name_data.push_back(traffic_type.get_name_leafdata());
    if (tx_power.is_set || is_set(tx_power.operation)) leaf_name_data.push_back(tx_power.get_name_leafdata());
    if (wavelength.is_set || is_set(wavelength.operation)) leaf_name_data.push_back(wavelength.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::Node::CoherentTimeStats::PortStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cdmax-op-stats")
    {
        if(cdmax_op_stats != nullptr)
        {
            children["cdmax-op-stats"] = cdmax_op_stats.get();
        }
        else
        {
            cdmax_op_stats = std::make_unique<Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats>();
            cdmax_op_stats->parent = this;
            children["cdmax-op-stats"] = cdmax_op_stats.get();
        }
        return children.at("cdmax-op-stats");
    }

    if(child_yang_name == "cdmin-op-stats")
    {
        if(cdmin_op_stats != nullptr)
        {
            children["cdmin-op-stats"] = cdmin_op_stats.get();
        }
        else
        {
            cdmin_op_stats = std::make_unique<Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats>();
            cdmin_op_stats->parent = this;
            children["cdmin-op-stats"] = cdmin_op_stats.get();
        }
        return children.at("cdmin-op-stats");
    }

    if(child_yang_name == "laser-off-stats")
    {
        if(laser_off_stats != nullptr)
        {
            children["laser-off-stats"] = laser_off_stats.get();
        }
        else
        {
            laser_off_stats = std::make_unique<Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats>();
            laser_off_stats->parent = this;
            children["laser-off-stats"] = laser_off_stats.get();
        }
        return children.at("laser-off-stats");
    }

    if(child_yang_name == "laser-on-stats")
    {
        if(laser_on_stats != nullptr)
        {
            children["laser-on-stats"] = laser_on_stats.get();
        }
        else
        {
            laser_on_stats = std::make_unique<Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats>();
            laser_on_stats->parent = this;
            children["laser-on-stats"] = laser_on_stats.get();
        }
        return children.at("laser-on-stats");
    }

    if(child_yang_name == "traffictype-op-stats")
    {
        if(traffictype_op_stats != nullptr)
        {
            children["traffictype-op-stats"] = traffictype_op_stats.get();
        }
        else
        {
            traffictype_op_stats = std::make_unique<Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats>();
            traffictype_op_stats->parent = this;
            children["traffictype-op-stats"] = traffictype_op_stats.get();
        }
        return children.at("traffictype-op-stats");
    }

    if(child_yang_name == "txpwr-op-stats")
    {
        if(txpwr_op_stats != nullptr)
        {
            children["txpwr-op-stats"] = txpwr_op_stats.get();
        }
        else
        {
            txpwr_op_stats = std::make_unique<Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats>();
            txpwr_op_stats->parent = this;
            children["txpwr-op-stats"] = txpwr_op_stats.get();
        }
        return children.at("txpwr-op-stats");
    }

    if(child_yang_name == "wl-op-stats")
    {
        if(wl_op_stats != nullptr)
        {
            children["wl-op-stats"] = wl_op_stats.get();
        }
        else
        {
            wl_op_stats = std::make_unique<Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats>();
            wl_op_stats->parent = this;
            children["wl-op-stats"] = wl_op_stats.get();
        }
        return children.at("wl-op-stats");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::Node::CoherentTimeStats::PortStat::get_children()
{
    if(children.find("cdmax-op-stats") == children.end())
    {
        if(cdmax_op_stats != nullptr)
        {
            children["cdmax-op-stats"] = cdmax_op_stats.get();
        }
    }

    if(children.find("cdmin-op-stats") == children.end())
    {
        if(cdmin_op_stats != nullptr)
        {
            children["cdmin-op-stats"] = cdmin_op_stats.get();
        }
    }

    if(children.find("laser-off-stats") == children.end())
    {
        if(laser_off_stats != nullptr)
        {
            children["laser-off-stats"] = laser_off_stats.get();
        }
    }

    if(children.find("laser-on-stats") == children.end())
    {
        if(laser_on_stats != nullptr)
        {
            children["laser-on-stats"] = laser_on_stats.get();
        }
    }

    if(children.find("traffictype-op-stats") == children.end())
    {
        if(traffictype_op_stats != nullptr)
        {
            children["traffictype-op-stats"] = traffictype_op_stats.get();
        }
    }

    if(children.find("txpwr-op-stats") == children.end())
    {
        if(txpwr_op_stats != nullptr)
        {
            children["txpwr-op-stats"] = txpwr_op_stats.get();
        }
    }

    if(children.find("wl-op-stats") == children.end())
    {
        if(wl_op_stats != nullptr)
        {
            children["wl-op-stats"] = wl_op_stats.get();
        }
    }

    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cd-max")
    {
        cd_max = value;
    }
    if(value_path == "cd-min")
    {
        cd_min = value;
    }
    if(value_path == "laser-state")
    {
        laser_state = value;
    }
    if(value_path == "traffic-type")
    {
        traffic_type = value;
    }
    if(value_path == "tx-power")
    {
        tx_power = value;
    }
    if(value_path == "wavelength")
    {
        wavelength = value;
    }
}

Coherent::Nodes::Node::CoherentTimeStats::CoherentTimeStats()
    :
    	device_created{YType::str, "device-created"},
	 driver_init{YType::str, "driver-init"},
	 driver_operational{YType::str, "driver-operational"},
	 dsp_controllers_created{YType::str, "dsp-controllers-created"},
	 eth_intf_created{YType::str, "eth-intf-created"},
	 optics_controllers_created{YType::str, "optics-controllers-created"}
    	,
    dsp_ea_bulk_create(std::make_unique<Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate>())
	,dsp_ea_bulk_update(std::make_unique<Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate>())
	,opts_ea_bulk_create(std::make_unique<Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate>())
	,opts_ea_bulk_update(std::make_unique<Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate>())
{
    dsp_ea_bulk_create->parent = this;
    children["dsp-ea-bulk-create"] = dsp_ea_bulk_create.get();

    dsp_ea_bulk_update->parent = this;
    children["dsp-ea-bulk-update"] = dsp_ea_bulk_update.get();

    opts_ea_bulk_create->parent = this;
    children["opts-ea-bulk-create"] = opts_ea_bulk_create.get();

    opts_ea_bulk_update->parent = this;
    children["opts-ea-bulk-update"] = opts_ea_bulk_update.get();

    yang_name = "coherent-time-stats"; yang_parent_name = "node";
}

Coherent::Nodes::Node::CoherentTimeStats::~CoherentTimeStats()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::has_data() const
{
    for (std::size_t index=0; index<port_stat.size(); index++)
    {
        if(port_stat[index]->has_data())
            return true;
    }
    return device_created.is_set
	|| driver_init.is_set
	|| driver_operational.is_set
	|| dsp_controllers_created.is_set
	|| eth_intf_created.is_set
	|| optics_controllers_created.is_set
	|| (dsp_ea_bulk_create !=  nullptr && dsp_ea_bulk_create->has_data())
	|| (dsp_ea_bulk_update !=  nullptr && dsp_ea_bulk_update->has_data())
	|| (opts_ea_bulk_create !=  nullptr && opts_ea_bulk_create->has_data())
	|| (opts_ea_bulk_update !=  nullptr && opts_ea_bulk_update->has_data());
}

bool Coherent::Nodes::Node::CoherentTimeStats::has_operation() const
{
    for (std::size_t index=0; index<port_stat.size(); index++)
    {
        if(port_stat[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(device_created.operation)
	|| is_set(driver_init.operation)
	|| is_set(driver_operational.operation)
	|| is_set(dsp_controllers_created.operation)
	|| is_set(eth_intf_created.operation)
	|| is_set(optics_controllers_created.operation)
	|| (dsp_ea_bulk_create !=  nullptr && dsp_ea_bulk_create->has_operation())
	|| (dsp_ea_bulk_update !=  nullptr && dsp_ea_bulk_update->has_operation())
	|| (opts_ea_bulk_create !=  nullptr && opts_ea_bulk_create->has_operation())
	|| (opts_ea_bulk_update !=  nullptr && opts_ea_bulk_update->has_operation());
}

std::string Coherent::Nodes::Node::CoherentTimeStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "coherent-time-stats";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::Node::CoherentTimeStats::get_entity_path(Entity* ancestor) const
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

    if (device_created.is_set || is_set(device_created.operation)) leaf_name_data.push_back(device_created.get_name_leafdata());
    if (driver_init.is_set || is_set(driver_init.operation)) leaf_name_data.push_back(driver_init.get_name_leafdata());
    if (driver_operational.is_set || is_set(driver_operational.operation)) leaf_name_data.push_back(driver_operational.get_name_leafdata());
    if (dsp_controllers_created.is_set || is_set(dsp_controllers_created.operation)) leaf_name_data.push_back(dsp_controllers_created.get_name_leafdata());
    if (eth_intf_created.is_set || is_set(eth_intf_created.operation)) leaf_name_data.push_back(eth_intf_created.get_name_leafdata());
    if (optics_controllers_created.is_set || is_set(optics_controllers_created.operation)) leaf_name_data.push_back(optics_controllers_created.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::Node::CoherentTimeStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dsp-ea-bulk-create")
    {
        if(dsp_ea_bulk_create != nullptr)
        {
            children["dsp-ea-bulk-create"] = dsp_ea_bulk_create.get();
        }
        else
        {
            dsp_ea_bulk_create = std::make_unique<Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate>();
            dsp_ea_bulk_create->parent = this;
            children["dsp-ea-bulk-create"] = dsp_ea_bulk_create.get();
        }
        return children.at("dsp-ea-bulk-create");
    }

    if(child_yang_name == "dsp-ea-bulk-update")
    {
        if(dsp_ea_bulk_update != nullptr)
        {
            children["dsp-ea-bulk-update"] = dsp_ea_bulk_update.get();
        }
        else
        {
            dsp_ea_bulk_update = std::make_unique<Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate>();
            dsp_ea_bulk_update->parent = this;
            children["dsp-ea-bulk-update"] = dsp_ea_bulk_update.get();
        }
        return children.at("dsp-ea-bulk-update");
    }

    if(child_yang_name == "opts-ea-bulk-create")
    {
        if(opts_ea_bulk_create != nullptr)
        {
            children["opts-ea-bulk-create"] = opts_ea_bulk_create.get();
        }
        else
        {
            opts_ea_bulk_create = std::make_unique<Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate>();
            opts_ea_bulk_create->parent = this;
            children["opts-ea-bulk-create"] = opts_ea_bulk_create.get();
        }
        return children.at("opts-ea-bulk-create");
    }

    if(child_yang_name == "opts-ea-bulk-update")
    {
        if(opts_ea_bulk_update != nullptr)
        {
            children["opts-ea-bulk-update"] = opts_ea_bulk_update.get();
        }
        else
        {
            opts_ea_bulk_update = std::make_unique<Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate>();
            opts_ea_bulk_update->parent = this;
            children["opts-ea-bulk-update"] = opts_ea_bulk_update.get();
        }
        return children.at("opts-ea-bulk-update");
    }

    if(child_yang_name == "port-stat")
    {
        for(auto const & c : port_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Coherent::Nodes::Node::CoherentTimeStats::PortStat>();
        c->parent = this;
        port_stat.push_back(std::move(c));
        children[segment_path] = port_stat.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::Node::CoherentTimeStats::get_children()
{
    if(children.find("dsp-ea-bulk-create") == children.end())
    {
        if(dsp_ea_bulk_create != nullptr)
        {
            children["dsp-ea-bulk-create"] = dsp_ea_bulk_create.get();
        }
    }

    if(children.find("dsp-ea-bulk-update") == children.end())
    {
        if(dsp_ea_bulk_update != nullptr)
        {
            children["dsp-ea-bulk-update"] = dsp_ea_bulk_update.get();
        }
    }

    if(children.find("opts-ea-bulk-create") == children.end())
    {
        if(opts_ea_bulk_create != nullptr)
        {
            children["opts-ea-bulk-create"] = opts_ea_bulk_create.get();
        }
    }

    if(children.find("opts-ea-bulk-update") == children.end())
    {
        if(opts_ea_bulk_update != nullptr)
        {
            children["opts-ea-bulk-update"] = opts_ea_bulk_update.get();
        }
    }

    for (auto const & c : port_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-created")
    {
        device_created = value;
    }
    if(value_path == "driver-init")
    {
        driver_init = value;
    }
    if(value_path == "driver-operational")
    {
        driver_operational = value;
    }
    if(value_path == "dsp-controllers-created")
    {
        dsp_controllers_created = value;
    }
    if(value_path == "eth-intf-created")
    {
        eth_intf_created = value;
    }
    if(value_path == "optics-controllers-created")
    {
        optics_controllers_created = value;
    }
}

Coherent::Nodes::Node::Devicemapping::DevMap::DevMap()
    :
    	device_address{YType::uint32, "device-address"},
	 ifhandle{YType::uint32, "ifhandle"},
	 intf_name{YType::str, "intf-name"}
{
    yang_name = "dev-map"; yang_parent_name = "devicemapping";
}

Coherent::Nodes::Node::Devicemapping::DevMap::~DevMap()
{
}

bool Coherent::Nodes::Node::Devicemapping::DevMap::has_data() const
{
    return device_address.is_set
	|| ifhandle.is_set
	|| intf_name.is_set;
}

bool Coherent::Nodes::Node::Devicemapping::DevMap::has_operation() const
{
    return is_set(operation)
	|| is_set(device_address.operation)
	|| is_set(ifhandle.operation)
	|| is_set(intf_name.operation);
}

std::string Coherent::Nodes::Node::Devicemapping::DevMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dev-map";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::Node::Devicemapping::DevMap::get_entity_path(Entity* ancestor) const
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

    if (device_address.is_set || is_set(device_address.operation)) leaf_name_data.push_back(device_address.get_name_leafdata());
    if (ifhandle.is_set || is_set(ifhandle.operation)) leaf_name_data.push_back(ifhandle.get_name_leafdata());
    if (intf_name.is_set || is_set(intf_name.operation)) leaf_name_data.push_back(intf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::Node::Devicemapping::DevMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::Node::Devicemapping::DevMap::get_children()
{
    return children;
}

void Coherent::Nodes::Node::Devicemapping::DevMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-address")
    {
        device_address = value;
    }
    if(value_path == "ifhandle")
    {
        ifhandle = value;
    }
    if(value_path == "intf-name")
    {
        intf_name = value;
    }
}

Coherent::Nodes::Node::Devicemapping::Devicemapping()
    :
    	num_entries{YType::uint32, "num-entries"}
{
    yang_name = "devicemapping"; yang_parent_name = "node";
}

Coherent::Nodes::Node::Devicemapping::~Devicemapping()
{
}

bool Coherent::Nodes::Node::Devicemapping::has_data() const
{
    for (std::size_t index=0; index<dev_map.size(); index++)
    {
        if(dev_map[index]->has_data())
            return true;
    }
    return num_entries.is_set;
}

bool Coherent::Nodes::Node::Devicemapping::has_operation() const
{
    for (std::size_t index=0; index<dev_map.size(); index++)
    {
        if(dev_map[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(num_entries.operation);
}

std::string Coherent::Nodes::Node::Devicemapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "devicemapping";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::Node::Devicemapping::get_entity_path(Entity* ancestor) const
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

    if (num_entries.is_set || is_set(num_entries.operation)) leaf_name_data.push_back(num_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::Node::Devicemapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dev-map")
    {
        for(auto const & c : dev_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Coherent::Nodes::Node::Devicemapping::DevMap>();
        c->parent = this;
        dev_map.push_back(std::move(c));
        children[segment_path] = dev_map.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::Node::Devicemapping::get_children()
{
    for (auto const & c : dev_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Coherent::Nodes::Node::Devicemapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-entries")
    {
        num_entries = value;
    }
}

Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo::CtpInfo()
    :
    	clei_code_number{YType::str, "clei-code-number"},
	 ctp_type{YType::uint32, "ctp-type"},
	 date_code_number{YType::str, "date-code-number"},
	 description{YType::str, "description"},
	 deviation{YType::str, "deviation"},
	 module_firmware_committed_version_number{YType::uint16, "module-firmware-committed-version-number"},
	 module_firmware_running_version_number{YType::uint16, "module-firmware-running-version-number"},
	 module_hardware_version_number{YType::uint16, "module-hardware-version-number"},
	 part_number{YType::str, "part-number"},
	 pid{YType::str, "pid"},
	 serial_number{YType::str, "serial-number"},
	 vendorname{YType::str, "vendorname"},
	 vid{YType::str, "vid"}
{
    yang_name = "ctp-info"; yang_parent_name = "port-data";
}

Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo::~CtpInfo()
{
}

bool Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo::has_data() const
{
    return clei_code_number.is_set
	|| ctp_type.is_set
	|| date_code_number.is_set
	|| description.is_set
	|| deviation.is_set
	|| module_firmware_committed_version_number.is_set
	|| module_firmware_running_version_number.is_set
	|| module_hardware_version_number.is_set
	|| part_number.is_set
	|| pid.is_set
	|| serial_number.is_set
	|| vendorname.is_set
	|| vid.is_set;
}

bool Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(clei_code_number.operation)
	|| is_set(ctp_type.operation)
	|| is_set(date_code_number.operation)
	|| is_set(description.operation)
	|| is_set(deviation.operation)
	|| is_set(module_firmware_committed_version_number.operation)
	|| is_set(module_firmware_running_version_number.operation)
	|| is_set(module_hardware_version_number.operation)
	|| is_set(part_number.operation)
	|| is_set(pid.operation)
	|| is_set(serial_number.operation)
	|| is_set(vendorname.operation)
	|| is_set(vid.operation);
}

std::string Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ctp-info";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo::get_entity_path(Entity* ancestor) const
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

    if (clei_code_number.is_set || is_set(clei_code_number.operation)) leaf_name_data.push_back(clei_code_number.get_name_leafdata());
    if (ctp_type.is_set || is_set(ctp_type.operation)) leaf_name_data.push_back(ctp_type.get_name_leafdata());
    if (date_code_number.is_set || is_set(date_code_number.operation)) leaf_name_data.push_back(date_code_number.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (deviation.is_set || is_set(deviation.operation)) leaf_name_data.push_back(deviation.get_name_leafdata());
    if (module_firmware_committed_version_number.is_set || is_set(module_firmware_committed_version_number.operation)) leaf_name_data.push_back(module_firmware_committed_version_number.get_name_leafdata());
    if (module_firmware_running_version_number.is_set || is_set(module_firmware_running_version_number.operation)) leaf_name_data.push_back(module_firmware_running_version_number.get_name_leafdata());
    if (module_hardware_version_number.is_set || is_set(module_hardware_version_number.operation)) leaf_name_data.push_back(module_hardware_version_number.get_name_leafdata());
    if (part_number.is_set || is_set(part_number.operation)) leaf_name_data.push_back(part_number.get_name_leafdata());
    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (vendorname.is_set || is_set(vendorname.operation)) leaf_name_data.push_back(vendorname.get_name_leafdata());
    if (vid.is_set || is_set(vid.operation)) leaf_name_data.push_back(vid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo::get_children()
{
    return children;
}

void Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clei-code-number")
    {
        clei_code_number = value;
    }
    if(value_path == "ctp-type")
    {
        ctp_type = value;
    }
    if(value_path == "date-code-number")
    {
        date_code_number = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "deviation")
    {
        deviation = value;
    }
    if(value_path == "module-firmware-committed-version-number")
    {
        module_firmware_committed_version_number = value;
    }
    if(value_path == "module-firmware-running-version-number")
    {
        module_firmware_running_version_number = value;
    }
    if(value_path == "module-hardware-version-number")
    {
        module_hardware_version_number = value;
    }
    if(value_path == "part-number")
    {
        part_number = value;
    }
    if(value_path == "pid")
    {
        pid = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "vendorname")
    {
        vendorname = value;
    }
    if(value_path == "vid")
    {
        vid = value;
    }
}

Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData::EthData()
    :
    	admin_state{YType::boolean, "admin-state"},
	 ifname{YType::str, "ifname"},
	 intf_handle{YType::uint32, "intf-handle"}
{
    yang_name = "eth-data"; yang_parent_name = "interface-info";
}

Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData::~EthData()
{
}

bool Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData::has_data() const
{
    return admin_state.is_set
	|| ifname.is_set
	|| intf_handle.is_set;
}

bool Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_state.operation)
	|| is_set(ifname.operation)
	|| is_set(intf_handle.operation);
}

std::string Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eth-data";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData::get_entity_path(Entity* ancestor) const
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

    if (admin_state.is_set || is_set(admin_state.operation)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.operation)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (intf_handle.is_set || is_set(intf_handle.operation)) leaf_name_data.push_back(intf_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData::get_children()
{
    return children;
}

void Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-state")
    {
        admin_state = value;
    }
    if(value_path == "ifname")
    {
        ifname = value;
    }
    if(value_path == "intf-handle")
    {
        intf_handle = value;
    }
}

Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::InterfaceInfo()
    :
    	intf_count{YType::int32, "intf-count"}
{
    yang_name = "interface-info"; yang_parent_name = "port-data";
}

Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::~InterfaceInfo()
{
}

bool Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::has_data() const
{
    for (std::size_t index=0; index<eth_data.size(); index++)
    {
        if(eth_data[index]->has_data())
            return true;
    }
    return intf_count.is_set;
}

bool Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::has_operation() const
{
    for (std::size_t index=0; index<eth_data.size(); index++)
    {
        if(eth_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(intf_count.operation);
}

std::string Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-info";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::get_entity_path(Entity* ancestor) const
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

    if (intf_count.is_set || is_set(intf_count.operation)) leaf_name_data.push_back(intf_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "eth-data")
    {
        for(auto const & c : eth_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData>();
        c->parent = this;
        eth_data.push_back(std::move(c));
        children[segment_path] = eth_data.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::get_children()
{
    for (auto const & c : eth_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "intf-count")
    {
        intf_count = value;
    }
}

Coherent::Nodes::Node::Coherenthealth::PortData::PortData()
    :
    	dsp_admin_up{YType::boolean, "dsp-admin-up"},
	 dsp_ctrl_created{YType::boolean, "dsp-ctrl-created"},
	 fp_port_idx{YType::uint32, "fp-port-idx"},
	 has_pluggable{YType::boolean, "has-pluggable"},
	 laser_op_rc{YType::int32, "laser-op-rc"},
	 laser_state{YType::boolean, "laser-state"},
	 optics_admin_up{YType::boolean, "optics-admin-up"},
	 optics_ctrl_created{YType::boolean, "optics-ctrl-created"},
	 traffic_op_rc{YType::int32, "traffic-op-rc"},
	 traffic_type{YType::uint32, "traffic-type"},
	 wavelength{YType::uint32, "wavelength"},
	 wlen_op_rc{YType::int32, "wlen-op-rc"}
    	,
    ctp_info(std::make_unique<Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo>())
	,interface_info(std::make_unique<Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo>())
{
    ctp_info->parent = this;
    children["ctp-info"] = ctp_info.get();

    interface_info->parent = this;
    children["interface-info"] = interface_info.get();

    yang_name = "port-data"; yang_parent_name = "coherenthealth";
}

Coherent::Nodes::Node::Coherenthealth::PortData::~PortData()
{
}

bool Coherent::Nodes::Node::Coherenthealth::PortData::has_data() const
{
    return dsp_admin_up.is_set
	|| dsp_ctrl_created.is_set
	|| fp_port_idx.is_set
	|| has_pluggable.is_set
	|| laser_op_rc.is_set
	|| laser_state.is_set
	|| optics_admin_up.is_set
	|| optics_ctrl_created.is_set
	|| traffic_op_rc.is_set
	|| traffic_type.is_set
	|| wavelength.is_set
	|| wlen_op_rc.is_set
	|| (ctp_info !=  nullptr && ctp_info->has_data())
	|| (interface_info !=  nullptr && interface_info->has_data());
}

bool Coherent::Nodes::Node::Coherenthealth::PortData::has_operation() const
{
    return is_set(operation)
	|| is_set(dsp_admin_up.operation)
	|| is_set(dsp_ctrl_created.operation)
	|| is_set(fp_port_idx.operation)
	|| is_set(has_pluggable.operation)
	|| is_set(laser_op_rc.operation)
	|| is_set(laser_state.operation)
	|| is_set(optics_admin_up.operation)
	|| is_set(optics_ctrl_created.operation)
	|| is_set(traffic_op_rc.operation)
	|| is_set(traffic_type.operation)
	|| is_set(wavelength.operation)
	|| is_set(wlen_op_rc.operation)
	|| (ctp_info !=  nullptr && ctp_info->has_operation())
	|| (interface_info !=  nullptr && interface_info->has_operation());
}

std::string Coherent::Nodes::Node::Coherenthealth::PortData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-data";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::Node::Coherenthealth::PortData::get_entity_path(Entity* ancestor) const
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

    if (dsp_admin_up.is_set || is_set(dsp_admin_up.operation)) leaf_name_data.push_back(dsp_admin_up.get_name_leafdata());
    if (dsp_ctrl_created.is_set || is_set(dsp_ctrl_created.operation)) leaf_name_data.push_back(dsp_ctrl_created.get_name_leafdata());
    if (fp_port_idx.is_set || is_set(fp_port_idx.operation)) leaf_name_data.push_back(fp_port_idx.get_name_leafdata());
    if (has_pluggable.is_set || is_set(has_pluggable.operation)) leaf_name_data.push_back(has_pluggable.get_name_leafdata());
    if (laser_op_rc.is_set || is_set(laser_op_rc.operation)) leaf_name_data.push_back(laser_op_rc.get_name_leafdata());
    if (laser_state.is_set || is_set(laser_state.operation)) leaf_name_data.push_back(laser_state.get_name_leafdata());
    if (optics_admin_up.is_set || is_set(optics_admin_up.operation)) leaf_name_data.push_back(optics_admin_up.get_name_leafdata());
    if (optics_ctrl_created.is_set || is_set(optics_ctrl_created.operation)) leaf_name_data.push_back(optics_ctrl_created.get_name_leafdata());
    if (traffic_op_rc.is_set || is_set(traffic_op_rc.operation)) leaf_name_data.push_back(traffic_op_rc.get_name_leafdata());
    if (traffic_type.is_set || is_set(traffic_type.operation)) leaf_name_data.push_back(traffic_type.get_name_leafdata());
    if (wavelength.is_set || is_set(wavelength.operation)) leaf_name_data.push_back(wavelength.get_name_leafdata());
    if (wlen_op_rc.is_set || is_set(wlen_op_rc.operation)) leaf_name_data.push_back(wlen_op_rc.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::Node::Coherenthealth::PortData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ctp-info")
    {
        if(ctp_info != nullptr)
        {
            children["ctp-info"] = ctp_info.get();
        }
        else
        {
            ctp_info = std::make_unique<Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo>();
            ctp_info->parent = this;
            children["ctp-info"] = ctp_info.get();
        }
        return children.at("ctp-info");
    }

    if(child_yang_name == "interface-info")
    {
        if(interface_info != nullptr)
        {
            children["interface-info"] = interface_info.get();
        }
        else
        {
            interface_info = std::make_unique<Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo>();
            interface_info->parent = this;
            children["interface-info"] = interface_info.get();
        }
        return children.at("interface-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::Node::Coherenthealth::PortData::get_children()
{
    if(children.find("ctp-info") == children.end())
    {
        if(ctp_info != nullptr)
        {
            children["ctp-info"] = ctp_info.get();
        }
    }

    if(children.find("interface-info") == children.end())
    {
        if(interface_info != nullptr)
        {
            children["interface-info"] = interface_info.get();
        }
    }

    return children;
}

void Coherent::Nodes::Node::Coherenthealth::PortData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dsp-admin-up")
    {
        dsp_admin_up = value;
    }
    if(value_path == "dsp-ctrl-created")
    {
        dsp_ctrl_created = value;
    }
    if(value_path == "fp-port-idx")
    {
        fp_port_idx = value;
    }
    if(value_path == "has-pluggable")
    {
        has_pluggable = value;
    }
    if(value_path == "laser-op-rc")
    {
        laser_op_rc = value;
    }
    if(value_path == "laser-state")
    {
        laser_state = value;
    }
    if(value_path == "optics-admin-up")
    {
        optics_admin_up = value;
    }
    if(value_path == "optics-ctrl-created")
    {
        optics_ctrl_created = value;
    }
    if(value_path == "traffic-op-rc")
    {
        traffic_op_rc = value;
    }
    if(value_path == "traffic-type")
    {
        traffic_type = value;
    }
    if(value_path == "wavelength")
    {
        wavelength = value;
    }
    if(value_path == "wlen-op-rc")
    {
        wlen_op_rc = value;
    }
}

Coherent::Nodes::Node::Coherenthealth::Coherenthealth()
    :
    	aipc_srvr_state{YType::boolean, "aipc-srvr-state"},
	 board_type{YType::str, "board-type"},
	 denali_version{YType::str, "denali-version"},
	 dsp_ea_conn{YType::boolean, "dsp-ea-conn"},
	 im_state{YType::boolean, "im-state"},
	 jlink_op{YType::str, "jlink-op"},
	 morgoth_alive{YType::boolean, "morgoth-alive"},
	 morgoth_downloaded_version{YType::str, "morgoth-downloaded-version"},
	 morgoth_golden_version{YType::str, "morgoth-golden-version"},
	 morgoth_running_version{YType::str, "morgoth-running-version"},
	 optics_ea_conn{YType::boolean, "optics-ea-conn"},
	 pm_state{YType::boolean, "pm-state"},
	 prov_infra_state{YType::boolean, "prov-infra-state"},
	 sdk_fpga_compatible{YType::boolean, "sdk-fpga-compatible"},
	 sdk_version{YType::str, "sdk-version"},
	 sysdb_state{YType::boolean, "sysdb-state"},
	 vether_state{YType::boolean, "vether-state"}
{
    yang_name = "coherenthealth"; yang_parent_name = "node";
}

Coherent::Nodes::Node::Coherenthealth::~Coherenthealth()
{
}

bool Coherent::Nodes::Node::Coherenthealth::has_data() const
{
    for (std::size_t index=0; index<port_data.size(); index++)
    {
        if(port_data[index]->has_data())
            return true;
    }
    return aipc_srvr_state.is_set
	|| board_type.is_set
	|| denali_version.is_set
	|| dsp_ea_conn.is_set
	|| im_state.is_set
	|| jlink_op.is_set
	|| morgoth_alive.is_set
	|| morgoth_downloaded_version.is_set
	|| morgoth_golden_version.is_set
	|| morgoth_running_version.is_set
	|| optics_ea_conn.is_set
	|| pm_state.is_set
	|| prov_infra_state.is_set
	|| sdk_fpga_compatible.is_set
	|| sdk_version.is_set
	|| sysdb_state.is_set
	|| vether_state.is_set;
}

bool Coherent::Nodes::Node::Coherenthealth::has_operation() const
{
    for (std::size_t index=0; index<port_data.size(); index++)
    {
        if(port_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(aipc_srvr_state.operation)
	|| is_set(board_type.operation)
	|| is_set(denali_version.operation)
	|| is_set(dsp_ea_conn.operation)
	|| is_set(im_state.operation)
	|| is_set(jlink_op.operation)
	|| is_set(morgoth_alive.operation)
	|| is_set(morgoth_downloaded_version.operation)
	|| is_set(morgoth_golden_version.operation)
	|| is_set(morgoth_running_version.operation)
	|| is_set(optics_ea_conn.operation)
	|| is_set(pm_state.operation)
	|| is_set(prov_infra_state.operation)
	|| is_set(sdk_fpga_compatible.operation)
	|| is_set(sdk_version.operation)
	|| is_set(sysdb_state.operation)
	|| is_set(vether_state.operation);
}

std::string Coherent::Nodes::Node::Coherenthealth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "coherenthealth";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::Node::Coherenthealth::get_entity_path(Entity* ancestor) const
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

    if (aipc_srvr_state.is_set || is_set(aipc_srvr_state.operation)) leaf_name_data.push_back(aipc_srvr_state.get_name_leafdata());
    if (board_type.is_set || is_set(board_type.operation)) leaf_name_data.push_back(board_type.get_name_leafdata());
    if (denali_version.is_set || is_set(denali_version.operation)) leaf_name_data.push_back(denali_version.get_name_leafdata());
    if (dsp_ea_conn.is_set || is_set(dsp_ea_conn.operation)) leaf_name_data.push_back(dsp_ea_conn.get_name_leafdata());
    if (im_state.is_set || is_set(im_state.operation)) leaf_name_data.push_back(im_state.get_name_leafdata());
    if (jlink_op.is_set || is_set(jlink_op.operation)) leaf_name_data.push_back(jlink_op.get_name_leafdata());
    if (morgoth_alive.is_set || is_set(morgoth_alive.operation)) leaf_name_data.push_back(morgoth_alive.get_name_leafdata());
    if (morgoth_downloaded_version.is_set || is_set(morgoth_downloaded_version.operation)) leaf_name_data.push_back(morgoth_downloaded_version.get_name_leafdata());
    if (morgoth_golden_version.is_set || is_set(morgoth_golden_version.operation)) leaf_name_data.push_back(morgoth_golden_version.get_name_leafdata());
    if (morgoth_running_version.is_set || is_set(morgoth_running_version.operation)) leaf_name_data.push_back(morgoth_running_version.get_name_leafdata());
    if (optics_ea_conn.is_set || is_set(optics_ea_conn.operation)) leaf_name_data.push_back(optics_ea_conn.get_name_leafdata());
    if (pm_state.is_set || is_set(pm_state.operation)) leaf_name_data.push_back(pm_state.get_name_leafdata());
    if (prov_infra_state.is_set || is_set(prov_infra_state.operation)) leaf_name_data.push_back(prov_infra_state.get_name_leafdata());
    if (sdk_fpga_compatible.is_set || is_set(sdk_fpga_compatible.operation)) leaf_name_data.push_back(sdk_fpga_compatible.get_name_leafdata());
    if (sdk_version.is_set || is_set(sdk_version.operation)) leaf_name_data.push_back(sdk_version.get_name_leafdata());
    if (sysdb_state.is_set || is_set(sysdb_state.operation)) leaf_name_data.push_back(sysdb_state.get_name_leafdata());
    if (vether_state.is_set || is_set(vether_state.operation)) leaf_name_data.push_back(vether_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::Node::Coherenthealth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "port-data")
    {
        for(auto const & c : port_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Coherent::Nodes::Node::Coherenthealth::PortData>();
        c->parent = this;
        port_data.push_back(std::move(c));
        children[segment_path] = port_data.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::Node::Coherenthealth::get_children()
{
    for (auto const & c : port_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Coherent::Nodes::Node::Coherenthealth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aipc-srvr-state")
    {
        aipc_srvr_state = value;
    }
    if(value_path == "board-type")
    {
        board_type = value;
    }
    if(value_path == "denali-version")
    {
        denali_version = value;
    }
    if(value_path == "dsp-ea-conn")
    {
        dsp_ea_conn = value;
    }
    if(value_path == "im-state")
    {
        im_state = value;
    }
    if(value_path == "jlink-op")
    {
        jlink_op = value;
    }
    if(value_path == "morgoth-alive")
    {
        morgoth_alive = value;
    }
    if(value_path == "morgoth-downloaded-version")
    {
        morgoth_downloaded_version = value;
    }
    if(value_path == "morgoth-golden-version")
    {
        morgoth_golden_version = value;
    }
    if(value_path == "morgoth-running-version")
    {
        morgoth_running_version = value;
    }
    if(value_path == "optics-ea-conn")
    {
        optics_ea_conn = value;
    }
    if(value_path == "pm-state")
    {
        pm_state = value;
    }
    if(value_path == "prov-infra-state")
    {
        prov_infra_state = value;
    }
    if(value_path == "sdk-fpga-compatible")
    {
        sdk_fpga_compatible = value;
    }
    if(value_path == "sdk-version")
    {
        sdk_version = value;
    }
    if(value_path == "sysdb-state")
    {
        sysdb_state = value;
    }
    if(value_path == "vether-state")
    {
        vether_state = value;
    }
}

Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry::PortmodeEntry()
    :
    	diff{YType::str, "diff"},
	 fec{YType::str, "fec"},
	 intf_name{YType::str, "intf-name"},
	 modulation{YType::str, "modulation"},
	 speed{YType::str, "speed"}
{
    yang_name = "portmode-entry"; yang_parent_name = "port-mode-all-info";
}

Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry::~PortmodeEntry()
{
}

bool Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry::has_data() const
{
    return diff.is_set
	|| fec.is_set
	|| intf_name.is_set
	|| modulation.is_set
	|| speed.is_set;
}

bool Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(diff.operation)
	|| is_set(fec.operation)
	|| is_set(intf_name.operation)
	|| is_set(modulation.operation)
	|| is_set(speed.operation);
}

std::string Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portmode-entry";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry::get_entity_path(Entity* ancestor) const
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

    if (diff.is_set || is_set(diff.operation)) leaf_name_data.push_back(diff.get_name_leafdata());
    if (fec.is_set || is_set(fec.operation)) leaf_name_data.push_back(fec.get_name_leafdata());
    if (intf_name.is_set || is_set(intf_name.operation)) leaf_name_data.push_back(intf_name.get_name_leafdata());
    if (modulation.is_set || is_set(modulation.operation)) leaf_name_data.push_back(modulation.get_name_leafdata());
    if (speed.is_set || is_set(speed.operation)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry::get_children()
{
    return children;
}

void Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diff")
    {
        diff = value;
    }
    if(value_path == "fec")
    {
        fec = value;
    }
    if(value_path == "intf-name")
    {
        intf_name = value;
    }
    if(value_path == "modulation")
    {
        modulation = value;
    }
    if(value_path == "speed")
    {
        speed = value;
    }
}

Coherent::Nodes::Node::PortModeAllInfo::PortModeAllInfo()
    :
    	num_entries{YType::uint32, "num-entries"}
{
    yang_name = "port-mode-all-info"; yang_parent_name = "node";
}

Coherent::Nodes::Node::PortModeAllInfo::~PortModeAllInfo()
{
}

bool Coherent::Nodes::Node::PortModeAllInfo::has_data() const
{
    for (std::size_t index=0; index<portmode_entry.size(); index++)
    {
        if(portmode_entry[index]->has_data())
            return true;
    }
    return num_entries.is_set;
}

bool Coherent::Nodes::Node::PortModeAllInfo::has_operation() const
{
    for (std::size_t index=0; index<portmode_entry.size(); index++)
    {
        if(portmode_entry[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(num_entries.operation);
}

std::string Coherent::Nodes::Node::PortModeAllInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-mode-all-info";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::Node::PortModeAllInfo::get_entity_path(Entity* ancestor) const
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

    if (num_entries.is_set || is_set(num_entries.operation)) leaf_name_data.push_back(num_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::Node::PortModeAllInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "portmode-entry")
    {
        for(auto const & c : portmode_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry>();
        c->parent = this;
        portmode_entry.push_back(std::move(c));
        children[segment_path] = portmode_entry.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::Node::PortModeAllInfo::get_children()
{
    for (auto const & c : portmode_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Coherent::Nodes::Node::PortModeAllInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-entries")
    {
        num_entries = value;
    }
}

Coherent::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    coherent_time_stats(std::make_unique<Coherent::Nodes::Node::CoherentTimeStats>())
	,coherenthealth(std::make_unique<Coherent::Nodes::Node::Coherenthealth>())
	,devicemapping(std::make_unique<Coherent::Nodes::Node::Devicemapping>())
	,port_mode_all_info(std::make_unique<Coherent::Nodes::Node::PortModeAllInfo>())
{
    coherent_time_stats->parent = this;
    children["coherent-time-stats"] = coherent_time_stats.get();

    coherenthealth->parent = this;
    children["coherenthealth"] = coherenthealth.get();

    devicemapping->parent = this;
    children["devicemapping"] = devicemapping.get();

    port_mode_all_info->parent = this;
    children["port-mode-all-info"] = port_mode_all_info.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

Coherent::Nodes::Node::~Node()
{
}

bool Coherent::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (coherent_time_stats !=  nullptr && coherent_time_stats->has_data())
	|| (coherenthealth !=  nullptr && coherenthealth->has_data())
	|| (devicemapping !=  nullptr && devicemapping->has_data())
	|| (port_mode_all_info !=  nullptr && port_mode_all_info->has_data());
}

bool Coherent::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (coherent_time_stats !=  nullptr && coherent_time_stats->has_operation())
	|| (coherenthealth !=  nullptr && coherenthealth->has_operation())
	|| (devicemapping !=  nullptr && devicemapping->has_operation())
	|| (port_mode_all_info !=  nullptr && port_mode_all_info->has_operation());
}

std::string Coherent::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ncs5500-coherent-node-oper:coherent/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "coherent-time-stats")
    {
        if(coherent_time_stats != nullptr)
        {
            children["coherent-time-stats"] = coherent_time_stats.get();
        }
        else
        {
            coherent_time_stats = std::make_unique<Coherent::Nodes::Node::CoherentTimeStats>();
            coherent_time_stats->parent = this;
            children["coherent-time-stats"] = coherent_time_stats.get();
        }
        return children.at("coherent-time-stats");
    }

    if(child_yang_name == "coherenthealth")
    {
        if(coherenthealth != nullptr)
        {
            children["coherenthealth"] = coherenthealth.get();
        }
        else
        {
            coherenthealth = std::make_unique<Coherent::Nodes::Node::Coherenthealth>();
            coherenthealth->parent = this;
            children["coherenthealth"] = coherenthealth.get();
        }
        return children.at("coherenthealth");
    }

    if(child_yang_name == "devicemapping")
    {
        if(devicemapping != nullptr)
        {
            children["devicemapping"] = devicemapping.get();
        }
        else
        {
            devicemapping = std::make_unique<Coherent::Nodes::Node::Devicemapping>();
            devicemapping->parent = this;
            children["devicemapping"] = devicemapping.get();
        }
        return children.at("devicemapping");
    }

    if(child_yang_name == "port-mode-all-info")
    {
        if(port_mode_all_info != nullptr)
        {
            children["port-mode-all-info"] = port_mode_all_info.get();
        }
        else
        {
            port_mode_all_info = std::make_unique<Coherent::Nodes::Node::PortModeAllInfo>();
            port_mode_all_info->parent = this;
            children["port-mode-all-info"] = port_mode_all_info.get();
        }
        return children.at("port-mode-all-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::Node::get_children()
{
    if(children.find("coherent-time-stats") == children.end())
    {
        if(coherent_time_stats != nullptr)
        {
            children["coherent-time-stats"] = coherent_time_stats.get();
        }
    }

    if(children.find("coherenthealth") == children.end())
    {
        if(coherenthealth != nullptr)
        {
            children["coherenthealth"] = coherenthealth.get();
        }
    }

    if(children.find("devicemapping") == children.end())
    {
        if(devicemapping != nullptr)
        {
            children["devicemapping"] = devicemapping.get();
        }
    }

    if(children.find("port-mode-all-info") == children.end())
    {
        if(port_mode_all_info != nullptr)
        {
            children["port-mode-all-info"] = port_mode_all_info.get();
        }
    }

    return children;
}

void Coherent::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Coherent::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "coherent";
}

Coherent::Nodes::~Nodes()
{
}

bool Coherent::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Coherent::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Coherent::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Coherent::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ncs5500-coherent-node-oper:coherent/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Coherent::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Coherent::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Coherent::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Coherent::Coherent()
    :
    nodes(std::make_unique<Coherent::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "coherent"; yang_parent_name = "Cisco-IOS-XR-ncs5500-coherent-node-oper";
}

Coherent::~Coherent()
{
}

bool Coherent::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Coherent::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Coherent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs5500-coherent-node-oper:coherent";

    return path_buffer.str();

}

EntityPath Coherent::get_entity_path(Entity* ancestor) const
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

Entity* Coherent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<Coherent::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Coherent::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void Coherent::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Coherent::clone_ptr()
{
    return std::make_unique<Coherent>();
}


}
}

