
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_efp_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XE_efp_oper {

EfpStats::EfpStats()
{
    yang_name = "efp-stats"; yang_parent_name = "Cisco-IOS-XE-efp-oper";
}

EfpStats::~EfpStats()
{
}

bool EfpStats::has_data() const
{
    for (std::size_t index=0; index<efp_stat.size(); index++)
    {
        if(efp_stat[index]->has_data())
            return true;
    }
    return false;
}

bool EfpStats::has_operation() const
{
    for (std::size_t index=0; index<efp_stat.size(); index++)
    {
        if(efp_stat[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EfpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-efp-oper:efp-stats";

    return path_buffer.str();

}

const EntityPath EfpStats::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> EfpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "efp-stat")
    {
        for(auto const & c : efp_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EfpStats::EfpStat>();
        c->parent = this;
        efp_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EfpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : efp_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EfpStats::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> EfpStats::clone_ptr() const
{
    return std::make_shared<EfpStats>();
}

std::string EfpStats::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string EfpStats::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function EfpStats::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

EfpStats::EfpStat::EfpStat()
    :
    id{YType::uint32, "id"},
    interface{YType::str, "interface"},
    in_bytes{YType::uint64, "in-bytes"},
    in_pkts{YType::uint64, "in-pkts"},
    out_bytes{YType::uint64, "out-bytes"},
    out_pkts{YType::uint64, "out-pkts"}
{
    yang_name = "efp-stat"; yang_parent_name = "efp-stats";
}

EfpStats::EfpStat::~EfpStat()
{
}

bool EfpStats::EfpStat::has_data() const
{
    return id.is_set
	|| interface.is_set
	|| in_bytes.is_set
	|| in_pkts.is_set
	|| out_bytes.is_set
	|| out_pkts.is_set;
}

bool EfpStats::EfpStat::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(interface.operation)
	|| is_set(in_bytes.operation)
	|| is_set(in_pkts.operation)
	|| is_set(out_bytes.operation)
	|| is_set(out_pkts.operation);
}

std::string EfpStats::EfpStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "efp-stat" <<"[id='" <<id <<"']" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath EfpStats::EfpStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-efp-oper:efp-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (in_bytes.is_set || is_set(in_bytes.operation)) leaf_name_data.push_back(in_bytes.get_name_leafdata());
    if (in_pkts.is_set || is_set(in_pkts.operation)) leaf_name_data.push_back(in_pkts.get_name_leafdata());
    if (out_bytes.is_set || is_set(out_bytes.operation)) leaf_name_data.push_back(out_bytes.get_name_leafdata());
    if (out_pkts.is_set || is_set(out_pkts.operation)) leaf_name_data.push_back(out_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EfpStats::EfpStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EfpStats::EfpStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EfpStats::EfpStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "in-bytes")
    {
        in_bytes = value;
    }
    if(value_path == "in-pkts")
    {
        in_pkts = value;
    }
    if(value_path == "out-bytes")
    {
        out_bytes = value;
    }
    if(value_path == "out-pkts")
    {
        out_pkts = value;
    }
}


}
}

