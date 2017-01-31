
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_asr9k_np_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asr9k_np_oper {

HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad::NpChnLoad()
    :
    	avg_guar_rfd_usage{YType::uint32, "avg-guar-rfd-usage"},
	 avg_rfd_usage{YType::uint32, "avg-rfd-usage"},
	 flow_ctr_counter{YType::uint32, "flow-ctr-counter"},
	 interface_name{YType::str, "interface-name"},
	 peak_guar_rfd_usage{YType::uint32, "peak-guar-rfd-usage"},
	 peak_rfd_usage{YType::uint32, "peak-rfd-usage"}
{
    yang_name = "np-chn-load"; yang_parent_name = "chn-load";
}

HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad::~NpChnLoad()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad::has_data() const
{
    return avg_guar_rfd_usage.is_set
	|| avg_rfd_usage.is_set
	|| flow_ctr_counter.is_set
	|| interface_name.is_set
	|| peak_guar_rfd_usage.is_set
	|| peak_rfd_usage.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad::has_operation() const
{
    return is_set(operation)
	|| is_set(avg_guar_rfd_usage.operation)
	|| is_set(avg_rfd_usage.operation)
	|| is_set(flow_ctr_counter.operation)
	|| is_set(interface_name.operation)
	|| is_set(peak_guar_rfd_usage.operation)
	|| is_set(peak_rfd_usage.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "np-chn-load";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad::get_entity_path(Entity* ancestor) const
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

    if (avg_guar_rfd_usage.is_set || is_set(avg_guar_rfd_usage.operation)) leaf_name_data.push_back(avg_guar_rfd_usage.get_name_leafdata());
    if (avg_rfd_usage.is_set || is_set(avg_rfd_usage.operation)) leaf_name_data.push_back(avg_rfd_usage.get_name_leafdata());
    if (flow_ctr_counter.is_set || is_set(flow_ctr_counter.operation)) leaf_name_data.push_back(flow_ctr_counter.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (peak_guar_rfd_usage.is_set || is_set(peak_guar_rfd_usage.operation)) leaf_name_data.push_back(peak_guar_rfd_usage.get_name_leafdata());
    if (peak_rfd_usage.is_set || is_set(peak_rfd_usage.operation)) leaf_name_data.push_back(peak_rfd_usage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "avg-guar-rfd-usage")
    {
        avg_guar_rfd_usage = value;
    }
    if(value_path == "avg-rfd-usage")
    {
        avg_rfd_usage = value;
    }
    if(value_path == "flow-ctr-counter")
    {
        flow_ctr_counter = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "peak-guar-rfd-usage")
    {
        peak_guar_rfd_usage = value;
    }
    if(value_path == "peak-rfd-usage")
    {
        peak_rfd_usage = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::ChnLoad()
{
    yang_name = "chn-load"; yang_parent_name = "np";
}

HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::~ChnLoad()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::has_data() const
{
    for (std::size_t index=0; index<np_chn_load.size(); index++)
    {
        if(np_chn_load[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::has_operation() const
{
    for (std::size_t index=0; index<np_chn_load.size(); index++)
    {
        if(np_chn_load[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chn-load";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::get_entity_path(Entity* ancestor) const
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

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "np-chn-load")
    {
        for(auto const & c : np_chn_load)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad>();
        c->parent = this;
        np_chn_load.push_back(std::move(c));
        children[segment_path] = np_chn_load.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::get_children()
{
    for (auto const & c : np_chn_load)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::set_value(const std::string & value_path, std::string value)
{
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib::AppIdIfib()
    :
    	num_vmr_ids{YType::uint32, "num-vmr-ids"},
	 total_allocated_entries{YType::uint32, "total-allocated-entries"},
	 total_used_entries{YType::uint32, "total-used-entries"}
{
    yang_name = "app-id-ifib"; yang_parent_name = "tcam-lt-ods2";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib::~AppIdIfib()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib::has_data() const
{
    return num_vmr_ids.is_set
	|| total_allocated_entries.is_set
	|| total_used_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib::has_operation() const
{
    return is_set(operation)
	|| is_set(num_vmr_ids.operation)
	|| is_set(total_allocated_entries.operation)
	|| is_set(total_used_entries.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-ifib";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib::get_entity_path(Entity* ancestor) const
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

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.operation)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.operation)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos::AppIdQos()
    :
    	num_vmr_ids{YType::uint32, "num-vmr-ids"},
	 total_allocated_entries{YType::uint32, "total-allocated-entries"},
	 total_used_entries{YType::uint32, "total-used-entries"}
{
    yang_name = "app-id-qos"; yang_parent_name = "tcam-lt-ods2";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos::~AppIdQos()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos::has_data() const
{
    return num_vmr_ids.is_set
	|| total_allocated_entries.is_set
	|| total_used_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos::has_operation() const
{
    return is_set(operation)
	|| is_set(num_vmr_ids.operation)
	|| is_set(total_allocated_entries.operation)
	|| is_set(total_used_entries.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-qos";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos::get_entity_path(Entity* ancestor) const
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

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.operation)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.operation)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl::AppIdAcl()
    :
    	num_vmr_ids{YType::uint32, "num-vmr-ids"},
	 total_allocated_entries{YType::uint32, "total-allocated-entries"},
	 total_used_entries{YType::uint32, "total-used-entries"}
{
    yang_name = "app-id-acl"; yang_parent_name = "tcam-lt-ods2";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl::~AppIdAcl()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl::has_data() const
{
    return num_vmr_ids.is_set
	|| total_allocated_entries.is_set
	|| total_used_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl::has_operation() const
{
    return is_set(operation)
	|| is_set(num_vmr_ids.operation)
	|| is_set(total_allocated_entries.operation)
	|| is_set(total_used_entries.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-acl";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl::get_entity_path(Entity* ancestor) const
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

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.operation)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.operation)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon::AppIdAfmon()
    :
    	num_vmr_ids{YType::uint32, "num-vmr-ids"},
	 total_allocated_entries{YType::uint32, "total-allocated-entries"},
	 total_used_entries{YType::uint32, "total-used-entries"}
{
    yang_name = "app-id-afmon"; yang_parent_name = "tcam-lt-ods2";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon::~AppIdAfmon()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon::has_data() const
{
    return num_vmr_ids.is_set
	|| total_allocated_entries.is_set
	|| total_used_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon::has_operation() const
{
    return is_set(operation)
	|| is_set(num_vmr_ids.operation)
	|| is_set(total_allocated_entries.operation)
	|| is_set(total_used_entries.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-afmon";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon::get_entity_path(Entity* ancestor) const
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

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.operation)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.operation)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi::AppIdLi()
    :
    	num_vmr_ids{YType::uint32, "num-vmr-ids"},
	 total_allocated_entries{YType::uint32, "total-allocated-entries"},
	 total_used_entries{YType::uint32, "total-used-entries"}
{
    yang_name = "app-id-li"; yang_parent_name = "tcam-lt-ods2";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi::~AppIdLi()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi::has_data() const
{
    return num_vmr_ids.is_set
	|| total_allocated_entries.is_set
	|| total_used_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi::has_operation() const
{
    return is_set(operation)
	|| is_set(num_vmr_ids.operation)
	|| is_set(total_allocated_entries.operation)
	|| is_set(total_used_entries.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-li";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi::get_entity_path(Entity* ancestor) const
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

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.operation)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.operation)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr::AppIdPbr()
    :
    	num_vmr_ids{YType::uint32, "num-vmr-ids"},
	 total_allocated_entries{YType::uint32, "total-allocated-entries"},
	 total_used_entries{YType::uint32, "total-used-entries"}
{
    yang_name = "app-id-pbr"; yang_parent_name = "tcam-lt-ods2";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr::~AppIdPbr()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr::has_data() const
{
    return num_vmr_ids.is_set
	|| total_allocated_entries.is_set
	|| total_used_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr::has_operation() const
{
    return is_set(operation)
	|| is_set(num_vmr_ids.operation)
	|| is_set(total_allocated_entries.operation)
	|| is_set(total_used_entries.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-pbr";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr::get_entity_path(Entity* ancestor) const
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

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.operation)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.operation)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry::ApplicationEdplEntry()
    :
    	num_vmr_ids{YType::uint32, "num-vmr-ids"},
	 total_allocated_entries{YType::uint32, "total-allocated-entries"},
	 total_used_entries{YType::uint32, "total-used-entries"}
{
    yang_name = "application-edpl-entry"; yang_parent_name = "tcam-lt-ods2";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry::~ApplicationEdplEntry()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry::has_data() const
{
    return num_vmr_ids.is_set
	|| total_allocated_entries.is_set
	|| total_used_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(num_vmr_ids.operation)
	|| is_set(total_allocated_entries.operation)
	|| is_set(total_used_entries.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-edpl-entry";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry::get_entity_path(Entity* ancestor) const
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

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.operation)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.operation)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::TcamLtOds2()
    :
    	free_entries{YType::uint32, "free-entries"},
	 max_entries{YType::uint32, "max-entries"}
    	,
    app_id_acl(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl>())
	,app_id_afmon(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon>())
	,app_id_ifib(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib>())
	,app_id_li(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi>())
	,app_id_pbr(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr>())
	,app_id_qos(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos>())
	,application_edpl_entry(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry>())
{
    app_id_acl->parent = this;
    children["app-id-acl"] = app_id_acl.get();

    app_id_afmon->parent = this;
    children["app-id-afmon"] = app_id_afmon.get();

    app_id_ifib->parent = this;
    children["app-id-ifib"] = app_id_ifib.get();

    app_id_li->parent = this;
    children["app-id-li"] = app_id_li.get();

    app_id_pbr->parent = this;
    children["app-id-pbr"] = app_id_pbr.get();

    app_id_qos->parent = this;
    children["app-id-qos"] = app_id_qos.get();

    application_edpl_entry->parent = this;
    children["application-edpl-entry"] = application_edpl_entry.get();

    yang_name = "tcam-lt-ods2"; yang_parent_name = "internal-tcam-info";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::~TcamLtOds2()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::has_data() const
{
    return free_entries.is_set
	|| max_entries.is_set
	|| (app_id_acl !=  nullptr && app_id_acl->has_data())
	|| (app_id_afmon !=  nullptr && app_id_afmon->has_data())
	|| (app_id_ifib !=  nullptr && app_id_ifib->has_data())
	|| (app_id_li !=  nullptr && app_id_li->has_data())
	|| (app_id_pbr !=  nullptr && app_id_pbr->has_data())
	|| (app_id_qos !=  nullptr && app_id_qos->has_data())
	|| (application_edpl_entry !=  nullptr && application_edpl_entry->has_data());
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::has_operation() const
{
    return is_set(operation)
	|| is_set(free_entries.operation)
	|| is_set(max_entries.operation)
	|| (app_id_acl !=  nullptr && app_id_acl->has_operation())
	|| (app_id_afmon !=  nullptr && app_id_afmon->has_operation())
	|| (app_id_ifib !=  nullptr && app_id_ifib->has_operation())
	|| (app_id_li !=  nullptr && app_id_li->has_operation())
	|| (app_id_pbr !=  nullptr && app_id_pbr->has_operation())
	|| (app_id_qos !=  nullptr && app_id_qos->has_operation())
	|| (application_edpl_entry !=  nullptr && application_edpl_entry->has_operation());
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-lt-ods2";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::get_entity_path(Entity* ancestor) const
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

    if (free_entries.is_set || is_set(free_entries.operation)) leaf_name_data.push_back(free_entries.get_name_leafdata());
    if (max_entries.is_set || is_set(max_entries.operation)) leaf_name_data.push_back(max_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "app-id-acl")
    {
        if(app_id_acl != nullptr)
        {
            children["app-id-acl"] = app_id_acl.get();
        }
        else
        {
            app_id_acl = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl>();
            app_id_acl->parent = this;
            children["app-id-acl"] = app_id_acl.get();
        }
        return children.at("app-id-acl");
    }

    if(child_yang_name == "app-id-afmon")
    {
        if(app_id_afmon != nullptr)
        {
            children["app-id-afmon"] = app_id_afmon.get();
        }
        else
        {
            app_id_afmon = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon>();
            app_id_afmon->parent = this;
            children["app-id-afmon"] = app_id_afmon.get();
        }
        return children.at("app-id-afmon");
    }

    if(child_yang_name == "app-id-ifib")
    {
        if(app_id_ifib != nullptr)
        {
            children["app-id-ifib"] = app_id_ifib.get();
        }
        else
        {
            app_id_ifib = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib>();
            app_id_ifib->parent = this;
            children["app-id-ifib"] = app_id_ifib.get();
        }
        return children.at("app-id-ifib");
    }

    if(child_yang_name == "app-id-li")
    {
        if(app_id_li != nullptr)
        {
            children["app-id-li"] = app_id_li.get();
        }
        else
        {
            app_id_li = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi>();
            app_id_li->parent = this;
            children["app-id-li"] = app_id_li.get();
        }
        return children.at("app-id-li");
    }

    if(child_yang_name == "app-id-pbr")
    {
        if(app_id_pbr != nullptr)
        {
            children["app-id-pbr"] = app_id_pbr.get();
        }
        else
        {
            app_id_pbr = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr>();
            app_id_pbr->parent = this;
            children["app-id-pbr"] = app_id_pbr.get();
        }
        return children.at("app-id-pbr");
    }

    if(child_yang_name == "app-id-qos")
    {
        if(app_id_qos != nullptr)
        {
            children["app-id-qos"] = app_id_qos.get();
        }
        else
        {
            app_id_qos = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos>();
            app_id_qos->parent = this;
            children["app-id-qos"] = app_id_qos.get();
        }
        return children.at("app-id-qos");
    }

    if(child_yang_name == "application-edpl-entry")
    {
        if(application_edpl_entry != nullptr)
        {
            children["application-edpl-entry"] = application_edpl_entry.get();
        }
        else
        {
            application_edpl_entry = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry>();
            application_edpl_entry->parent = this;
            children["application-edpl-entry"] = application_edpl_entry.get();
        }
        return children.at("application-edpl-entry");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::get_children()
{
    if(children.find("app-id-acl") == children.end())
    {
        if(app_id_acl != nullptr)
        {
            children["app-id-acl"] = app_id_acl.get();
        }
    }

    if(children.find("app-id-afmon") == children.end())
    {
        if(app_id_afmon != nullptr)
        {
            children["app-id-afmon"] = app_id_afmon.get();
        }
    }

    if(children.find("app-id-ifib") == children.end())
    {
        if(app_id_ifib != nullptr)
        {
            children["app-id-ifib"] = app_id_ifib.get();
        }
    }

    if(children.find("app-id-li") == children.end())
    {
        if(app_id_li != nullptr)
        {
            children["app-id-li"] = app_id_li.get();
        }
    }

    if(children.find("app-id-pbr") == children.end())
    {
        if(app_id_pbr != nullptr)
        {
            children["app-id-pbr"] = app_id_pbr.get();
        }
    }

    if(children.find("app-id-qos") == children.end())
    {
        if(app_id_qos != nullptr)
        {
            children["app-id-qos"] = app_id_qos.get();
        }
    }

    if(children.find("application-edpl-entry") == children.end())
    {
        if(application_edpl_entry != nullptr)
        {
            children["application-edpl-entry"] = application_edpl_entry.get();
        }
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-entries")
    {
        free_entries = value;
    }
    if(value_path == "max-entries")
    {
        max_entries = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib::AppIdIfib()
    :
    	num_vmr_ids{YType::uint32, "num-vmr-ids"},
	 total_allocated_entries{YType::uint32, "total-allocated-entries"},
	 total_used_entries{YType::uint32, "total-used-entries"}
{
    yang_name = "app-id-ifib"; yang_parent_name = "tcam-lt-ods8";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib::~AppIdIfib()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib::has_data() const
{
    return num_vmr_ids.is_set
	|| total_allocated_entries.is_set
	|| total_used_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib::has_operation() const
{
    return is_set(operation)
	|| is_set(num_vmr_ids.operation)
	|| is_set(total_allocated_entries.operation)
	|| is_set(total_used_entries.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-ifib";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib::get_entity_path(Entity* ancestor) const
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

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.operation)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.operation)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos::AppIdQos()
    :
    	num_vmr_ids{YType::uint32, "num-vmr-ids"},
	 total_allocated_entries{YType::uint32, "total-allocated-entries"},
	 total_used_entries{YType::uint32, "total-used-entries"}
{
    yang_name = "app-id-qos"; yang_parent_name = "tcam-lt-ods8";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos::~AppIdQos()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos::has_data() const
{
    return num_vmr_ids.is_set
	|| total_allocated_entries.is_set
	|| total_used_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos::has_operation() const
{
    return is_set(operation)
	|| is_set(num_vmr_ids.operation)
	|| is_set(total_allocated_entries.operation)
	|| is_set(total_used_entries.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-qos";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos::get_entity_path(Entity* ancestor) const
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

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.operation)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.operation)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl::AppIdAcl()
    :
    	num_vmr_ids{YType::uint32, "num-vmr-ids"},
	 total_allocated_entries{YType::uint32, "total-allocated-entries"},
	 total_used_entries{YType::uint32, "total-used-entries"}
{
    yang_name = "app-id-acl"; yang_parent_name = "tcam-lt-ods8";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl::~AppIdAcl()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl::has_data() const
{
    return num_vmr_ids.is_set
	|| total_allocated_entries.is_set
	|| total_used_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl::has_operation() const
{
    return is_set(operation)
	|| is_set(num_vmr_ids.operation)
	|| is_set(total_allocated_entries.operation)
	|| is_set(total_used_entries.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-acl";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl::get_entity_path(Entity* ancestor) const
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

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.operation)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.operation)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon::AppIdAfmon()
    :
    	num_vmr_ids{YType::uint32, "num-vmr-ids"},
	 total_allocated_entries{YType::uint32, "total-allocated-entries"},
	 total_used_entries{YType::uint32, "total-used-entries"}
{
    yang_name = "app-id-afmon"; yang_parent_name = "tcam-lt-ods8";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon::~AppIdAfmon()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon::has_data() const
{
    return num_vmr_ids.is_set
	|| total_allocated_entries.is_set
	|| total_used_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon::has_operation() const
{
    return is_set(operation)
	|| is_set(num_vmr_ids.operation)
	|| is_set(total_allocated_entries.operation)
	|| is_set(total_used_entries.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-afmon";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon::get_entity_path(Entity* ancestor) const
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

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.operation)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.operation)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi::AppIdLi()
    :
    	num_vmr_ids{YType::uint32, "num-vmr-ids"},
	 total_allocated_entries{YType::uint32, "total-allocated-entries"},
	 total_used_entries{YType::uint32, "total-used-entries"}
{
    yang_name = "app-id-li"; yang_parent_name = "tcam-lt-ods8";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi::~AppIdLi()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi::has_data() const
{
    return num_vmr_ids.is_set
	|| total_allocated_entries.is_set
	|| total_used_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi::has_operation() const
{
    return is_set(operation)
	|| is_set(num_vmr_ids.operation)
	|| is_set(total_allocated_entries.operation)
	|| is_set(total_used_entries.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-li";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi::get_entity_path(Entity* ancestor) const
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

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.operation)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.operation)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr::AppIdPbr()
    :
    	num_vmr_ids{YType::uint32, "num-vmr-ids"},
	 total_allocated_entries{YType::uint32, "total-allocated-entries"},
	 total_used_entries{YType::uint32, "total-used-entries"}
{
    yang_name = "app-id-pbr"; yang_parent_name = "tcam-lt-ods8";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr::~AppIdPbr()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr::has_data() const
{
    return num_vmr_ids.is_set
	|| total_allocated_entries.is_set
	|| total_used_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr::has_operation() const
{
    return is_set(operation)
	|| is_set(num_vmr_ids.operation)
	|| is_set(total_allocated_entries.operation)
	|| is_set(total_used_entries.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-pbr";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr::get_entity_path(Entity* ancestor) const
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

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.operation)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.operation)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry::ApplicationEdplEntry()
    :
    	num_vmr_ids{YType::uint32, "num-vmr-ids"},
	 total_allocated_entries{YType::uint32, "total-allocated-entries"},
	 total_used_entries{YType::uint32, "total-used-entries"}
{
    yang_name = "application-edpl-entry"; yang_parent_name = "tcam-lt-ods8";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry::~ApplicationEdplEntry()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry::has_data() const
{
    return num_vmr_ids.is_set
	|| total_allocated_entries.is_set
	|| total_used_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(num_vmr_ids.operation)
	|| is_set(total_allocated_entries.operation)
	|| is_set(total_used_entries.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-edpl-entry";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry::get_entity_path(Entity* ancestor) const
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

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.operation)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.operation)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::TcamLtOds8()
    :
    	free_entries{YType::uint32, "free-entries"},
	 max_entries{YType::uint32, "max-entries"}
    	,
    app_id_acl(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl>())
	,app_id_afmon(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon>())
	,app_id_ifib(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib>())
	,app_id_li(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi>())
	,app_id_pbr(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr>())
	,app_id_qos(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos>())
	,application_edpl_entry(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry>())
{
    app_id_acl->parent = this;
    children["app-id-acl"] = app_id_acl.get();

    app_id_afmon->parent = this;
    children["app-id-afmon"] = app_id_afmon.get();

    app_id_ifib->parent = this;
    children["app-id-ifib"] = app_id_ifib.get();

    app_id_li->parent = this;
    children["app-id-li"] = app_id_li.get();

    app_id_pbr->parent = this;
    children["app-id-pbr"] = app_id_pbr.get();

    app_id_qos->parent = this;
    children["app-id-qos"] = app_id_qos.get();

    application_edpl_entry->parent = this;
    children["application-edpl-entry"] = application_edpl_entry.get();

    yang_name = "tcam-lt-ods8"; yang_parent_name = "internal-tcam-info";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::~TcamLtOds8()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::has_data() const
{
    return free_entries.is_set
	|| max_entries.is_set
	|| (app_id_acl !=  nullptr && app_id_acl->has_data())
	|| (app_id_afmon !=  nullptr && app_id_afmon->has_data())
	|| (app_id_ifib !=  nullptr && app_id_ifib->has_data())
	|| (app_id_li !=  nullptr && app_id_li->has_data())
	|| (app_id_pbr !=  nullptr && app_id_pbr->has_data())
	|| (app_id_qos !=  nullptr && app_id_qos->has_data())
	|| (application_edpl_entry !=  nullptr && application_edpl_entry->has_data());
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::has_operation() const
{
    return is_set(operation)
	|| is_set(free_entries.operation)
	|| is_set(max_entries.operation)
	|| (app_id_acl !=  nullptr && app_id_acl->has_operation())
	|| (app_id_afmon !=  nullptr && app_id_afmon->has_operation())
	|| (app_id_ifib !=  nullptr && app_id_ifib->has_operation())
	|| (app_id_li !=  nullptr && app_id_li->has_operation())
	|| (app_id_pbr !=  nullptr && app_id_pbr->has_operation())
	|| (app_id_qos !=  nullptr && app_id_qos->has_operation())
	|| (application_edpl_entry !=  nullptr && application_edpl_entry->has_operation());
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-lt-ods8";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::get_entity_path(Entity* ancestor) const
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

    if (free_entries.is_set || is_set(free_entries.operation)) leaf_name_data.push_back(free_entries.get_name_leafdata());
    if (max_entries.is_set || is_set(max_entries.operation)) leaf_name_data.push_back(max_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "app-id-acl")
    {
        if(app_id_acl != nullptr)
        {
            children["app-id-acl"] = app_id_acl.get();
        }
        else
        {
            app_id_acl = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl>();
            app_id_acl->parent = this;
            children["app-id-acl"] = app_id_acl.get();
        }
        return children.at("app-id-acl");
    }

    if(child_yang_name == "app-id-afmon")
    {
        if(app_id_afmon != nullptr)
        {
            children["app-id-afmon"] = app_id_afmon.get();
        }
        else
        {
            app_id_afmon = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon>();
            app_id_afmon->parent = this;
            children["app-id-afmon"] = app_id_afmon.get();
        }
        return children.at("app-id-afmon");
    }

    if(child_yang_name == "app-id-ifib")
    {
        if(app_id_ifib != nullptr)
        {
            children["app-id-ifib"] = app_id_ifib.get();
        }
        else
        {
            app_id_ifib = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib>();
            app_id_ifib->parent = this;
            children["app-id-ifib"] = app_id_ifib.get();
        }
        return children.at("app-id-ifib");
    }

    if(child_yang_name == "app-id-li")
    {
        if(app_id_li != nullptr)
        {
            children["app-id-li"] = app_id_li.get();
        }
        else
        {
            app_id_li = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi>();
            app_id_li->parent = this;
            children["app-id-li"] = app_id_li.get();
        }
        return children.at("app-id-li");
    }

    if(child_yang_name == "app-id-pbr")
    {
        if(app_id_pbr != nullptr)
        {
            children["app-id-pbr"] = app_id_pbr.get();
        }
        else
        {
            app_id_pbr = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr>();
            app_id_pbr->parent = this;
            children["app-id-pbr"] = app_id_pbr.get();
        }
        return children.at("app-id-pbr");
    }

    if(child_yang_name == "app-id-qos")
    {
        if(app_id_qos != nullptr)
        {
            children["app-id-qos"] = app_id_qos.get();
        }
        else
        {
            app_id_qos = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos>();
            app_id_qos->parent = this;
            children["app-id-qos"] = app_id_qos.get();
        }
        return children.at("app-id-qos");
    }

    if(child_yang_name == "application-edpl-entry")
    {
        if(application_edpl_entry != nullptr)
        {
            children["application-edpl-entry"] = application_edpl_entry.get();
        }
        else
        {
            application_edpl_entry = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry>();
            application_edpl_entry->parent = this;
            children["application-edpl-entry"] = application_edpl_entry.get();
        }
        return children.at("application-edpl-entry");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::get_children()
{
    if(children.find("app-id-acl") == children.end())
    {
        if(app_id_acl != nullptr)
        {
            children["app-id-acl"] = app_id_acl.get();
        }
    }

    if(children.find("app-id-afmon") == children.end())
    {
        if(app_id_afmon != nullptr)
        {
            children["app-id-afmon"] = app_id_afmon.get();
        }
    }

    if(children.find("app-id-ifib") == children.end())
    {
        if(app_id_ifib != nullptr)
        {
            children["app-id-ifib"] = app_id_ifib.get();
        }
    }

    if(children.find("app-id-li") == children.end())
    {
        if(app_id_li != nullptr)
        {
            children["app-id-li"] = app_id_li.get();
        }
    }

    if(children.find("app-id-pbr") == children.end())
    {
        if(app_id_pbr != nullptr)
        {
            children["app-id-pbr"] = app_id_pbr.get();
        }
    }

    if(children.find("app-id-qos") == children.end())
    {
        if(app_id_qos != nullptr)
        {
            children["app-id-qos"] = app_id_qos.get();
        }
    }

    if(children.find("application-edpl-entry") == children.end())
    {
        if(application_edpl_entry != nullptr)
        {
            children["application-edpl-entry"] = application_edpl_entry.get();
        }
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-entries")
    {
        free_entries = value;
    }
    if(value_path == "max-entries")
    {
        max_entries = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2::TcamLtL2()
    :
    	free_entries{YType::uint32, "free-entries"},
	 partition_id{YType::uint32, "partition-id"},
	 valid_entries{YType::uint32, "valid-entries"}
{
    yang_name = "tcam-lt-l2"; yang_parent_name = "internal-tcam-info";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2::~TcamLtL2()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2::has_data() const
{
    return free_entries.is_set
	|| partition_id.is_set
	|| valid_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2::has_operation() const
{
    return is_set(operation)
	|| is_set(free_entries.operation)
	|| is_set(partition_id.operation)
	|| is_set(valid_entries.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-lt-l2";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2::get_entity_path(Entity* ancestor) const
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

    if (free_entries.is_set || is_set(free_entries.operation)) leaf_name_data.push_back(free_entries.get_name_leafdata());
    if (partition_id.is_set || is_set(partition_id.operation)) leaf_name_data.push_back(partition_id.get_name_leafdata());
    if (valid_entries.is_set || is_set(valid_entries.operation)) leaf_name_data.push_back(valid_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-entries")
    {
        free_entries = value;
    }
    if(value_path == "partition-id")
    {
        partition_id = value;
    }
    if(value_path == "valid-entries")
    {
        valid_entries = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::InternalTcamInfo()
    :
    tcam_lt_ods2(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2>())
	,tcam_lt_ods8(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8>())
{
    tcam_lt_ods2->parent = this;
    children["tcam-lt-ods2"] = tcam_lt_ods2.get();

    tcam_lt_ods8->parent = this;
    children["tcam-lt-ods8"] = tcam_lt_ods8.get();

    yang_name = "internal-tcam-info"; yang_parent_name = "tcam-summary";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::~InternalTcamInfo()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::has_data() const
{
    for (std::size_t index=0; index<tcam_lt_l2.size(); index++)
    {
        if(tcam_lt_l2[index]->has_data())
            return true;
    }
    return (tcam_lt_ods2 !=  nullptr && tcam_lt_ods2->has_data())
	|| (tcam_lt_ods8 !=  nullptr && tcam_lt_ods8->has_data());
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::has_operation() const
{
    for (std::size_t index=0; index<tcam_lt_l2.size(); index++)
    {
        if(tcam_lt_l2[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (tcam_lt_ods2 !=  nullptr && tcam_lt_ods2->has_operation())
	|| (tcam_lt_ods8 !=  nullptr && tcam_lt_ods8->has_operation());
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-tcam-info";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::get_entity_path(Entity* ancestor) const
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

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tcam-lt-l2")
    {
        for(auto const & c : tcam_lt_l2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2>();
        c->parent = this;
        tcam_lt_l2.push_back(std::move(c));
        children[segment_path] = tcam_lt_l2.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "tcam-lt-ods2")
    {
        if(tcam_lt_ods2 != nullptr)
        {
            children["tcam-lt-ods2"] = tcam_lt_ods2.get();
        }
        else
        {
            tcam_lt_ods2 = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2>();
            tcam_lt_ods2->parent = this;
            children["tcam-lt-ods2"] = tcam_lt_ods2.get();
        }
        return children.at("tcam-lt-ods2");
    }

    if(child_yang_name == "tcam-lt-ods8")
    {
        if(tcam_lt_ods8 != nullptr)
        {
            children["tcam-lt-ods8"] = tcam_lt_ods8.get();
        }
        else
        {
            tcam_lt_ods8 = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8>();
            tcam_lt_ods8->parent = this;
            children["tcam-lt-ods8"] = tcam_lt_ods8.get();
        }
        return children.at("tcam-lt-ods8");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::get_children()
{
    for (auto const & c : tcam_lt_l2)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("tcam-lt-ods2") == children.end())
    {
        if(tcam_lt_ods2 != nullptr)
        {
            children["tcam-lt-ods2"] = tcam_lt_ods2.get();
        }
    }

    if(children.find("tcam-lt-ods8") == children.end())
    {
        if(tcam_lt_ods8 != nullptr)
        {
            children["tcam-lt-ods8"] = tcam_lt_ods8.get();
        }
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::set_value(const std::string & value_path, std::string value)
{
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon::AclCommon()
    :
    	allocated_entries{YType::uint32, "allocated-entries"},
	 free_entries{YType::uint32, "free-entries"}
{
    yang_name = "acl-common"; yang_parent_name = "tcam-lt-ods2";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon::~AclCommon()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon::has_data() const
{
    return allocated_entries.is_set
	|| free_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon::has_operation() const
{
    return is_set(operation)
	|| is_set(allocated_entries.operation)
	|| is_set(free_entries.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-common";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon::get_entity_path(Entity* ancestor) const
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

    if (allocated_entries.is_set || is_set(allocated_entries.operation)) leaf_name_data.push_back(allocated_entries.get_name_leafdata());
    if (free_entries.is_set || is_set(free_entries.operation)) leaf_name_data.push_back(free_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allocated-entries")
    {
        allocated_entries = value;
    }
    if(value_path == "free-entries")
    {
        free_entries = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib::AppIdIfib()
    :
    	num_active_entries{YType::uint32, "num-active-entries"},
	 num_allocated_entries{YType::uint32, "num-allocated-entries"},
	 num_vmr_ids{YType::uint32, "num-vmr-ids"}
{
    yang_name = "app-id-ifib"; yang_parent_name = "tcam-lt-ods2";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib::~AppIdIfib()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib::has_data() const
{
    return num_active_entries.is_set
	|| num_allocated_entries.is_set
	|| num_vmr_ids.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib::has_operation() const
{
    return is_set(operation)
	|| is_set(num_active_entries.operation)
	|| is_set(num_allocated_entries.operation)
	|| is_set(num_vmr_ids.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-ifib";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib::get_entity_path(Entity* ancestor) const
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

    if (num_active_entries.is_set || is_set(num_active_entries.operation)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.operation)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());
    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
    }
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos::AppIdQos()
    :
    	num_active_entries{YType::uint32, "num-active-entries"},
	 num_allocated_entries{YType::uint32, "num-allocated-entries"},
	 num_vmr_ids{YType::uint32, "num-vmr-ids"}
{
    yang_name = "app-id-qos"; yang_parent_name = "tcam-lt-ods2";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos::~AppIdQos()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos::has_data() const
{
    return num_active_entries.is_set
	|| num_allocated_entries.is_set
	|| num_vmr_ids.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos::has_operation() const
{
    return is_set(operation)
	|| is_set(num_active_entries.operation)
	|| is_set(num_allocated_entries.operation)
	|| is_set(num_vmr_ids.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-qos";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos::get_entity_path(Entity* ancestor) const
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

    if (num_active_entries.is_set || is_set(num_active_entries.operation)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.operation)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());
    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
    }
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl::AppIdAcl()
    :
    	num_active_entries{YType::uint32, "num-active-entries"},
	 num_allocated_entries{YType::uint32, "num-allocated-entries"},
	 num_vmr_ids{YType::uint32, "num-vmr-ids"}
{
    yang_name = "app-id-acl"; yang_parent_name = "tcam-lt-ods2";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl::~AppIdAcl()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl::has_data() const
{
    return num_active_entries.is_set
	|| num_allocated_entries.is_set
	|| num_vmr_ids.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl::has_operation() const
{
    return is_set(operation)
	|| is_set(num_active_entries.operation)
	|| is_set(num_allocated_entries.operation)
	|| is_set(num_vmr_ids.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-acl";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl::get_entity_path(Entity* ancestor) const
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

    if (num_active_entries.is_set || is_set(num_active_entries.operation)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.operation)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());
    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
    }
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon::AppIdAfmon()
    :
    	num_active_entries{YType::uint32, "num-active-entries"},
	 num_allocated_entries{YType::uint32, "num-allocated-entries"},
	 num_vmr_ids{YType::uint32, "num-vmr-ids"}
{
    yang_name = "app-id-afmon"; yang_parent_name = "tcam-lt-ods2";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon::~AppIdAfmon()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon::has_data() const
{
    return num_active_entries.is_set
	|| num_allocated_entries.is_set
	|| num_vmr_ids.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon::has_operation() const
{
    return is_set(operation)
	|| is_set(num_active_entries.operation)
	|| is_set(num_allocated_entries.operation)
	|| is_set(num_vmr_ids.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-afmon";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon::get_entity_path(Entity* ancestor) const
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

    if (num_active_entries.is_set || is_set(num_active_entries.operation)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.operation)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());
    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
    }
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi::AppIdLi()
    :
    	num_active_entries{YType::uint32, "num-active-entries"},
	 num_allocated_entries{YType::uint32, "num-allocated-entries"},
	 num_vmr_ids{YType::uint32, "num-vmr-ids"}
{
    yang_name = "app-id-li"; yang_parent_name = "tcam-lt-ods2";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi::~AppIdLi()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi::has_data() const
{
    return num_active_entries.is_set
	|| num_allocated_entries.is_set
	|| num_vmr_ids.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi::has_operation() const
{
    return is_set(operation)
	|| is_set(num_active_entries.operation)
	|| is_set(num_allocated_entries.operation)
	|| is_set(num_vmr_ids.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-li";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi::get_entity_path(Entity* ancestor) const
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

    if (num_active_entries.is_set || is_set(num_active_entries.operation)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.operation)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());
    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
    }
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr::AppIdPbr()
    :
    	num_active_entries{YType::uint32, "num-active-entries"},
	 num_allocated_entries{YType::uint32, "num-allocated-entries"},
	 num_vmr_ids{YType::uint32, "num-vmr-ids"}
{
    yang_name = "app-id-pbr"; yang_parent_name = "tcam-lt-ods2";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr::~AppIdPbr()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr::has_data() const
{
    return num_active_entries.is_set
	|| num_allocated_entries.is_set
	|| num_vmr_ids.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr::has_operation() const
{
    return is_set(operation)
	|| is_set(num_active_entries.operation)
	|| is_set(num_allocated_entries.operation)
	|| is_set(num_vmr_ids.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-pbr";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr::get_entity_path(Entity* ancestor) const
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

    if (num_active_entries.is_set || is_set(num_active_entries.operation)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.operation)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());
    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
    }
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl::AppIdEdpl()
    :
    	num_active_entries{YType::uint32, "num-active-entries"},
	 num_allocated_entries{YType::uint32, "num-allocated-entries"},
	 num_vmr_ids{YType::uint32, "num-vmr-ids"}
{
    yang_name = "app-id-edpl"; yang_parent_name = "tcam-lt-ods2";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl::~AppIdEdpl()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl::has_data() const
{
    return num_active_entries.is_set
	|| num_allocated_entries.is_set
	|| num_vmr_ids.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl::has_operation() const
{
    return is_set(operation)
	|| is_set(num_active_entries.operation)
	|| is_set(num_allocated_entries.operation)
	|| is_set(num_vmr_ids.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-edpl";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl::get_entity_path(Entity* ancestor) const
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

    if (num_active_entries.is_set || is_set(num_active_entries.operation)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.operation)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());
    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
    }
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::TcamLtOds2()
    :
    	free_entries{YType::uint32, "free-entries"},
	 reserved_entries{YType::uint32, "reserved-entries"}
    	,
    acl_common(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon>())
	,app_id_acl(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl>())
	,app_id_afmon(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon>())
	,app_id_edpl(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl>())
	,app_id_ifib(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib>())
	,app_id_li(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi>())
	,app_id_pbr(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr>())
	,app_id_qos(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos>())
{
    acl_common->parent = this;
    children["acl-common"] = acl_common.get();

    app_id_acl->parent = this;
    children["app-id-acl"] = app_id_acl.get();

    app_id_afmon->parent = this;
    children["app-id-afmon"] = app_id_afmon.get();

    app_id_edpl->parent = this;
    children["app-id-edpl"] = app_id_edpl.get();

    app_id_ifib->parent = this;
    children["app-id-ifib"] = app_id_ifib.get();

    app_id_li->parent = this;
    children["app-id-li"] = app_id_li.get();

    app_id_pbr->parent = this;
    children["app-id-pbr"] = app_id_pbr.get();

    app_id_qos->parent = this;
    children["app-id-qos"] = app_id_qos.get();

    yang_name = "tcam-lt-ods2"; yang_parent_name = "tcam-info";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::~TcamLtOds2()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::has_data() const
{
    return free_entries.is_set
	|| reserved_entries.is_set
	|| (acl_common !=  nullptr && acl_common->has_data())
	|| (app_id_acl !=  nullptr && app_id_acl->has_data())
	|| (app_id_afmon !=  nullptr && app_id_afmon->has_data())
	|| (app_id_edpl !=  nullptr && app_id_edpl->has_data())
	|| (app_id_ifib !=  nullptr && app_id_ifib->has_data())
	|| (app_id_li !=  nullptr && app_id_li->has_data())
	|| (app_id_pbr !=  nullptr && app_id_pbr->has_data())
	|| (app_id_qos !=  nullptr && app_id_qos->has_data());
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::has_operation() const
{
    return is_set(operation)
	|| is_set(free_entries.operation)
	|| is_set(reserved_entries.operation)
	|| (acl_common !=  nullptr && acl_common->has_operation())
	|| (app_id_acl !=  nullptr && app_id_acl->has_operation())
	|| (app_id_afmon !=  nullptr && app_id_afmon->has_operation())
	|| (app_id_edpl !=  nullptr && app_id_edpl->has_operation())
	|| (app_id_ifib !=  nullptr && app_id_ifib->has_operation())
	|| (app_id_li !=  nullptr && app_id_li->has_operation())
	|| (app_id_pbr !=  nullptr && app_id_pbr->has_operation())
	|| (app_id_qos !=  nullptr && app_id_qos->has_operation());
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-lt-ods2";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::get_entity_path(Entity* ancestor) const
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

    if (free_entries.is_set || is_set(free_entries.operation)) leaf_name_data.push_back(free_entries.get_name_leafdata());
    if (reserved_entries.is_set || is_set(reserved_entries.operation)) leaf_name_data.push_back(reserved_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "acl-common")
    {
        if(acl_common != nullptr)
        {
            children["acl-common"] = acl_common.get();
        }
        else
        {
            acl_common = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon>();
            acl_common->parent = this;
            children["acl-common"] = acl_common.get();
        }
        return children.at("acl-common");
    }

    if(child_yang_name == "app-id-acl")
    {
        if(app_id_acl != nullptr)
        {
            children["app-id-acl"] = app_id_acl.get();
        }
        else
        {
            app_id_acl = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl>();
            app_id_acl->parent = this;
            children["app-id-acl"] = app_id_acl.get();
        }
        return children.at("app-id-acl");
    }

    if(child_yang_name == "app-id-afmon")
    {
        if(app_id_afmon != nullptr)
        {
            children["app-id-afmon"] = app_id_afmon.get();
        }
        else
        {
            app_id_afmon = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon>();
            app_id_afmon->parent = this;
            children["app-id-afmon"] = app_id_afmon.get();
        }
        return children.at("app-id-afmon");
    }

    if(child_yang_name == "app-id-edpl")
    {
        if(app_id_edpl != nullptr)
        {
            children["app-id-edpl"] = app_id_edpl.get();
        }
        else
        {
            app_id_edpl = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl>();
            app_id_edpl->parent = this;
            children["app-id-edpl"] = app_id_edpl.get();
        }
        return children.at("app-id-edpl");
    }

    if(child_yang_name == "app-id-ifib")
    {
        if(app_id_ifib != nullptr)
        {
            children["app-id-ifib"] = app_id_ifib.get();
        }
        else
        {
            app_id_ifib = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib>();
            app_id_ifib->parent = this;
            children["app-id-ifib"] = app_id_ifib.get();
        }
        return children.at("app-id-ifib");
    }

    if(child_yang_name == "app-id-li")
    {
        if(app_id_li != nullptr)
        {
            children["app-id-li"] = app_id_li.get();
        }
        else
        {
            app_id_li = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi>();
            app_id_li->parent = this;
            children["app-id-li"] = app_id_li.get();
        }
        return children.at("app-id-li");
    }

    if(child_yang_name == "app-id-pbr")
    {
        if(app_id_pbr != nullptr)
        {
            children["app-id-pbr"] = app_id_pbr.get();
        }
        else
        {
            app_id_pbr = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr>();
            app_id_pbr->parent = this;
            children["app-id-pbr"] = app_id_pbr.get();
        }
        return children.at("app-id-pbr");
    }

    if(child_yang_name == "app-id-qos")
    {
        if(app_id_qos != nullptr)
        {
            children["app-id-qos"] = app_id_qos.get();
        }
        else
        {
            app_id_qos = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos>();
            app_id_qos->parent = this;
            children["app-id-qos"] = app_id_qos.get();
        }
        return children.at("app-id-qos");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::get_children()
{
    if(children.find("acl-common") == children.end())
    {
        if(acl_common != nullptr)
        {
            children["acl-common"] = acl_common.get();
        }
    }

    if(children.find("app-id-acl") == children.end())
    {
        if(app_id_acl != nullptr)
        {
            children["app-id-acl"] = app_id_acl.get();
        }
    }

    if(children.find("app-id-afmon") == children.end())
    {
        if(app_id_afmon != nullptr)
        {
            children["app-id-afmon"] = app_id_afmon.get();
        }
    }

    if(children.find("app-id-edpl") == children.end())
    {
        if(app_id_edpl != nullptr)
        {
            children["app-id-edpl"] = app_id_edpl.get();
        }
    }

    if(children.find("app-id-ifib") == children.end())
    {
        if(app_id_ifib != nullptr)
        {
            children["app-id-ifib"] = app_id_ifib.get();
        }
    }

    if(children.find("app-id-li") == children.end())
    {
        if(app_id_li != nullptr)
        {
            children["app-id-li"] = app_id_li.get();
        }
    }

    if(children.find("app-id-pbr") == children.end())
    {
        if(app_id_pbr != nullptr)
        {
            children["app-id-pbr"] = app_id_pbr.get();
        }
    }

    if(children.find("app-id-qos") == children.end())
    {
        if(app_id_qos != nullptr)
        {
            children["app-id-qos"] = app_id_qos.get();
        }
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-entries")
    {
        free_entries = value;
    }
    if(value_path == "reserved-entries")
    {
        reserved_entries = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon::AclCommon()
    :
    	allocated_entries{YType::uint32, "allocated-entries"},
	 free_entries{YType::uint32, "free-entries"}
{
    yang_name = "acl-common"; yang_parent_name = "tcam-lt-ods8";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon::~AclCommon()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon::has_data() const
{
    return allocated_entries.is_set
	|| free_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon::has_operation() const
{
    return is_set(operation)
	|| is_set(allocated_entries.operation)
	|| is_set(free_entries.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-common";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon::get_entity_path(Entity* ancestor) const
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

    if (allocated_entries.is_set || is_set(allocated_entries.operation)) leaf_name_data.push_back(allocated_entries.get_name_leafdata());
    if (free_entries.is_set || is_set(free_entries.operation)) leaf_name_data.push_back(free_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allocated-entries")
    {
        allocated_entries = value;
    }
    if(value_path == "free-entries")
    {
        free_entries = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib::AppIdIfib()
    :
    	num_active_entries{YType::uint32, "num-active-entries"},
	 num_allocated_entries{YType::uint32, "num-allocated-entries"},
	 num_vmr_ids{YType::uint32, "num-vmr-ids"}
{
    yang_name = "app-id-ifib"; yang_parent_name = "tcam-lt-ods8";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib::~AppIdIfib()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib::has_data() const
{
    return num_active_entries.is_set
	|| num_allocated_entries.is_set
	|| num_vmr_ids.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib::has_operation() const
{
    return is_set(operation)
	|| is_set(num_active_entries.operation)
	|| is_set(num_allocated_entries.operation)
	|| is_set(num_vmr_ids.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-ifib";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib::get_entity_path(Entity* ancestor) const
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

    if (num_active_entries.is_set || is_set(num_active_entries.operation)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.operation)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());
    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
    }
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos::AppIdQos()
    :
    	num_active_entries{YType::uint32, "num-active-entries"},
	 num_allocated_entries{YType::uint32, "num-allocated-entries"},
	 num_vmr_ids{YType::uint32, "num-vmr-ids"}
{
    yang_name = "app-id-qos"; yang_parent_name = "tcam-lt-ods8";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos::~AppIdQos()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos::has_data() const
{
    return num_active_entries.is_set
	|| num_allocated_entries.is_set
	|| num_vmr_ids.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos::has_operation() const
{
    return is_set(operation)
	|| is_set(num_active_entries.operation)
	|| is_set(num_allocated_entries.operation)
	|| is_set(num_vmr_ids.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-qos";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos::get_entity_path(Entity* ancestor) const
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

    if (num_active_entries.is_set || is_set(num_active_entries.operation)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.operation)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());
    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
    }
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl::AppIdAcl()
    :
    	num_active_entries{YType::uint32, "num-active-entries"},
	 num_allocated_entries{YType::uint32, "num-allocated-entries"},
	 num_vmr_ids{YType::uint32, "num-vmr-ids"}
{
    yang_name = "app-id-acl"; yang_parent_name = "tcam-lt-ods8";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl::~AppIdAcl()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl::has_data() const
{
    return num_active_entries.is_set
	|| num_allocated_entries.is_set
	|| num_vmr_ids.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl::has_operation() const
{
    return is_set(operation)
	|| is_set(num_active_entries.operation)
	|| is_set(num_allocated_entries.operation)
	|| is_set(num_vmr_ids.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-acl";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl::get_entity_path(Entity* ancestor) const
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

    if (num_active_entries.is_set || is_set(num_active_entries.operation)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.operation)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());
    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
    }
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon::AppIdAfmon()
    :
    	num_active_entries{YType::uint32, "num-active-entries"},
	 num_allocated_entries{YType::uint32, "num-allocated-entries"},
	 num_vmr_ids{YType::uint32, "num-vmr-ids"}
{
    yang_name = "app-id-afmon"; yang_parent_name = "tcam-lt-ods8";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon::~AppIdAfmon()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon::has_data() const
{
    return num_active_entries.is_set
	|| num_allocated_entries.is_set
	|| num_vmr_ids.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon::has_operation() const
{
    return is_set(operation)
	|| is_set(num_active_entries.operation)
	|| is_set(num_allocated_entries.operation)
	|| is_set(num_vmr_ids.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-afmon";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon::get_entity_path(Entity* ancestor) const
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

    if (num_active_entries.is_set || is_set(num_active_entries.operation)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.operation)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());
    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
    }
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi::AppIdLi()
    :
    	num_active_entries{YType::uint32, "num-active-entries"},
	 num_allocated_entries{YType::uint32, "num-allocated-entries"},
	 num_vmr_ids{YType::uint32, "num-vmr-ids"}
{
    yang_name = "app-id-li"; yang_parent_name = "tcam-lt-ods8";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi::~AppIdLi()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi::has_data() const
{
    return num_active_entries.is_set
	|| num_allocated_entries.is_set
	|| num_vmr_ids.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi::has_operation() const
{
    return is_set(operation)
	|| is_set(num_active_entries.operation)
	|| is_set(num_allocated_entries.operation)
	|| is_set(num_vmr_ids.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-li";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi::get_entity_path(Entity* ancestor) const
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

    if (num_active_entries.is_set || is_set(num_active_entries.operation)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.operation)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());
    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
    }
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr::AppIdPbr()
    :
    	num_active_entries{YType::uint32, "num-active-entries"},
	 num_allocated_entries{YType::uint32, "num-allocated-entries"},
	 num_vmr_ids{YType::uint32, "num-vmr-ids"}
{
    yang_name = "app-id-pbr"; yang_parent_name = "tcam-lt-ods8";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr::~AppIdPbr()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr::has_data() const
{
    return num_active_entries.is_set
	|| num_allocated_entries.is_set
	|| num_vmr_ids.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr::has_operation() const
{
    return is_set(operation)
	|| is_set(num_active_entries.operation)
	|| is_set(num_allocated_entries.operation)
	|| is_set(num_vmr_ids.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-pbr";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr::get_entity_path(Entity* ancestor) const
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

    if (num_active_entries.is_set || is_set(num_active_entries.operation)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.operation)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());
    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
    }
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl::AppIdEdpl()
    :
    	num_active_entries{YType::uint32, "num-active-entries"},
	 num_allocated_entries{YType::uint32, "num-allocated-entries"},
	 num_vmr_ids{YType::uint32, "num-vmr-ids"}
{
    yang_name = "app-id-edpl"; yang_parent_name = "tcam-lt-ods8";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl::~AppIdEdpl()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl::has_data() const
{
    return num_active_entries.is_set
	|| num_allocated_entries.is_set
	|| num_vmr_ids.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl::has_operation() const
{
    return is_set(operation)
	|| is_set(num_active_entries.operation)
	|| is_set(num_allocated_entries.operation)
	|| is_set(num_vmr_ids.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-edpl";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl::get_entity_path(Entity* ancestor) const
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

    if (num_active_entries.is_set || is_set(num_active_entries.operation)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.operation)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());
    if (num_vmr_ids.is_set || is_set(num_vmr_ids.operation)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
    }
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::TcamLtOds8()
    :
    	free_entries{YType::uint32, "free-entries"},
	 reserved_entries{YType::uint32, "reserved-entries"}
    	,
    acl_common(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon>())
	,app_id_acl(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl>())
	,app_id_afmon(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon>())
	,app_id_edpl(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl>())
	,app_id_ifib(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib>())
	,app_id_li(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi>())
	,app_id_pbr(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr>())
	,app_id_qos(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos>())
{
    acl_common->parent = this;
    children["acl-common"] = acl_common.get();

    app_id_acl->parent = this;
    children["app-id-acl"] = app_id_acl.get();

    app_id_afmon->parent = this;
    children["app-id-afmon"] = app_id_afmon.get();

    app_id_edpl->parent = this;
    children["app-id-edpl"] = app_id_edpl.get();

    app_id_ifib->parent = this;
    children["app-id-ifib"] = app_id_ifib.get();

    app_id_li->parent = this;
    children["app-id-li"] = app_id_li.get();

    app_id_pbr->parent = this;
    children["app-id-pbr"] = app_id_pbr.get();

    app_id_qos->parent = this;
    children["app-id-qos"] = app_id_qos.get();

    yang_name = "tcam-lt-ods8"; yang_parent_name = "tcam-info";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::~TcamLtOds8()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::has_data() const
{
    return free_entries.is_set
	|| reserved_entries.is_set
	|| (acl_common !=  nullptr && acl_common->has_data())
	|| (app_id_acl !=  nullptr && app_id_acl->has_data())
	|| (app_id_afmon !=  nullptr && app_id_afmon->has_data())
	|| (app_id_edpl !=  nullptr && app_id_edpl->has_data())
	|| (app_id_ifib !=  nullptr && app_id_ifib->has_data())
	|| (app_id_li !=  nullptr && app_id_li->has_data())
	|| (app_id_pbr !=  nullptr && app_id_pbr->has_data())
	|| (app_id_qos !=  nullptr && app_id_qos->has_data());
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::has_operation() const
{
    return is_set(operation)
	|| is_set(free_entries.operation)
	|| is_set(reserved_entries.operation)
	|| (acl_common !=  nullptr && acl_common->has_operation())
	|| (app_id_acl !=  nullptr && app_id_acl->has_operation())
	|| (app_id_afmon !=  nullptr && app_id_afmon->has_operation())
	|| (app_id_edpl !=  nullptr && app_id_edpl->has_operation())
	|| (app_id_ifib !=  nullptr && app_id_ifib->has_operation())
	|| (app_id_li !=  nullptr && app_id_li->has_operation())
	|| (app_id_pbr !=  nullptr && app_id_pbr->has_operation())
	|| (app_id_qos !=  nullptr && app_id_qos->has_operation());
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-lt-ods8";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::get_entity_path(Entity* ancestor) const
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

    if (free_entries.is_set || is_set(free_entries.operation)) leaf_name_data.push_back(free_entries.get_name_leafdata());
    if (reserved_entries.is_set || is_set(reserved_entries.operation)) leaf_name_data.push_back(reserved_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "acl-common")
    {
        if(acl_common != nullptr)
        {
            children["acl-common"] = acl_common.get();
        }
        else
        {
            acl_common = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon>();
            acl_common->parent = this;
            children["acl-common"] = acl_common.get();
        }
        return children.at("acl-common");
    }

    if(child_yang_name == "app-id-acl")
    {
        if(app_id_acl != nullptr)
        {
            children["app-id-acl"] = app_id_acl.get();
        }
        else
        {
            app_id_acl = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl>();
            app_id_acl->parent = this;
            children["app-id-acl"] = app_id_acl.get();
        }
        return children.at("app-id-acl");
    }

    if(child_yang_name == "app-id-afmon")
    {
        if(app_id_afmon != nullptr)
        {
            children["app-id-afmon"] = app_id_afmon.get();
        }
        else
        {
            app_id_afmon = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon>();
            app_id_afmon->parent = this;
            children["app-id-afmon"] = app_id_afmon.get();
        }
        return children.at("app-id-afmon");
    }

    if(child_yang_name == "app-id-edpl")
    {
        if(app_id_edpl != nullptr)
        {
            children["app-id-edpl"] = app_id_edpl.get();
        }
        else
        {
            app_id_edpl = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl>();
            app_id_edpl->parent = this;
            children["app-id-edpl"] = app_id_edpl.get();
        }
        return children.at("app-id-edpl");
    }

    if(child_yang_name == "app-id-ifib")
    {
        if(app_id_ifib != nullptr)
        {
            children["app-id-ifib"] = app_id_ifib.get();
        }
        else
        {
            app_id_ifib = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib>();
            app_id_ifib->parent = this;
            children["app-id-ifib"] = app_id_ifib.get();
        }
        return children.at("app-id-ifib");
    }

    if(child_yang_name == "app-id-li")
    {
        if(app_id_li != nullptr)
        {
            children["app-id-li"] = app_id_li.get();
        }
        else
        {
            app_id_li = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi>();
            app_id_li->parent = this;
            children["app-id-li"] = app_id_li.get();
        }
        return children.at("app-id-li");
    }

    if(child_yang_name == "app-id-pbr")
    {
        if(app_id_pbr != nullptr)
        {
            children["app-id-pbr"] = app_id_pbr.get();
        }
        else
        {
            app_id_pbr = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr>();
            app_id_pbr->parent = this;
            children["app-id-pbr"] = app_id_pbr.get();
        }
        return children.at("app-id-pbr");
    }

    if(child_yang_name == "app-id-qos")
    {
        if(app_id_qos != nullptr)
        {
            children["app-id-qos"] = app_id_qos.get();
        }
        else
        {
            app_id_qos = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos>();
            app_id_qos->parent = this;
            children["app-id-qos"] = app_id_qos.get();
        }
        return children.at("app-id-qos");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::get_children()
{
    if(children.find("acl-common") == children.end())
    {
        if(acl_common != nullptr)
        {
            children["acl-common"] = acl_common.get();
        }
    }

    if(children.find("app-id-acl") == children.end())
    {
        if(app_id_acl != nullptr)
        {
            children["app-id-acl"] = app_id_acl.get();
        }
    }

    if(children.find("app-id-afmon") == children.end())
    {
        if(app_id_afmon != nullptr)
        {
            children["app-id-afmon"] = app_id_afmon.get();
        }
    }

    if(children.find("app-id-edpl") == children.end())
    {
        if(app_id_edpl != nullptr)
        {
            children["app-id-edpl"] = app_id_edpl.get();
        }
    }

    if(children.find("app-id-ifib") == children.end())
    {
        if(app_id_ifib != nullptr)
        {
            children["app-id-ifib"] = app_id_ifib.get();
        }
    }

    if(children.find("app-id-li") == children.end())
    {
        if(app_id_li != nullptr)
        {
            children["app-id-li"] = app_id_li.get();
        }
    }

    if(children.find("app-id-pbr") == children.end())
    {
        if(app_id_pbr != nullptr)
        {
            children["app-id-pbr"] = app_id_pbr.get();
        }
    }

    if(children.find("app-id-qos") == children.end())
    {
        if(app_id_qos != nullptr)
        {
            children["app-id-qos"] = app_id_qos.get();
        }
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-entries")
    {
        free_entries = value;
    }
    if(value_path == "reserved-entries")
    {
        reserved_entries = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2::TcamLtL2()
    :
    	free_entries{YType::uint32, "free-entries"},
	 partition_id{YType::uint32, "partition-id"},
	 priority{YType::uint32, "priority"},
	 valid_entries{YType::uint32, "valid-entries"}
{
    yang_name = "tcam-lt-l2"; yang_parent_name = "tcam-info";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2::~TcamLtL2()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2::has_data() const
{
    return free_entries.is_set
	|| partition_id.is_set
	|| priority.is_set
	|| valid_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2::has_operation() const
{
    return is_set(operation)
	|| is_set(free_entries.operation)
	|| is_set(partition_id.operation)
	|| is_set(priority.operation)
	|| is_set(valid_entries.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-lt-l2";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2::get_entity_path(Entity* ancestor) const
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

    if (free_entries.is_set || is_set(free_entries.operation)) leaf_name_data.push_back(free_entries.get_name_leafdata());
    if (partition_id.is_set || is_set(partition_id.operation)) leaf_name_data.push_back(partition_id.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (valid_entries.is_set || is_set(valid_entries.operation)) leaf_name_data.push_back(valid_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-entries")
    {
        free_entries = value;
    }
    if(value_path == "partition-id")
    {
        partition_id = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "valid-entries")
    {
        valid_entries = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamInfo()
    :
    tcam_lt_ods2(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2>())
	,tcam_lt_ods8(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8>())
{
    tcam_lt_ods2->parent = this;
    children["tcam-lt-ods2"] = tcam_lt_ods2.get();

    tcam_lt_ods8->parent = this;
    children["tcam-lt-ods8"] = tcam_lt_ods8.get();

    yang_name = "tcam-info"; yang_parent_name = "tcam-summary";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::~TcamInfo()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::has_data() const
{
    for (std::size_t index=0; index<tcam_lt_l2.size(); index++)
    {
        if(tcam_lt_l2[index]->has_data())
            return true;
    }
    return (tcam_lt_ods2 !=  nullptr && tcam_lt_ods2->has_data())
	|| (tcam_lt_ods8 !=  nullptr && tcam_lt_ods8->has_data());
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::has_operation() const
{
    for (std::size_t index=0; index<tcam_lt_l2.size(); index++)
    {
        if(tcam_lt_l2[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (tcam_lt_ods2 !=  nullptr && tcam_lt_ods2->has_operation())
	|| (tcam_lt_ods8 !=  nullptr && tcam_lt_ods8->has_operation());
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-info";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::get_entity_path(Entity* ancestor) const
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

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tcam-lt-l2")
    {
        for(auto const & c : tcam_lt_l2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2>();
        c->parent = this;
        tcam_lt_l2.push_back(std::move(c));
        children[segment_path] = tcam_lt_l2.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "tcam-lt-ods2")
    {
        if(tcam_lt_ods2 != nullptr)
        {
            children["tcam-lt-ods2"] = tcam_lt_ods2.get();
        }
        else
        {
            tcam_lt_ods2 = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2>();
            tcam_lt_ods2->parent = this;
            children["tcam-lt-ods2"] = tcam_lt_ods2.get();
        }
        return children.at("tcam-lt-ods2");
    }

    if(child_yang_name == "tcam-lt-ods8")
    {
        if(tcam_lt_ods8 != nullptr)
        {
            children["tcam-lt-ods8"] = tcam_lt_ods8.get();
        }
        else
        {
            tcam_lt_ods8 = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8>();
            tcam_lt_ods8->parent = this;
            children["tcam-lt-ods8"] = tcam_lt_ods8.get();
        }
        return children.at("tcam-lt-ods8");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::get_children()
{
    for (auto const & c : tcam_lt_l2)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("tcam-lt-ods2") == children.end())
    {
        if(tcam_lt_ods2 != nullptr)
        {
            children["tcam-lt-ods2"] = tcam_lt_ods2.get();
        }
    }

    if(children.find("tcam-lt-ods8") == children.end())
    {
        if(tcam_lt_ods8 != nullptr)
        {
            children["tcam-lt-ods8"] = tcam_lt_ods8.get();
        }
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::set_value(const std::string & value_path, std::string value)
{
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamSummary()
    :
    internal_tcam_info(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo>())
	,tcam_info(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo>())
{
    internal_tcam_info->parent = this;
    children["internal-tcam-info"] = internal_tcam_info.get();

    tcam_info->parent = this;
    children["tcam-info"] = tcam_info.get();

    yang_name = "tcam-summary"; yang_parent_name = "np";
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::~TcamSummary()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::has_data() const
{
    return (internal_tcam_info !=  nullptr && internal_tcam_info->has_data())
	|| (tcam_info !=  nullptr && tcam_info->has_data());
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::has_operation() const
{
    return is_set(operation)
	|| (internal_tcam_info !=  nullptr && internal_tcam_info->has_operation())
	|| (tcam_info !=  nullptr && tcam_info->has_operation());
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-summary";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::get_entity_path(Entity* ancestor) const
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

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "internal-tcam-info")
    {
        if(internal_tcam_info != nullptr)
        {
            children["internal-tcam-info"] = internal_tcam_info.get();
        }
        else
        {
            internal_tcam_info = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo>();
            internal_tcam_info->parent = this;
            children["internal-tcam-info"] = internal_tcam_info.get();
        }
        return children.at("internal-tcam-info");
    }

    if(child_yang_name == "tcam-info")
    {
        if(tcam_info != nullptr)
        {
            children["tcam-info"] = tcam_info.get();
        }
        else
        {
            tcam_info = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo>();
            tcam_info->parent = this;
            children["tcam-info"] = tcam_info.get();
        }
        return children.at("tcam-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::get_children()
{
    if(children.find("internal-tcam-info") == children.end())
    {
        if(internal_tcam_info != nullptr)
        {
            children["internal-tcam-info"] = internal_tcam_info.get();
        }
    }

    if(children.find("tcam-info") == children.end())
    {
        if(tcam_info != nullptr)
        {
            children["tcam-info"] = tcam_info.get();
        }
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::set_value(const std::string & value_path, std::string value)
{
}

HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter::NpCounter()
    :
    	counter_index{YType::uint32, "counter-index"},
	 counter_name{YType::str, "counter-name"},
	 counter_type{YType::str, "counter-type"},
	 counter_value{YType::uint64, "counter-value"},
	 rate{YType::uint32, "rate"}
{
    yang_name = "np-counter"; yang_parent_name = "counters";
}

HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter::~NpCounter()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter::has_data() const
{
    return counter_index.is_set
	|| counter_name.is_set
	|| counter_type.is_set
	|| counter_value.is_set
	|| rate.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter::has_operation() const
{
    return is_set(operation)
	|| is_set(counter_index.operation)
	|| is_set(counter_name.operation)
	|| is_set(counter_type.operation)
	|| is_set(counter_value.operation)
	|| is_set(rate.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "np-counter";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter::get_entity_path(Entity* ancestor) const
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

    if (counter_index.is_set || is_set(counter_index.operation)) leaf_name_data.push_back(counter_index.get_name_leafdata());
    if (counter_name.is_set || is_set(counter_name.operation)) leaf_name_data.push_back(counter_name.get_name_leafdata());
    if (counter_type.is_set || is_set(counter_type.operation)) leaf_name_data.push_back(counter_type.get_name_leafdata());
    if (counter_value.is_set || is_set(counter_value.operation)) leaf_name_data.push_back(counter_value.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter-index")
    {
        counter_index = value;
    }
    if(value_path == "counter-name")
    {
        counter_name = value;
    }
    if(value_path == "counter-type")
    {
        counter_type = value;
    }
    if(value_path == "counter-value")
    {
        counter_value = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::Counters::Counters()
{
    yang_name = "counters"; yang_parent_name = "np";
}

HardwareModuleNp::Nodes::Node::Nps::Np::Counters::~Counters()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::Counters::has_data() const
{
    for (std::size_t index=0; index<np_counter.size(); index++)
    {
        if(np_counter[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::Counters::has_operation() const
{
    for (std::size_t index=0; index<np_counter.size(); index++)
    {
        if(np_counter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::Counters::get_entity_path(Entity* ancestor) const
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

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "np-counter")
    {
        for(auto const & c : np_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter>();
        c->parent = this;
        np_counter.push_back(std::move(c));
        children[segment_path] = np_counter.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::Counters::get_children()
{
    for (auto const & c : np_counter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::Counters::set_value(const std::string & value_path, std::string value)
{
}

HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop::NpFastDrop()
    :
    	counter_value{YType::uint64, "counter-value"},
	 interface_name{YType::str, "interface-name"}
{
    yang_name = "np-fast-drop"; yang_parent_name = "fast-drop";
}

HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop::~NpFastDrop()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop::has_data() const
{
    return counter_value.is_set
	|| interface_name.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(counter_value.operation)
	|| is_set(interface_name.operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "np-fast-drop";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop::get_entity_path(Entity* ancestor) const
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

    if (counter_value.is_set || is_set(counter_value.operation)) leaf_name_data.push_back(counter_value.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop::get_children()
{
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter-value")
    {
        counter_value = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::FastDrop()
{
    yang_name = "fast-drop"; yang_parent_name = "np";
}

HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::~FastDrop()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::has_data() const
{
    for (std::size_t index=0; index<np_fast_drop.size(); index++)
    {
        if(np_fast_drop[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::has_operation() const
{
    for (std::size_t index=0; index<np_fast_drop.size(); index++)
    {
        if(np_fast_drop[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-drop";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::get_entity_path(Entity* ancestor) const
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

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "np-fast-drop")
    {
        for(auto const & c : np_fast_drop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop>();
        c->parent = this;
        np_fast_drop.push_back(std::move(c));
        children[segment_path] = np_fast_drop.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::get_children()
{
    for (auto const & c : np_fast_drop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::set_value(const std::string & value_path, std::string value)
{
}

HardwareModuleNp::Nodes::Node::Nps::Np::Np()
    :
    	np_name{YType::str, "np-name"}
    	,
    chn_load(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad>())
	,counters(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::Counters>())
	,fast_drop(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop>())
	,tcam_summary(std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary>())
{
    chn_load->parent = this;
    children["chn-load"] = chn_load.get();

    counters->parent = this;
    children["counters"] = counters.get();

    fast_drop->parent = this;
    children["fast-drop"] = fast_drop.get();

    tcam_summary->parent = this;
    children["tcam-summary"] = tcam_summary.get();

    yang_name = "np"; yang_parent_name = "nps";
}

HardwareModuleNp::Nodes::Node::Nps::Np::~Np()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::has_data() const
{
    return np_name.is_set
	|| (chn_load !=  nullptr && chn_load->has_data())
	|| (counters !=  nullptr && counters->has_data())
	|| (fast_drop !=  nullptr && fast_drop->has_data())
	|| (tcam_summary !=  nullptr && tcam_summary->has_data());
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::has_operation() const
{
    return is_set(operation)
	|| is_set(np_name.operation)
	|| (chn_load !=  nullptr && chn_load->has_operation())
	|| (counters !=  nullptr && counters->has_operation())
	|| (fast_drop !=  nullptr && fast_drop->has_operation())
	|| (tcam_summary !=  nullptr && tcam_summary->has_operation());
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "np" <<"[np-name='" <<np_name.get() <<"']";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::Np::get_entity_path(Entity* ancestor) const
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

    if (np_name.is_set || is_set(np_name.operation)) leaf_name_data.push_back(np_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::Node::Nps::Np::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "chn-load")
    {
        if(chn_load != nullptr)
        {
            children["chn-load"] = chn_load.get();
        }
        else
        {
            chn_load = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad>();
            chn_load->parent = this;
            children["chn-load"] = chn_load.get();
        }
        return children.at("chn-load");
    }

    if(child_yang_name == "counters")
    {
        if(counters != nullptr)
        {
            children["counters"] = counters.get();
        }
        else
        {
            counters = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::Counters>();
            counters->parent = this;
            children["counters"] = counters.get();
        }
        return children.at("counters");
    }

    if(child_yang_name == "fast-drop")
    {
        if(fast_drop != nullptr)
        {
            children["fast-drop"] = fast_drop.get();
        }
        else
        {
            fast_drop = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop>();
            fast_drop->parent = this;
            children["fast-drop"] = fast_drop.get();
        }
        return children.at("fast-drop");
    }

    if(child_yang_name == "tcam-summary")
    {
        if(tcam_summary != nullptr)
        {
            children["tcam-summary"] = tcam_summary.get();
        }
        else
        {
            tcam_summary = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary>();
            tcam_summary->parent = this;
            children["tcam-summary"] = tcam_summary.get();
        }
        return children.at("tcam-summary");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::Np::get_children()
{
    if(children.find("chn-load") == children.end())
    {
        if(chn_load != nullptr)
        {
            children["chn-load"] = chn_load.get();
        }
    }

    if(children.find("counters") == children.end())
    {
        if(counters != nullptr)
        {
            children["counters"] = counters.get();
        }
    }

    if(children.find("fast-drop") == children.end())
    {
        if(fast_drop != nullptr)
        {
            children["fast-drop"] = fast_drop.get();
        }
    }

    if(children.find("tcam-summary") == children.end())
    {
        if(tcam_summary != nullptr)
        {
            children["tcam-summary"] = tcam_summary.get();
        }
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "np-name")
    {
        np_name = value;
    }
}

HardwareModuleNp::Nodes::Node::Nps::Nps()
{
    yang_name = "nps"; yang_parent_name = "node";
}

HardwareModuleNp::Nodes::Node::Nps::~Nps()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::has_data() const
{
    for (std::size_t index=0; index<np.size(); index++)
    {
        if(np[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModuleNp::Nodes::Node::Nps::has_operation() const
{
    for (std::size_t index=0; index<np.size(); index++)
    {
        if(np[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string HardwareModuleNp::Nodes::Node::Nps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nps";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::Nps::get_entity_path(Entity* ancestor) const
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

Entity* HardwareModuleNp::Nodes::Node::Nps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "np")
    {
        for(auto const & c : np)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HardwareModuleNp::Nodes::Node::Nps::Np>();
        c->parent = this;
        np.push_back(std::move(c));
        children[segment_path] = np.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::Nps::get_children()
{
    for (auto const & c : np)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::set_value(const std::string & value_path, std::string value)
{
}

HardwareModuleNp::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    nps(std::make_unique<HardwareModuleNp::Nodes::Node::Nps>())
{
    nps->parent = this;
    children["nps"] = nps.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

HardwareModuleNp::Nodes::Node::~Node()
{
}

bool HardwareModuleNp::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (nps !=  nullptr && nps->has_data());
}

bool HardwareModuleNp::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (nps !=  nullptr && nps->has_operation());
}

std::string HardwareModuleNp::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-np-oper:hardware-module-np/nodes/" << get_segment_path();
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

Entity* HardwareModuleNp::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nps")
    {
        if(nps != nullptr)
        {
            children["nps"] = nps.get();
        }
        else
        {
            nps = std::make_unique<HardwareModuleNp::Nodes::Node::Nps>();
            nps->parent = this;
            children["nps"] = nps.get();
        }
        return children.at("nps");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::Node::get_children()
{
    if(children.find("nps") == children.end())
    {
        if(nps != nullptr)
        {
            children["nps"] = nps.get();
        }
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

HardwareModuleNp::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "hardware-module-np";
}

HardwareModuleNp::Nodes::~Nodes()
{
}

bool HardwareModuleNp::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModuleNp::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string HardwareModuleNp::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-np-oper:hardware-module-np/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleNp::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<HardwareModuleNp::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::Nodes::get_children()
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

void HardwareModuleNp::Nodes::set_value(const std::string & value_path, std::string value)
{
}

HardwareModuleNp::HardwareModuleNp()
    :
    nodes(std::make_unique<HardwareModuleNp::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "hardware-module-np"; yang_parent_name = "Cisco-IOS-XR-asr9k-np-oper";
}

HardwareModuleNp::~HardwareModuleNp()
{
}

bool HardwareModuleNp::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool HardwareModuleNp::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string HardwareModuleNp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-np-oper:hardware-module-np";

    return path_buffer.str();

}

EntityPath HardwareModuleNp::get_entity_path(Entity* ancestor) const
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

Entity* HardwareModuleNp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_unique<HardwareModuleNp::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleNp::get_children()
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

void HardwareModuleNp::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> HardwareModuleNp::clone_ptr()
{
    return std::make_unique<HardwareModuleNp>();
}


}
}

