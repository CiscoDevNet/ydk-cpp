
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ip_pfilter_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_pfilter_oper {

PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo::InterfaceInfo()
    :
    	interface_name{YType::str, "interface-name"},
	 acl_info{YType::str, "acl-info"}
{
    yang_name = "interface-info"; yang_parent_name = "interface-infos";
}

PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo::~InterfaceInfo()
{
}

bool PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo::has_data() const
{
    return interface_name.is_set
	|| acl_info.is_set;
}

bool PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(acl_info.operation);
}

std::string PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-info" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (acl_info.is_set || is_set(acl_info.operation)) leaf_name_data.push_back(acl_info.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo::get_children()
{
    return children;
}

void PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "acl-info")
    {
        acl_info = value;
    }
}

PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfos()
{
    yang_name = "interface-infos"; yang_parent_name = "acl-info-table";
}

PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::~InterfaceInfos()
{
}

bool PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::has_data() const
{
    for (std::size_t index=0; index<interface_info.size(); index++)
    {
        if(interface_info[index]->has_data())
            return true;
    }
    return false;
}

bool PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::has_operation() const
{
    for (std::size_t index=0; index<interface_info.size(); index++)
    {
        if(interface_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-infos";

    return path_buffer.str();

}

EntityPath PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::get_entity_path(Entity* ancestor) const
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

Entity* PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-info")
    {
        for(auto const & c : interface_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo>();
        c->parent = this;
        interface_info.push_back(std::move(c));
        children[segment_path] = interface_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::get_children()
{
    for (auto const & c : interface_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::set_value(const std::string & value_path, std::string value)
{
}

PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::AclInfoTable()
    :
    interface_infos(std::make_unique<PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos>())
{
    interface_infos->parent = this;
    children["interface-infos"] = interface_infos.get();

    yang_name = "acl-info-table"; yang_parent_name = "ipv6";
}

PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::~AclInfoTable()
{
}

bool PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::has_data() const
{
    return (interface_infos !=  nullptr && interface_infos->has_data());
}

bool PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::has_operation() const
{
    return is_set(operation)
	|| (interface_infos !=  nullptr && interface_infos->has_operation());
}

std::string PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-info-table";

    return path_buffer.str();

}

EntityPath PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::get_entity_path(Entity* ancestor) const
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

Entity* PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-infos")
    {
        if(interface_infos != nullptr)
        {
            children["interface-infos"] = interface_infos.get();
        }
        else
        {
            interface_infos = std::make_unique<PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos>();
            interface_infos->parent = this;
            children["interface-infos"] = interface_infos.get();
        }
        return children.at("interface-infos");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::get_children()
{
    if(children.find("interface-infos") == children.end())
    {
        if(interface_infos != nullptr)
        {
            children["interface-infos"] = interface_infos.get();
        }
    }

    return children;
}

void PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::set_value(const std::string & value_path, std::string value)
{
}

PfilterMa::Nodes::Node::Process::Ipv6::Ipv6()
    :
    acl_info_table(std::make_unique<PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable>())
{
    acl_info_table->parent = this;
    children["acl-info-table"] = acl_info_table.get();

    yang_name = "ipv6"; yang_parent_name = "process";
}

PfilterMa::Nodes::Node::Process::Ipv6::~Ipv6()
{
}

bool PfilterMa::Nodes::Node::Process::Ipv6::has_data() const
{
    return (acl_info_table !=  nullptr && acl_info_table->has_data());
}

bool PfilterMa::Nodes::Node::Process::Ipv6::has_operation() const
{
    return is_set(operation)
	|| (acl_info_table !=  nullptr && acl_info_table->has_operation());
}

std::string PfilterMa::Nodes::Node::Process::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath PfilterMa::Nodes::Node::Process::Ipv6::get_entity_path(Entity* ancestor) const
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

Entity* PfilterMa::Nodes::Node::Process::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "acl-info-table")
    {
        if(acl_info_table != nullptr)
        {
            children["acl-info-table"] = acl_info_table.get();
        }
        else
        {
            acl_info_table = std::make_unique<PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable>();
            acl_info_table->parent = this;
            children["acl-info-table"] = acl_info_table.get();
        }
        return children.at("acl-info-table");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PfilterMa::Nodes::Node::Process::Ipv6::get_children()
{
    if(children.find("acl-info-table") == children.end())
    {
        if(acl_info_table != nullptr)
        {
            children["acl-info-table"] = acl_info_table.get();
        }
    }

    return children;
}

void PfilterMa::Nodes::Node::Process::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo::InterfaceInfo()
    :
    	interface_name{YType::str, "interface-name"},
	 acl_info{YType::str, "acl-info"}
{
    yang_name = "interface-info"; yang_parent_name = "interface-infos";
}

PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo::~InterfaceInfo()
{
}

bool PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo::has_data() const
{
    return interface_name.is_set
	|| acl_info.is_set;
}

bool PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(acl_info.operation);
}

std::string PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-info" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (acl_info.is_set || is_set(acl_info.operation)) leaf_name_data.push_back(acl_info.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo::get_children()
{
    return children;
}

void PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "acl-info")
    {
        acl_info = value;
    }
}

PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfos()
{
    yang_name = "interface-infos"; yang_parent_name = "acl-info-table";
}

PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::~InterfaceInfos()
{
}

bool PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::has_data() const
{
    for (std::size_t index=0; index<interface_info.size(); index++)
    {
        if(interface_info[index]->has_data())
            return true;
    }
    return false;
}

bool PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::has_operation() const
{
    for (std::size_t index=0; index<interface_info.size(); index++)
    {
        if(interface_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-infos";

    return path_buffer.str();

}

EntityPath PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::get_entity_path(Entity* ancestor) const
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

Entity* PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-info")
    {
        for(auto const & c : interface_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo>();
        c->parent = this;
        interface_info.push_back(std::move(c));
        children[segment_path] = interface_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::get_children()
{
    for (auto const & c : interface_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::set_value(const std::string & value_path, std::string value)
{
}

PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::AclInfoTable()
    :
    interface_infos(std::make_unique<PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos>())
{
    interface_infos->parent = this;
    children["interface-infos"] = interface_infos.get();

    yang_name = "acl-info-table"; yang_parent_name = "ipv4";
}

PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::~AclInfoTable()
{
}

bool PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::has_data() const
{
    return (interface_infos !=  nullptr && interface_infos->has_data());
}

bool PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::has_operation() const
{
    return is_set(operation)
	|| (interface_infos !=  nullptr && interface_infos->has_operation());
}

std::string PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-info-table";

    return path_buffer.str();

}

EntityPath PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::get_entity_path(Entity* ancestor) const
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

Entity* PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-infos")
    {
        if(interface_infos != nullptr)
        {
            children["interface-infos"] = interface_infos.get();
        }
        else
        {
            interface_infos = std::make_unique<PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos>();
            interface_infos->parent = this;
            children["interface-infos"] = interface_infos.get();
        }
        return children.at("interface-infos");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::get_children()
{
    if(children.find("interface-infos") == children.end())
    {
        if(interface_infos != nullptr)
        {
            children["interface-infos"] = interface_infos.get();
        }
    }

    return children;
}

void PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::set_value(const std::string & value_path, std::string value)
{
}

PfilterMa::Nodes::Node::Process::Ipv4::Ipv4()
    :
    acl_info_table(std::make_unique<PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable>())
{
    acl_info_table->parent = this;
    children["acl-info-table"] = acl_info_table.get();

    yang_name = "ipv4"; yang_parent_name = "process";
}

PfilterMa::Nodes::Node::Process::Ipv4::~Ipv4()
{
}

bool PfilterMa::Nodes::Node::Process::Ipv4::has_data() const
{
    return (acl_info_table !=  nullptr && acl_info_table->has_data());
}

bool PfilterMa::Nodes::Node::Process::Ipv4::has_operation() const
{
    return is_set(operation)
	|| (acl_info_table !=  nullptr && acl_info_table->has_operation());
}

std::string PfilterMa::Nodes::Node::Process::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath PfilterMa::Nodes::Node::Process::Ipv4::get_entity_path(Entity* ancestor) const
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

Entity* PfilterMa::Nodes::Node::Process::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "acl-info-table")
    {
        if(acl_info_table != nullptr)
        {
            children["acl-info-table"] = acl_info_table.get();
        }
        else
        {
            acl_info_table = std::make_unique<PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable>();
            acl_info_table->parent = this;
            children["acl-info-table"] = acl_info_table.get();
        }
        return children.at("acl-info-table");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PfilterMa::Nodes::Node::Process::Ipv4::get_children()
{
    if(children.find("acl-info-table") == children.end())
    {
        if(acl_info_table != nullptr)
        {
            children["acl-info-table"] = acl_info_table.get();
        }
    }

    return children;
}

void PfilterMa::Nodes::Node::Process::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

PfilterMa::Nodes::Node::Process::Process()
    :
    ipv4(std::make_unique<PfilterMa::Nodes::Node::Process::Ipv4>())
	,ipv6(std::make_unique<PfilterMa::Nodes::Node::Process::Ipv6>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4.get();

    ipv6->parent = this;
    children["ipv6"] = ipv6.get();

    yang_name = "process"; yang_parent_name = "node";
}

PfilterMa::Nodes::Node::Process::~Process()
{
}

bool PfilterMa::Nodes::Node::Process::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool PfilterMa::Nodes::Node::Process::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string PfilterMa::Nodes::Node::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";

    return path_buffer.str();

}

EntityPath PfilterMa::Nodes::Node::Process::get_entity_path(Entity* ancestor) const
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

Entity* PfilterMa::Nodes::Node::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4.get();
        }
        else
        {
            ipv4 = std::make_unique<PfilterMa::Nodes::Node::Process::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4.get();
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6.get();
        }
        else
        {
            ipv6 = std::make_unique<PfilterMa::Nodes::Node::Process::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6.get();
        }
        return children.at("ipv6");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PfilterMa::Nodes::Node::Process::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4.get();
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6.get();
        }
    }

    return children;
}

void PfilterMa::Nodes::Node::Process::set_value(const std::string & value_path, std::string value)
{
}

PfilterMa::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    process(std::make_unique<PfilterMa::Nodes::Node::Process>())
{
    process->parent = this;
    children["process"] = process.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

PfilterMa::Nodes::Node::~Node()
{
}

bool PfilterMa::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (process !=  nullptr && process->has_data());
}

bool PfilterMa::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (process !=  nullptr && process->has_operation());
}

std::string PfilterMa::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath PfilterMa::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-pfilter-oper:pfilter-ma/nodes/" << get_segment_path();
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

Entity* PfilterMa::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "process")
    {
        if(process != nullptr)
        {
            children["process"] = process.get();
        }
        else
        {
            process = std::make_unique<PfilterMa::Nodes::Node::Process>();
            process->parent = this;
            children["process"] = process.get();
        }
        return children.at("process");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PfilterMa::Nodes::Node::get_children()
{
    if(children.find("process") == children.end())
    {
        if(process != nullptr)
        {
            children["process"] = process.get();
        }
    }

    return children;
}

void PfilterMa::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

PfilterMa::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "pfilter-ma";
}

PfilterMa::Nodes::~Nodes()
{
}

bool PfilterMa::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PfilterMa::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PfilterMa::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath PfilterMa::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-pfilter-oper:pfilter-ma/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PfilterMa::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<PfilterMa::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PfilterMa::Nodes::get_children()
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

void PfilterMa::Nodes::set_value(const std::string & value_path, std::string value)
{
}

PfilterMa::PfilterMa()
    :
    nodes(std::make_unique<PfilterMa::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "pfilter-ma"; yang_parent_name = "Cisco-IOS-XR-ip-pfilter-oper";
}

PfilterMa::~PfilterMa()
{
}

bool PfilterMa::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool PfilterMa::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PfilterMa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-oper:pfilter-ma";

    return path_buffer.str();

}

EntityPath PfilterMa::get_entity_path(Entity* ancestor) const
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

Entity* PfilterMa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_unique<PfilterMa::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PfilterMa::get_children()
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

void PfilterMa::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> PfilterMa::clone_ptr()
{
    return std::make_unique<PfilterMa>();
}


}
}

