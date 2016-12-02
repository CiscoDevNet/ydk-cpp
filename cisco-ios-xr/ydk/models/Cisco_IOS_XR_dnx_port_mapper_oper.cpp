
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_dnx_port_mapper_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_dnx_port_mapper_oper {

Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::Member::Member()
    :
    	hardware_resource{YType::str, "hardware-resource"},
	 interface_name{YType::str, "interface-name"},
	 interface_status{YType::str, "interface-status"},
	 npu_id{YType::str, "npu-id"},
	 time_stamp{YType::str, "time-stamp"}
{
    yang_name = "member"; yang_parent_name = "bundle-interface-detail";
}

Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::Member::~Member()
{
}

bool Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::Member::has_data() const
{
    return hardware_resource.is_set
	|| interface_name.is_set
	|| interface_status.is_set
	|| npu_id.is_set
	|| time_stamp.is_set;
}

bool Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::Member::has_operation() const
{
    return is_set(operation)
	|| is_set(hardware_resource.operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_status.operation)
	|| is_set(npu_id.operation)
	|| is_set(time_stamp.operation);
}

std::string Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";

    return path_buffer.str();

}

EntityPath Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::Member::get_entity_path(Entity* ancestor) const
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

    if (hardware_resource.is_set || is_set(hardware_resource.operation)) leaf_name_data.push_back(hardware_resource.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_status.is_set || is_set(interface_status.operation)) leaf_name_data.push_back(interface_status.get_name_leafdata());
    if (npu_id.is_set || is_set(npu_id.operation)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::Member::get_children()
{
    return children;
}

void Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::Member::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hardware-resource")
    {
        hardware_resource = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-status")
    {
        interface_status = value;
    }
    if(value_path == "npu-id")
    {
        npu_id = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::BundleInterfaceDetail()
    :
    	interface{YType::int32, "interface"},
	 interface_state{YType::str, "interface-state"},
	 time_stamp{YType::str, "time-stamp"}
{
    yang_name = "bundle-interface-detail"; yang_parent_name = "bundle-interface-details";
}

Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::~BundleInterfaceDetail()
{
}

bool Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::has_data() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_data())
            return true;
    }
    return interface.is_set
	|| interface_state.is_set
	|| time_stamp.is_set;
}

bool Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::has_operation() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(interface_state.operation)
	|| is_set(time_stamp.operation);
}

std::string Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interface-detail" <<"[interface='" <<interface.get() <<"']";

    return path_buffer.str();

}

EntityPath Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::get_entity_path(Entity* ancestor) const
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

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.operation)) leaf_name_data.push_back(interface_state.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member")
    {
        for(auto const & c : member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::Member>();
        c->parent = this;
        member.push_back(std::move(c));
        children[segment_path] = member.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::get_children()
{
    for (auto const & c : member)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetails()
{
    yang_name = "bundle-interface-details"; yang_parent_name = "node";
}

Oor::Nodes::Node::BundleInterfaceDetails::~BundleInterfaceDetails()
{
}

bool Oor::Nodes::Node::BundleInterfaceDetails::has_data() const
{
    for (std::size_t index=0; index<bundle_interface_detail.size(); index++)
    {
        if(bundle_interface_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Oor::Nodes::Node::BundleInterfaceDetails::has_operation() const
{
    for (std::size_t index=0; index<bundle_interface_detail.size(); index++)
    {
        if(bundle_interface_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Oor::Nodes::Node::BundleInterfaceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interface-details";

    return path_buffer.str();

}

EntityPath Oor::Nodes::Node::BundleInterfaceDetails::get_entity_path(Entity* ancestor) const
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

Entity* Oor::Nodes::Node::BundleInterfaceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-interface-detail")
    {
        for(auto const & c : bundle_interface_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Oor::Nodes::Node::BundleInterfaceDetails::BundleInterfaceDetail>();
        c->parent = this;
        bundle_interface_detail.push_back(std::move(c));
        children[segment_path] = bundle_interface_detail.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Oor::Nodes::Node::BundleInterfaceDetails::get_children()
{
    for (auto const & c : bundle_interface_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Oor::Nodes::Node::BundleInterfaceDetails::set_value(const std::string & value_path, std::string value)
{
}

Oor::Nodes::Node::InterfaceDetails::InterfaceDetail::InterfaceDetail()
    :
    	interface{YType::int32, "interface"},
	 hardware_resource{YType::str, "hardware-resource"},
	 interface_name{YType::str, "interface-name"},
	 interface_status{YType::str, "interface-status"},
	 npu_id{YType::str, "npu-id"},
	 time_stamp{YType::str, "time-stamp"}
{
    yang_name = "interface-detail"; yang_parent_name = "interface-details";
}

Oor::Nodes::Node::InterfaceDetails::InterfaceDetail::~InterfaceDetail()
{
}

bool Oor::Nodes::Node::InterfaceDetails::InterfaceDetail::has_data() const
{
    return interface.is_set
	|| hardware_resource.is_set
	|| interface_name.is_set
	|| interface_status.is_set
	|| npu_id.is_set
	|| time_stamp.is_set;
}

bool Oor::Nodes::Node::InterfaceDetails::InterfaceDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(hardware_resource.operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_status.operation)
	|| is_set(npu_id.operation)
	|| is_set(time_stamp.operation);
}

std::string Oor::Nodes::Node::InterfaceDetails::InterfaceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-detail" <<"[interface='" <<interface.get() <<"']";

    return path_buffer.str();

}

EntityPath Oor::Nodes::Node::InterfaceDetails::InterfaceDetail::get_entity_path(Entity* ancestor) const
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

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (hardware_resource.is_set || is_set(hardware_resource.operation)) leaf_name_data.push_back(hardware_resource.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_status.is_set || is_set(interface_status.operation)) leaf_name_data.push_back(interface_status.get_name_leafdata());
    if (npu_id.is_set || is_set(npu_id.operation)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Oor::Nodes::Node::InterfaceDetails::InterfaceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Oor::Nodes::Node::InterfaceDetails::InterfaceDetail::get_children()
{
    return children;
}

void Oor::Nodes::Node::InterfaceDetails::InterfaceDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "hardware-resource")
    {
        hardware_resource = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-status")
    {
        interface_status = value;
    }
    if(value_path == "npu-id")
    {
        npu_id = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

Oor::Nodes::Node::InterfaceDetails::InterfaceDetails()
{
    yang_name = "interface-details"; yang_parent_name = "node";
}

Oor::Nodes::Node::InterfaceDetails::~InterfaceDetails()
{
}

bool Oor::Nodes::Node::InterfaceDetails::has_data() const
{
    for (std::size_t index=0; index<interface_detail.size(); index++)
    {
        if(interface_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Oor::Nodes::Node::InterfaceDetails::has_operation() const
{
    for (std::size_t index=0; index<interface_detail.size(); index++)
    {
        if(interface_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Oor::Nodes::Node::InterfaceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-details";

    return path_buffer.str();

}

EntityPath Oor::Nodes::Node::InterfaceDetails::get_entity_path(Entity* ancestor) const
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

Entity* Oor::Nodes::Node::InterfaceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-detail")
    {
        for(auto const & c : interface_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Oor::Nodes::Node::InterfaceDetails::InterfaceDetail>();
        c->parent = this;
        interface_detail.push_back(std::move(c));
        children[segment_path] = interface_detail.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Oor::Nodes::Node::InterfaceDetails::get_children()
{
    for (auto const & c : interface_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Oor::Nodes::Node::InterfaceDetails::set_value(const std::string & value_path, std::string value)
{
}

Oor::Nodes::Node::InterfaceSummaryDatas::InterfaceSummaryData::InterfaceSummaryData()
    :
    	interface{YType::int32, "interface"},
	 hardware_resource{YType::str, "hardware-resource"},
	 interface_name{YType::str, "interface-name"},
	 interface_status{YType::str, "interface-status"}
{
    yang_name = "interface-summary-data"; yang_parent_name = "interface-summary-datas";
}

Oor::Nodes::Node::InterfaceSummaryDatas::InterfaceSummaryData::~InterfaceSummaryData()
{
}

bool Oor::Nodes::Node::InterfaceSummaryDatas::InterfaceSummaryData::has_data() const
{
    return interface.is_set
	|| hardware_resource.is_set
	|| interface_name.is_set
	|| interface_status.is_set;
}

bool Oor::Nodes::Node::InterfaceSummaryDatas::InterfaceSummaryData::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(hardware_resource.operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_status.operation);
}

std::string Oor::Nodes::Node::InterfaceSummaryDatas::InterfaceSummaryData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary-data" <<"[interface='" <<interface.get() <<"']";

    return path_buffer.str();

}

EntityPath Oor::Nodes::Node::InterfaceSummaryDatas::InterfaceSummaryData::get_entity_path(Entity* ancestor) const
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

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (hardware_resource.is_set || is_set(hardware_resource.operation)) leaf_name_data.push_back(hardware_resource.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_status.is_set || is_set(interface_status.operation)) leaf_name_data.push_back(interface_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Oor::Nodes::Node::InterfaceSummaryDatas::InterfaceSummaryData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Oor::Nodes::Node::InterfaceSummaryDatas::InterfaceSummaryData::get_children()
{
    return children;
}

void Oor::Nodes::Node::InterfaceSummaryDatas::InterfaceSummaryData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "hardware-resource")
    {
        hardware_resource = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-status")
    {
        interface_status = value;
    }
}

Oor::Nodes::Node::InterfaceSummaryDatas::InterfaceSummaryDatas()
{
    yang_name = "interface-summary-datas"; yang_parent_name = "node";
}

Oor::Nodes::Node::InterfaceSummaryDatas::~InterfaceSummaryDatas()
{
}

bool Oor::Nodes::Node::InterfaceSummaryDatas::has_data() const
{
    for (std::size_t index=0; index<interface_summary_data.size(); index++)
    {
        if(interface_summary_data[index]->has_data())
            return true;
    }
    return false;
}

bool Oor::Nodes::Node::InterfaceSummaryDatas::has_operation() const
{
    for (std::size_t index=0; index<interface_summary_data.size(); index++)
    {
        if(interface_summary_data[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Oor::Nodes::Node::InterfaceSummaryDatas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary-datas";

    return path_buffer.str();

}

EntityPath Oor::Nodes::Node::InterfaceSummaryDatas::get_entity_path(Entity* ancestor) const
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

Entity* Oor::Nodes::Node::InterfaceSummaryDatas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-summary-data")
    {
        for(auto const & c : interface_summary_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Oor::Nodes::Node::InterfaceSummaryDatas::InterfaceSummaryData>();
        c->parent = this;
        interface_summary_data.push_back(std::move(c));
        children[segment_path] = interface_summary_data.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Oor::Nodes::Node::InterfaceSummaryDatas::get_children()
{
    for (auto const & c : interface_summary_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Oor::Nodes::Node::InterfaceSummaryDatas::set_value(const std::string & value_path, std::string value)
{
}

Oor::Nodes::Node::OorSummary::OorSummary()
    :
    	green{YType::uint32, "green"},
	 red{YType::uint32, "red"},
	 yel_low{YType::uint32, "yel-low"}
{
    yang_name = "oor-summary"; yang_parent_name = "node";
}

Oor::Nodes::Node::OorSummary::~OorSummary()
{
}

bool Oor::Nodes::Node::OorSummary::has_data() const
{
    return green.is_set
	|| red.is_set
	|| yel_low.is_set;
}

bool Oor::Nodes::Node::OorSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(green.operation)
	|| is_set(red.operation)
	|| is_set(yel_low.operation);
}

std::string Oor::Nodes::Node::OorSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-summary";

    return path_buffer.str();

}

EntityPath Oor::Nodes::Node::OorSummary::get_entity_path(Entity* ancestor) const
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

    if (green.is_set || is_set(green.operation)) leaf_name_data.push_back(green.get_name_leafdata());
    if (red.is_set || is_set(red.operation)) leaf_name_data.push_back(red.get_name_leafdata());
    if (yel_low.is_set || is_set(yel_low.operation)) leaf_name_data.push_back(yel_low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Oor::Nodes::Node::OorSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Oor::Nodes::Node::OorSummary::get_children()
{
    return children;
}

void Oor::Nodes::Node::OorSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "green")
    {
        green = value;
    }
    if(value_path == "red")
    {
        red = value;
    }
    if(value_path == "yel-low")
    {
        yel_low = value;
    }
}

Oor::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    bundle_interface_details(std::make_unique<Oor::Nodes::Node::BundleInterfaceDetails>())
	,interface_details(std::make_unique<Oor::Nodes::Node::InterfaceDetails>())
	,interface_summary_datas(std::make_unique<Oor::Nodes::Node::InterfaceSummaryDatas>())
	,oor_summary(std::make_unique<Oor::Nodes::Node::OorSummary>())
{
    bundle_interface_details->parent = this;
    children["bundle-interface-details"] = bundle_interface_details.get();

    interface_details->parent = this;
    children["interface-details"] = interface_details.get();

    interface_summary_datas->parent = this;
    children["interface-summary-datas"] = interface_summary_datas.get();

    oor_summary->parent = this;
    children["oor-summary"] = oor_summary.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

Oor::Nodes::Node::~Node()
{
}

bool Oor::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (bundle_interface_details !=  nullptr && bundle_interface_details->has_data())
	|| (interface_details !=  nullptr && interface_details->has_data())
	|| (interface_summary_datas !=  nullptr && interface_summary_datas->has_data())
	|| (oor_summary !=  nullptr && oor_summary->has_data());
}

bool Oor::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (bundle_interface_details !=  nullptr && is_set(bundle_interface_details->operation))
	|| (interface_details !=  nullptr && is_set(interface_details->operation))
	|| (interface_summary_datas !=  nullptr && is_set(interface_summary_datas->operation))
	|| (oor_summary !=  nullptr && is_set(oor_summary->operation));
}

std::string Oor::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Oor::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-dnx-port-mapper-oper:oor/nodes/" << get_segment_path();
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

Entity* Oor::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-interface-details")
    {
        if(bundle_interface_details != nullptr)
        {
            children["bundle-interface-details"] = bundle_interface_details.get();
        }
        else
        {
            bundle_interface_details = std::make_unique<Oor::Nodes::Node::BundleInterfaceDetails>();
            bundle_interface_details->parent = this;
            children["bundle-interface-details"] = bundle_interface_details.get();
        }
        return children.at("bundle-interface-details");
    }

    if(child_yang_name == "interface-details")
    {
        if(interface_details != nullptr)
        {
            children["interface-details"] = interface_details.get();
        }
        else
        {
            interface_details = std::make_unique<Oor::Nodes::Node::InterfaceDetails>();
            interface_details->parent = this;
            children["interface-details"] = interface_details.get();
        }
        return children.at("interface-details");
    }

    if(child_yang_name == "interface-summary-datas")
    {
        if(interface_summary_datas != nullptr)
        {
            children["interface-summary-datas"] = interface_summary_datas.get();
        }
        else
        {
            interface_summary_datas = std::make_unique<Oor::Nodes::Node::InterfaceSummaryDatas>();
            interface_summary_datas->parent = this;
            children["interface-summary-datas"] = interface_summary_datas.get();
        }
        return children.at("interface-summary-datas");
    }

    if(child_yang_name == "oor-summary")
    {
        if(oor_summary != nullptr)
        {
            children["oor-summary"] = oor_summary.get();
        }
        else
        {
            oor_summary = std::make_unique<Oor::Nodes::Node::OorSummary>();
            oor_summary->parent = this;
            children["oor-summary"] = oor_summary.get();
        }
        return children.at("oor-summary");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Oor::Nodes::Node::get_children()
{
    if(children.find("bundle-interface-details") == children.end())
    {
        if(bundle_interface_details != nullptr)
        {
            children["bundle-interface-details"] = bundle_interface_details.get();
        }
    }

    if(children.find("interface-details") == children.end())
    {
        if(interface_details != nullptr)
        {
            children["interface-details"] = interface_details.get();
        }
    }

    if(children.find("interface-summary-datas") == children.end())
    {
        if(interface_summary_datas != nullptr)
        {
            children["interface-summary-datas"] = interface_summary_datas.get();
        }
    }

    if(children.find("oor-summary") == children.end())
    {
        if(oor_summary != nullptr)
        {
            children["oor-summary"] = oor_summary.get();
        }
    }

    return children;
}

void Oor::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Oor::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "oor";
}

Oor::Nodes::~Nodes()
{
}

bool Oor::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Oor::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Oor::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Oor::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-dnx-port-mapper-oper:oor/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Oor::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Oor::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Oor::Nodes::get_children()
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

void Oor::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Oor::Oor()
    :
    nodes(std::make_unique<Oor::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "oor"; yang_parent_name = "Cisco-IOS-XR-dnx-port-mapper-oper";
}

Oor::~Oor()
{
}

bool Oor::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Oor::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && is_set(nodes->operation));
}

std::string Oor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dnx-port-mapper-oper:oor";

    return path_buffer.str();

}

EntityPath Oor::get_entity_path(Entity* ancestor) const
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

Entity* Oor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_unique<Oor::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Oor::get_children()
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

void Oor::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Oor::clone_ptr()
{
    return std::make_unique<Oor>();
}


}
}

