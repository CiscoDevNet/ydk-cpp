
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ncs1k_mxp_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ncs1k_mxp_oper {

HwModule::SliceIds::SliceId::SliceInfo::ClientPort::TrunkPort::TrunkPort()
    :
    	if_index{YType::uint32, "if-index"},
	 percentage{YType::str, "percentage"},
	 trunk_name{YType::str, "trunk-name"}
{
    yang_name = "trunk-port"; yang_parent_name = "client-port";
}

HwModule::SliceIds::SliceId::SliceInfo::ClientPort::TrunkPort::~TrunkPort()
{
}

bool HwModule::SliceIds::SliceId::SliceInfo::ClientPort::TrunkPort::has_data() const
{
    return if_index.is_set
	|| percentage.is_set
	|| trunk_name.is_set;
}

bool HwModule::SliceIds::SliceId::SliceInfo::ClientPort::TrunkPort::has_operation() const
{
    return is_set(operation)
	|| is_set(if_index.operation)
	|| is_set(percentage.operation)
	|| is_set(trunk_name.operation);
}

std::string HwModule::SliceIds::SliceId::SliceInfo::ClientPort::TrunkPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunk-port";

    return path_buffer.str();

}

EntityPath HwModule::SliceIds::SliceId::SliceInfo::ClientPort::TrunkPort::get_entity_path(Entity* ancestor) const
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

    if (if_index.is_set || is_set(if_index.operation)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (percentage.is_set || is_set(percentage.operation)) leaf_name_data.push_back(percentage.get_name_leafdata());
    if (trunk_name.is_set || is_set(trunk_name.operation)) leaf_name_data.push_back(trunk_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HwModule::SliceIds::SliceId::SliceInfo::ClientPort::TrunkPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HwModule::SliceIds::SliceId::SliceInfo::ClientPort::TrunkPort::get_children()
{
    return children;
}

void HwModule::SliceIds::SliceId::SliceInfo::ClientPort::TrunkPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "if-index")
    {
        if_index = value;
    }
    if(value_path == "percentage")
    {
        percentage = value;
    }
    if(value_path == "trunk-name")
    {
        trunk_name = value;
    }
}

HwModule::SliceIds::SliceId::SliceInfo::ClientPort::ClientPort()
    :
    	client_name{YType::str, "client-name"},
	 if_index{YType::uint32, "if-index"}
{
    yang_name = "client-port"; yang_parent_name = "slice-info";
}

HwModule::SliceIds::SliceId::SliceInfo::ClientPort::~ClientPort()
{
}

bool HwModule::SliceIds::SliceId::SliceInfo::ClientPort::has_data() const
{
    for (std::size_t index=0; index<trunk_port.size(); index++)
    {
        if(trunk_port[index]->has_data())
            return true;
    }
    return client_name.is_set
	|| if_index.is_set;
}

bool HwModule::SliceIds::SliceId::SliceInfo::ClientPort::has_operation() const
{
    for (std::size_t index=0; index<trunk_port.size(); index++)
    {
        if(trunk_port[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(client_name.operation)
	|| is_set(if_index.operation);
}

std::string HwModule::SliceIds::SliceId::SliceInfo::ClientPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-port";

    return path_buffer.str();

}

EntityPath HwModule::SliceIds::SliceId::SliceInfo::ClientPort::get_entity_path(Entity* ancestor) const
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

    if (client_name.is_set || is_set(client_name.operation)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.operation)) leaf_name_data.push_back(if_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HwModule::SliceIds::SliceId::SliceInfo::ClientPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "trunk-port")
    {
        for(auto const & c : trunk_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HwModule::SliceIds::SliceId::SliceInfo::ClientPort::TrunkPort>();
        c->parent = this;
        trunk_port.push_back(std::move(c));
        children[segment_path] = trunk_port.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HwModule::SliceIds::SliceId::SliceInfo::ClientPort::get_children()
{
    for (auto const & c : trunk_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HwModule::SliceIds::SliceId::SliceInfo::ClientPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-name")
    {
        client_name = value;
    }
    if(value_path == "if-index")
    {
        if_index = value;
    }
}

HwModule::SliceIds::SliceId::SliceInfo::SliceInfo()
    :
    	client_rate{YType::uint32, "client-rate"},
	 dp_fpga_fw_type{YType::str, "dp-fpga-fw-type"},
	 dp_fpga_fw_ver{YType::str, "dp-fpga-fw-ver"},
	 encryption_supported{YType::boolean, "encryption-supported"},
	 hardware_status{YType::enumeration, "hardware-status"},
	 lldp_drop_status{YType::boolean, "lldp-drop-status"},
	 need_upg{YType::uint32, "need-upg"},
	 slice_id{YType::uint32, "slice-id"},
	 trunk_rate{YType::uint32, "trunk-rate"}
{
    yang_name = "slice-info"; yang_parent_name = "slice-id";
}

HwModule::SliceIds::SliceId::SliceInfo::~SliceInfo()
{
}

bool HwModule::SliceIds::SliceId::SliceInfo::has_data() const
{
    for (std::size_t index=0; index<client_port.size(); index++)
    {
        if(client_port[index]->has_data())
            return true;
    }
    return client_rate.is_set
	|| dp_fpga_fw_type.is_set
	|| dp_fpga_fw_ver.is_set
	|| encryption_supported.is_set
	|| hardware_status.is_set
	|| lldp_drop_status.is_set
	|| need_upg.is_set
	|| slice_id.is_set
	|| trunk_rate.is_set;
}

bool HwModule::SliceIds::SliceId::SliceInfo::has_operation() const
{
    for (std::size_t index=0; index<client_port.size(); index++)
    {
        if(client_port[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(client_rate.operation)
	|| is_set(dp_fpga_fw_type.operation)
	|| is_set(dp_fpga_fw_ver.operation)
	|| is_set(encryption_supported.operation)
	|| is_set(hardware_status.operation)
	|| is_set(lldp_drop_status.operation)
	|| is_set(need_upg.operation)
	|| is_set(slice_id.operation)
	|| is_set(trunk_rate.operation);
}

std::string HwModule::SliceIds::SliceId::SliceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice-info";

    return path_buffer.str();

}

EntityPath HwModule::SliceIds::SliceId::SliceInfo::get_entity_path(Entity* ancestor) const
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

    if (client_rate.is_set || is_set(client_rate.operation)) leaf_name_data.push_back(client_rate.get_name_leafdata());
    if (dp_fpga_fw_type.is_set || is_set(dp_fpga_fw_type.operation)) leaf_name_data.push_back(dp_fpga_fw_type.get_name_leafdata());
    if (dp_fpga_fw_ver.is_set || is_set(dp_fpga_fw_ver.operation)) leaf_name_data.push_back(dp_fpga_fw_ver.get_name_leafdata());
    if (encryption_supported.is_set || is_set(encryption_supported.operation)) leaf_name_data.push_back(encryption_supported.get_name_leafdata());
    if (hardware_status.is_set || is_set(hardware_status.operation)) leaf_name_data.push_back(hardware_status.get_name_leafdata());
    if (lldp_drop_status.is_set || is_set(lldp_drop_status.operation)) leaf_name_data.push_back(lldp_drop_status.get_name_leafdata());
    if (need_upg.is_set || is_set(need_upg.operation)) leaf_name_data.push_back(need_upg.get_name_leafdata());
    if (slice_id.is_set || is_set(slice_id.operation)) leaf_name_data.push_back(slice_id.get_name_leafdata());
    if (trunk_rate.is_set || is_set(trunk_rate.operation)) leaf_name_data.push_back(trunk_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HwModule::SliceIds::SliceId::SliceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "client-port")
    {
        for(auto const & c : client_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HwModule::SliceIds::SliceId::SliceInfo::ClientPort>();
        c->parent = this;
        client_port.push_back(std::move(c));
        children[segment_path] = client_port.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HwModule::SliceIds::SliceId::SliceInfo::get_children()
{
    for (auto const & c : client_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HwModule::SliceIds::SliceId::SliceInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-rate")
    {
        client_rate = value;
    }
    if(value_path == "dp-fpga-fw-type")
    {
        dp_fpga_fw_type = value;
    }
    if(value_path == "dp-fpga-fw-ver")
    {
        dp_fpga_fw_ver = value;
    }
    if(value_path == "encryption-supported")
    {
        encryption_supported = value;
    }
    if(value_path == "hardware-status")
    {
        hardware_status = value;
    }
    if(value_path == "lldp-drop-status")
    {
        lldp_drop_status = value;
    }
    if(value_path == "need-upg")
    {
        need_upg = value;
    }
    if(value_path == "slice-id")
    {
        slice_id = value;
    }
    if(value_path == "trunk-rate")
    {
        trunk_rate = value;
    }
}

HwModule::SliceIds::SliceId::SliceId()
    :
    	slice_num{YType::int32, "slice-num"}
{
    yang_name = "slice-id"; yang_parent_name = "slice-ids";
}

HwModule::SliceIds::SliceId::~SliceId()
{
}

bool HwModule::SliceIds::SliceId::has_data() const
{
    for (std::size_t index=0; index<slice_info.size(); index++)
    {
        if(slice_info[index]->has_data())
            return true;
    }
    return slice_num.is_set;
}

bool HwModule::SliceIds::SliceId::has_operation() const
{
    for (std::size_t index=0; index<slice_info.size(); index++)
    {
        if(slice_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(slice_num.operation);
}

std::string HwModule::SliceIds::SliceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice-id" <<"[slice-num='" <<slice_num.get() <<"']";

    return path_buffer.str();

}

EntityPath HwModule::SliceIds::SliceId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ncs1k-mxp-oper:hw-module/slice-ids/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slice_num.is_set || is_set(slice_num.operation)) leaf_name_data.push_back(slice_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HwModule::SliceIds::SliceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slice-info")
    {
        for(auto const & c : slice_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HwModule::SliceIds::SliceId::SliceInfo>();
        c->parent = this;
        slice_info.push_back(std::move(c));
        children[segment_path] = slice_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HwModule::SliceIds::SliceId::get_children()
{
    for (auto const & c : slice_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HwModule::SliceIds::SliceId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "slice-num")
    {
        slice_num = value;
    }
}

HwModule::SliceIds::SliceIds()
{
    yang_name = "slice-ids"; yang_parent_name = "hw-module";
}

HwModule::SliceIds::~SliceIds()
{
}

bool HwModule::SliceIds::has_data() const
{
    for (std::size_t index=0; index<slice_id.size(); index++)
    {
        if(slice_id[index]->has_data())
            return true;
    }
    return false;
}

bool HwModule::SliceIds::has_operation() const
{
    for (std::size_t index=0; index<slice_id.size(); index++)
    {
        if(slice_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string HwModule::SliceIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice-ids";

    return path_buffer.str();

}

EntityPath HwModule::SliceIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ncs1k-mxp-oper:hw-module/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HwModule::SliceIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slice-id")
    {
        for(auto const & c : slice_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HwModule::SliceIds::SliceId>();
        c->parent = this;
        slice_id.push_back(std::move(c));
        children[segment_path] = slice_id.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HwModule::SliceIds::get_children()
{
    for (auto const & c : slice_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HwModule::SliceIds::set_value(const std::string & value_path, std::string value)
{
}

HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort::TrunkPort()
    :
    	if_index{YType::uint32, "if-index"},
	 percentage{YType::str, "percentage"},
	 trunk_name{YType::str, "trunk-name"}
{
    yang_name = "trunk-port"; yang_parent_name = "client-port";
}

HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort::~TrunkPort()
{
}

bool HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort::has_data() const
{
    return if_index.is_set
	|| percentage.is_set
	|| trunk_name.is_set;
}

bool HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort::has_operation() const
{
    return is_set(operation)
	|| is_set(if_index.operation)
	|| is_set(percentage.operation)
	|| is_set(trunk_name.operation);
}

std::string HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunk-port";

    return path_buffer.str();

}

EntityPath HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ncs1k-mxp-oper:hw-module/slice-all/slice-info/client-port/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_index.is_set || is_set(if_index.operation)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (percentage.is_set || is_set(percentage.operation)) leaf_name_data.push_back(percentage.get_name_leafdata());
    if (trunk_name.is_set || is_set(trunk_name.operation)) leaf_name_data.push_back(trunk_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort::get_children()
{
    return children;
}

void HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "if-index")
    {
        if_index = value;
    }
    if(value_path == "percentage")
    {
        percentage = value;
    }
    if(value_path == "trunk-name")
    {
        trunk_name = value;
    }
}

HwModule::SliceAll::SliceInfo::ClientPort::ClientPort()
    :
    	client_name{YType::str, "client-name"},
	 if_index{YType::uint32, "if-index"}
{
    yang_name = "client-port"; yang_parent_name = "slice-info";
}

HwModule::SliceAll::SliceInfo::ClientPort::~ClientPort()
{
}

bool HwModule::SliceAll::SliceInfo::ClientPort::has_data() const
{
    for (std::size_t index=0; index<trunk_port.size(); index++)
    {
        if(trunk_port[index]->has_data())
            return true;
    }
    return client_name.is_set
	|| if_index.is_set;
}

bool HwModule::SliceAll::SliceInfo::ClientPort::has_operation() const
{
    for (std::size_t index=0; index<trunk_port.size(); index++)
    {
        if(trunk_port[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(client_name.operation)
	|| is_set(if_index.operation);
}

std::string HwModule::SliceAll::SliceInfo::ClientPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-port";

    return path_buffer.str();

}

EntityPath HwModule::SliceAll::SliceInfo::ClientPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ncs1k-mxp-oper:hw-module/slice-all/slice-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_name.is_set || is_set(client_name.operation)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.operation)) leaf_name_data.push_back(if_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HwModule::SliceAll::SliceInfo::ClientPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "trunk-port")
    {
        for(auto const & c : trunk_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort>();
        c->parent = this;
        trunk_port.push_back(std::move(c));
        children[segment_path] = trunk_port.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HwModule::SliceAll::SliceInfo::ClientPort::get_children()
{
    for (auto const & c : trunk_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HwModule::SliceAll::SliceInfo::ClientPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-name")
    {
        client_name = value;
    }
    if(value_path == "if-index")
    {
        if_index = value;
    }
}

HwModule::SliceAll::SliceInfo::SliceInfo()
    :
    	client_rate{YType::uint32, "client-rate"},
	 dp_fpga_fw_type{YType::str, "dp-fpga-fw-type"},
	 dp_fpga_fw_ver{YType::str, "dp-fpga-fw-ver"},
	 encryption_supported{YType::boolean, "encryption-supported"},
	 hardware_status{YType::enumeration, "hardware-status"},
	 lldp_drop_status{YType::boolean, "lldp-drop-status"},
	 need_upg{YType::uint32, "need-upg"},
	 slice_id{YType::uint32, "slice-id"},
	 trunk_rate{YType::uint32, "trunk-rate"}
{
    yang_name = "slice-info"; yang_parent_name = "slice-all";
}

HwModule::SliceAll::SliceInfo::~SliceInfo()
{
}

bool HwModule::SliceAll::SliceInfo::has_data() const
{
    for (std::size_t index=0; index<client_port.size(); index++)
    {
        if(client_port[index]->has_data())
            return true;
    }
    return client_rate.is_set
	|| dp_fpga_fw_type.is_set
	|| dp_fpga_fw_ver.is_set
	|| encryption_supported.is_set
	|| hardware_status.is_set
	|| lldp_drop_status.is_set
	|| need_upg.is_set
	|| slice_id.is_set
	|| trunk_rate.is_set;
}

bool HwModule::SliceAll::SliceInfo::has_operation() const
{
    for (std::size_t index=0; index<client_port.size(); index++)
    {
        if(client_port[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(client_rate.operation)
	|| is_set(dp_fpga_fw_type.operation)
	|| is_set(dp_fpga_fw_ver.operation)
	|| is_set(encryption_supported.operation)
	|| is_set(hardware_status.operation)
	|| is_set(lldp_drop_status.operation)
	|| is_set(need_upg.operation)
	|| is_set(slice_id.operation)
	|| is_set(trunk_rate.operation);
}

std::string HwModule::SliceAll::SliceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice-info";

    return path_buffer.str();

}

EntityPath HwModule::SliceAll::SliceInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ncs1k-mxp-oper:hw-module/slice-all/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_rate.is_set || is_set(client_rate.operation)) leaf_name_data.push_back(client_rate.get_name_leafdata());
    if (dp_fpga_fw_type.is_set || is_set(dp_fpga_fw_type.operation)) leaf_name_data.push_back(dp_fpga_fw_type.get_name_leafdata());
    if (dp_fpga_fw_ver.is_set || is_set(dp_fpga_fw_ver.operation)) leaf_name_data.push_back(dp_fpga_fw_ver.get_name_leafdata());
    if (encryption_supported.is_set || is_set(encryption_supported.operation)) leaf_name_data.push_back(encryption_supported.get_name_leafdata());
    if (hardware_status.is_set || is_set(hardware_status.operation)) leaf_name_data.push_back(hardware_status.get_name_leafdata());
    if (lldp_drop_status.is_set || is_set(lldp_drop_status.operation)) leaf_name_data.push_back(lldp_drop_status.get_name_leafdata());
    if (need_upg.is_set || is_set(need_upg.operation)) leaf_name_data.push_back(need_upg.get_name_leafdata());
    if (slice_id.is_set || is_set(slice_id.operation)) leaf_name_data.push_back(slice_id.get_name_leafdata());
    if (trunk_rate.is_set || is_set(trunk_rate.operation)) leaf_name_data.push_back(trunk_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HwModule::SliceAll::SliceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "client-port")
    {
        for(auto const & c : client_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HwModule::SliceAll::SliceInfo::ClientPort>();
        c->parent = this;
        client_port.push_back(std::move(c));
        children[segment_path] = client_port.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HwModule::SliceAll::SliceInfo::get_children()
{
    for (auto const & c : client_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HwModule::SliceAll::SliceInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-rate")
    {
        client_rate = value;
    }
    if(value_path == "dp-fpga-fw-type")
    {
        dp_fpga_fw_type = value;
    }
    if(value_path == "dp-fpga-fw-ver")
    {
        dp_fpga_fw_ver = value;
    }
    if(value_path == "encryption-supported")
    {
        encryption_supported = value;
    }
    if(value_path == "hardware-status")
    {
        hardware_status = value;
    }
    if(value_path == "lldp-drop-status")
    {
        lldp_drop_status = value;
    }
    if(value_path == "need-upg")
    {
        need_upg = value;
    }
    if(value_path == "slice-id")
    {
        slice_id = value;
    }
    if(value_path == "trunk-rate")
    {
        trunk_rate = value;
    }
}

HwModule::SliceAll::SliceAll()
{
    yang_name = "slice-all"; yang_parent_name = "hw-module";
}

HwModule::SliceAll::~SliceAll()
{
}

bool HwModule::SliceAll::has_data() const
{
    for (std::size_t index=0; index<slice_info.size(); index++)
    {
        if(slice_info[index]->has_data())
            return true;
    }
    return false;
}

bool HwModule::SliceAll::has_operation() const
{
    for (std::size_t index=0; index<slice_info.size(); index++)
    {
        if(slice_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string HwModule::SliceAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice-all";

    return path_buffer.str();

}

EntityPath HwModule::SliceAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ncs1k-mxp-oper:hw-module/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HwModule::SliceAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slice-info")
    {
        for(auto const & c : slice_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HwModule::SliceAll::SliceInfo>();
        c->parent = this;
        slice_info.push_back(std::move(c));
        children[segment_path] = slice_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HwModule::SliceAll::get_children()
{
    for (auto const & c : slice_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HwModule::SliceAll::set_value(const std::string & value_path, std::string value)
{
}

HwModule::HwModule()
    :
    slice_all(std::make_unique<HwModule::SliceAll>())
	,slice_ids(std::make_unique<HwModule::SliceIds>())
{
    slice_all->parent = this;
    children["slice-all"] = slice_all.get();

    slice_ids->parent = this;
    children["slice-ids"] = slice_ids.get();

    yang_name = "hw-module"; yang_parent_name = "Cisco-IOS-XR-ncs1k-mxp-oper";
}

HwModule::~HwModule()
{
}

bool HwModule::has_data() const
{
    return (slice_all !=  nullptr && slice_all->has_data())
	|| (slice_ids !=  nullptr && slice_ids->has_data());
}

bool HwModule::has_operation() const
{
    return is_set(operation)
	|| (slice_all !=  nullptr && slice_all->has_operation())
	|| (slice_ids !=  nullptr && slice_ids->has_operation());
}

std::string HwModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-mxp-oper:hw-module";

    return path_buffer.str();

}

EntityPath HwModule::get_entity_path(Entity* ancestor) const
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

Entity* HwModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slice-all")
    {
        if(slice_all != nullptr)
        {
            children["slice-all"] = slice_all.get();
        }
        else
        {
            slice_all = std::make_unique<HwModule::SliceAll>();
            slice_all->parent = this;
            children["slice-all"] = slice_all.get();
        }
        return children.at("slice-all");
    }

    if(child_yang_name == "slice-ids")
    {
        if(slice_ids != nullptr)
        {
            children["slice-ids"] = slice_ids.get();
        }
        else
        {
            slice_ids = std::make_unique<HwModule::SliceIds>();
            slice_ids->parent = this;
            children["slice-ids"] = slice_ids.get();
        }
        return children.at("slice-ids");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HwModule::get_children()
{
    if(children.find("slice-all") == children.end())
    {
        if(slice_all != nullptr)
        {
            children["slice-all"] = slice_all.get();
        }
    }

    if(children.find("slice-ids") == children.end())
    {
        if(slice_ids != nullptr)
        {
            children["slice-ids"] = slice_ids.get();
        }
    }

    return children;
}

void HwModule::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> HwModule::clone_ptr()
{
    return std::make_unique<HwModule>();
}

const Enum::YLeaf HwModuleSliceStatusEnum::not_provisioned {0, "not-provisioned"};
const Enum::YLeaf HwModuleSliceStatusEnum::provisioning_in_progress {1, "provisioning-in-progress"};
const Enum::YLeaf HwModuleSliceStatusEnum::provisioned {2, "provisioned"};
const Enum::YLeaf HwModuleSliceStatusEnum::provisioning_failed {3, "provisioning-failed"};
const Enum::YLeaf HwModuleSliceStatusEnum::provisioning_scheduled {4, "provisioning-scheduled"};
const Enum::YLeaf HwModuleSliceStatusEnum::reprovisioning_aborted {5, "reprovisioning-aborted"};


}
}

