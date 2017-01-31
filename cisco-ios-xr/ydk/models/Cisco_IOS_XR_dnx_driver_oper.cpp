
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_dnx_driver_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_dnx_driver_oper {

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId::AsicId()
    :
    	asic_instance{YType::uint32, "asic-instance"},
	 asic_type{YType::enumeration, "asic-type"},
	 rack_num{YType::uint32, "rack-num"},
	 rack_type{YType::enumeration, "rack-type"},
	 slot_num{YType::uint32, "slot-num"}
{
    yang_name = "asic-id"; yang_parent_name = "this-link";
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId::~AsicId()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId::has_data() const
{
    return asic_instance.is_set
	|| asic_type.is_set
	|| rack_num.is_set
	|| rack_type.is_set
	|| slot_num.is_set;
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId::has_operation() const
{
    return is_set(operation)
	|| is_set(asic_instance.operation)
	|| is_set(asic_type.operation)
	|| is_set(rack_num.operation)
	|| is_set(rack_type.operation)
	|| is_set(slot_num.operation);
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-id";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId::get_entity_path(Entity* ancestor) const
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

    if (asic_instance.is_set || is_set(asic_instance.operation)) leaf_name_data.push_back(asic_instance.get_name_leafdata());
    if (asic_type.is_set || is_set(asic_type.operation)) leaf_name_data.push_back(asic_type.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.operation)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (rack_type.is_set || is_set(rack_type.operation)) leaf_name_data.push_back(rack_type.get_name_leafdata());
    if (slot_num.is_set || is_set(slot_num.operation)) leaf_name_data.push_back(slot_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId::get_children()
{
    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asic-instance")
    {
        asic_instance = value;
    }
    if(value_path == "asic-type")
    {
        asic_type = value;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
    }
    if(value_path == "rack-type")
    {
        rack_type = value;
    }
    if(value_path == "slot-num")
    {
        slot_num = value;
    }
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::ThisLink()
    :
    	link_num{YType::uint32, "link-num"},
	 link_stage{YType::enumeration, "link-stage"},
	 link_type{YType::enumeration, "link-type"},
	 phy_link_num{YType::uint32, "phy-link-num"}
    	,
    asic_id(std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId>())
{
    asic_id->parent = this;
    children["asic-id"] = asic_id.get();

    yang_name = "this-link"; yang_parent_name = "rx-link";
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::~ThisLink()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::has_data() const
{
    return link_num.is_set
	|| link_stage.is_set
	|| link_type.is_set
	|| phy_link_num.is_set
	|| (asic_id !=  nullptr && asic_id->has_data());
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::has_operation() const
{
    return is_set(operation)
	|| is_set(link_num.operation)
	|| is_set(link_stage.operation)
	|| is_set(link_type.operation)
	|| is_set(phy_link_num.operation)
	|| (asic_id !=  nullptr && asic_id->has_operation());
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "this-link";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::get_entity_path(Entity* ancestor) const
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

    if (link_num.is_set || is_set(link_num.operation)) leaf_name_data.push_back(link_num.get_name_leafdata());
    if (link_stage.is_set || is_set(link_stage.operation)) leaf_name_data.push_back(link_stage.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.operation)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (phy_link_num.is_set || is_set(phy_link_num.operation)) leaf_name_data.push_back(phy_link_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "asic-id")
    {
        if(asic_id != nullptr)
        {
            children["asic-id"] = asic_id.get();
        }
        else
        {
            asic_id = std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId>();
            asic_id->parent = this;
            children["asic-id"] = asic_id.get();
        }
        return children.at("asic-id");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::get_children()
{
    if(children.find("asic-id") == children.end())
    {
        if(asic_id != nullptr)
        {
            children["asic-id"] = asic_id.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-num")
    {
        link_num = value;
    }
    if(value_path == "link-stage")
    {
        link_stage = value;
    }
    if(value_path == "link-type")
    {
        link_type = value;
    }
    if(value_path == "phy-link-num")
    {
        phy_link_num = value;
    }
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId::AsicId()
    :
    	asic_instance{YType::uint32, "asic-instance"},
	 asic_type{YType::enumeration, "asic-type"},
	 rack_num{YType::uint32, "rack-num"},
	 rack_type{YType::enumeration, "rack-type"},
	 slot_num{YType::uint32, "slot-num"}
{
    yang_name = "asic-id"; yang_parent_name = "far-end-link";
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId::~AsicId()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId::has_data() const
{
    return asic_instance.is_set
	|| asic_type.is_set
	|| rack_num.is_set
	|| rack_type.is_set
	|| slot_num.is_set;
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId::has_operation() const
{
    return is_set(operation)
	|| is_set(asic_instance.operation)
	|| is_set(asic_type.operation)
	|| is_set(rack_num.operation)
	|| is_set(rack_type.operation)
	|| is_set(slot_num.operation);
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-id";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId::get_entity_path(Entity* ancestor) const
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

    if (asic_instance.is_set || is_set(asic_instance.operation)) leaf_name_data.push_back(asic_instance.get_name_leafdata());
    if (asic_type.is_set || is_set(asic_type.operation)) leaf_name_data.push_back(asic_type.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.operation)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (rack_type.is_set || is_set(rack_type.operation)) leaf_name_data.push_back(rack_type.get_name_leafdata());
    if (slot_num.is_set || is_set(slot_num.operation)) leaf_name_data.push_back(slot_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId::get_children()
{
    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asic-instance")
    {
        asic_instance = value;
    }
    if(value_path == "asic-type")
    {
        asic_type = value;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
    }
    if(value_path == "rack-type")
    {
        rack_type = value;
    }
    if(value_path == "slot-num")
    {
        slot_num = value;
    }
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::FarEndLink()
    :
    	link_num{YType::uint32, "link-num"},
	 link_stage{YType::enumeration, "link-stage"},
	 link_type{YType::enumeration, "link-type"},
	 phy_link_num{YType::uint32, "phy-link-num"}
    	,
    asic_id(std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId>())
{
    asic_id->parent = this;
    children["asic-id"] = asic_id.get();

    yang_name = "far-end-link"; yang_parent_name = "rx-link";
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::~FarEndLink()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::has_data() const
{
    return link_num.is_set
	|| link_stage.is_set
	|| link_type.is_set
	|| phy_link_num.is_set
	|| (asic_id !=  nullptr && asic_id->has_data());
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::has_operation() const
{
    return is_set(operation)
	|| is_set(link_num.operation)
	|| is_set(link_stage.operation)
	|| is_set(link_type.operation)
	|| is_set(phy_link_num.operation)
	|| (asic_id !=  nullptr && asic_id->has_operation());
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-link";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::get_entity_path(Entity* ancestor) const
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

    if (link_num.is_set || is_set(link_num.operation)) leaf_name_data.push_back(link_num.get_name_leafdata());
    if (link_stage.is_set || is_set(link_stage.operation)) leaf_name_data.push_back(link_stage.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.operation)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (phy_link_num.is_set || is_set(phy_link_num.operation)) leaf_name_data.push_back(phy_link_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "asic-id")
    {
        if(asic_id != nullptr)
        {
            children["asic-id"] = asic_id.get();
        }
        else
        {
            asic_id = std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId>();
            asic_id->parent = this;
            children["asic-id"] = asic_id.get();
        }
        return children.at("asic-id");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::get_children()
{
    if(children.find("asic-id") == children.end())
    {
        if(asic_id != nullptr)
        {
            children["asic-id"] = asic_id.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-num")
    {
        link_num = value;
    }
    if(value_path == "link-stage")
    {
        link_stage = value;
    }
    if(value_path == "link-type")
    {
        link_type = value;
    }
    if(value_path == "phy-link-num")
    {
        phy_link_num = value;
    }
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId::AsicId()
    :
    	asic_instance{YType::uint32, "asic-instance"},
	 asic_type{YType::enumeration, "asic-type"},
	 rack_num{YType::uint32, "rack-num"},
	 rack_type{YType::enumeration, "rack-type"},
	 slot_num{YType::uint32, "slot-num"}
{
    yang_name = "asic-id"; yang_parent_name = "far-end-link-in-hw";
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId::~AsicId()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId::has_data() const
{
    return asic_instance.is_set
	|| asic_type.is_set
	|| rack_num.is_set
	|| rack_type.is_set
	|| slot_num.is_set;
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId::has_operation() const
{
    return is_set(operation)
	|| is_set(asic_instance.operation)
	|| is_set(asic_type.operation)
	|| is_set(rack_num.operation)
	|| is_set(rack_type.operation)
	|| is_set(slot_num.operation);
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-id";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId::get_entity_path(Entity* ancestor) const
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

    if (asic_instance.is_set || is_set(asic_instance.operation)) leaf_name_data.push_back(asic_instance.get_name_leafdata());
    if (asic_type.is_set || is_set(asic_type.operation)) leaf_name_data.push_back(asic_type.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.operation)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (rack_type.is_set || is_set(rack_type.operation)) leaf_name_data.push_back(rack_type.get_name_leafdata());
    if (slot_num.is_set || is_set(slot_num.operation)) leaf_name_data.push_back(slot_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId::get_children()
{
    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asic-instance")
    {
        asic_instance = value;
    }
    if(value_path == "asic-type")
    {
        asic_type = value;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
    }
    if(value_path == "rack-type")
    {
        rack_type = value;
    }
    if(value_path == "slot-num")
    {
        slot_num = value;
    }
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::FarEndLinkInHw()
    :
    	link_num{YType::uint32, "link-num"},
	 link_stage{YType::enumeration, "link-stage"},
	 link_type{YType::enumeration, "link-type"},
	 phy_link_num{YType::uint32, "phy-link-num"}
    	,
    asic_id(std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId>())
{
    asic_id->parent = this;
    children["asic-id"] = asic_id.get();

    yang_name = "far-end-link-in-hw"; yang_parent_name = "rx-link";
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::~FarEndLinkInHw()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::has_data() const
{
    return link_num.is_set
	|| link_stage.is_set
	|| link_type.is_set
	|| phy_link_num.is_set
	|| (asic_id !=  nullptr && asic_id->has_data());
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::has_operation() const
{
    return is_set(operation)
	|| is_set(link_num.operation)
	|| is_set(link_stage.operation)
	|| is_set(link_type.operation)
	|| is_set(phy_link_num.operation)
	|| (asic_id !=  nullptr && asic_id->has_operation());
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-link-in-hw";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::get_entity_path(Entity* ancestor) const
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

    if (link_num.is_set || is_set(link_num.operation)) leaf_name_data.push_back(link_num.get_name_leafdata());
    if (link_stage.is_set || is_set(link_stage.operation)) leaf_name_data.push_back(link_stage.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.operation)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (phy_link_num.is_set || is_set(phy_link_num.operation)) leaf_name_data.push_back(phy_link_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "asic-id")
    {
        if(asic_id != nullptr)
        {
            children["asic-id"] = asic_id.get();
        }
        else
        {
            asic_id = std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId>();
            asic_id->parent = this;
            children["asic-id"] = asic_id.get();
        }
        return children.at("asic-id");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::get_children()
{
    if(children.find("asic-id") == children.end())
    {
        if(asic_id != nullptr)
        {
            children["asic-id"] = asic_id.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-num")
    {
        link_num = value;
    }
    if(value_path == "link-stage")
    {
        link_stage = value;
    }
    if(value_path == "link-type")
    {
        link_type = value;
    }
    if(value_path == "phy-link-num")
    {
        phy_link_num = value;
    }
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist::Hist()
    :
    	admin_state{YType::enumeration, "admin-state"},
	 error_state{YType::enumeration, "error-state"},
	 oper_state{YType::enumeration, "oper-state"},
	 reasons{YType::str, "reasons"},
	 timestamp{YType::uint64, "timestamp"}
{
    yang_name = "hist"; yang_parent_name = "history";
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist::~Hist()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist::has_data() const
{
    return admin_state.is_set
	|| error_state.is_set
	|| oper_state.is_set
	|| reasons.is_set
	|| timestamp.is_set;
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_state.operation)
	|| is_set(error_state.operation)
	|| is_set(oper_state.operation)
	|| is_set(reasons.operation)
	|| is_set(timestamp.operation);
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hist";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist::get_entity_path(Entity* ancestor) const
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
    if (error_state.is_set || is_set(error_state.operation)) leaf_name_data.push_back(error_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.operation)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (reasons.is_set || is_set(reasons.operation)) leaf_name_data.push_back(reasons.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist::get_children()
{
    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-state")
    {
        admin_state = value;
    }
    if(value_path == "error-state")
    {
        error_state = value;
    }
    if(value_path == "oper-state")
    {
        oper_state = value;
    }
    if(value_path == "reasons")
    {
        reasons = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::History()
    :
    	histnum{YType::uint8, "histnum"},
	 start_index{YType::uint8, "start-index"}
{
    yang_name = "history"; yang_parent_name = "rx-link";
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::~History()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::has_data() const
{
    for (std::size_t index=0; index<hist.size(); index++)
    {
        if(hist[index]->has_data())
            return true;
    }
    return histnum.is_set
	|| start_index.is_set;
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::has_operation() const
{
    for (std::size_t index=0; index<hist.size(); index++)
    {
        if(hist[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(histnum.operation)
	|| is_set(start_index.operation);
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::get_entity_path(Entity* ancestor) const
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

    if (histnum.is_set || is_set(histnum.operation)) leaf_name_data.push_back(histnum.get_name_leafdata());
    if (start_index.is_set || is_set(start_index.operation)) leaf_name_data.push_back(start_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hist")
    {
        for(auto const & c : hist)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist>();
        c->parent = this;
        hist.push_back(std::move(c));
        children[segment_path] = hist.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::get_children()
{
    for (auto const & c : hist)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "histnum")
    {
        histnum = value;
    }
    if(value_path == "start-index")
    {
        start_index = value;
    }
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::RxLink_()
    :
    	link{YType::int32, "link"},
	 admin_state{YType::enumeration, "admin-state"},
	 error_state{YType::enumeration, "error-state"},
	 flags{YType::str, "flags"},
	 flap_cnt{YType::uint32, "flap-cnt"},
	 is_conf_pending{YType::boolean, "is-conf-pending"},
	 is_link_valid{YType::boolean, "is-link-valid"},
	 num_admin_shuts{YType::uint32, "num-admin-shuts"},
	 oper_state{YType::enumeration, "oper-state"},
	 speed{YType::uint32, "speed"},
	 stage{YType::enumeration, "stage"}
    	,
    far_end_link(std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink>())
	,far_end_link_in_hw(std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw>())
	,history(std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History>())
	,this_link(std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink>())
{
    far_end_link->parent = this;
    children["far-end-link"] = far_end_link.get();

    far_end_link_in_hw->parent = this;
    children["far-end-link-in-hw"] = far_end_link_in_hw.get();

    history->parent = this;
    children["history"] = history.get();

    this_link->parent = this;
    children["this-link"] = this_link.get();

    yang_name = "rx-link"; yang_parent_name = "rx-link";
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::~RxLink_()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::has_data() const
{
    return link.is_set
	|| admin_state.is_set
	|| error_state.is_set
	|| flags.is_set
	|| flap_cnt.is_set
	|| is_conf_pending.is_set
	|| is_link_valid.is_set
	|| num_admin_shuts.is_set
	|| oper_state.is_set
	|| speed.is_set
	|| stage.is_set
	|| (far_end_link !=  nullptr && far_end_link->has_data())
	|| (far_end_link_in_hw !=  nullptr && far_end_link_in_hw->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (this_link !=  nullptr && this_link->has_data());
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::has_operation() const
{
    return is_set(operation)
	|| is_set(link.operation)
	|| is_set(admin_state.operation)
	|| is_set(error_state.operation)
	|| is_set(flags.operation)
	|| is_set(flap_cnt.operation)
	|| is_set(is_conf_pending.operation)
	|| is_set(is_link_valid.operation)
	|| is_set(num_admin_shuts.operation)
	|| is_set(oper_state.operation)
	|| is_set(speed.operation)
	|| is_set(stage.operation)
	|| (far_end_link !=  nullptr && far_end_link->has_operation())
	|| (far_end_link_in_hw !=  nullptr && far_end_link_in_hw->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (this_link !=  nullptr && this_link->has_operation());
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-link" <<"[link='" <<link.get() <<"']";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::get_entity_path(Entity* ancestor) const
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

    if (link.is_set || is_set(link.operation)) leaf_name_data.push_back(link.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.operation)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.operation)) leaf_name_data.push_back(error_state.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flap_cnt.is_set || is_set(flap_cnt.operation)) leaf_name_data.push_back(flap_cnt.get_name_leafdata());
    if (is_conf_pending.is_set || is_set(is_conf_pending.operation)) leaf_name_data.push_back(is_conf_pending.get_name_leafdata());
    if (is_link_valid.is_set || is_set(is_link_valid.operation)) leaf_name_data.push_back(is_link_valid.get_name_leafdata());
    if (num_admin_shuts.is_set || is_set(num_admin_shuts.operation)) leaf_name_data.push_back(num_admin_shuts.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.operation)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (speed.is_set || is_set(speed.operation)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (stage.is_set || is_set(stage.operation)) leaf_name_data.push_back(stage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "far-end-link")
    {
        if(far_end_link != nullptr)
        {
            children["far-end-link"] = far_end_link.get();
        }
        else
        {
            far_end_link = std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink>();
            far_end_link->parent = this;
            children["far-end-link"] = far_end_link.get();
        }
        return children.at("far-end-link");
    }

    if(child_yang_name == "far-end-link-in-hw")
    {
        if(far_end_link_in_hw != nullptr)
        {
            children["far-end-link-in-hw"] = far_end_link_in_hw.get();
        }
        else
        {
            far_end_link_in_hw = std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw>();
            far_end_link_in_hw->parent = this;
            children["far-end-link-in-hw"] = far_end_link_in_hw.get();
        }
        return children.at("far-end-link-in-hw");
    }

    if(child_yang_name == "history")
    {
        if(history != nullptr)
        {
            children["history"] = history.get();
        }
        else
        {
            history = std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History>();
            history->parent = this;
            children["history"] = history.get();
        }
        return children.at("history");
    }

    if(child_yang_name == "this-link")
    {
        if(this_link != nullptr)
        {
            children["this-link"] = this_link.get();
        }
        else
        {
            this_link = std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink>();
            this_link->parent = this;
            children["this-link"] = this_link.get();
        }
        return children.at("this-link");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::get_children()
{
    if(children.find("far-end-link") == children.end())
    {
        if(far_end_link != nullptr)
        {
            children["far-end-link"] = far_end_link.get();
        }
    }

    if(children.find("far-end-link-in-hw") == children.end())
    {
        if(far_end_link_in_hw != nullptr)
        {
            children["far-end-link-in-hw"] = far_end_link_in_hw.get();
        }
    }

    if(children.find("history") == children.end())
    {
        if(history != nullptr)
        {
            children["history"] = history.get();
        }
    }

    if(children.find("this-link") == children.end())
    {
        if(this_link != nullptr)
        {
            children["this-link"] = this_link.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link")
    {
        link = value;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
    }
    if(value_path == "error-state")
    {
        error_state = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flap-cnt")
    {
        flap_cnt = value;
    }
    if(value_path == "is-conf-pending")
    {
        is_conf_pending = value;
    }
    if(value_path == "is-link-valid")
    {
        is_link_valid = value;
    }
    if(value_path == "num-admin-shuts")
    {
        num_admin_shuts = value;
    }
    if(value_path == "oper-state")
    {
        oper_state = value;
    }
    if(value_path == "speed")
    {
        speed = value;
    }
    if(value_path == "stage")
    {
        stage = value;
    }
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink()
    :
    	end_number{YType::uint32, "end-number"},
	 start_number{YType::uint32, "start-number"},
	 status_option{YType::str, "status-option"}
{
    yang_name = "rx-link"; yang_parent_name = "rx-links";
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::~RxLink()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::has_data() const
{
    for (std::size_t index=0; index<rx_link.size(); index++)
    {
        if(rx_link[index]->has_data())
            return true;
    }
    return end_number.is_set
	|| start_number.is_set
	|| status_option.is_set;
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::has_operation() const
{
    for (std::size_t index=0; index<rx_link.size(); index++)
    {
        if(rx_link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(end_number.operation)
	|| is_set(start_number.operation)
	|| is_set(status_option.operation);
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-link";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::get_entity_path(Entity* ancestor) const
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

    if (end_number.is_set || is_set(end_number.operation)) leaf_name_data.push_back(end_number.get_name_leafdata());
    if (start_number.is_set || is_set(start_number.operation)) leaf_name_data.push_back(start_number.get_name_leafdata());
    if (status_option.is_set || is_set(status_option.operation)) leaf_name_data.push_back(status_option.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-link")
    {
        for(auto const & c : rx_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_>();
        c->parent = this;
        rx_link.push_back(std::move(c));
        children[segment_path] = rx_link.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::get_children()
{
    for (auto const & c : rx_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-number")
    {
        end_number = value;
    }
    if(value_path == "start-number")
    {
        start_number = value;
    }
    if(value_path == "status-option")
    {
        status_option = value;
    }
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLinks()
{
    yang_name = "rx-links"; yang_parent_name = "rx-asic-instance";
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::~RxLinks()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::has_data() const
{
    for (std::size_t index=0; index<rx_link.size(); index++)
    {
        if(rx_link[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::has_operation() const
{
    for (std::size_t index=0; index<rx_link.size(); index++)
    {
        if(rx_link[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-links";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-link")
    {
        for(auto const & c : rx_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink>();
        c->parent = this;
        rx_link.push_back(std::move(c));
        children[segment_path] = rx_link.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::get_children()
{
    for (auto const & c : rx_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxAsicInstance()
    :
    	instance{YType::uint32, "instance"}
    	,
    rx_links(std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks>())
{
    rx_links->parent = this;
    children["rx-links"] = rx_links.get();

    yang_name = "rx-asic-instance"; yang_parent_name = "rx-asic-instances";
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::~RxAsicInstance()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::has_data() const
{
    return instance.is_set
	|| (rx_links !=  nullptr && rx_links->has_data());
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance.operation)
	|| (rx_links !=  nullptr && rx_links->has_operation());
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-asic-instance" <<"[instance='" <<instance.get() <<"']";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::get_entity_path(Entity* ancestor) const
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

    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-links")
    {
        if(rx_links != nullptr)
        {
            children["rx-links"] = rx_links.get();
        }
        else
        {
            rx_links = std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks>();
            rx_links->parent = this;
            children["rx-links"] = rx_links.get();
        }
        return children.at("rx-links");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::get_children()
{
    if(children.find("rx-links") == children.end())
    {
        if(rx_links != nullptr)
        {
            children["rx-links"] = rx_links.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance")
    {
        instance = value;
    }
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstances()
{
    yang_name = "rx-asic-instances"; yang_parent_name = "link-option";
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::~RxAsicInstances()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::has_data() const
{
    for (std::size_t index=0; index<rx_asic_instance.size(); index++)
    {
        if(rx_asic_instance[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::has_operation() const
{
    for (std::size_t index=0; index<rx_asic_instance.size(); index++)
    {
        if(rx_asic_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-asic-instances";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-asic-instance")
    {
        for(auto const & c : rx_asic_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance>();
        c->parent = this;
        rx_asic_instance.push_back(std::move(c));
        children[segment_path] = rx_asic_instance.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::get_children()
{
    for (auto const & c : rx_asic_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::LinkOption()
    :
    	option{YType::str, "option"}
    	,
    rx_asic_instances(std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances>())
{
    rx_asic_instances->parent = this;
    children["rx-asic-instances"] = rx_asic_instances.get();

    yang_name = "link-option"; yang_parent_name = "link-options";
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::~LinkOption()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::has_data() const
{
    return option.is_set
	|| (rx_asic_instances !=  nullptr && rx_asic_instances->has_data());
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::has_operation() const
{
    return is_set(operation)
	|| is_set(option.operation)
	|| (rx_asic_instances !=  nullptr && rx_asic_instances->has_operation());
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-option" <<"[option='" <<option.get() <<"']";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::get_entity_path(Entity* ancestor) const
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

    if (option.is_set || is_set(option.operation)) leaf_name_data.push_back(option.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-asic-instances")
    {
        if(rx_asic_instances != nullptr)
        {
            children["rx-asic-instances"] = rx_asic_instances.get();
        }
        else
        {
            rx_asic_instances = std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances>();
            rx_asic_instances->parent = this;
            children["rx-asic-instances"] = rx_asic_instances.get();
        }
        return children.at("rx-asic-instances");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::get_children()
{
    if(children.find("rx-asic-instances") == children.end())
    {
        if(rx_asic_instances != nullptr)
        {
            children["rx-asic-instances"] = rx_asic_instances.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "option")
    {
        option = value;
    }
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOptions()
{
    yang_name = "link-options"; yang_parent_name = "rx-link-information";
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::~LinkOptions()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::has_data() const
{
    for (std::size_t index=0; index<link_option.size(); index++)
    {
        if(link_option[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::has_operation() const
{
    for (std::size_t index=0; index<link_option.size(); index++)
    {
        if(link_option[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-options";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::RxLinkInformation::LinkOptions::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::RxLinkInformation::LinkOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-option")
    {
        for(auto const & c : link_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption>();
        c->parent = this;
        link_option.push_back(std::move(c));
        children[segment_path] = link_option.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::RxLinkInformation::LinkOptions::get_children()
{
    for (auto const & c : link_option)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::RxLinkInformation::RxLinkInformation()
    :
    link_options(std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions>())
{
    link_options->parent = this;
    children["link-options"] = link_options.get();

    yang_name = "rx-link-information"; yang_parent_name = "node";
}

Fia::Nodes::Node::RxLinkInformation::~RxLinkInformation()
{
}

bool Fia::Nodes::Node::RxLinkInformation::has_data() const
{
    return (link_options !=  nullptr && link_options->has_data());
}

bool Fia::Nodes::Node::RxLinkInformation::has_operation() const
{
    return is_set(operation)
	|| (link_options !=  nullptr && link_options->has_operation());
}

std::string Fia::Nodes::Node::RxLinkInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-link-information";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::RxLinkInformation::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::RxLinkInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-options")
    {
        if(link_options != nullptr)
        {
            children["link-options"] = link_options.get();
        }
        else
        {
            link_options = std::make_unique<Fia::Nodes::Node::RxLinkInformation::LinkOptions>();
            link_options->parent = this;
            children["link-options"] = link_options.get();
        }
        return children.at("link-options");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::RxLinkInformation::get_children()
{
    if(children.find("link-options") == children.end())
    {
        if(link_options != nullptr)
        {
            children["link-options"] = link_options.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId::AsicId()
    :
    	asic_instance{YType::uint32, "asic-instance"},
	 asic_type{YType::enumeration, "asic-type"},
	 rack_num{YType::uint32, "rack-num"},
	 rack_type{YType::enumeration, "rack-type"},
	 slot_num{YType::uint32, "slot-num"}
{
    yang_name = "asic-id"; yang_parent_name = "device-info";
}

Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId::~AsicId()
{
}

bool Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId::has_data() const
{
    return asic_instance.is_set
	|| asic_type.is_set
	|| rack_num.is_set
	|| rack_type.is_set
	|| slot_num.is_set;
}

bool Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId::has_operation() const
{
    return is_set(operation)
	|| is_set(asic_instance.operation)
	|| is_set(asic_type.operation)
	|| is_set(rack_num.operation)
	|| is_set(rack_type.operation)
	|| is_set(slot_num.operation);
}

std::string Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-id";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId::get_entity_path(Entity* ancestor) const
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

    if (asic_instance.is_set || is_set(asic_instance.operation)) leaf_name_data.push_back(asic_instance.get_name_leafdata());
    if (asic_type.is_set || is_set(asic_type.operation)) leaf_name_data.push_back(asic_type.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.operation)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (rack_type.is_set || is_set(rack_type.operation)) leaf_name_data.push_back(rack_type.get_name_leafdata());
    if (slot_num.is_set || is_set(slot_num.operation)) leaf_name_data.push_back(slot_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId::get_children()
{
    return children;
}

void Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asic-instance")
    {
        asic_instance = value;
    }
    if(value_path == "asic-type")
    {
        asic_type = value;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
    }
    if(value_path == "rack-type")
    {
        rack_type = value;
    }
    if(value_path == "slot-num")
    {
        slot_num = value;
    }
}

Fia::Nodes::Node::DriverInformation::DeviceInfo::DeviceInfo()
    :
    	admin_state{YType::enumeration, "admin-state"},
	 asic_state{YType::enumeration, "asic-state"},
	 fapid{YType::uint32, "fapid"},
	 hotplug_event{YType::uint32, "hotplug-event"},
	 is_valid{YType::boolean, "is-valid"},
	 last_init_cause{YType::enumeration, "last-init-cause"},
	 local_switch_state{YType::boolean, "local-switch-state"},
	 num_hard_resets{YType::uint32, "num-hard-resets"},
	 num_pon_resets{YType::uint32, "num-pon-resets"},
	 oper_state{YType::enumeration, "oper-state"},
	 slice_state{YType::enumeration, "slice-state"}
    	,
    asic_id(std::make_unique<Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId>())
{
    asic_id->parent = this;
    children["asic-id"] = asic_id.get();

    yang_name = "device-info"; yang_parent_name = "driver-information";
}

Fia::Nodes::Node::DriverInformation::DeviceInfo::~DeviceInfo()
{
}

bool Fia::Nodes::Node::DriverInformation::DeviceInfo::has_data() const
{
    return admin_state.is_set
	|| asic_state.is_set
	|| fapid.is_set
	|| hotplug_event.is_set
	|| is_valid.is_set
	|| last_init_cause.is_set
	|| local_switch_state.is_set
	|| num_hard_resets.is_set
	|| num_pon_resets.is_set
	|| oper_state.is_set
	|| slice_state.is_set
	|| (asic_id !=  nullptr && asic_id->has_data());
}

bool Fia::Nodes::Node::DriverInformation::DeviceInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_state.operation)
	|| is_set(asic_state.operation)
	|| is_set(fapid.operation)
	|| is_set(hotplug_event.operation)
	|| is_set(is_valid.operation)
	|| is_set(last_init_cause.operation)
	|| is_set(local_switch_state.operation)
	|| is_set(num_hard_resets.operation)
	|| is_set(num_pon_resets.operation)
	|| is_set(oper_state.operation)
	|| is_set(slice_state.operation)
	|| (asic_id !=  nullptr && asic_id->has_operation());
}

std::string Fia::Nodes::Node::DriverInformation::DeviceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-info";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::DriverInformation::DeviceInfo::get_entity_path(Entity* ancestor) const
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
    if (asic_state.is_set || is_set(asic_state.operation)) leaf_name_data.push_back(asic_state.get_name_leafdata());
    if (fapid.is_set || is_set(fapid.operation)) leaf_name_data.push_back(fapid.get_name_leafdata());
    if (hotplug_event.is_set || is_set(hotplug_event.operation)) leaf_name_data.push_back(hotplug_event.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (last_init_cause.is_set || is_set(last_init_cause.operation)) leaf_name_data.push_back(last_init_cause.get_name_leafdata());
    if (local_switch_state.is_set || is_set(local_switch_state.operation)) leaf_name_data.push_back(local_switch_state.get_name_leafdata());
    if (num_hard_resets.is_set || is_set(num_hard_resets.operation)) leaf_name_data.push_back(num_hard_resets.get_name_leafdata());
    if (num_pon_resets.is_set || is_set(num_pon_resets.operation)) leaf_name_data.push_back(num_pon_resets.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.operation)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (slice_state.is_set || is_set(slice_state.operation)) leaf_name_data.push_back(slice_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::DriverInformation::DeviceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "asic-id")
    {
        if(asic_id != nullptr)
        {
            children["asic-id"] = asic_id.get();
        }
        else
        {
            asic_id = std::make_unique<Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId>();
            asic_id->parent = this;
            children["asic-id"] = asic_id.get();
        }
        return children.at("asic-id");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::DriverInformation::DeviceInfo::get_children()
{
    if(children.find("asic-id") == children.end())
    {
        if(asic_id != nullptr)
        {
            children["asic-id"] = asic_id.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::DriverInformation::DeviceInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-state")
    {
        admin_state = value;
    }
    if(value_path == "asic-state")
    {
        asic_state = value;
    }
    if(value_path == "fapid")
    {
        fapid = value;
    }
    if(value_path == "hotplug-event")
    {
        hotplug_event = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
    if(value_path == "last-init-cause")
    {
        last_init_cause = value;
    }
    if(value_path == "local-switch-state")
    {
        local_switch_state = value;
    }
    if(value_path == "num-hard-resets")
    {
        num_hard_resets = value;
    }
    if(value_path == "num-pon-resets")
    {
        num_pon_resets = value;
    }
    if(value_path == "oper-state")
    {
        oper_state = value;
    }
    if(value_path == "slice-state")
    {
        slice_state = value;
    }
}

Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo::FiaOirInfo()
    :
    	card_flag{YType::int32, "card-flag"},
	 card_type{YType::int32, "card-type"},
	 cur_card_state{YType::int32, "cur-card-state"},
	 evt_flag{YType::int32, "evt-flag"},
	 instance{YType::int32, "instance"},
	 rack_num{YType::int32, "rack-num"},
	 reg_flag{YType::int32, "reg-flag"}
{
    yang_name = "fia-oir-info"; yang_parent_name = "oir-circular-buffer";
}

Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo::~FiaOirInfo()
{
}

bool Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo::has_data() const
{
    return card_flag.is_set
	|| card_type.is_set
	|| cur_card_state.is_set
	|| evt_flag.is_set
	|| instance.is_set
	|| rack_num.is_set
	|| reg_flag.is_set;
}

bool Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_flag.operation)
	|| is_set(card_type.operation)
	|| is_set(cur_card_state.operation)
	|| is_set(evt_flag.operation)
	|| is_set(instance.operation)
	|| is_set(rack_num.operation)
	|| is_set(reg_flag.operation);
}

std::string Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fia-oir-info";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo::get_entity_path(Entity* ancestor) const
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

    if (card_flag.is_set || is_set(card_flag.operation)) leaf_name_data.push_back(card_flag.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.operation)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (cur_card_state.is_set || is_set(cur_card_state.operation)) leaf_name_data.push_back(cur_card_state.get_name_leafdata());
    if (evt_flag.is_set || is_set(evt_flag.operation)) leaf_name_data.push_back(evt_flag.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.operation)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (reg_flag.is_set || is_set(reg_flag.operation)) leaf_name_data.push_back(reg_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo::get_children()
{
    return children;
}

void Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-flag")
    {
        card_flag = value;
    }
    if(value_path == "card-type")
    {
        card_type = value;
    }
    if(value_path == "cur-card-state")
    {
        cur_card_state = value;
    }
    if(value_path == "evt-flag")
    {
        evt_flag = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
    }
    if(value_path == "reg-flag")
    {
        reg_flag = value;
    }
}

Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::OirCircularBuffer()
    :
    	count{YType::int32, "count"},
	 end{YType::int32, "end"},
	 start{YType::int32, "start"}
{
    yang_name = "oir-circular-buffer"; yang_parent_name = "card-info";
}

Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::~OirCircularBuffer()
{
}

bool Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::has_data() const
{
    for (std::size_t index=0; index<fia_oir_info.size(); index++)
    {
        if(fia_oir_info[index]->has_data())
            return true;
    }
    return count.is_set
	|| end.is_set
	|| start.is_set;
}

bool Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::has_operation() const
{
    for (std::size_t index=0; index<fia_oir_info.size(); index++)
    {
        if(fia_oir_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(count.operation)
	|| is_set(end.operation)
	|| is_set(start.operation);
}

std::string Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oir-circular-buffer";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::get_entity_path(Entity* ancestor) const
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

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (end.is_set || is_set(end.operation)) leaf_name_data.push_back(end.get_name_leafdata());
    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fia-oir-info")
    {
        for(auto const & c : fia_oir_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo>();
        c->parent = this;
        fia_oir_info.push_back(std::move(c));
        children[segment_path] = fia_oir_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::get_children()
{
    for (auto const & c : fia_oir_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "end")
    {
        end = value;
    }
    if(value_path == "start")
    {
        start = value;
    }
}

Fia::Nodes::Node::DriverInformation::CardInfo::CardInfo()
    :
    	card_flag{YType::int32, "card-flag"},
	 card_name{YType::str, "card-name"},
	 card_state{YType::uint8, "card-state"},
	 card_type{YType::int32, "card-type"},
	 cxp_avail_bitmap{YType::uint64, "cxp-avail-bitmap"},
	 evt_flag{YType::int32, "evt-flag"},
	 exp_num_asics{YType::uint32, "exp-num-asics"},
	 exp_num_asics_per_fsdb{YType::uint32, "exp-num-asics-per-fsdb"},
	 instance{YType::int32, "instance"},
	 is_powered{YType::boolean, "is-powered"},
	 num_cos_per_port{YType::uint8, "num-cos-per-port"},
	 num_ilkns_per_asic{YType::uint32, "num-ilkns-per-asic"},
	 num_local_ports_per_ilkn{YType::uint32, "num-local-ports-per-ilkn"},
	 reg_flag{YType::int32, "reg-flag"},
	 slot_no{YType::int32, "slot-no"}
    	,
    oir_circular_buffer(std::make_unique<Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer>())
{
    oir_circular_buffer->parent = this;
    children["oir-circular-buffer"] = oir_circular_buffer.get();

    yang_name = "card-info"; yang_parent_name = "driver-information";
}

Fia::Nodes::Node::DriverInformation::CardInfo::~CardInfo()
{
}

bool Fia::Nodes::Node::DriverInformation::CardInfo::has_data() const
{
    return card_flag.is_set
	|| card_name.is_set
	|| card_state.is_set
	|| card_type.is_set
	|| cxp_avail_bitmap.is_set
	|| evt_flag.is_set
	|| exp_num_asics.is_set
	|| exp_num_asics_per_fsdb.is_set
	|| instance.is_set
	|| is_powered.is_set
	|| num_cos_per_port.is_set
	|| num_ilkns_per_asic.is_set
	|| num_local_ports_per_ilkn.is_set
	|| reg_flag.is_set
	|| slot_no.is_set
	|| (oir_circular_buffer !=  nullptr && oir_circular_buffer->has_data());
}

bool Fia::Nodes::Node::DriverInformation::CardInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_flag.operation)
	|| is_set(card_name.operation)
	|| is_set(card_state.operation)
	|| is_set(card_type.operation)
	|| is_set(cxp_avail_bitmap.operation)
	|| is_set(evt_flag.operation)
	|| is_set(exp_num_asics.operation)
	|| is_set(exp_num_asics_per_fsdb.operation)
	|| is_set(instance.operation)
	|| is_set(is_powered.operation)
	|| is_set(num_cos_per_port.operation)
	|| is_set(num_ilkns_per_asic.operation)
	|| is_set(num_local_ports_per_ilkn.operation)
	|| is_set(reg_flag.operation)
	|| is_set(slot_no.operation)
	|| (oir_circular_buffer !=  nullptr && oir_circular_buffer->has_operation());
}

std::string Fia::Nodes::Node::DriverInformation::CardInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-info";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::DriverInformation::CardInfo::get_entity_path(Entity* ancestor) const
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

    if (card_flag.is_set || is_set(card_flag.operation)) leaf_name_data.push_back(card_flag.get_name_leafdata());
    if (card_name.is_set || is_set(card_name.operation)) leaf_name_data.push_back(card_name.get_name_leafdata());
    if (card_state.is_set || is_set(card_state.operation)) leaf_name_data.push_back(card_state.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.operation)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (cxp_avail_bitmap.is_set || is_set(cxp_avail_bitmap.operation)) leaf_name_data.push_back(cxp_avail_bitmap.get_name_leafdata());
    if (evt_flag.is_set || is_set(evt_flag.operation)) leaf_name_data.push_back(evt_flag.get_name_leafdata());
    if (exp_num_asics.is_set || is_set(exp_num_asics.operation)) leaf_name_data.push_back(exp_num_asics.get_name_leafdata());
    if (exp_num_asics_per_fsdb.is_set || is_set(exp_num_asics_per_fsdb.operation)) leaf_name_data.push_back(exp_num_asics_per_fsdb.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (is_powered.is_set || is_set(is_powered.operation)) leaf_name_data.push_back(is_powered.get_name_leafdata());
    if (num_cos_per_port.is_set || is_set(num_cos_per_port.operation)) leaf_name_data.push_back(num_cos_per_port.get_name_leafdata());
    if (num_ilkns_per_asic.is_set || is_set(num_ilkns_per_asic.operation)) leaf_name_data.push_back(num_ilkns_per_asic.get_name_leafdata());
    if (num_local_ports_per_ilkn.is_set || is_set(num_local_ports_per_ilkn.operation)) leaf_name_data.push_back(num_local_ports_per_ilkn.get_name_leafdata());
    if (reg_flag.is_set || is_set(reg_flag.operation)) leaf_name_data.push_back(reg_flag.get_name_leafdata());
    if (slot_no.is_set || is_set(slot_no.operation)) leaf_name_data.push_back(slot_no.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::DriverInformation::CardInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oir-circular-buffer")
    {
        if(oir_circular_buffer != nullptr)
        {
            children["oir-circular-buffer"] = oir_circular_buffer.get();
        }
        else
        {
            oir_circular_buffer = std::make_unique<Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer>();
            oir_circular_buffer->parent = this;
            children["oir-circular-buffer"] = oir_circular_buffer.get();
        }
        return children.at("oir-circular-buffer");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::DriverInformation::CardInfo::get_children()
{
    if(children.find("oir-circular-buffer") == children.end())
    {
        if(oir_circular_buffer != nullptr)
        {
            children["oir-circular-buffer"] = oir_circular_buffer.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::DriverInformation::CardInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-flag")
    {
        card_flag = value;
    }
    if(value_path == "card-name")
    {
        card_name = value;
    }
    if(value_path == "card-state")
    {
        card_state = value;
    }
    if(value_path == "card-type")
    {
        card_type = value;
    }
    if(value_path == "cxp-avail-bitmap")
    {
        cxp_avail_bitmap = value;
    }
    if(value_path == "evt-flag")
    {
        evt_flag = value;
    }
    if(value_path == "exp-num-asics")
    {
        exp_num_asics = value;
    }
    if(value_path == "exp-num-asics-per-fsdb")
    {
        exp_num_asics_per_fsdb = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "is-powered")
    {
        is_powered = value;
    }
    if(value_path == "num-cos-per-port")
    {
        num_cos_per_port = value;
    }
    if(value_path == "num-ilkns-per-asic")
    {
        num_ilkns_per_asic = value;
    }
    if(value_path == "num-local-ports-per-ilkn")
    {
        num_local_ports_per_ilkn = value;
    }
    if(value_path == "reg-flag")
    {
        reg_flag = value;
    }
    if(value_path == "slot-no")
    {
        slot_no = value;
    }
}

Fia::Nodes::Node::DriverInformation::DriverInformation()
    :
    	asic_avail_mask{YType::uint64, "asic-avail-mask"},
	 asic_oper_notify_to_fsdb_pending_bmap{YType::uint64, "asic-oper-notify-to-fsdb-pending-bmap"},
	 board_rev_id{YType::uint32, "board-rev-id"},
	 card_avail_mask{YType::uint32, "card-avail-mask"},
	 coeff_major_rev{YType::uint32, "coeff-major-rev"},
	 coeff_minor_rev{YType::uint32, "coeff-minor-rev"},
	 drv_version{YType::uint32, "drv-version"},
	 drvr_current_startup_timestamp{YType::str, "drvr-current-startup-timestamp"},
	 drvr_initial_startup_timestamp{YType::str, "drvr-initial-startup-timestamp"},
	 exp_asic_avail_mask{YType::uint64, "exp-asic-avail-mask"},
	 fc_mode{YType::enumeration, "fc-mode"},
	 fgid_conn_active{YType::boolean, "fgid-conn-active"},
	 fgid_reg_active{YType::boolean, "fgid-reg-active"},
	 fsdb_conn_active{YType::boolean, "fsdb-conn-active"},
	 fsdb_reg_active{YType::boolean, "fsdb-reg-active"},
	 functional_role{YType::uint8, "functional-role"},
	 is_cih_registered{YType::boolean, "is-cih-registered"},
	 is_driver_ready{YType::boolean, "is-driver-ready"},
	 is_fgid_download_completed{YType::boolean, "is-fgid-download-completed"},
	 is_fgid_download_in_progress{YType::boolean, "is-fgid-download-in-progress"},
	 is_full_fgid_download_req{YType::boolean, "is-full-fgid-download-req"},
	 is_gaspp_registered{YType::boolean, "is-gaspp-registered"},
	 issu_abort_rcvd{YType::boolean, "issu-abort-rcvd"},
	 issu_abort_sent{YType::boolean, "issu-abort-sent"},
	 issu_mgr_conn_active{YType::boolean, "issu-mgr-conn-active"},
	 issu_mgr_reg_active{YType::boolean, "issu-mgr-reg-active"},
	 issu_ready_ntfy_pending{YType::boolean, "issu-ready-ntfy-pending"},
	 issu_role{YType::uint8, "issu-role"},
	 num_cm_conn_reqs{YType::uint8, "num-cm-conn-reqs"},
	 num_fgid_conn_reqs{YType::uint8, "num-fgid-conn-reqs"},
	 num_fsdb_conn_reqs{YType::uint8, "num-fsdb-conn-reqs"},
	 num_fstats_conn_reqs{YType::uint8, "num-fstats-conn-reqs"},
	 num_intf_ports{YType::uint32, "num-intf-ports"},
	 num_issu_mgr_conn_reqs{YType::uint8, "num-issu-mgr-conn-reqs"},
	 num_peer_fia_conn_reqs{YType::uint8, "num-peer-fia-conn-reqs"},
	 num_pm_conn_reqs{YType::uint8, "num-pm-conn-reqs"},
	 rack_name{YType::str, "rack-name"},
	 rack_num{YType::uint8, "rack-num"},
	 rack_type{YType::int32, "rack-type"},
	 respawn_count{YType::uint8, "respawn-count"},
	 total_asics{YType::uint8, "total-asics"},
	 uc_weight{YType::uint8, "uc-weight"},
	 ucmc_ratio{YType::uint32, "ucmc-ratio"}
{
    yang_name = "driver-information"; yang_parent_name = "node";
}

Fia::Nodes::Node::DriverInformation::~DriverInformation()
{
}

bool Fia::Nodes::Node::DriverInformation::has_data() const
{
    for (std::size_t index=0; index<card_info.size(); index++)
    {
        if(card_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<device_info.size(); index++)
    {
        if(device_info[index]->has_data())
            return true;
    }
    return asic_avail_mask.is_set
	|| asic_oper_notify_to_fsdb_pending_bmap.is_set
	|| board_rev_id.is_set
	|| card_avail_mask.is_set
	|| coeff_major_rev.is_set
	|| coeff_minor_rev.is_set
	|| drv_version.is_set
	|| drvr_current_startup_timestamp.is_set
	|| drvr_initial_startup_timestamp.is_set
	|| exp_asic_avail_mask.is_set
	|| fc_mode.is_set
	|| fgid_conn_active.is_set
	|| fgid_reg_active.is_set
	|| fsdb_conn_active.is_set
	|| fsdb_reg_active.is_set
	|| functional_role.is_set
	|| is_cih_registered.is_set
	|| is_driver_ready.is_set
	|| is_fgid_download_completed.is_set
	|| is_fgid_download_in_progress.is_set
	|| is_full_fgid_download_req.is_set
	|| is_gaspp_registered.is_set
	|| issu_abort_rcvd.is_set
	|| issu_abort_sent.is_set
	|| issu_mgr_conn_active.is_set
	|| issu_mgr_reg_active.is_set
	|| issu_ready_ntfy_pending.is_set
	|| issu_role.is_set
	|| num_cm_conn_reqs.is_set
	|| num_fgid_conn_reqs.is_set
	|| num_fsdb_conn_reqs.is_set
	|| num_fstats_conn_reqs.is_set
	|| num_intf_ports.is_set
	|| num_issu_mgr_conn_reqs.is_set
	|| num_peer_fia_conn_reqs.is_set
	|| num_pm_conn_reqs.is_set
	|| rack_name.is_set
	|| rack_num.is_set
	|| rack_type.is_set
	|| respawn_count.is_set
	|| total_asics.is_set
	|| uc_weight.is_set
	|| ucmc_ratio.is_set;
}

bool Fia::Nodes::Node::DriverInformation::has_operation() const
{
    for (std::size_t index=0; index<card_info.size(); index++)
    {
        if(card_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<device_info.size(); index++)
    {
        if(device_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(asic_avail_mask.operation)
	|| is_set(asic_oper_notify_to_fsdb_pending_bmap.operation)
	|| is_set(board_rev_id.operation)
	|| is_set(card_avail_mask.operation)
	|| is_set(coeff_major_rev.operation)
	|| is_set(coeff_minor_rev.operation)
	|| is_set(drv_version.operation)
	|| is_set(drvr_current_startup_timestamp.operation)
	|| is_set(drvr_initial_startup_timestamp.operation)
	|| is_set(exp_asic_avail_mask.operation)
	|| is_set(fc_mode.operation)
	|| is_set(fgid_conn_active.operation)
	|| is_set(fgid_reg_active.operation)
	|| is_set(fsdb_conn_active.operation)
	|| is_set(fsdb_reg_active.operation)
	|| is_set(functional_role.operation)
	|| is_set(is_cih_registered.operation)
	|| is_set(is_driver_ready.operation)
	|| is_set(is_fgid_download_completed.operation)
	|| is_set(is_fgid_download_in_progress.operation)
	|| is_set(is_full_fgid_download_req.operation)
	|| is_set(is_gaspp_registered.operation)
	|| is_set(issu_abort_rcvd.operation)
	|| is_set(issu_abort_sent.operation)
	|| is_set(issu_mgr_conn_active.operation)
	|| is_set(issu_mgr_reg_active.operation)
	|| is_set(issu_ready_ntfy_pending.operation)
	|| is_set(issu_role.operation)
	|| is_set(num_cm_conn_reqs.operation)
	|| is_set(num_fgid_conn_reqs.operation)
	|| is_set(num_fsdb_conn_reqs.operation)
	|| is_set(num_fstats_conn_reqs.operation)
	|| is_set(num_intf_ports.operation)
	|| is_set(num_issu_mgr_conn_reqs.operation)
	|| is_set(num_peer_fia_conn_reqs.operation)
	|| is_set(num_pm_conn_reqs.operation)
	|| is_set(rack_name.operation)
	|| is_set(rack_num.operation)
	|| is_set(rack_type.operation)
	|| is_set(respawn_count.operation)
	|| is_set(total_asics.operation)
	|| is_set(uc_weight.operation)
	|| is_set(ucmc_ratio.operation);
}

std::string Fia::Nodes::Node::DriverInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "driver-information";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::DriverInformation::get_entity_path(Entity* ancestor) const
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

    if (asic_avail_mask.is_set || is_set(asic_avail_mask.operation)) leaf_name_data.push_back(asic_avail_mask.get_name_leafdata());
    if (asic_oper_notify_to_fsdb_pending_bmap.is_set || is_set(asic_oper_notify_to_fsdb_pending_bmap.operation)) leaf_name_data.push_back(asic_oper_notify_to_fsdb_pending_bmap.get_name_leafdata());
    if (board_rev_id.is_set || is_set(board_rev_id.operation)) leaf_name_data.push_back(board_rev_id.get_name_leafdata());
    if (card_avail_mask.is_set || is_set(card_avail_mask.operation)) leaf_name_data.push_back(card_avail_mask.get_name_leafdata());
    if (coeff_major_rev.is_set || is_set(coeff_major_rev.operation)) leaf_name_data.push_back(coeff_major_rev.get_name_leafdata());
    if (coeff_minor_rev.is_set || is_set(coeff_minor_rev.operation)) leaf_name_data.push_back(coeff_minor_rev.get_name_leafdata());
    if (drv_version.is_set || is_set(drv_version.operation)) leaf_name_data.push_back(drv_version.get_name_leafdata());
    if (drvr_current_startup_timestamp.is_set || is_set(drvr_current_startup_timestamp.operation)) leaf_name_data.push_back(drvr_current_startup_timestamp.get_name_leafdata());
    if (drvr_initial_startup_timestamp.is_set || is_set(drvr_initial_startup_timestamp.operation)) leaf_name_data.push_back(drvr_initial_startup_timestamp.get_name_leafdata());
    if (exp_asic_avail_mask.is_set || is_set(exp_asic_avail_mask.operation)) leaf_name_data.push_back(exp_asic_avail_mask.get_name_leafdata());
    if (fc_mode.is_set || is_set(fc_mode.operation)) leaf_name_data.push_back(fc_mode.get_name_leafdata());
    if (fgid_conn_active.is_set || is_set(fgid_conn_active.operation)) leaf_name_data.push_back(fgid_conn_active.get_name_leafdata());
    if (fgid_reg_active.is_set || is_set(fgid_reg_active.operation)) leaf_name_data.push_back(fgid_reg_active.get_name_leafdata());
    if (fsdb_conn_active.is_set || is_set(fsdb_conn_active.operation)) leaf_name_data.push_back(fsdb_conn_active.get_name_leafdata());
    if (fsdb_reg_active.is_set || is_set(fsdb_reg_active.operation)) leaf_name_data.push_back(fsdb_reg_active.get_name_leafdata());
    if (functional_role.is_set || is_set(functional_role.operation)) leaf_name_data.push_back(functional_role.get_name_leafdata());
    if (is_cih_registered.is_set || is_set(is_cih_registered.operation)) leaf_name_data.push_back(is_cih_registered.get_name_leafdata());
    if (is_driver_ready.is_set || is_set(is_driver_ready.operation)) leaf_name_data.push_back(is_driver_ready.get_name_leafdata());
    if (is_fgid_download_completed.is_set || is_set(is_fgid_download_completed.operation)) leaf_name_data.push_back(is_fgid_download_completed.get_name_leafdata());
    if (is_fgid_download_in_progress.is_set || is_set(is_fgid_download_in_progress.operation)) leaf_name_data.push_back(is_fgid_download_in_progress.get_name_leafdata());
    if (is_full_fgid_download_req.is_set || is_set(is_full_fgid_download_req.operation)) leaf_name_data.push_back(is_full_fgid_download_req.get_name_leafdata());
    if (is_gaspp_registered.is_set || is_set(is_gaspp_registered.operation)) leaf_name_data.push_back(is_gaspp_registered.get_name_leafdata());
    if (issu_abort_rcvd.is_set || is_set(issu_abort_rcvd.operation)) leaf_name_data.push_back(issu_abort_rcvd.get_name_leafdata());
    if (issu_abort_sent.is_set || is_set(issu_abort_sent.operation)) leaf_name_data.push_back(issu_abort_sent.get_name_leafdata());
    if (issu_mgr_conn_active.is_set || is_set(issu_mgr_conn_active.operation)) leaf_name_data.push_back(issu_mgr_conn_active.get_name_leafdata());
    if (issu_mgr_reg_active.is_set || is_set(issu_mgr_reg_active.operation)) leaf_name_data.push_back(issu_mgr_reg_active.get_name_leafdata());
    if (issu_ready_ntfy_pending.is_set || is_set(issu_ready_ntfy_pending.operation)) leaf_name_data.push_back(issu_ready_ntfy_pending.get_name_leafdata());
    if (issu_role.is_set || is_set(issu_role.operation)) leaf_name_data.push_back(issu_role.get_name_leafdata());
    if (num_cm_conn_reqs.is_set || is_set(num_cm_conn_reqs.operation)) leaf_name_data.push_back(num_cm_conn_reqs.get_name_leafdata());
    if (num_fgid_conn_reqs.is_set || is_set(num_fgid_conn_reqs.operation)) leaf_name_data.push_back(num_fgid_conn_reqs.get_name_leafdata());
    if (num_fsdb_conn_reqs.is_set || is_set(num_fsdb_conn_reqs.operation)) leaf_name_data.push_back(num_fsdb_conn_reqs.get_name_leafdata());
    if (num_fstats_conn_reqs.is_set || is_set(num_fstats_conn_reqs.operation)) leaf_name_data.push_back(num_fstats_conn_reqs.get_name_leafdata());
    if (num_intf_ports.is_set || is_set(num_intf_ports.operation)) leaf_name_data.push_back(num_intf_ports.get_name_leafdata());
    if (num_issu_mgr_conn_reqs.is_set || is_set(num_issu_mgr_conn_reqs.operation)) leaf_name_data.push_back(num_issu_mgr_conn_reqs.get_name_leafdata());
    if (num_peer_fia_conn_reqs.is_set || is_set(num_peer_fia_conn_reqs.operation)) leaf_name_data.push_back(num_peer_fia_conn_reqs.get_name_leafdata());
    if (num_pm_conn_reqs.is_set || is_set(num_pm_conn_reqs.operation)) leaf_name_data.push_back(num_pm_conn_reqs.get_name_leafdata());
    if (rack_name.is_set || is_set(rack_name.operation)) leaf_name_data.push_back(rack_name.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.operation)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (rack_type.is_set || is_set(rack_type.operation)) leaf_name_data.push_back(rack_type.get_name_leafdata());
    if (respawn_count.is_set || is_set(respawn_count.operation)) leaf_name_data.push_back(respawn_count.get_name_leafdata());
    if (total_asics.is_set || is_set(total_asics.operation)) leaf_name_data.push_back(total_asics.get_name_leafdata());
    if (uc_weight.is_set || is_set(uc_weight.operation)) leaf_name_data.push_back(uc_weight.get_name_leafdata());
    if (ucmc_ratio.is_set || is_set(ucmc_ratio.operation)) leaf_name_data.push_back(ucmc_ratio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::DriverInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "card-info")
    {
        for(auto const & c : card_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::DriverInformation::CardInfo>();
        c->parent = this;
        card_info.push_back(std::move(c));
        children[segment_path] = card_info.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "device-info")
    {
        for(auto const & c : device_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::DriverInformation::DeviceInfo>();
        c->parent = this;
        device_info.push_back(std::move(c));
        children[segment_path] = device_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::DriverInformation::get_children()
{
    for (auto const & c : card_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : device_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::DriverInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asic-avail-mask")
    {
        asic_avail_mask = value;
    }
    if(value_path == "asic-oper-notify-to-fsdb-pending-bmap")
    {
        asic_oper_notify_to_fsdb_pending_bmap = value;
    }
    if(value_path == "board-rev-id")
    {
        board_rev_id = value;
    }
    if(value_path == "card-avail-mask")
    {
        card_avail_mask = value;
    }
    if(value_path == "coeff-major-rev")
    {
        coeff_major_rev = value;
    }
    if(value_path == "coeff-minor-rev")
    {
        coeff_minor_rev = value;
    }
    if(value_path == "drv-version")
    {
        drv_version = value;
    }
    if(value_path == "drvr-current-startup-timestamp")
    {
        drvr_current_startup_timestamp = value;
    }
    if(value_path == "drvr-initial-startup-timestamp")
    {
        drvr_initial_startup_timestamp = value;
    }
    if(value_path == "exp-asic-avail-mask")
    {
        exp_asic_avail_mask = value;
    }
    if(value_path == "fc-mode")
    {
        fc_mode = value;
    }
    if(value_path == "fgid-conn-active")
    {
        fgid_conn_active = value;
    }
    if(value_path == "fgid-reg-active")
    {
        fgid_reg_active = value;
    }
    if(value_path == "fsdb-conn-active")
    {
        fsdb_conn_active = value;
    }
    if(value_path == "fsdb-reg-active")
    {
        fsdb_reg_active = value;
    }
    if(value_path == "functional-role")
    {
        functional_role = value;
    }
    if(value_path == "is-cih-registered")
    {
        is_cih_registered = value;
    }
    if(value_path == "is-driver-ready")
    {
        is_driver_ready = value;
    }
    if(value_path == "is-fgid-download-completed")
    {
        is_fgid_download_completed = value;
    }
    if(value_path == "is-fgid-download-in-progress")
    {
        is_fgid_download_in_progress = value;
    }
    if(value_path == "is-full-fgid-download-req")
    {
        is_full_fgid_download_req = value;
    }
    if(value_path == "is-gaspp-registered")
    {
        is_gaspp_registered = value;
    }
    if(value_path == "issu-abort-rcvd")
    {
        issu_abort_rcvd = value;
    }
    if(value_path == "issu-abort-sent")
    {
        issu_abort_sent = value;
    }
    if(value_path == "issu-mgr-conn-active")
    {
        issu_mgr_conn_active = value;
    }
    if(value_path == "issu-mgr-reg-active")
    {
        issu_mgr_reg_active = value;
    }
    if(value_path == "issu-ready-ntfy-pending")
    {
        issu_ready_ntfy_pending = value;
    }
    if(value_path == "issu-role")
    {
        issu_role = value;
    }
    if(value_path == "num-cm-conn-reqs")
    {
        num_cm_conn_reqs = value;
    }
    if(value_path == "num-fgid-conn-reqs")
    {
        num_fgid_conn_reqs = value;
    }
    if(value_path == "num-fsdb-conn-reqs")
    {
        num_fsdb_conn_reqs = value;
    }
    if(value_path == "num-fstats-conn-reqs")
    {
        num_fstats_conn_reqs = value;
    }
    if(value_path == "num-intf-ports")
    {
        num_intf_ports = value;
    }
    if(value_path == "num-issu-mgr-conn-reqs")
    {
        num_issu_mgr_conn_reqs = value;
    }
    if(value_path == "num-peer-fia-conn-reqs")
    {
        num_peer_fia_conn_reqs = value;
    }
    if(value_path == "num-pm-conn-reqs")
    {
        num_pm_conn_reqs = value;
    }
    if(value_path == "rack-name")
    {
        rack_name = value;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
    }
    if(value_path == "rack-type")
    {
        rack_type = value;
    }
    if(value_path == "respawn-count")
    {
        respawn_count = value;
    }
    if(value_path == "total-asics")
    {
        total_asics = value;
    }
    if(value_path == "uc-weight")
    {
        uc_weight = value;
    }
    if(value_path == "ucmc-ratio")
    {
        ucmc_ratio = value;
    }
}

Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance::AsicInstance()
    :
    	asic_instance{YType::uint32, "asic-instance"},
	 instance{YType::int32, "instance"}
{
    yang_name = "asic-instance"; yang_parent_name = "asic-instances";
}

Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance::~AsicInstance()
{
}

bool Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance::has_data() const
{
    return asic_instance.is_set
	|| instance.is_set;
}

bool Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(asic_instance.operation)
	|| is_set(instance.operation);
}

std::string Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-instance" <<"[asic-instance='" <<asic_instance.get() <<"']";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance::get_entity_path(Entity* ancestor) const
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

    if (asic_instance.is_set || is_set(asic_instance.operation)) leaf_name_data.push_back(asic_instance.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance::get_children()
{
    return children;
}

void Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asic-instance")
    {
        asic_instance = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
}

Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstances()
{
    yang_name = "asic-instances"; yang_parent_name = "clear-statistics";
}

Fia::Nodes::Node::ClearStatistics::AsicInstances::~AsicInstances()
{
}

bool Fia::Nodes::Node::ClearStatistics::AsicInstances::has_data() const
{
    for (std::size_t index=0; index<asic_instance.size(); index++)
    {
        if(asic_instance[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::ClearStatistics::AsicInstances::has_operation() const
{
    for (std::size_t index=0; index<asic_instance.size(); index++)
    {
        if(asic_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fia::Nodes::Node::ClearStatistics::AsicInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-instances";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::ClearStatistics::AsicInstances::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::ClearStatistics::AsicInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "asic-instance")
    {
        for(auto const & c : asic_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance>();
        c->parent = this;
        asic_instance.push_back(std::move(c));
        children[segment_path] = asic_instance.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::ClearStatistics::AsicInstances::get_children()
{
    for (auto const & c : asic_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::ClearStatistics::AsicInstances::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::ClearStatistics::ClearStatistics()
    :
    asic_instances(std::make_unique<Fia::Nodes::Node::ClearStatistics::AsicInstances>())
{
    asic_instances->parent = this;
    children["asic-instances"] = asic_instances.get();

    yang_name = "clear-statistics"; yang_parent_name = "node";
}

Fia::Nodes::Node::ClearStatistics::~ClearStatistics()
{
}

bool Fia::Nodes::Node::ClearStatistics::has_data() const
{
    return (asic_instances !=  nullptr && asic_instances->has_data());
}

bool Fia::Nodes::Node::ClearStatistics::has_operation() const
{
    return is_set(operation)
	|| (asic_instances !=  nullptr && asic_instances->has_operation());
}

std::string Fia::Nodes::Node::ClearStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clear-statistics";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::ClearStatistics::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::ClearStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "asic-instances")
    {
        if(asic_instances != nullptr)
        {
            children["asic-instances"] = asic_instances.get();
        }
        else
        {
            asic_instances = std::make_unique<Fia::Nodes::Node::ClearStatistics::AsicInstances>();
            asic_instances->parent = this;
            children["asic-instances"] = asic_instances.get();
        }
        return children.at("asic-instances");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::ClearStatistics::get_children()
{
    if(children.find("asic-instances") == children.end())
    {
        if(asic_instances != nullptr)
        {
            children["asic-instances"] = asic_instances.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::ClearStatistics::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId::AsicId()
    :
    	asic_instance{YType::uint32, "asic-instance"},
	 asic_type{YType::enumeration, "asic-type"},
	 rack_num{YType::uint32, "rack-num"},
	 rack_type{YType::enumeration, "rack-type"},
	 slot_num{YType::uint32, "slot-num"}
{
    yang_name = "asic-id"; yang_parent_name = "this-link";
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId::~AsicId()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId::has_data() const
{
    return asic_instance.is_set
	|| asic_type.is_set
	|| rack_num.is_set
	|| rack_type.is_set
	|| slot_num.is_set;
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId::has_operation() const
{
    return is_set(operation)
	|| is_set(asic_instance.operation)
	|| is_set(asic_type.operation)
	|| is_set(rack_num.operation)
	|| is_set(rack_type.operation)
	|| is_set(slot_num.operation);
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-id";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId::get_entity_path(Entity* ancestor) const
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

    if (asic_instance.is_set || is_set(asic_instance.operation)) leaf_name_data.push_back(asic_instance.get_name_leafdata());
    if (asic_type.is_set || is_set(asic_type.operation)) leaf_name_data.push_back(asic_type.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.operation)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (rack_type.is_set || is_set(rack_type.operation)) leaf_name_data.push_back(rack_type.get_name_leafdata());
    if (slot_num.is_set || is_set(slot_num.operation)) leaf_name_data.push_back(slot_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId::get_children()
{
    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asic-instance")
    {
        asic_instance = value;
    }
    if(value_path == "asic-type")
    {
        asic_type = value;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
    }
    if(value_path == "rack-type")
    {
        rack_type = value;
    }
    if(value_path == "slot-num")
    {
        slot_num = value;
    }
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::ThisLink()
    :
    	link_num{YType::uint32, "link-num"},
	 link_stage{YType::enumeration, "link-stage"},
	 link_type{YType::enumeration, "link-type"},
	 phy_link_num{YType::uint32, "phy-link-num"}
    	,
    asic_id(std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId>())
{
    asic_id->parent = this;
    children["asic-id"] = asic_id.get();

    yang_name = "this-link"; yang_parent_name = "tx-link";
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::~ThisLink()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::has_data() const
{
    return link_num.is_set
	|| link_stage.is_set
	|| link_type.is_set
	|| phy_link_num.is_set
	|| (asic_id !=  nullptr && asic_id->has_data());
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::has_operation() const
{
    return is_set(operation)
	|| is_set(link_num.operation)
	|| is_set(link_stage.operation)
	|| is_set(link_type.operation)
	|| is_set(phy_link_num.operation)
	|| (asic_id !=  nullptr && asic_id->has_operation());
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "this-link";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::get_entity_path(Entity* ancestor) const
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

    if (link_num.is_set || is_set(link_num.operation)) leaf_name_data.push_back(link_num.get_name_leafdata());
    if (link_stage.is_set || is_set(link_stage.operation)) leaf_name_data.push_back(link_stage.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.operation)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (phy_link_num.is_set || is_set(phy_link_num.operation)) leaf_name_data.push_back(phy_link_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "asic-id")
    {
        if(asic_id != nullptr)
        {
            children["asic-id"] = asic_id.get();
        }
        else
        {
            asic_id = std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId>();
            asic_id->parent = this;
            children["asic-id"] = asic_id.get();
        }
        return children.at("asic-id");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::get_children()
{
    if(children.find("asic-id") == children.end())
    {
        if(asic_id != nullptr)
        {
            children["asic-id"] = asic_id.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-num")
    {
        link_num = value;
    }
    if(value_path == "link-stage")
    {
        link_stage = value;
    }
    if(value_path == "link-type")
    {
        link_type = value;
    }
    if(value_path == "phy-link-num")
    {
        phy_link_num = value;
    }
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId::AsicId()
    :
    	asic_instance{YType::uint32, "asic-instance"},
	 asic_type{YType::enumeration, "asic-type"},
	 rack_num{YType::uint32, "rack-num"},
	 rack_type{YType::enumeration, "rack-type"},
	 slot_num{YType::uint32, "slot-num"}
{
    yang_name = "asic-id"; yang_parent_name = "far-end-link";
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId::~AsicId()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId::has_data() const
{
    return asic_instance.is_set
	|| asic_type.is_set
	|| rack_num.is_set
	|| rack_type.is_set
	|| slot_num.is_set;
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId::has_operation() const
{
    return is_set(operation)
	|| is_set(asic_instance.operation)
	|| is_set(asic_type.operation)
	|| is_set(rack_num.operation)
	|| is_set(rack_type.operation)
	|| is_set(slot_num.operation);
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-id";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId::get_entity_path(Entity* ancestor) const
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

    if (asic_instance.is_set || is_set(asic_instance.operation)) leaf_name_data.push_back(asic_instance.get_name_leafdata());
    if (asic_type.is_set || is_set(asic_type.operation)) leaf_name_data.push_back(asic_type.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.operation)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (rack_type.is_set || is_set(rack_type.operation)) leaf_name_data.push_back(rack_type.get_name_leafdata());
    if (slot_num.is_set || is_set(slot_num.operation)) leaf_name_data.push_back(slot_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId::get_children()
{
    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asic-instance")
    {
        asic_instance = value;
    }
    if(value_path == "asic-type")
    {
        asic_type = value;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
    }
    if(value_path == "rack-type")
    {
        rack_type = value;
    }
    if(value_path == "slot-num")
    {
        slot_num = value;
    }
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::FarEndLink()
    :
    	link_num{YType::uint32, "link-num"},
	 link_stage{YType::enumeration, "link-stage"},
	 link_type{YType::enumeration, "link-type"},
	 phy_link_num{YType::uint32, "phy-link-num"}
    	,
    asic_id(std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId>())
{
    asic_id->parent = this;
    children["asic-id"] = asic_id.get();

    yang_name = "far-end-link"; yang_parent_name = "tx-link";
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::~FarEndLink()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::has_data() const
{
    return link_num.is_set
	|| link_stage.is_set
	|| link_type.is_set
	|| phy_link_num.is_set
	|| (asic_id !=  nullptr && asic_id->has_data());
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::has_operation() const
{
    return is_set(operation)
	|| is_set(link_num.operation)
	|| is_set(link_stage.operation)
	|| is_set(link_type.operation)
	|| is_set(phy_link_num.operation)
	|| (asic_id !=  nullptr && asic_id->has_operation());
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-link";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::get_entity_path(Entity* ancestor) const
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

    if (link_num.is_set || is_set(link_num.operation)) leaf_name_data.push_back(link_num.get_name_leafdata());
    if (link_stage.is_set || is_set(link_stage.operation)) leaf_name_data.push_back(link_stage.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.operation)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (phy_link_num.is_set || is_set(phy_link_num.operation)) leaf_name_data.push_back(phy_link_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "asic-id")
    {
        if(asic_id != nullptr)
        {
            children["asic-id"] = asic_id.get();
        }
        else
        {
            asic_id = std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId>();
            asic_id->parent = this;
            children["asic-id"] = asic_id.get();
        }
        return children.at("asic-id");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::get_children()
{
    if(children.find("asic-id") == children.end())
    {
        if(asic_id != nullptr)
        {
            children["asic-id"] = asic_id.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-num")
    {
        link_num = value;
    }
    if(value_path == "link-stage")
    {
        link_stage = value;
    }
    if(value_path == "link-type")
    {
        link_type = value;
    }
    if(value_path == "phy-link-num")
    {
        phy_link_num = value;
    }
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats::Stats()
    :
    	dummy{YType::uint32, "dummy"}
{
    yang_name = "stats"; yang_parent_name = "tx-link";
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats::~Stats()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats::has_data() const
{
    return dummy.is_set;
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats::has_operation() const
{
    return is_set(operation)
	|| is_set(dummy.operation);
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats::get_entity_path(Entity* ancestor) const
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

    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats::get_children()
{
    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dummy")
    {
        dummy = value;
    }
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist::Hist()
    :
    	admin_state{YType::enumeration, "admin-state"},
	 error_state{YType::enumeration, "error-state"},
	 oper_state{YType::enumeration, "oper-state"},
	 reasons{YType::str, "reasons"},
	 timestamp{YType::uint64, "timestamp"}
{
    yang_name = "hist"; yang_parent_name = "history";
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist::~Hist()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist::has_data() const
{
    return admin_state.is_set
	|| error_state.is_set
	|| oper_state.is_set
	|| reasons.is_set
	|| timestamp.is_set;
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_state.operation)
	|| is_set(error_state.operation)
	|| is_set(oper_state.operation)
	|| is_set(reasons.operation)
	|| is_set(timestamp.operation);
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hist";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist::get_entity_path(Entity* ancestor) const
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
    if (error_state.is_set || is_set(error_state.operation)) leaf_name_data.push_back(error_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.operation)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (reasons.is_set || is_set(reasons.operation)) leaf_name_data.push_back(reasons.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist::get_children()
{
    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-state")
    {
        admin_state = value;
    }
    if(value_path == "error-state")
    {
        error_state = value;
    }
    if(value_path == "oper-state")
    {
        oper_state = value;
    }
    if(value_path == "reasons")
    {
        reasons = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::History()
    :
    	histnum{YType::uint8, "histnum"},
	 start_index{YType::uint8, "start-index"}
{
    yang_name = "history"; yang_parent_name = "tx-link";
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::~History()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::has_data() const
{
    for (std::size_t index=0; index<hist.size(); index++)
    {
        if(hist[index]->has_data())
            return true;
    }
    return histnum.is_set
	|| start_index.is_set;
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::has_operation() const
{
    for (std::size_t index=0; index<hist.size(); index++)
    {
        if(hist[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(histnum.operation)
	|| is_set(start_index.operation);
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::get_entity_path(Entity* ancestor) const
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

    if (histnum.is_set || is_set(histnum.operation)) leaf_name_data.push_back(histnum.get_name_leafdata());
    if (start_index.is_set || is_set(start_index.operation)) leaf_name_data.push_back(start_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hist")
    {
        for(auto const & c : hist)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist>();
        c->parent = this;
        hist.push_back(std::move(c));
        children[segment_path] = hist.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::get_children()
{
    for (auto const & c : hist)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "histnum")
    {
        histnum = value;
    }
    if(value_path == "start-index")
    {
        start_index = value;
    }
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::TxLink_()
    :
    	link{YType::int32, "link"},
	 admin_state{YType::enumeration, "admin-state"},
	 coeff1{YType::uint32, "coeff1"},
	 coeff2{YType::uint32, "coeff2"},
	 error_state{YType::enumeration, "error-state"},
	 is_conf_pending{YType::boolean, "is-conf-pending"},
	 is_link_valid{YType::boolean, "is-link-valid"},
	 is_power_enabled{YType::boolean, "is-power-enabled"},
	 num_admin_shuts{YType::uint32, "num-admin-shuts"},
	 oper_state{YType::enumeration, "oper-state"},
	 speed{YType::uint32, "speed"},
	 stage{YType::uint8, "stage"}
    	,
    far_end_link(std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink>())
	,history(std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History>())
	,stats(std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats>())
	,this_link(std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink>())
{
    far_end_link->parent = this;
    children["far-end-link"] = far_end_link.get();

    history->parent = this;
    children["history"] = history.get();

    stats->parent = this;
    children["stats"] = stats.get();

    this_link->parent = this;
    children["this-link"] = this_link.get();

    yang_name = "tx-link"; yang_parent_name = "tx-link";
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::~TxLink_()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::has_data() const
{
    return link.is_set
	|| admin_state.is_set
	|| coeff1.is_set
	|| coeff2.is_set
	|| error_state.is_set
	|| is_conf_pending.is_set
	|| is_link_valid.is_set
	|| is_power_enabled.is_set
	|| num_admin_shuts.is_set
	|| oper_state.is_set
	|| speed.is_set
	|| stage.is_set
	|| (far_end_link !=  nullptr && far_end_link->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (stats !=  nullptr && stats->has_data())
	|| (this_link !=  nullptr && this_link->has_data());
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::has_operation() const
{
    return is_set(operation)
	|| is_set(link.operation)
	|| is_set(admin_state.operation)
	|| is_set(coeff1.operation)
	|| is_set(coeff2.operation)
	|| is_set(error_state.operation)
	|| is_set(is_conf_pending.operation)
	|| is_set(is_link_valid.operation)
	|| is_set(is_power_enabled.operation)
	|| is_set(num_admin_shuts.operation)
	|| is_set(oper_state.operation)
	|| is_set(speed.operation)
	|| is_set(stage.operation)
	|| (far_end_link !=  nullptr && far_end_link->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (stats !=  nullptr && stats->has_operation())
	|| (this_link !=  nullptr && this_link->has_operation());
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-link" <<"[link='" <<link.get() <<"']";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::get_entity_path(Entity* ancestor) const
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

    if (link.is_set || is_set(link.operation)) leaf_name_data.push_back(link.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.operation)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (coeff1.is_set || is_set(coeff1.operation)) leaf_name_data.push_back(coeff1.get_name_leafdata());
    if (coeff2.is_set || is_set(coeff2.operation)) leaf_name_data.push_back(coeff2.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.operation)) leaf_name_data.push_back(error_state.get_name_leafdata());
    if (is_conf_pending.is_set || is_set(is_conf_pending.operation)) leaf_name_data.push_back(is_conf_pending.get_name_leafdata());
    if (is_link_valid.is_set || is_set(is_link_valid.operation)) leaf_name_data.push_back(is_link_valid.get_name_leafdata());
    if (is_power_enabled.is_set || is_set(is_power_enabled.operation)) leaf_name_data.push_back(is_power_enabled.get_name_leafdata());
    if (num_admin_shuts.is_set || is_set(num_admin_shuts.operation)) leaf_name_data.push_back(num_admin_shuts.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.operation)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (speed.is_set || is_set(speed.operation)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (stage.is_set || is_set(stage.operation)) leaf_name_data.push_back(stage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "far-end-link")
    {
        if(far_end_link != nullptr)
        {
            children["far-end-link"] = far_end_link.get();
        }
        else
        {
            far_end_link = std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink>();
            far_end_link->parent = this;
            children["far-end-link"] = far_end_link.get();
        }
        return children.at("far-end-link");
    }

    if(child_yang_name == "history")
    {
        if(history != nullptr)
        {
            children["history"] = history.get();
        }
        else
        {
            history = std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History>();
            history->parent = this;
            children["history"] = history.get();
        }
        return children.at("history");
    }

    if(child_yang_name == "stats")
    {
        if(stats != nullptr)
        {
            children["stats"] = stats.get();
        }
        else
        {
            stats = std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats>();
            stats->parent = this;
            children["stats"] = stats.get();
        }
        return children.at("stats");
    }

    if(child_yang_name == "this-link")
    {
        if(this_link != nullptr)
        {
            children["this-link"] = this_link.get();
        }
        else
        {
            this_link = std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink>();
            this_link->parent = this;
            children["this-link"] = this_link.get();
        }
        return children.at("this-link");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::get_children()
{
    if(children.find("far-end-link") == children.end())
    {
        if(far_end_link != nullptr)
        {
            children["far-end-link"] = far_end_link.get();
        }
    }

    if(children.find("history") == children.end())
    {
        if(history != nullptr)
        {
            children["history"] = history.get();
        }
    }

    if(children.find("stats") == children.end())
    {
        if(stats != nullptr)
        {
            children["stats"] = stats.get();
        }
    }

    if(children.find("this-link") == children.end())
    {
        if(this_link != nullptr)
        {
            children["this-link"] = this_link.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link")
    {
        link = value;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
    }
    if(value_path == "coeff1")
    {
        coeff1 = value;
    }
    if(value_path == "coeff2")
    {
        coeff2 = value;
    }
    if(value_path == "error-state")
    {
        error_state = value;
    }
    if(value_path == "is-conf-pending")
    {
        is_conf_pending = value;
    }
    if(value_path == "is-link-valid")
    {
        is_link_valid = value;
    }
    if(value_path == "is-power-enabled")
    {
        is_power_enabled = value;
    }
    if(value_path == "num-admin-shuts")
    {
        num_admin_shuts = value;
    }
    if(value_path == "oper-state")
    {
        oper_state = value;
    }
    if(value_path == "speed")
    {
        speed = value;
    }
    if(value_path == "stage")
    {
        stage = value;
    }
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink()
    :
    	end_number{YType::uint32, "end-number"},
	 start_number{YType::uint32, "start-number"}
{
    yang_name = "tx-link"; yang_parent_name = "tx-links";
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::~TxLink()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::has_data() const
{
    for (std::size_t index=0; index<tx_link.size(); index++)
    {
        if(tx_link[index]->has_data())
            return true;
    }
    return end_number.is_set
	|| start_number.is_set;
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::has_operation() const
{
    for (std::size_t index=0; index<tx_link.size(); index++)
    {
        if(tx_link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(end_number.operation)
	|| is_set(start_number.operation);
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-link";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::get_entity_path(Entity* ancestor) const
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

    if (end_number.is_set || is_set(end_number.operation)) leaf_name_data.push_back(end_number.get_name_leafdata());
    if (start_number.is_set || is_set(start_number.operation)) leaf_name_data.push_back(start_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tx-link")
    {
        for(auto const & c : tx_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_>();
        c->parent = this;
        tx_link.push_back(std::move(c));
        children[segment_path] = tx_link.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::get_children()
{
    for (auto const & c : tx_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-number")
    {
        end_number = value;
    }
    if(value_path == "start-number")
    {
        start_number = value;
    }
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLinks()
{
    yang_name = "tx-links"; yang_parent_name = "tx-asic-instance";
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::~TxLinks()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::has_data() const
{
    for (std::size_t index=0; index<tx_link.size(); index++)
    {
        if(tx_link[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::has_operation() const
{
    for (std::size_t index=0; index<tx_link.size(); index++)
    {
        if(tx_link[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-links";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tx-link")
    {
        for(auto const & c : tx_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink>();
        c->parent = this;
        tx_link.push_back(std::move(c));
        children[segment_path] = tx_link.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::get_children()
{
    for (auto const & c : tx_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxAsicInstance()
    :
    	instance{YType::uint32, "instance"}
    	,
    tx_links(std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks>())
{
    tx_links->parent = this;
    children["tx-links"] = tx_links.get();

    yang_name = "tx-asic-instance"; yang_parent_name = "tx-asic-instances";
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::~TxAsicInstance()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::has_data() const
{
    return instance.is_set
	|| (tx_links !=  nullptr && tx_links->has_data());
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance.operation)
	|| (tx_links !=  nullptr && tx_links->has_operation());
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-asic-instance" <<"[instance='" <<instance.get() <<"']";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::get_entity_path(Entity* ancestor) const
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

    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tx-links")
    {
        if(tx_links != nullptr)
        {
            children["tx-links"] = tx_links.get();
        }
        else
        {
            tx_links = std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks>();
            tx_links->parent = this;
            children["tx-links"] = tx_links.get();
        }
        return children.at("tx-links");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::get_children()
{
    if(children.find("tx-links") == children.end())
    {
        if(tx_links != nullptr)
        {
            children["tx-links"] = tx_links.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance")
    {
        instance = value;
    }
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstances()
{
    yang_name = "tx-asic-instances"; yang_parent_name = "tx-status-option";
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::~TxAsicInstances()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::has_data() const
{
    for (std::size_t index=0; index<tx_asic_instance.size(); index++)
    {
        if(tx_asic_instance[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::has_operation() const
{
    for (std::size_t index=0; index<tx_asic_instance.size(); index++)
    {
        if(tx_asic_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-asic-instances";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tx-asic-instance")
    {
        for(auto const & c : tx_asic_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance>();
        c->parent = this;
        tx_asic_instance.push_back(std::move(c));
        children[segment_path] = tx_asic_instance.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::get_children()
{
    for (auto const & c : tx_asic_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxStatusOption()
    :
    tx_asic_instances(std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances>())
{
    tx_asic_instances->parent = this;
    children["tx-asic-instances"] = tx_asic_instances.get();

    yang_name = "tx-status-option"; yang_parent_name = "tx-status-option-table";
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::~TxStatusOption()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::has_data() const
{
    return (tx_asic_instances !=  nullptr && tx_asic_instances->has_data());
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::has_operation() const
{
    return is_set(operation)
	|| (tx_asic_instances !=  nullptr && tx_asic_instances->has_operation());
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-status-option";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tx-asic-instances")
    {
        if(tx_asic_instances != nullptr)
        {
            children["tx-asic-instances"] = tx_asic_instances.get();
        }
        else
        {
            tx_asic_instances = std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances>();
            tx_asic_instances->parent = this;
            children["tx-asic-instances"] = tx_asic_instances.get();
        }
        return children.at("tx-asic-instances");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::get_children()
{
    if(children.find("tx-asic-instances") == children.end())
    {
        if(tx_asic_instances != nullptr)
        {
            children["tx-asic-instances"] = tx_asic_instances.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOptionTable()
    :
    tx_status_option(std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption>())
{
    tx_status_option->parent = this;
    children["tx-status-option"] = tx_status_option.get();

    yang_name = "tx-status-option-table"; yang_parent_name = "tx-link-information";
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::~TxStatusOptionTable()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::has_data() const
{
    return (tx_status_option !=  nullptr && tx_status_option->has_data());
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::has_operation() const
{
    return is_set(operation)
	|| (tx_status_option !=  nullptr && tx_status_option->has_operation());
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-status-option-table";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tx-status-option")
    {
        if(tx_status_option != nullptr)
        {
            children["tx-status-option"] = tx_status_option.get();
        }
        else
        {
            tx_status_option = std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption>();
            tx_status_option->parent = this;
            children["tx-status-option"] = tx_status_option.get();
        }
        return children.at("tx-status-option");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::get_children()
{
    if(children.find("tx-status-option") == children.end())
    {
        if(tx_status_option != nullptr)
        {
            children["tx-status-option"] = tx_status_option.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::TxLinkInformation::TxLinkInformation()
    :
    tx_status_option_table(std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable>())
{
    tx_status_option_table->parent = this;
    children["tx-status-option-table"] = tx_status_option_table.get();

    yang_name = "tx-link-information"; yang_parent_name = "node";
}

Fia::Nodes::Node::TxLinkInformation::~TxLinkInformation()
{
}

bool Fia::Nodes::Node::TxLinkInformation::has_data() const
{
    return (tx_status_option_table !=  nullptr && tx_status_option_table->has_data());
}

bool Fia::Nodes::Node::TxLinkInformation::has_operation() const
{
    return is_set(operation)
	|| (tx_status_option_table !=  nullptr && tx_status_option_table->has_operation());
}

std::string Fia::Nodes::Node::TxLinkInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-link-information";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::TxLinkInformation::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::TxLinkInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tx-status-option-table")
    {
        if(tx_status_option_table != nullptr)
        {
            children["tx-status-option-table"] = tx_status_option_table.get();
        }
        else
        {
            tx_status_option_table = std::make_unique<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable>();
            tx_status_option_table->parent = this;
            children["tx-status-option-table"] = tx_status_option_table.get();
        }
        return children.at("tx-status-option-table");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::TxLinkInformation::get_children()
{
    if(children.find("tx-status-option-table") == children.end())
    {
        if(tx_status_option_table != nullptr)
        {
            children["tx-status-option-table"] = tx_status_option_table.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::TxLinkInformation::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::RegisterDump::RegisterDumpUnits::RegisterDumpUnit::RegisterDumpUnit()
    :
    	unit{YType::int32, "unit"},
	 output{YType::str, "output"}
{
    yang_name = "register-dump-unit"; yang_parent_name = "register-dump-units";
}

Fia::Nodes::Node::RegisterDump::RegisterDumpUnits::RegisterDumpUnit::~RegisterDumpUnit()
{
}

bool Fia::Nodes::Node::RegisterDump::RegisterDumpUnits::RegisterDumpUnit::has_data() const
{
    return unit.is_set
	|| output.is_set;
}

bool Fia::Nodes::Node::RegisterDump::RegisterDumpUnits::RegisterDumpUnit::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(output.operation);
}

std::string Fia::Nodes::Node::RegisterDump::RegisterDumpUnits::RegisterDumpUnit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register-dump-unit" <<"[unit='" <<unit.get() <<"']";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::RegisterDump::RegisterDumpUnits::RegisterDumpUnit::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::RegisterDump::RegisterDumpUnits::RegisterDumpUnit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Fia::Nodes::Node::RegisterDump::RegisterDumpUnits::RegisterDumpUnit::get_children()
{
    return children;
}

void Fia::Nodes::Node::RegisterDump::RegisterDumpUnits::RegisterDumpUnit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "output")
    {
        output = value;
    }
}

Fia::Nodes::Node::RegisterDump::RegisterDumpUnits::RegisterDumpUnits()
{
    yang_name = "register-dump-units"; yang_parent_name = "register-dump";
}

Fia::Nodes::Node::RegisterDump::RegisterDumpUnits::~RegisterDumpUnits()
{
}

bool Fia::Nodes::Node::RegisterDump::RegisterDumpUnits::has_data() const
{
    for (std::size_t index=0; index<register_dump_unit.size(); index++)
    {
        if(register_dump_unit[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::RegisterDump::RegisterDumpUnits::has_operation() const
{
    for (std::size_t index=0; index<register_dump_unit.size(); index++)
    {
        if(register_dump_unit[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fia::Nodes::Node::RegisterDump::RegisterDumpUnits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register-dump-units";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::RegisterDump::RegisterDumpUnits::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::RegisterDump::RegisterDumpUnits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "register-dump-unit")
    {
        for(auto const & c : register_dump_unit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::RegisterDump::RegisterDumpUnits::RegisterDumpUnit>();
        c->parent = this;
        register_dump_unit.push_back(std::move(c));
        children[segment_path] = register_dump_unit.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::RegisterDump::RegisterDumpUnits::get_children()
{
    for (auto const & c : register_dump_unit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::RegisterDump::RegisterDumpUnits::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::RegisterDump::RegisterDump()
    :
    register_dump_units(std::make_unique<Fia::Nodes::Node::RegisterDump::RegisterDumpUnits>())
{
    register_dump_units->parent = this;
    children["register-dump-units"] = register_dump_units.get();

    yang_name = "register-dump"; yang_parent_name = "node";
}

Fia::Nodes::Node::RegisterDump::~RegisterDump()
{
}

bool Fia::Nodes::Node::RegisterDump::has_data() const
{
    return (register_dump_units !=  nullptr && register_dump_units->has_data());
}

bool Fia::Nodes::Node::RegisterDump::has_operation() const
{
    return is_set(operation)
	|| (register_dump_units !=  nullptr && register_dump_units->has_operation());
}

std::string Fia::Nodes::Node::RegisterDump::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register-dump";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::RegisterDump::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::RegisterDump::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "register-dump-units")
    {
        if(register_dump_units != nullptr)
        {
            children["register-dump-units"] = register_dump_units.get();
        }
        else
        {
            register_dump_units = std::make_unique<Fia::Nodes::Node::RegisterDump::RegisterDumpUnits>();
            register_dump_units->parent = this;
            children["register-dump-units"] = register_dump_units.get();
        }
        return children.at("register-dump-units");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::RegisterDump::get_children()
{
    if(children.find("register-dump-units") == children.end())
    {
        if(register_dump_units != nullptr)
        {
            children["register-dump-units"] = register_dump_units.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::RegisterDump::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output::Output()
    :
    	output{YType::str, "output"},
	 output_xr{YType::str, "output-xr"}
{
    yang_name = "output"; yang_parent_name = "command";
}

Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output::~Output()
{
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output::has_data() const
{
    return output.is_set
	|| output_xr.is_set;
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(output.operation)
	|| is_set(output_xr.operation);
}

std::string Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output" <<"[output='" <<output.get() <<"']";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output::get_entity_path(Entity* ancestor) const
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

    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());
    if (output_xr.is_set || is_set(output_xr.operation)) leaf_name_data.push_back(output_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output::get_children()
{
    return children;
}

void Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "output")
    {
        output = value;
    }
    if(value_path == "output-xr")
    {
        output_xr = value;
    }
}

Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Command()
    :
    	cmd{YType::str, "cmd"}
{
    yang_name = "command"; yang_parent_name = "commands";
}

Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::~Command()
{
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::has_data() const
{
    for (std::size_t index=0; index<output.size(); index++)
    {
        if(output[index]->has_data())
            return true;
    }
    return cmd.is_set;
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::has_operation() const
{
    for (std::size_t index=0; index<output.size(); index++)
    {
        if(output[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(cmd.operation);
}

std::string Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command" <<"[cmd='" <<cmd.get() <<"']";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::get_entity_path(Entity* ancestor) const
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

    if (cmd.is_set || is_set(cmd.operation)) leaf_name_data.push_back(cmd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "output")
    {
        for(auto const & c : output)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output>();
        c->parent = this;
        output.push_back(std::move(c));
        children[segment_path] = output.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::get_children()
{
    for (auto const & c : output)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cmd")
    {
        cmd = value;
    }
}

Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Commands()
{
    yang_name = "commands"; yang_parent_name = "diag-shell-unit";
}

Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::~Commands()
{
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::has_data() const
{
    for (std::size_t index=0; index<command.size(); index++)
    {
        if(command[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::has_operation() const
{
    for (std::size_t index=0; index<command.size(); index++)
    {
        if(command[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "commands";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "command")
    {
        for(auto const & c : command)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command>();
        c->parent = this;
        command.push_back(std::move(c));
        children[segment_path] = command.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::get_children()
{
    for (auto const & c : command)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::DiagShellUnit()
    :
    	unit{YType::uint32, "unit"}
    	,
    commands(std::make_unique<Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands>())
{
    commands->parent = this;
    children["commands"] = commands.get();

    yang_name = "diag-shell-unit"; yang_parent_name = "diag-shell-units";
}

Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::~DiagShellUnit()
{
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::has_data() const
{
    return unit.is_set
	|| (commands !=  nullptr && commands->has_data());
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| (commands !=  nullptr && commands->has_operation());
}

std::string Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diag-shell-unit" <<"[unit='" <<unit.get() <<"']";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "commands")
    {
        if(commands != nullptr)
        {
            children["commands"] = commands.get();
        }
        else
        {
            commands = std::make_unique<Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands>();
            commands->parent = this;
            children["commands"] = commands.get();
        }
        return children.at("commands");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::get_children()
{
    if(children.find("commands") == children.end())
    {
        if(commands != nullptr)
        {
            children["commands"] = commands.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
}

Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnits()
{
    yang_name = "diag-shell-units"; yang_parent_name = "diag-shell";
}

Fia::Nodes::Node::DiagShell::DiagShellUnits::~DiagShellUnits()
{
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::has_data() const
{
    for (std::size_t index=0; index<diag_shell_unit.size(); index++)
    {
        if(diag_shell_unit[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::has_operation() const
{
    for (std::size_t index=0; index<diag_shell_unit.size(); index++)
    {
        if(diag_shell_unit[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fia::Nodes::Node::DiagShell::DiagShellUnits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diag-shell-units";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::DiagShell::DiagShellUnits::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::DiagShell::DiagShellUnits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "diag-shell-unit")
    {
        for(auto const & c : diag_shell_unit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit>();
        c->parent = this;
        diag_shell_unit.push_back(std::move(c));
        children[segment_path] = diag_shell_unit.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::DiagShell::DiagShellUnits::get_children()
{
    for (auto const & c : diag_shell_unit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::DiagShell::DiagShellUnits::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::DiagShell::DiagShell()
    :
    diag_shell_units(std::make_unique<Fia::Nodes::Node::DiagShell::DiagShellUnits>())
{
    diag_shell_units->parent = this;
    children["diag-shell-units"] = diag_shell_units.get();

    yang_name = "diag-shell"; yang_parent_name = "node";
}

Fia::Nodes::Node::DiagShell::~DiagShell()
{
}

bool Fia::Nodes::Node::DiagShell::has_data() const
{
    return (diag_shell_units !=  nullptr && diag_shell_units->has_data());
}

bool Fia::Nodes::Node::DiagShell::has_operation() const
{
    return is_set(operation)
	|| (diag_shell_units !=  nullptr && diag_shell_units->has_operation());
}

std::string Fia::Nodes::Node::DiagShell::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diag-shell";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::DiagShell::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::DiagShell::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "diag-shell-units")
    {
        if(diag_shell_units != nullptr)
        {
            children["diag-shell-units"] = diag_shell_units.get();
        }
        else
        {
            diag_shell_units = std::make_unique<Fia::Nodes::Node::DiagShell::DiagShellUnits>();
            diag_shell_units->parent = this;
            children["diag-shell-units"] = diag_shell_units.get();
        }
        return children.at("diag-shell-units");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::DiagShell::get_children()
{
    if(children.find("diag-shell-units") == children.end())
    {
        if(diag_shell_units != nullptr)
        {
            children["diag-shell-units"] = diag_shell_units.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::DiagShell::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId::AsicId()
    :
    	asic_instance{YType::uint32, "asic-instance"},
	 asic_type{YType::enumeration, "asic-type"},
	 rack_num{YType::uint32, "rack-num"},
	 rack_type{YType::enumeration, "rack-type"},
	 slot_num{YType::uint32, "slot-num"}
{
    yang_name = "asic-id"; yang_parent_name = "device-info";
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId::~AsicId()
{
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId::has_data() const
{
    return asic_instance.is_set
	|| asic_type.is_set
	|| rack_num.is_set
	|| rack_type.is_set
	|| slot_num.is_set;
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId::has_operation() const
{
    return is_set(operation)
	|| is_set(asic_instance.operation)
	|| is_set(asic_type.operation)
	|| is_set(rack_num.operation)
	|| is_set(rack_type.operation)
	|| is_set(slot_num.operation);
}

std::string Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-id";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId::get_entity_path(Entity* ancestor) const
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

    if (asic_instance.is_set || is_set(asic_instance.operation)) leaf_name_data.push_back(asic_instance.get_name_leafdata());
    if (asic_type.is_set || is_set(asic_type.operation)) leaf_name_data.push_back(asic_type.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.operation)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (rack_type.is_set || is_set(rack_type.operation)) leaf_name_data.push_back(rack_type.get_name_leafdata());
    if (slot_num.is_set || is_set(slot_num.operation)) leaf_name_data.push_back(slot_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId::get_children()
{
    return children;
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asic-instance")
    {
        asic_instance = value;
    }
    if(value_path == "asic-type")
    {
        asic_type = value;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
    }
    if(value_path == "rack-type")
    {
        rack_type = value;
    }
    if(value_path == "slot-num")
    {
        slot_num = value;
    }
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::DeviceInfo()
    :
    	admin_state{YType::enumeration, "admin-state"},
	 asic_state{YType::enumeration, "asic-state"},
	 fapid{YType::uint32, "fapid"},
	 hotplug_event{YType::uint32, "hotplug-event"},
	 is_valid{YType::boolean, "is-valid"},
	 last_init_cause{YType::enumeration, "last-init-cause"},
	 local_switch_state{YType::boolean, "local-switch-state"},
	 num_hard_resets{YType::uint32, "num-hard-resets"},
	 num_pon_resets{YType::uint32, "num-pon-resets"},
	 oper_state{YType::enumeration, "oper-state"},
	 slice_state{YType::enumeration, "slice-state"}
    	,
    asic_id(std::make_unique<Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId>())
{
    asic_id->parent = this;
    children["asic-id"] = asic_id.get();

    yang_name = "device-info"; yang_parent_name = "slot";
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::~DeviceInfo()
{
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::has_data() const
{
    return admin_state.is_set
	|| asic_state.is_set
	|| fapid.is_set
	|| hotplug_event.is_set
	|| is_valid.is_set
	|| last_init_cause.is_set
	|| local_switch_state.is_set
	|| num_hard_resets.is_set
	|| num_pon_resets.is_set
	|| oper_state.is_set
	|| slice_state.is_set
	|| (asic_id !=  nullptr && asic_id->has_data());
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_state.operation)
	|| is_set(asic_state.operation)
	|| is_set(fapid.operation)
	|| is_set(hotplug_event.operation)
	|| is_set(is_valid.operation)
	|| is_set(last_init_cause.operation)
	|| is_set(local_switch_state.operation)
	|| is_set(num_hard_resets.operation)
	|| is_set(num_pon_resets.operation)
	|| is_set(oper_state.operation)
	|| is_set(slice_state.operation)
	|| (asic_id !=  nullptr && asic_id->has_operation());
}

std::string Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-info";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::get_entity_path(Entity* ancestor) const
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
    if (asic_state.is_set || is_set(asic_state.operation)) leaf_name_data.push_back(asic_state.get_name_leafdata());
    if (fapid.is_set || is_set(fapid.operation)) leaf_name_data.push_back(fapid.get_name_leafdata());
    if (hotplug_event.is_set || is_set(hotplug_event.operation)) leaf_name_data.push_back(hotplug_event.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (last_init_cause.is_set || is_set(last_init_cause.operation)) leaf_name_data.push_back(last_init_cause.get_name_leafdata());
    if (local_switch_state.is_set || is_set(local_switch_state.operation)) leaf_name_data.push_back(local_switch_state.get_name_leafdata());
    if (num_hard_resets.is_set || is_set(num_hard_resets.operation)) leaf_name_data.push_back(num_hard_resets.get_name_leafdata());
    if (num_pon_resets.is_set || is_set(num_pon_resets.operation)) leaf_name_data.push_back(num_pon_resets.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.operation)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (slice_state.is_set || is_set(slice_state.operation)) leaf_name_data.push_back(slice_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "asic-id")
    {
        if(asic_id != nullptr)
        {
            children["asic-id"] = asic_id.get();
        }
        else
        {
            asic_id = std::make_unique<Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId>();
            asic_id->parent = this;
            children["asic-id"] = asic_id.get();
        }
        return children.at("asic-id");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::get_children()
{
    if(children.find("asic-id") == children.end())
    {
        if(asic_id != nullptr)
        {
            children["asic-id"] = asic_id.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-state")
    {
        admin_state = value;
    }
    if(value_path == "asic-state")
    {
        asic_state = value;
    }
    if(value_path == "fapid")
    {
        fapid = value;
    }
    if(value_path == "hotplug-event")
    {
        hotplug_event = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
    if(value_path == "last-init-cause")
    {
        last_init_cause = value;
    }
    if(value_path == "local-switch-state")
    {
        local_switch_state = value;
    }
    if(value_path == "num-hard-resets")
    {
        num_hard_resets = value;
    }
    if(value_path == "num-pon-resets")
    {
        num_pon_resets = value;
    }
    if(value_path == "oper-state")
    {
        oper_state = value;
    }
    if(value_path == "slice-state")
    {
        slice_state = value;
    }
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo::FiaOirInfo()
    :
    	card_flag{YType::int32, "card-flag"},
	 card_type{YType::int32, "card-type"},
	 cur_card_state{YType::int32, "cur-card-state"},
	 evt_flag{YType::int32, "evt-flag"},
	 instance{YType::int32, "instance"},
	 rack_num{YType::int32, "rack-num"},
	 reg_flag{YType::int32, "reg-flag"}
{
    yang_name = "fia-oir-info"; yang_parent_name = "oir-circular-buffer";
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo::~FiaOirInfo()
{
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo::has_data() const
{
    return card_flag.is_set
	|| card_type.is_set
	|| cur_card_state.is_set
	|| evt_flag.is_set
	|| instance.is_set
	|| rack_num.is_set
	|| reg_flag.is_set;
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_flag.operation)
	|| is_set(card_type.operation)
	|| is_set(cur_card_state.operation)
	|| is_set(evt_flag.operation)
	|| is_set(instance.operation)
	|| is_set(rack_num.operation)
	|| is_set(reg_flag.operation);
}

std::string Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fia-oir-info";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo::get_entity_path(Entity* ancestor) const
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

    if (card_flag.is_set || is_set(card_flag.operation)) leaf_name_data.push_back(card_flag.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.operation)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (cur_card_state.is_set || is_set(cur_card_state.operation)) leaf_name_data.push_back(cur_card_state.get_name_leafdata());
    if (evt_flag.is_set || is_set(evt_flag.operation)) leaf_name_data.push_back(evt_flag.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.operation)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (reg_flag.is_set || is_set(reg_flag.operation)) leaf_name_data.push_back(reg_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo::get_children()
{
    return children;
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-flag")
    {
        card_flag = value;
    }
    if(value_path == "card-type")
    {
        card_type = value;
    }
    if(value_path == "cur-card-state")
    {
        cur_card_state = value;
    }
    if(value_path == "evt-flag")
    {
        evt_flag = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
    }
    if(value_path == "reg-flag")
    {
        reg_flag = value;
    }
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::OirCircularBuffer()
    :
    	count{YType::int32, "count"},
	 end{YType::int32, "end"},
	 start{YType::int32, "start"}
{
    yang_name = "oir-circular-buffer"; yang_parent_name = "card-info";
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::~OirCircularBuffer()
{
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::has_data() const
{
    for (std::size_t index=0; index<fia_oir_info.size(); index++)
    {
        if(fia_oir_info[index]->has_data())
            return true;
    }
    return count.is_set
	|| end.is_set
	|| start.is_set;
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::has_operation() const
{
    for (std::size_t index=0; index<fia_oir_info.size(); index++)
    {
        if(fia_oir_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(count.operation)
	|| is_set(end.operation)
	|| is_set(start.operation);
}

std::string Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oir-circular-buffer";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::get_entity_path(Entity* ancestor) const
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

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (end.is_set || is_set(end.operation)) leaf_name_data.push_back(end.get_name_leafdata());
    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fia-oir-info")
    {
        for(auto const & c : fia_oir_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo>();
        c->parent = this;
        fia_oir_info.push_back(std::move(c));
        children[segment_path] = fia_oir_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::get_children()
{
    for (auto const & c : fia_oir_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "end")
    {
        end = value;
    }
    if(value_path == "start")
    {
        start = value;
    }
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::CardInfo()
    :
    	card_flag{YType::int32, "card-flag"},
	 card_name{YType::str, "card-name"},
	 card_state{YType::uint8, "card-state"},
	 card_type{YType::int32, "card-type"},
	 cxp_avail_bitmap{YType::uint64, "cxp-avail-bitmap"},
	 evt_flag{YType::int32, "evt-flag"},
	 exp_num_asics{YType::uint32, "exp-num-asics"},
	 exp_num_asics_per_fsdb{YType::uint32, "exp-num-asics-per-fsdb"},
	 instance{YType::int32, "instance"},
	 is_powered{YType::boolean, "is-powered"},
	 num_cos_per_port{YType::uint8, "num-cos-per-port"},
	 num_ilkns_per_asic{YType::uint32, "num-ilkns-per-asic"},
	 num_local_ports_per_ilkn{YType::uint32, "num-local-ports-per-ilkn"},
	 reg_flag{YType::int32, "reg-flag"},
	 slot_no{YType::int32, "slot-no"}
    	,
    oir_circular_buffer(std::make_unique<Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer>())
{
    oir_circular_buffer->parent = this;
    children["oir-circular-buffer"] = oir_circular_buffer.get();

    yang_name = "card-info"; yang_parent_name = "slot";
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::~CardInfo()
{
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::has_data() const
{
    return card_flag.is_set
	|| card_name.is_set
	|| card_state.is_set
	|| card_type.is_set
	|| cxp_avail_bitmap.is_set
	|| evt_flag.is_set
	|| exp_num_asics.is_set
	|| exp_num_asics_per_fsdb.is_set
	|| instance.is_set
	|| is_powered.is_set
	|| num_cos_per_port.is_set
	|| num_ilkns_per_asic.is_set
	|| num_local_ports_per_ilkn.is_set
	|| reg_flag.is_set
	|| slot_no.is_set
	|| (oir_circular_buffer !=  nullptr && oir_circular_buffer->has_data());
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_flag.operation)
	|| is_set(card_name.operation)
	|| is_set(card_state.operation)
	|| is_set(card_type.operation)
	|| is_set(cxp_avail_bitmap.operation)
	|| is_set(evt_flag.operation)
	|| is_set(exp_num_asics.operation)
	|| is_set(exp_num_asics_per_fsdb.operation)
	|| is_set(instance.operation)
	|| is_set(is_powered.operation)
	|| is_set(num_cos_per_port.operation)
	|| is_set(num_ilkns_per_asic.operation)
	|| is_set(num_local_ports_per_ilkn.operation)
	|| is_set(reg_flag.operation)
	|| is_set(slot_no.operation)
	|| (oir_circular_buffer !=  nullptr && oir_circular_buffer->has_operation());
}

std::string Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-info";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::get_entity_path(Entity* ancestor) const
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

    if (card_flag.is_set || is_set(card_flag.operation)) leaf_name_data.push_back(card_flag.get_name_leafdata());
    if (card_name.is_set || is_set(card_name.operation)) leaf_name_data.push_back(card_name.get_name_leafdata());
    if (card_state.is_set || is_set(card_state.operation)) leaf_name_data.push_back(card_state.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.operation)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (cxp_avail_bitmap.is_set || is_set(cxp_avail_bitmap.operation)) leaf_name_data.push_back(cxp_avail_bitmap.get_name_leafdata());
    if (evt_flag.is_set || is_set(evt_flag.operation)) leaf_name_data.push_back(evt_flag.get_name_leafdata());
    if (exp_num_asics.is_set || is_set(exp_num_asics.operation)) leaf_name_data.push_back(exp_num_asics.get_name_leafdata());
    if (exp_num_asics_per_fsdb.is_set || is_set(exp_num_asics_per_fsdb.operation)) leaf_name_data.push_back(exp_num_asics_per_fsdb.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (is_powered.is_set || is_set(is_powered.operation)) leaf_name_data.push_back(is_powered.get_name_leafdata());
    if (num_cos_per_port.is_set || is_set(num_cos_per_port.operation)) leaf_name_data.push_back(num_cos_per_port.get_name_leafdata());
    if (num_ilkns_per_asic.is_set || is_set(num_ilkns_per_asic.operation)) leaf_name_data.push_back(num_ilkns_per_asic.get_name_leafdata());
    if (num_local_ports_per_ilkn.is_set || is_set(num_local_ports_per_ilkn.operation)) leaf_name_data.push_back(num_local_ports_per_ilkn.get_name_leafdata());
    if (reg_flag.is_set || is_set(reg_flag.operation)) leaf_name_data.push_back(reg_flag.get_name_leafdata());
    if (slot_no.is_set || is_set(slot_no.operation)) leaf_name_data.push_back(slot_no.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oir-circular-buffer")
    {
        if(oir_circular_buffer != nullptr)
        {
            children["oir-circular-buffer"] = oir_circular_buffer.get();
        }
        else
        {
            oir_circular_buffer = std::make_unique<Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer>();
            oir_circular_buffer->parent = this;
            children["oir-circular-buffer"] = oir_circular_buffer.get();
        }
        return children.at("oir-circular-buffer");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::get_children()
{
    if(children.find("oir-circular-buffer") == children.end())
    {
        if(oir_circular_buffer != nullptr)
        {
            children["oir-circular-buffer"] = oir_circular_buffer.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-flag")
    {
        card_flag = value;
    }
    if(value_path == "card-name")
    {
        card_name = value;
    }
    if(value_path == "card-state")
    {
        card_state = value;
    }
    if(value_path == "card-type")
    {
        card_type = value;
    }
    if(value_path == "cxp-avail-bitmap")
    {
        cxp_avail_bitmap = value;
    }
    if(value_path == "evt-flag")
    {
        evt_flag = value;
    }
    if(value_path == "exp-num-asics")
    {
        exp_num_asics = value;
    }
    if(value_path == "exp-num-asics-per-fsdb")
    {
        exp_num_asics_per_fsdb = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "is-powered")
    {
        is_powered = value;
    }
    if(value_path == "num-cos-per-port")
    {
        num_cos_per_port = value;
    }
    if(value_path == "num-ilkns-per-asic")
    {
        num_ilkns_per_asic = value;
    }
    if(value_path == "num-local-ports-per-ilkn")
    {
        num_local_ports_per_ilkn = value;
    }
    if(value_path == "reg-flag")
    {
        reg_flag = value;
    }
    if(value_path == "slot-no")
    {
        slot_no = value;
    }
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::Slot()
    :
    	slot{YType::int32, "slot"},
	 asic_avail_mask{YType::uint64, "asic-avail-mask"},
	 asic_oper_notify_to_fsdb_pending_bmap{YType::uint64, "asic-oper-notify-to-fsdb-pending-bmap"},
	 board_rev_id{YType::uint32, "board-rev-id"},
	 card_avail_mask{YType::uint32, "card-avail-mask"},
	 coeff_major_rev{YType::uint32, "coeff-major-rev"},
	 coeff_minor_rev{YType::uint32, "coeff-minor-rev"},
	 drv_version{YType::uint32, "drv-version"},
	 drvr_current_startup_timestamp{YType::str, "drvr-current-startup-timestamp"},
	 drvr_initial_startup_timestamp{YType::str, "drvr-initial-startup-timestamp"},
	 exp_asic_avail_mask{YType::uint64, "exp-asic-avail-mask"},
	 fc_mode{YType::enumeration, "fc-mode"},
	 fgid_conn_active{YType::boolean, "fgid-conn-active"},
	 fgid_reg_active{YType::boolean, "fgid-reg-active"},
	 fsdb_conn_active{YType::boolean, "fsdb-conn-active"},
	 fsdb_reg_active{YType::boolean, "fsdb-reg-active"},
	 functional_role{YType::uint8, "functional-role"},
	 is_cih_registered{YType::boolean, "is-cih-registered"},
	 is_driver_ready{YType::boolean, "is-driver-ready"},
	 is_fgid_download_completed{YType::boolean, "is-fgid-download-completed"},
	 is_fgid_download_in_progress{YType::boolean, "is-fgid-download-in-progress"},
	 is_full_fgid_download_req{YType::boolean, "is-full-fgid-download-req"},
	 is_gaspp_registered{YType::boolean, "is-gaspp-registered"},
	 issu_abort_rcvd{YType::boolean, "issu-abort-rcvd"},
	 issu_abort_sent{YType::boolean, "issu-abort-sent"},
	 issu_mgr_conn_active{YType::boolean, "issu-mgr-conn-active"},
	 issu_mgr_reg_active{YType::boolean, "issu-mgr-reg-active"},
	 issu_ready_ntfy_pending{YType::boolean, "issu-ready-ntfy-pending"},
	 issu_role{YType::uint8, "issu-role"},
	 num_cm_conn_reqs{YType::uint8, "num-cm-conn-reqs"},
	 num_fgid_conn_reqs{YType::uint8, "num-fgid-conn-reqs"},
	 num_fsdb_conn_reqs{YType::uint8, "num-fsdb-conn-reqs"},
	 num_fstats_conn_reqs{YType::uint8, "num-fstats-conn-reqs"},
	 num_intf_ports{YType::uint32, "num-intf-ports"},
	 num_issu_mgr_conn_reqs{YType::uint8, "num-issu-mgr-conn-reqs"},
	 num_peer_fia_conn_reqs{YType::uint8, "num-peer-fia-conn-reqs"},
	 num_pm_conn_reqs{YType::uint8, "num-pm-conn-reqs"},
	 rack_name{YType::str, "rack-name"},
	 rack_num{YType::uint8, "rack-num"},
	 rack_type{YType::int32, "rack-type"},
	 respawn_count{YType::uint8, "respawn-count"},
	 total_asics{YType::uint8, "total-asics"},
	 uc_weight{YType::uint8, "uc-weight"},
	 ucmc_ratio{YType::uint32, "ucmc-ratio"}
{
    yang_name = "slot"; yang_parent_name = "slots";
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::~Slot()
{
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::has_data() const
{
    for (std::size_t index=0; index<card_info.size(); index++)
    {
        if(card_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<device_info.size(); index++)
    {
        if(device_info[index]->has_data())
            return true;
    }
    return slot.is_set
	|| asic_avail_mask.is_set
	|| asic_oper_notify_to_fsdb_pending_bmap.is_set
	|| board_rev_id.is_set
	|| card_avail_mask.is_set
	|| coeff_major_rev.is_set
	|| coeff_minor_rev.is_set
	|| drv_version.is_set
	|| drvr_current_startup_timestamp.is_set
	|| drvr_initial_startup_timestamp.is_set
	|| exp_asic_avail_mask.is_set
	|| fc_mode.is_set
	|| fgid_conn_active.is_set
	|| fgid_reg_active.is_set
	|| fsdb_conn_active.is_set
	|| fsdb_reg_active.is_set
	|| functional_role.is_set
	|| is_cih_registered.is_set
	|| is_driver_ready.is_set
	|| is_fgid_download_completed.is_set
	|| is_fgid_download_in_progress.is_set
	|| is_full_fgid_download_req.is_set
	|| is_gaspp_registered.is_set
	|| issu_abort_rcvd.is_set
	|| issu_abort_sent.is_set
	|| issu_mgr_conn_active.is_set
	|| issu_mgr_reg_active.is_set
	|| issu_ready_ntfy_pending.is_set
	|| issu_role.is_set
	|| num_cm_conn_reqs.is_set
	|| num_fgid_conn_reqs.is_set
	|| num_fsdb_conn_reqs.is_set
	|| num_fstats_conn_reqs.is_set
	|| num_intf_ports.is_set
	|| num_issu_mgr_conn_reqs.is_set
	|| num_peer_fia_conn_reqs.is_set
	|| num_pm_conn_reqs.is_set
	|| rack_name.is_set
	|| rack_num.is_set
	|| rack_type.is_set
	|| respawn_count.is_set
	|| total_asics.is_set
	|| uc_weight.is_set
	|| ucmc_ratio.is_set;
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::has_operation() const
{
    for (std::size_t index=0; index<card_info.size(); index++)
    {
        if(card_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<device_info.size(); index++)
    {
        if(device_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(slot.operation)
	|| is_set(asic_avail_mask.operation)
	|| is_set(asic_oper_notify_to_fsdb_pending_bmap.operation)
	|| is_set(board_rev_id.operation)
	|| is_set(card_avail_mask.operation)
	|| is_set(coeff_major_rev.operation)
	|| is_set(coeff_minor_rev.operation)
	|| is_set(drv_version.operation)
	|| is_set(drvr_current_startup_timestamp.operation)
	|| is_set(drvr_initial_startup_timestamp.operation)
	|| is_set(exp_asic_avail_mask.operation)
	|| is_set(fc_mode.operation)
	|| is_set(fgid_conn_active.operation)
	|| is_set(fgid_reg_active.operation)
	|| is_set(fsdb_conn_active.operation)
	|| is_set(fsdb_reg_active.operation)
	|| is_set(functional_role.operation)
	|| is_set(is_cih_registered.operation)
	|| is_set(is_driver_ready.operation)
	|| is_set(is_fgid_download_completed.operation)
	|| is_set(is_fgid_download_in_progress.operation)
	|| is_set(is_full_fgid_download_req.operation)
	|| is_set(is_gaspp_registered.operation)
	|| is_set(issu_abort_rcvd.operation)
	|| is_set(issu_abort_sent.operation)
	|| is_set(issu_mgr_conn_active.operation)
	|| is_set(issu_mgr_reg_active.operation)
	|| is_set(issu_ready_ntfy_pending.operation)
	|| is_set(issu_role.operation)
	|| is_set(num_cm_conn_reqs.operation)
	|| is_set(num_fgid_conn_reqs.operation)
	|| is_set(num_fsdb_conn_reqs.operation)
	|| is_set(num_fstats_conn_reqs.operation)
	|| is_set(num_intf_ports.operation)
	|| is_set(num_issu_mgr_conn_reqs.operation)
	|| is_set(num_peer_fia_conn_reqs.operation)
	|| is_set(num_pm_conn_reqs.operation)
	|| is_set(rack_name.operation)
	|| is_set(rack_num.operation)
	|| is_set(rack_type.operation)
	|| is_set(respawn_count.operation)
	|| is_set(total_asics.operation)
	|| is_set(uc_weight.operation)
	|| is_set(ucmc_ratio.operation);
}

std::string Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot" <<"[slot='" <<slot.get() <<"']";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::get_entity_path(Entity* ancestor) const
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

    if (slot.is_set || is_set(slot.operation)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (asic_avail_mask.is_set || is_set(asic_avail_mask.operation)) leaf_name_data.push_back(asic_avail_mask.get_name_leafdata());
    if (asic_oper_notify_to_fsdb_pending_bmap.is_set || is_set(asic_oper_notify_to_fsdb_pending_bmap.operation)) leaf_name_data.push_back(asic_oper_notify_to_fsdb_pending_bmap.get_name_leafdata());
    if (board_rev_id.is_set || is_set(board_rev_id.operation)) leaf_name_data.push_back(board_rev_id.get_name_leafdata());
    if (card_avail_mask.is_set || is_set(card_avail_mask.operation)) leaf_name_data.push_back(card_avail_mask.get_name_leafdata());
    if (coeff_major_rev.is_set || is_set(coeff_major_rev.operation)) leaf_name_data.push_back(coeff_major_rev.get_name_leafdata());
    if (coeff_minor_rev.is_set || is_set(coeff_minor_rev.operation)) leaf_name_data.push_back(coeff_minor_rev.get_name_leafdata());
    if (drv_version.is_set || is_set(drv_version.operation)) leaf_name_data.push_back(drv_version.get_name_leafdata());
    if (drvr_current_startup_timestamp.is_set || is_set(drvr_current_startup_timestamp.operation)) leaf_name_data.push_back(drvr_current_startup_timestamp.get_name_leafdata());
    if (drvr_initial_startup_timestamp.is_set || is_set(drvr_initial_startup_timestamp.operation)) leaf_name_data.push_back(drvr_initial_startup_timestamp.get_name_leafdata());
    if (exp_asic_avail_mask.is_set || is_set(exp_asic_avail_mask.operation)) leaf_name_data.push_back(exp_asic_avail_mask.get_name_leafdata());
    if (fc_mode.is_set || is_set(fc_mode.operation)) leaf_name_data.push_back(fc_mode.get_name_leafdata());
    if (fgid_conn_active.is_set || is_set(fgid_conn_active.operation)) leaf_name_data.push_back(fgid_conn_active.get_name_leafdata());
    if (fgid_reg_active.is_set || is_set(fgid_reg_active.operation)) leaf_name_data.push_back(fgid_reg_active.get_name_leafdata());
    if (fsdb_conn_active.is_set || is_set(fsdb_conn_active.operation)) leaf_name_data.push_back(fsdb_conn_active.get_name_leafdata());
    if (fsdb_reg_active.is_set || is_set(fsdb_reg_active.operation)) leaf_name_data.push_back(fsdb_reg_active.get_name_leafdata());
    if (functional_role.is_set || is_set(functional_role.operation)) leaf_name_data.push_back(functional_role.get_name_leafdata());
    if (is_cih_registered.is_set || is_set(is_cih_registered.operation)) leaf_name_data.push_back(is_cih_registered.get_name_leafdata());
    if (is_driver_ready.is_set || is_set(is_driver_ready.operation)) leaf_name_data.push_back(is_driver_ready.get_name_leafdata());
    if (is_fgid_download_completed.is_set || is_set(is_fgid_download_completed.operation)) leaf_name_data.push_back(is_fgid_download_completed.get_name_leafdata());
    if (is_fgid_download_in_progress.is_set || is_set(is_fgid_download_in_progress.operation)) leaf_name_data.push_back(is_fgid_download_in_progress.get_name_leafdata());
    if (is_full_fgid_download_req.is_set || is_set(is_full_fgid_download_req.operation)) leaf_name_data.push_back(is_full_fgid_download_req.get_name_leafdata());
    if (is_gaspp_registered.is_set || is_set(is_gaspp_registered.operation)) leaf_name_data.push_back(is_gaspp_registered.get_name_leafdata());
    if (issu_abort_rcvd.is_set || is_set(issu_abort_rcvd.operation)) leaf_name_data.push_back(issu_abort_rcvd.get_name_leafdata());
    if (issu_abort_sent.is_set || is_set(issu_abort_sent.operation)) leaf_name_data.push_back(issu_abort_sent.get_name_leafdata());
    if (issu_mgr_conn_active.is_set || is_set(issu_mgr_conn_active.operation)) leaf_name_data.push_back(issu_mgr_conn_active.get_name_leafdata());
    if (issu_mgr_reg_active.is_set || is_set(issu_mgr_reg_active.operation)) leaf_name_data.push_back(issu_mgr_reg_active.get_name_leafdata());
    if (issu_ready_ntfy_pending.is_set || is_set(issu_ready_ntfy_pending.operation)) leaf_name_data.push_back(issu_ready_ntfy_pending.get_name_leafdata());
    if (issu_role.is_set || is_set(issu_role.operation)) leaf_name_data.push_back(issu_role.get_name_leafdata());
    if (num_cm_conn_reqs.is_set || is_set(num_cm_conn_reqs.operation)) leaf_name_data.push_back(num_cm_conn_reqs.get_name_leafdata());
    if (num_fgid_conn_reqs.is_set || is_set(num_fgid_conn_reqs.operation)) leaf_name_data.push_back(num_fgid_conn_reqs.get_name_leafdata());
    if (num_fsdb_conn_reqs.is_set || is_set(num_fsdb_conn_reqs.operation)) leaf_name_data.push_back(num_fsdb_conn_reqs.get_name_leafdata());
    if (num_fstats_conn_reqs.is_set || is_set(num_fstats_conn_reqs.operation)) leaf_name_data.push_back(num_fstats_conn_reqs.get_name_leafdata());
    if (num_intf_ports.is_set || is_set(num_intf_ports.operation)) leaf_name_data.push_back(num_intf_ports.get_name_leafdata());
    if (num_issu_mgr_conn_reqs.is_set || is_set(num_issu_mgr_conn_reqs.operation)) leaf_name_data.push_back(num_issu_mgr_conn_reqs.get_name_leafdata());
    if (num_peer_fia_conn_reqs.is_set || is_set(num_peer_fia_conn_reqs.operation)) leaf_name_data.push_back(num_peer_fia_conn_reqs.get_name_leafdata());
    if (num_pm_conn_reqs.is_set || is_set(num_pm_conn_reqs.operation)) leaf_name_data.push_back(num_pm_conn_reqs.get_name_leafdata());
    if (rack_name.is_set || is_set(rack_name.operation)) leaf_name_data.push_back(rack_name.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.operation)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (rack_type.is_set || is_set(rack_type.operation)) leaf_name_data.push_back(rack_type.get_name_leafdata());
    if (respawn_count.is_set || is_set(respawn_count.operation)) leaf_name_data.push_back(respawn_count.get_name_leafdata());
    if (total_asics.is_set || is_set(total_asics.operation)) leaf_name_data.push_back(total_asics.get_name_leafdata());
    if (uc_weight.is_set || is_set(uc_weight.operation)) leaf_name_data.push_back(uc_weight.get_name_leafdata());
    if (ucmc_ratio.is_set || is_set(ucmc_ratio.operation)) leaf_name_data.push_back(ucmc_ratio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "card-info")
    {
        for(auto const & c : card_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo>();
        c->parent = this;
        card_info.push_back(std::move(c));
        children[segment_path] = card_info.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "device-info")
    {
        for(auto const & c : device_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo>();
        c->parent = this;
        device_info.push_back(std::move(c));
        children[segment_path] = device_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::get_children()
{
    for (auto const & c : card_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : device_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "slot")
    {
        slot = value;
    }
    if(value_path == "asic-avail-mask")
    {
        asic_avail_mask = value;
    }
    if(value_path == "asic-oper-notify-to-fsdb-pending-bmap")
    {
        asic_oper_notify_to_fsdb_pending_bmap = value;
    }
    if(value_path == "board-rev-id")
    {
        board_rev_id = value;
    }
    if(value_path == "card-avail-mask")
    {
        card_avail_mask = value;
    }
    if(value_path == "coeff-major-rev")
    {
        coeff_major_rev = value;
    }
    if(value_path == "coeff-minor-rev")
    {
        coeff_minor_rev = value;
    }
    if(value_path == "drv-version")
    {
        drv_version = value;
    }
    if(value_path == "drvr-current-startup-timestamp")
    {
        drvr_current_startup_timestamp = value;
    }
    if(value_path == "drvr-initial-startup-timestamp")
    {
        drvr_initial_startup_timestamp = value;
    }
    if(value_path == "exp-asic-avail-mask")
    {
        exp_asic_avail_mask = value;
    }
    if(value_path == "fc-mode")
    {
        fc_mode = value;
    }
    if(value_path == "fgid-conn-active")
    {
        fgid_conn_active = value;
    }
    if(value_path == "fgid-reg-active")
    {
        fgid_reg_active = value;
    }
    if(value_path == "fsdb-conn-active")
    {
        fsdb_conn_active = value;
    }
    if(value_path == "fsdb-reg-active")
    {
        fsdb_reg_active = value;
    }
    if(value_path == "functional-role")
    {
        functional_role = value;
    }
    if(value_path == "is-cih-registered")
    {
        is_cih_registered = value;
    }
    if(value_path == "is-driver-ready")
    {
        is_driver_ready = value;
    }
    if(value_path == "is-fgid-download-completed")
    {
        is_fgid_download_completed = value;
    }
    if(value_path == "is-fgid-download-in-progress")
    {
        is_fgid_download_in_progress = value;
    }
    if(value_path == "is-full-fgid-download-req")
    {
        is_full_fgid_download_req = value;
    }
    if(value_path == "is-gaspp-registered")
    {
        is_gaspp_registered = value;
    }
    if(value_path == "issu-abort-rcvd")
    {
        issu_abort_rcvd = value;
    }
    if(value_path == "issu-abort-sent")
    {
        issu_abort_sent = value;
    }
    if(value_path == "issu-mgr-conn-active")
    {
        issu_mgr_conn_active = value;
    }
    if(value_path == "issu-mgr-reg-active")
    {
        issu_mgr_reg_active = value;
    }
    if(value_path == "issu-ready-ntfy-pending")
    {
        issu_ready_ntfy_pending = value;
    }
    if(value_path == "issu-role")
    {
        issu_role = value;
    }
    if(value_path == "num-cm-conn-reqs")
    {
        num_cm_conn_reqs = value;
    }
    if(value_path == "num-fgid-conn-reqs")
    {
        num_fgid_conn_reqs = value;
    }
    if(value_path == "num-fsdb-conn-reqs")
    {
        num_fsdb_conn_reqs = value;
    }
    if(value_path == "num-fstats-conn-reqs")
    {
        num_fstats_conn_reqs = value;
    }
    if(value_path == "num-intf-ports")
    {
        num_intf_ports = value;
    }
    if(value_path == "num-issu-mgr-conn-reqs")
    {
        num_issu_mgr_conn_reqs = value;
    }
    if(value_path == "num-peer-fia-conn-reqs")
    {
        num_peer_fia_conn_reqs = value;
    }
    if(value_path == "num-pm-conn-reqs")
    {
        num_pm_conn_reqs = value;
    }
    if(value_path == "rack-name")
    {
        rack_name = value;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
    }
    if(value_path == "rack-type")
    {
        rack_type = value;
    }
    if(value_path == "respawn-count")
    {
        respawn_count = value;
    }
    if(value_path == "total-asics")
    {
        total_asics = value;
    }
    if(value_path == "uc-weight")
    {
        uc_weight = value;
    }
    if(value_path == "ucmc-ratio")
    {
        ucmc_ratio = value;
    }
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slots()
{
    yang_name = "slots"; yang_parent_name = "flag";
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::~Slots()
{
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::has_data() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::has_operation() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slots";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slot")
    {
        for(auto const & c : slot)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot>();
        c->parent = this;
        slot.push_back(std::move(c));
        children[segment_path] = slot.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::get_children()
{
    for (auto const & c : slot)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Flag()
    :
    	flag{YType::int32, "flag"}
    	,
    slots(std::make_unique<Fia::Nodes::Node::OirHistory::Flags::Flag::Slots>())
{
    slots->parent = this;
    children["slots"] = slots.get();

    yang_name = "flag"; yang_parent_name = "flags";
}

Fia::Nodes::Node::OirHistory::Flags::Flag::~Flag()
{
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::has_data() const
{
    return flag.is_set
	|| (slots !=  nullptr && slots->has_data());
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::has_operation() const
{
    return is_set(operation)
	|| is_set(flag.operation)
	|| (slots !=  nullptr && slots->has_operation());
}

std::string Fia::Nodes::Node::OirHistory::Flags::Flag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flag" <<"[flag='" <<flag.get() <<"']";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::OirHistory::Flags::Flag::get_entity_path(Entity* ancestor) const
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

    if (flag.is_set || is_set(flag.operation)) leaf_name_data.push_back(flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::OirHistory::Flags::Flag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slots")
    {
        if(slots != nullptr)
        {
            children["slots"] = slots.get();
        }
        else
        {
            slots = std::make_unique<Fia::Nodes::Node::OirHistory::Flags::Flag::Slots>();
            slots->parent = this;
            children["slots"] = slots.get();
        }
        return children.at("slots");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::OirHistory::Flags::Flag::get_children()
{
    if(children.find("slots") == children.end())
    {
        if(slots != nullptr)
        {
            children["slots"] = slots.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flag")
    {
        flag = value;
    }
}

Fia::Nodes::Node::OirHistory::Flags::Flags()
{
    yang_name = "flags"; yang_parent_name = "oir-history";
}

Fia::Nodes::Node::OirHistory::Flags::~Flags()
{
}

bool Fia::Nodes::Node::OirHistory::Flags::has_data() const
{
    for (std::size_t index=0; index<flag.size(); index++)
    {
        if(flag[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::OirHistory::Flags::has_operation() const
{
    for (std::size_t index=0; index<flag.size(); index++)
    {
        if(flag[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fia::Nodes::Node::OirHistory::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::OirHistory::Flags::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::OirHistory::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flag")
    {
        for(auto const & c : flag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::OirHistory::Flags::Flag>();
        c->parent = this;
        flag.push_back(std::move(c));
        children[segment_path] = flag.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::OirHistory::Flags::get_children()
{
    for (auto const & c : flag)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::OirHistory::Flags::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::OirHistory::OirHistory()
    :
    flags(std::make_unique<Fia::Nodes::Node::OirHistory::Flags>())
{
    flags->parent = this;
    children["flags"] = flags.get();

    yang_name = "oir-history"; yang_parent_name = "node";
}

Fia::Nodes::Node::OirHistory::~OirHistory()
{
}

bool Fia::Nodes::Node::OirHistory::has_data() const
{
    return (flags !=  nullptr && flags->has_data());
}

bool Fia::Nodes::Node::OirHistory::has_operation() const
{
    return is_set(operation)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string Fia::Nodes::Node::OirHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oir-history";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::OirHistory::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::OirHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flags")
    {
        if(flags != nullptr)
        {
            children["flags"] = flags.get();
        }
        else
        {
            flags = std::make_unique<Fia::Nodes::Node::OirHistory::Flags>();
            flags->parent = this;
            children["flags"] = flags.get();
        }
        return children.at("flags");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::OirHistory::get_children()
{
    if(children.find("flags") == children.end())
    {
        if(flags != nullptr)
        {
            children["flags"] = flags.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::OirHistory::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo::FieldInfo()
    :
    	field_name{YType::str, "field-name"},
	 field_value{YType::uint64, "field-value"},
	 is_ovf{YType::boolean, "is-ovf"}
{
    yang_name = "field-info"; yang_parent_name = "block-info";
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo::~FieldInfo()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo::has_data() const
{
    return field_name.is_set
	|| field_value.is_set
	|| is_ovf.is_set;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(field_name.operation)
	|| is_set(field_value.operation)
	|| is_set(is_ovf.operation);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "field-info";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo::get_entity_path(Entity* ancestor) const
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

    if (field_name.is_set || is_set(field_name.operation)) leaf_name_data.push_back(field_name.get_name_leafdata());
    if (field_value.is_set || is_set(field_value.operation)) leaf_name_data.push_back(field_value.get_name_leafdata());
    if (is_ovf.is_set || is_set(is_ovf.operation)) leaf_name_data.push_back(is_ovf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo::get_children()
{
    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "field-name")
    {
        field_name = value;
    }
    if(value_path == "field-value")
    {
        field_value = value;
    }
    if(value_path == "is-ovf")
    {
        is_ovf = value;
    }
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::BlockInfo()
    :
    	block_name{YType::str, "block-name"},
	 num_fields{YType::uint8, "num-fields"}
{
    yang_name = "block-info"; yang_parent_name = "stats-info";
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::~BlockInfo()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::has_data() const
{
    for (std::size_t index=0; index<field_info.size(); index++)
    {
        if(field_info[index]->has_data())
            return true;
    }
    return block_name.is_set
	|| num_fields.is_set;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::has_operation() const
{
    for (std::size_t index=0; index<field_info.size(); index++)
    {
        if(field_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(block_name.operation)
	|| is_set(num_fields.operation);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block-info";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::get_entity_path(Entity* ancestor) const
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

    if (block_name.is_set || is_set(block_name.operation)) leaf_name_data.push_back(block_name.get_name_leafdata());
    if (num_fields.is_set || is_set(num_fields.operation)) leaf_name_data.push_back(num_fields.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "field-info")
    {
        for(auto const & c : field_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo>();
        c->parent = this;
        field_info.push_back(std::move(c));
        children[segment_path] = field_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::get_children()
{
    for (auto const & c : field_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "block-name")
    {
        block_name = value;
    }
    if(value_path == "num-fields")
    {
        num_fields = value;
    }
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::StatsInfo()
    :
    	num_blocks{YType::uint8, "num-blocks"}
{
    yang_name = "stats-info"; yang_parent_name = "pbc-stats";
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::~StatsInfo()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::has_data() const
{
    for (std::size_t index=0; index<block_info.size(); index++)
    {
        if(block_info[index]->has_data())
            return true;
    }
    return num_blocks.is_set;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::has_operation() const
{
    for (std::size_t index=0; index<block_info.size(); index++)
    {
        if(block_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(num_blocks.operation);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-info";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::get_entity_path(Entity* ancestor) const
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

    if (num_blocks.is_set || is_set(num_blocks.operation)) leaf_name_data.push_back(num_blocks.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "block-info")
    {
        for(auto const & c : block_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo>();
        c->parent = this;
        block_info.push_back(std::move(c));
        children[segment_path] = block_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::get_children()
{
    for (auto const & c : block_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-blocks")
    {
        num_blocks = value;
    }
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::PbcStats()
    :
    	asic_instance{YType::uint32, "asic-instance"},
	 chip_ver{YType::uint16, "chip-ver"},
	 rack_no{YType::uint32, "rack-no"},
	 slot_no{YType::uint32, "slot-no"},
	 valid{YType::boolean, "valid"}
    	,
    stats_info(std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo>())
{
    stats_info->parent = this;
    children["stats-info"] = stats_info.get();

    yang_name = "pbc-stats"; yang_parent_name = "pbc-statistics";
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::~PbcStats()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::has_data() const
{
    return asic_instance.is_set
	|| chip_ver.is_set
	|| rack_no.is_set
	|| slot_no.is_set
	|| valid.is_set
	|| (stats_info !=  nullptr && stats_info->has_data());
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::has_operation() const
{
    return is_set(operation)
	|| is_set(asic_instance.operation)
	|| is_set(chip_ver.operation)
	|| is_set(rack_no.operation)
	|| is_set(slot_no.operation)
	|| is_set(valid.operation)
	|| (stats_info !=  nullptr && stats_info->has_operation());
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbc-stats";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::get_entity_path(Entity* ancestor) const
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

    if (asic_instance.is_set || is_set(asic_instance.operation)) leaf_name_data.push_back(asic_instance.get_name_leafdata());
    if (chip_ver.is_set || is_set(chip_ver.operation)) leaf_name_data.push_back(chip_ver.get_name_leafdata());
    if (rack_no.is_set || is_set(rack_no.operation)) leaf_name_data.push_back(rack_no.get_name_leafdata());
    if (slot_no.is_set || is_set(slot_no.operation)) leaf_name_data.push_back(slot_no.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stats-info")
    {
        if(stats_info != nullptr)
        {
            children["stats-info"] = stats_info.get();
        }
        else
        {
            stats_info = std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo>();
            stats_info->parent = this;
            children["stats-info"] = stats_info.get();
        }
        return children.at("stats-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::get_children()
{
    if(children.find("stats-info") == children.end())
    {
        if(stats_info != nullptr)
        {
            children["stats-info"] = stats_info.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asic-instance")
    {
        asic_instance = value;
    }
    if(value_path == "chip-ver")
    {
        chip_ver = value;
    }
    if(value_path == "rack-no")
    {
        rack_no = value;
    }
    if(value_path == "slot-no")
    {
        slot_no = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStatistics()
    :
    pbc_stats(std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats>())
{
    pbc_stats->parent = this;
    children["pbc-stats"] = pbc_stats.get();

    yang_name = "pbc-statistics"; yang_parent_name = "statistics-asic-instance";
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::~PbcStatistics()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::has_data() const
{
    return (pbc_stats !=  nullptr && pbc_stats->has_data());
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::has_operation() const
{
    return is_set(operation)
	|| (pbc_stats !=  nullptr && pbc_stats->has_operation());
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbc-statistics";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pbc-stats")
    {
        if(pbc_stats != nullptr)
        {
            children["pbc-stats"] = pbc_stats.get();
        }
        else
        {
            pbc_stats = std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats>();
            pbc_stats->parent = this;
            children["pbc-stats"] = pbc_stats.get();
        }
        return children.at("pbc-stats");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::get_children()
{
    if(children.find("pbc-stats") == children.end())
    {
        if(pbc_stats != nullptr)
        {
            children["pbc-stats"] = pbc_stats.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus::LinkErrorStatus()
    :
    	error_token_count{YType::uint32, "error-token-count"},
	 link_code_group_error{YType::uint32, "link-code-group-error"},
	 link_crc_error{YType::uint32, "link-crc-error"},
	 link_mis_align_error{YType::uint32, "link-mis-align-error"},
	 link_no_sig_accept_error{YType::uint32, "link-no-sig-accept-error"},
	 link_no_sig_lock_error{YType::uint32, "link-no-sig-lock-error"},
	 link_size_error{YType::uint32, "link-size-error"},
	 link_tokens_error{YType::uint32, "link-tokens-error"}
{
    yang_name = "link-error-status"; yang_parent_name = "aggr-stats";
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus::~LinkErrorStatus()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus::has_data() const
{
    return error_token_count.is_set
	|| link_code_group_error.is_set
	|| link_crc_error.is_set
	|| link_mis_align_error.is_set
	|| link_no_sig_accept_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_size_error.is_set
	|| link_tokens_error.is_set;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(error_token_count.operation)
	|| is_set(link_code_group_error.operation)
	|| is_set(link_crc_error.operation)
	|| is_set(link_mis_align_error.operation)
	|| is_set(link_no_sig_accept_error.operation)
	|| is_set(link_no_sig_lock_error.operation)
	|| is_set(link_size_error.operation)
	|| is_set(link_tokens_error.operation);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-error-status";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus::get_entity_path(Entity* ancestor) const
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

    if (error_token_count.is_set || is_set(error_token_count.operation)) leaf_name_data.push_back(error_token_count.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.operation)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_crc_error.is_set || is_set(link_crc_error.operation)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.operation)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_no_sig_accept_error.is_set || is_set(link_no_sig_accept_error.operation)) leaf_name_data.push_back(link_no_sig_accept_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.operation)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.operation)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_tokens_error.is_set || is_set(link_tokens_error.operation)) leaf_name_data.push_back(link_tokens_error.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus::get_children()
{
    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error-token-count")
    {
        error_token_count = value;
    }
    if(value_path == "link-code-group-error")
    {
        link_code_group_error = value;
    }
    if(value_path == "link-crc-error")
    {
        link_crc_error = value;
    }
    if(value_path == "link-mis-align-error")
    {
        link_mis_align_error = value;
    }
    if(value_path == "link-no-sig-accept-error")
    {
        link_no_sig_accept_error = value;
    }
    if(value_path == "link-no-sig-lock-error")
    {
        link_no_sig_lock_error = value;
    }
    if(value_path == "link-size-error")
    {
        link_size_error = value;
    }
    if(value_path == "link-tokens-error")
    {
        link_tokens_error = value;
    }
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters::LinkCounters()
    :
    	rx_8b_10b_code_errors{YType::uint64, "rx-8b-10b-code-errors"},
	 rx_8b_10b_disparity_errors{YType::uint64, "rx-8b-10b-disparity-errors"},
	 rx_asyn_fifo_rate{YType::uint64, "rx-asyn-fifo-rate"},
	 rx_control_cells_counter{YType::uint64, "rx-control-cells-counter"},
	 rx_crc_errors_counter{YType::uint64, "rx-crc-errors-counter"},
	 rx_data_byte_counter{YType::uint64, "rx-data-byte-counter"},
	 rx_data_cell_counter{YType::uint64, "rx-data-cell-counter"},
	 rx_dropped_retransmitted_control{YType::uint64, "rx-dropped-retransmitted-control"},
	 rx_lfec_fec_correctable_error{YType::uint64, "rx-lfec-fec-correctable-error"},
	 rx_lfec_fec_uncorrectable_errors{YType::uint64, "rx-lfec-fec-uncorrectable-errors"},
	 tx_asyn_fifo_rate{YType::uint64, "tx-asyn-fifo-rate"},
	 tx_control_cells_counter{YType::uint64, "tx-control-cells-counter"},
	 tx_data_byte_counter{YType::uint64, "tx-data-byte-counter"},
	 tx_data_cell_counter{YType::uint64, "tx-data-cell-counter"}
{
    yang_name = "link-counters"; yang_parent_name = "aggr-stats";
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters::~LinkCounters()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters::has_data() const
{
    return rx_8b_10b_code_errors.is_set
	|| rx_8b_10b_disparity_errors.is_set
	|| rx_asyn_fifo_rate.is_set
	|| rx_control_cells_counter.is_set
	|| rx_crc_errors_counter.is_set
	|| rx_data_byte_counter.is_set
	|| rx_data_cell_counter.is_set
	|| rx_dropped_retransmitted_control.is_set
	|| rx_lfec_fec_correctable_error.is_set
	|| rx_lfec_fec_uncorrectable_errors.is_set
	|| tx_asyn_fifo_rate.is_set
	|| tx_control_cells_counter.is_set
	|| tx_data_byte_counter.is_set
	|| tx_data_cell_counter.is_set;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(rx_8b_10b_code_errors.operation)
	|| is_set(rx_8b_10b_disparity_errors.operation)
	|| is_set(rx_asyn_fifo_rate.operation)
	|| is_set(rx_control_cells_counter.operation)
	|| is_set(rx_crc_errors_counter.operation)
	|| is_set(rx_data_byte_counter.operation)
	|| is_set(rx_data_cell_counter.operation)
	|| is_set(rx_dropped_retransmitted_control.operation)
	|| is_set(rx_lfec_fec_correctable_error.operation)
	|| is_set(rx_lfec_fec_uncorrectable_errors.operation)
	|| is_set(tx_asyn_fifo_rate.operation)
	|| is_set(tx_control_cells_counter.operation)
	|| is_set(tx_data_byte_counter.operation)
	|| is_set(tx_data_cell_counter.operation);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-counters";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters::get_entity_path(Entity* ancestor) const
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

    if (rx_8b_10b_code_errors.is_set || is_set(rx_8b_10b_code_errors.operation)) leaf_name_data.push_back(rx_8b_10b_code_errors.get_name_leafdata());
    if (rx_8b_10b_disparity_errors.is_set || is_set(rx_8b_10b_disparity_errors.operation)) leaf_name_data.push_back(rx_8b_10b_disparity_errors.get_name_leafdata());
    if (rx_asyn_fifo_rate.is_set || is_set(rx_asyn_fifo_rate.operation)) leaf_name_data.push_back(rx_asyn_fifo_rate.get_name_leafdata());
    if (rx_control_cells_counter.is_set || is_set(rx_control_cells_counter.operation)) leaf_name_data.push_back(rx_control_cells_counter.get_name_leafdata());
    if (rx_crc_errors_counter.is_set || is_set(rx_crc_errors_counter.operation)) leaf_name_data.push_back(rx_crc_errors_counter.get_name_leafdata());
    if (rx_data_byte_counter.is_set || is_set(rx_data_byte_counter.operation)) leaf_name_data.push_back(rx_data_byte_counter.get_name_leafdata());
    if (rx_data_cell_counter.is_set || is_set(rx_data_cell_counter.operation)) leaf_name_data.push_back(rx_data_cell_counter.get_name_leafdata());
    if (rx_dropped_retransmitted_control.is_set || is_set(rx_dropped_retransmitted_control.operation)) leaf_name_data.push_back(rx_dropped_retransmitted_control.get_name_leafdata());
    if (rx_lfec_fec_correctable_error.is_set || is_set(rx_lfec_fec_correctable_error.operation)) leaf_name_data.push_back(rx_lfec_fec_correctable_error.get_name_leafdata());
    if (rx_lfec_fec_uncorrectable_errors.is_set || is_set(rx_lfec_fec_uncorrectable_errors.operation)) leaf_name_data.push_back(rx_lfec_fec_uncorrectable_errors.get_name_leafdata());
    if (tx_asyn_fifo_rate.is_set || is_set(tx_asyn_fifo_rate.operation)) leaf_name_data.push_back(tx_asyn_fifo_rate.get_name_leafdata());
    if (tx_control_cells_counter.is_set || is_set(tx_control_cells_counter.operation)) leaf_name_data.push_back(tx_control_cells_counter.get_name_leafdata());
    if (tx_data_byte_counter.is_set || is_set(tx_data_byte_counter.operation)) leaf_name_data.push_back(tx_data_byte_counter.get_name_leafdata());
    if (tx_data_cell_counter.is_set || is_set(tx_data_cell_counter.operation)) leaf_name_data.push_back(tx_data_cell_counter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters::get_children()
{
    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rx-8b-10b-code-errors")
    {
        rx_8b_10b_code_errors = value;
    }
    if(value_path == "rx-8b-10b-disparity-errors")
    {
        rx_8b_10b_disparity_errors = value;
    }
    if(value_path == "rx-asyn-fifo-rate")
    {
        rx_asyn_fifo_rate = value;
    }
    if(value_path == "rx-control-cells-counter")
    {
        rx_control_cells_counter = value;
    }
    if(value_path == "rx-crc-errors-counter")
    {
        rx_crc_errors_counter = value;
    }
    if(value_path == "rx-data-byte-counter")
    {
        rx_data_byte_counter = value;
    }
    if(value_path == "rx-data-cell-counter")
    {
        rx_data_cell_counter = value;
    }
    if(value_path == "rx-dropped-retransmitted-control")
    {
        rx_dropped_retransmitted_control = value;
    }
    if(value_path == "rx-lfec-fec-correctable-error")
    {
        rx_lfec_fec_correctable_error = value;
    }
    if(value_path == "rx-lfec-fec-uncorrectable-errors")
    {
        rx_lfec_fec_uncorrectable_errors = value;
    }
    if(value_path == "tx-asyn-fifo-rate")
    {
        tx_asyn_fifo_rate = value;
    }
    if(value_path == "tx-control-cells-counter")
    {
        tx_control_cells_counter = value;
    }
    if(value_path == "tx-data-byte-counter")
    {
        tx_data_byte_counter = value;
    }
    if(value_path == "tx-data-cell-counter")
    {
        tx_data_cell_counter = value;
    }
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus::OvfStatus()
    :
    	rx_8b_10b_code_errors{YType::str, "rx-8b-10b-code-errors"},
	 rx_8b_10b_disparity_errors{YType::str, "rx-8b-10b-disparity-errors"},
	 rx_asyn_fifo_rate{YType::str, "rx-asyn-fifo-rate"},
	 rx_control_cells_counter{YType::str, "rx-control-cells-counter"},
	 rx_crc_errors_counter{YType::str, "rx-crc-errors-counter"},
	 rx_data_byte_counter{YType::str, "rx-data-byte-counter"},
	 rx_data_cell_counter{YType::str, "rx-data-cell-counter"},
	 rx_dropped_retransmitted_control{YType::str, "rx-dropped-retransmitted-control"},
	 rx_lfec_fec_correctable_error{YType::str, "rx-lfec-fec-correctable-error"},
	 rx_lfec_fec_uncorrectable_errors{YType::str, "rx-lfec-fec-uncorrectable-errors"},
	 tx_asyn_fifo_rate{YType::str, "tx-asyn-fifo-rate"},
	 tx_control_cells_counter{YType::str, "tx-control-cells-counter"},
	 tx_data_byte_counter{YType::str, "tx-data-byte-counter"},
	 tx_data_cell_counter{YType::str, "tx-data-cell-counter"}
{
    yang_name = "ovf-status"; yang_parent_name = "aggr-stats";
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus::~OvfStatus()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus::has_data() const
{
    return rx_8b_10b_code_errors.is_set
	|| rx_8b_10b_disparity_errors.is_set
	|| rx_asyn_fifo_rate.is_set
	|| rx_control_cells_counter.is_set
	|| rx_crc_errors_counter.is_set
	|| rx_data_byte_counter.is_set
	|| rx_data_cell_counter.is_set
	|| rx_dropped_retransmitted_control.is_set
	|| rx_lfec_fec_correctable_error.is_set
	|| rx_lfec_fec_uncorrectable_errors.is_set
	|| tx_asyn_fifo_rate.is_set
	|| tx_control_cells_counter.is_set
	|| tx_data_byte_counter.is_set
	|| tx_data_cell_counter.is_set;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(rx_8b_10b_code_errors.operation)
	|| is_set(rx_8b_10b_disparity_errors.operation)
	|| is_set(rx_asyn_fifo_rate.operation)
	|| is_set(rx_control_cells_counter.operation)
	|| is_set(rx_crc_errors_counter.operation)
	|| is_set(rx_data_byte_counter.operation)
	|| is_set(rx_data_cell_counter.operation)
	|| is_set(rx_dropped_retransmitted_control.operation)
	|| is_set(rx_lfec_fec_correctable_error.operation)
	|| is_set(rx_lfec_fec_uncorrectable_errors.operation)
	|| is_set(tx_asyn_fifo_rate.operation)
	|| is_set(tx_control_cells_counter.operation)
	|| is_set(tx_data_byte_counter.operation)
	|| is_set(tx_data_cell_counter.operation);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ovf-status";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus::get_entity_path(Entity* ancestor) const
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

    if (rx_8b_10b_code_errors.is_set || is_set(rx_8b_10b_code_errors.operation)) leaf_name_data.push_back(rx_8b_10b_code_errors.get_name_leafdata());
    if (rx_8b_10b_disparity_errors.is_set || is_set(rx_8b_10b_disparity_errors.operation)) leaf_name_data.push_back(rx_8b_10b_disparity_errors.get_name_leafdata());
    if (rx_asyn_fifo_rate.is_set || is_set(rx_asyn_fifo_rate.operation)) leaf_name_data.push_back(rx_asyn_fifo_rate.get_name_leafdata());
    if (rx_control_cells_counter.is_set || is_set(rx_control_cells_counter.operation)) leaf_name_data.push_back(rx_control_cells_counter.get_name_leafdata());
    if (rx_crc_errors_counter.is_set || is_set(rx_crc_errors_counter.operation)) leaf_name_data.push_back(rx_crc_errors_counter.get_name_leafdata());
    if (rx_data_byte_counter.is_set || is_set(rx_data_byte_counter.operation)) leaf_name_data.push_back(rx_data_byte_counter.get_name_leafdata());
    if (rx_data_cell_counter.is_set || is_set(rx_data_cell_counter.operation)) leaf_name_data.push_back(rx_data_cell_counter.get_name_leafdata());
    if (rx_dropped_retransmitted_control.is_set || is_set(rx_dropped_retransmitted_control.operation)) leaf_name_data.push_back(rx_dropped_retransmitted_control.get_name_leafdata());
    if (rx_lfec_fec_correctable_error.is_set || is_set(rx_lfec_fec_correctable_error.operation)) leaf_name_data.push_back(rx_lfec_fec_correctable_error.get_name_leafdata());
    if (rx_lfec_fec_uncorrectable_errors.is_set || is_set(rx_lfec_fec_uncorrectable_errors.operation)) leaf_name_data.push_back(rx_lfec_fec_uncorrectable_errors.get_name_leafdata());
    if (tx_asyn_fifo_rate.is_set || is_set(tx_asyn_fifo_rate.operation)) leaf_name_data.push_back(tx_asyn_fifo_rate.get_name_leafdata());
    if (tx_control_cells_counter.is_set || is_set(tx_control_cells_counter.operation)) leaf_name_data.push_back(tx_control_cells_counter.get_name_leafdata());
    if (tx_data_byte_counter.is_set || is_set(tx_data_byte_counter.operation)) leaf_name_data.push_back(tx_data_byte_counter.get_name_leafdata());
    if (tx_data_cell_counter.is_set || is_set(tx_data_cell_counter.operation)) leaf_name_data.push_back(tx_data_cell_counter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus::get_children()
{
    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rx-8b-10b-code-errors")
    {
        rx_8b_10b_code_errors = value;
    }
    if(value_path == "rx-8b-10b-disparity-errors")
    {
        rx_8b_10b_disparity_errors = value;
    }
    if(value_path == "rx-asyn-fifo-rate")
    {
        rx_asyn_fifo_rate = value;
    }
    if(value_path == "rx-control-cells-counter")
    {
        rx_control_cells_counter = value;
    }
    if(value_path == "rx-crc-errors-counter")
    {
        rx_crc_errors_counter = value;
    }
    if(value_path == "rx-data-byte-counter")
    {
        rx_data_byte_counter = value;
    }
    if(value_path == "rx-data-cell-counter")
    {
        rx_data_cell_counter = value;
    }
    if(value_path == "rx-dropped-retransmitted-control")
    {
        rx_dropped_retransmitted_control = value;
    }
    if(value_path == "rx-lfec-fec-correctable-error")
    {
        rx_lfec_fec_correctable_error = value;
    }
    if(value_path == "rx-lfec-fec-uncorrectable-errors")
    {
        rx_lfec_fec_uncorrectable_errors = value;
    }
    if(value_path == "tx-asyn-fifo-rate")
    {
        tx_asyn_fifo_rate = value;
    }
    if(value_path == "tx-control-cells-counter")
    {
        tx_control_cells_counter = value;
    }
    if(value_path == "tx-data-byte-counter")
    {
        tx_data_byte_counter = value;
    }
    if(value_path == "tx-data-cell-counter")
    {
        tx_data_cell_counter = value;
    }
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::AggrStats()
    :
    link_counters(std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters>())
	,link_error_status(std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus>())
	,ovf_status(std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus>())
{
    link_counters->parent = this;
    children["link-counters"] = link_counters.get();

    link_error_status->parent = this;
    children["link-error-status"] = link_error_status.get();

    ovf_status->parent = this;
    children["ovf-status"] = ovf_status.get();

    yang_name = "aggr-stats"; yang_parent_name = "fmac-asic";
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::~AggrStats()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::has_data() const
{
    return (link_counters !=  nullptr && link_counters->has_data())
	|| (link_error_status !=  nullptr && link_error_status->has_data())
	|| (ovf_status !=  nullptr && ovf_status->has_data());
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::has_operation() const
{
    return is_set(operation)
	|| (link_counters !=  nullptr && link_counters->has_operation())
	|| (link_error_status !=  nullptr && link_error_status->has_operation())
	|| (ovf_status !=  nullptr && ovf_status->has_operation());
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggr-stats";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-counters")
    {
        if(link_counters != nullptr)
        {
            children["link-counters"] = link_counters.get();
        }
        else
        {
            link_counters = std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters>();
            link_counters->parent = this;
            children["link-counters"] = link_counters.get();
        }
        return children.at("link-counters");
    }

    if(child_yang_name == "link-error-status")
    {
        if(link_error_status != nullptr)
        {
            children["link-error-status"] = link_error_status.get();
        }
        else
        {
            link_error_status = std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus>();
            link_error_status->parent = this;
            children["link-error-status"] = link_error_status.get();
        }
        return children.at("link-error-status");
    }

    if(child_yang_name == "ovf-status")
    {
        if(ovf_status != nullptr)
        {
            children["ovf-status"] = ovf_status.get();
        }
        else
        {
            ovf_status = std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus>();
            ovf_status->parent = this;
            children["ovf-status"] = ovf_status.get();
        }
        return children.at("ovf-status");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::get_children()
{
    if(children.find("link-counters") == children.end())
    {
        if(link_counters != nullptr)
        {
            children["link-counters"] = link_counters.get();
        }
    }

    if(children.find("link-error-status") == children.end())
    {
        if(link_error_status != nullptr)
        {
            children["link-error-status"] = link_error_status.get();
        }
    }

    if(children.find("ovf-status") == children.end())
    {
        if(ovf_status != nullptr)
        {
            children["ovf-status"] = ovf_status.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus::LinkErrorStatus()
    :
    	error_token_count{YType::uint32, "error-token-count"},
	 link_code_group_error{YType::uint32, "link-code-group-error"},
	 link_crc_error{YType::uint32, "link-crc-error"},
	 link_mis_align_error{YType::uint32, "link-mis-align-error"},
	 link_no_sig_accept_error{YType::uint32, "link-no-sig-accept-error"},
	 link_no_sig_lock_error{YType::uint32, "link-no-sig-lock-error"},
	 link_size_error{YType::uint32, "link-size-error"},
	 link_tokens_error{YType::uint32, "link-tokens-error"}
{
    yang_name = "link-error-status"; yang_parent_name = "incr-stats";
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus::~LinkErrorStatus()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus::has_data() const
{
    return error_token_count.is_set
	|| link_code_group_error.is_set
	|| link_crc_error.is_set
	|| link_mis_align_error.is_set
	|| link_no_sig_accept_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_size_error.is_set
	|| link_tokens_error.is_set;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(error_token_count.operation)
	|| is_set(link_code_group_error.operation)
	|| is_set(link_crc_error.operation)
	|| is_set(link_mis_align_error.operation)
	|| is_set(link_no_sig_accept_error.operation)
	|| is_set(link_no_sig_lock_error.operation)
	|| is_set(link_size_error.operation)
	|| is_set(link_tokens_error.operation);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-error-status";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus::get_entity_path(Entity* ancestor) const
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

    if (error_token_count.is_set || is_set(error_token_count.operation)) leaf_name_data.push_back(error_token_count.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.operation)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_crc_error.is_set || is_set(link_crc_error.operation)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.operation)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_no_sig_accept_error.is_set || is_set(link_no_sig_accept_error.operation)) leaf_name_data.push_back(link_no_sig_accept_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.operation)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.operation)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_tokens_error.is_set || is_set(link_tokens_error.operation)) leaf_name_data.push_back(link_tokens_error.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus::get_children()
{
    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error-token-count")
    {
        error_token_count = value;
    }
    if(value_path == "link-code-group-error")
    {
        link_code_group_error = value;
    }
    if(value_path == "link-crc-error")
    {
        link_crc_error = value;
    }
    if(value_path == "link-mis-align-error")
    {
        link_mis_align_error = value;
    }
    if(value_path == "link-no-sig-accept-error")
    {
        link_no_sig_accept_error = value;
    }
    if(value_path == "link-no-sig-lock-error")
    {
        link_no_sig_lock_error = value;
    }
    if(value_path == "link-size-error")
    {
        link_size_error = value;
    }
    if(value_path == "link-tokens-error")
    {
        link_tokens_error = value;
    }
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters::LinkCounters()
    :
    	rx_8b_10b_code_errors{YType::uint64, "rx-8b-10b-code-errors"},
	 rx_8b_10b_disparity_errors{YType::uint64, "rx-8b-10b-disparity-errors"},
	 rx_asyn_fifo_rate{YType::uint64, "rx-asyn-fifo-rate"},
	 rx_control_cells_counter{YType::uint64, "rx-control-cells-counter"},
	 rx_crc_errors_counter{YType::uint64, "rx-crc-errors-counter"},
	 rx_data_byte_counter{YType::uint64, "rx-data-byte-counter"},
	 rx_data_cell_counter{YType::uint64, "rx-data-cell-counter"},
	 rx_dropped_retransmitted_control{YType::uint64, "rx-dropped-retransmitted-control"},
	 rx_lfec_fec_correctable_error{YType::uint64, "rx-lfec-fec-correctable-error"},
	 rx_lfec_fec_uncorrectable_errors{YType::uint64, "rx-lfec-fec-uncorrectable-errors"},
	 tx_asyn_fifo_rate{YType::uint64, "tx-asyn-fifo-rate"},
	 tx_control_cells_counter{YType::uint64, "tx-control-cells-counter"},
	 tx_data_byte_counter{YType::uint64, "tx-data-byte-counter"},
	 tx_data_cell_counter{YType::uint64, "tx-data-cell-counter"}
{
    yang_name = "link-counters"; yang_parent_name = "incr-stats";
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters::~LinkCounters()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters::has_data() const
{
    return rx_8b_10b_code_errors.is_set
	|| rx_8b_10b_disparity_errors.is_set
	|| rx_asyn_fifo_rate.is_set
	|| rx_control_cells_counter.is_set
	|| rx_crc_errors_counter.is_set
	|| rx_data_byte_counter.is_set
	|| rx_data_cell_counter.is_set
	|| rx_dropped_retransmitted_control.is_set
	|| rx_lfec_fec_correctable_error.is_set
	|| rx_lfec_fec_uncorrectable_errors.is_set
	|| tx_asyn_fifo_rate.is_set
	|| tx_control_cells_counter.is_set
	|| tx_data_byte_counter.is_set
	|| tx_data_cell_counter.is_set;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(rx_8b_10b_code_errors.operation)
	|| is_set(rx_8b_10b_disparity_errors.operation)
	|| is_set(rx_asyn_fifo_rate.operation)
	|| is_set(rx_control_cells_counter.operation)
	|| is_set(rx_crc_errors_counter.operation)
	|| is_set(rx_data_byte_counter.operation)
	|| is_set(rx_data_cell_counter.operation)
	|| is_set(rx_dropped_retransmitted_control.operation)
	|| is_set(rx_lfec_fec_correctable_error.operation)
	|| is_set(rx_lfec_fec_uncorrectable_errors.operation)
	|| is_set(tx_asyn_fifo_rate.operation)
	|| is_set(tx_control_cells_counter.operation)
	|| is_set(tx_data_byte_counter.operation)
	|| is_set(tx_data_cell_counter.operation);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-counters";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters::get_entity_path(Entity* ancestor) const
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

    if (rx_8b_10b_code_errors.is_set || is_set(rx_8b_10b_code_errors.operation)) leaf_name_data.push_back(rx_8b_10b_code_errors.get_name_leafdata());
    if (rx_8b_10b_disparity_errors.is_set || is_set(rx_8b_10b_disparity_errors.operation)) leaf_name_data.push_back(rx_8b_10b_disparity_errors.get_name_leafdata());
    if (rx_asyn_fifo_rate.is_set || is_set(rx_asyn_fifo_rate.operation)) leaf_name_data.push_back(rx_asyn_fifo_rate.get_name_leafdata());
    if (rx_control_cells_counter.is_set || is_set(rx_control_cells_counter.operation)) leaf_name_data.push_back(rx_control_cells_counter.get_name_leafdata());
    if (rx_crc_errors_counter.is_set || is_set(rx_crc_errors_counter.operation)) leaf_name_data.push_back(rx_crc_errors_counter.get_name_leafdata());
    if (rx_data_byte_counter.is_set || is_set(rx_data_byte_counter.operation)) leaf_name_data.push_back(rx_data_byte_counter.get_name_leafdata());
    if (rx_data_cell_counter.is_set || is_set(rx_data_cell_counter.operation)) leaf_name_data.push_back(rx_data_cell_counter.get_name_leafdata());
    if (rx_dropped_retransmitted_control.is_set || is_set(rx_dropped_retransmitted_control.operation)) leaf_name_data.push_back(rx_dropped_retransmitted_control.get_name_leafdata());
    if (rx_lfec_fec_correctable_error.is_set || is_set(rx_lfec_fec_correctable_error.operation)) leaf_name_data.push_back(rx_lfec_fec_correctable_error.get_name_leafdata());
    if (rx_lfec_fec_uncorrectable_errors.is_set || is_set(rx_lfec_fec_uncorrectable_errors.operation)) leaf_name_data.push_back(rx_lfec_fec_uncorrectable_errors.get_name_leafdata());
    if (tx_asyn_fifo_rate.is_set || is_set(tx_asyn_fifo_rate.operation)) leaf_name_data.push_back(tx_asyn_fifo_rate.get_name_leafdata());
    if (tx_control_cells_counter.is_set || is_set(tx_control_cells_counter.operation)) leaf_name_data.push_back(tx_control_cells_counter.get_name_leafdata());
    if (tx_data_byte_counter.is_set || is_set(tx_data_byte_counter.operation)) leaf_name_data.push_back(tx_data_byte_counter.get_name_leafdata());
    if (tx_data_cell_counter.is_set || is_set(tx_data_cell_counter.operation)) leaf_name_data.push_back(tx_data_cell_counter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters::get_children()
{
    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rx-8b-10b-code-errors")
    {
        rx_8b_10b_code_errors = value;
    }
    if(value_path == "rx-8b-10b-disparity-errors")
    {
        rx_8b_10b_disparity_errors = value;
    }
    if(value_path == "rx-asyn-fifo-rate")
    {
        rx_asyn_fifo_rate = value;
    }
    if(value_path == "rx-control-cells-counter")
    {
        rx_control_cells_counter = value;
    }
    if(value_path == "rx-crc-errors-counter")
    {
        rx_crc_errors_counter = value;
    }
    if(value_path == "rx-data-byte-counter")
    {
        rx_data_byte_counter = value;
    }
    if(value_path == "rx-data-cell-counter")
    {
        rx_data_cell_counter = value;
    }
    if(value_path == "rx-dropped-retransmitted-control")
    {
        rx_dropped_retransmitted_control = value;
    }
    if(value_path == "rx-lfec-fec-correctable-error")
    {
        rx_lfec_fec_correctable_error = value;
    }
    if(value_path == "rx-lfec-fec-uncorrectable-errors")
    {
        rx_lfec_fec_uncorrectable_errors = value;
    }
    if(value_path == "tx-asyn-fifo-rate")
    {
        tx_asyn_fifo_rate = value;
    }
    if(value_path == "tx-control-cells-counter")
    {
        tx_control_cells_counter = value;
    }
    if(value_path == "tx-data-byte-counter")
    {
        tx_data_byte_counter = value;
    }
    if(value_path == "tx-data-cell-counter")
    {
        tx_data_cell_counter = value;
    }
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus::OvfStatus()
    :
    	rx_8b_10b_code_errors{YType::str, "rx-8b-10b-code-errors"},
	 rx_8b_10b_disparity_errors{YType::str, "rx-8b-10b-disparity-errors"},
	 rx_asyn_fifo_rate{YType::str, "rx-asyn-fifo-rate"},
	 rx_control_cells_counter{YType::str, "rx-control-cells-counter"},
	 rx_crc_errors_counter{YType::str, "rx-crc-errors-counter"},
	 rx_data_byte_counter{YType::str, "rx-data-byte-counter"},
	 rx_data_cell_counter{YType::str, "rx-data-cell-counter"},
	 rx_dropped_retransmitted_control{YType::str, "rx-dropped-retransmitted-control"},
	 rx_lfec_fec_correctable_error{YType::str, "rx-lfec-fec-correctable-error"},
	 rx_lfec_fec_uncorrectable_errors{YType::str, "rx-lfec-fec-uncorrectable-errors"},
	 tx_asyn_fifo_rate{YType::str, "tx-asyn-fifo-rate"},
	 tx_control_cells_counter{YType::str, "tx-control-cells-counter"},
	 tx_data_byte_counter{YType::str, "tx-data-byte-counter"},
	 tx_data_cell_counter{YType::str, "tx-data-cell-counter"}
{
    yang_name = "ovf-status"; yang_parent_name = "incr-stats";
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus::~OvfStatus()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus::has_data() const
{
    return rx_8b_10b_code_errors.is_set
	|| rx_8b_10b_disparity_errors.is_set
	|| rx_asyn_fifo_rate.is_set
	|| rx_control_cells_counter.is_set
	|| rx_crc_errors_counter.is_set
	|| rx_data_byte_counter.is_set
	|| rx_data_cell_counter.is_set
	|| rx_dropped_retransmitted_control.is_set
	|| rx_lfec_fec_correctable_error.is_set
	|| rx_lfec_fec_uncorrectable_errors.is_set
	|| tx_asyn_fifo_rate.is_set
	|| tx_control_cells_counter.is_set
	|| tx_data_byte_counter.is_set
	|| tx_data_cell_counter.is_set;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(rx_8b_10b_code_errors.operation)
	|| is_set(rx_8b_10b_disparity_errors.operation)
	|| is_set(rx_asyn_fifo_rate.operation)
	|| is_set(rx_control_cells_counter.operation)
	|| is_set(rx_crc_errors_counter.operation)
	|| is_set(rx_data_byte_counter.operation)
	|| is_set(rx_data_cell_counter.operation)
	|| is_set(rx_dropped_retransmitted_control.operation)
	|| is_set(rx_lfec_fec_correctable_error.operation)
	|| is_set(rx_lfec_fec_uncorrectable_errors.operation)
	|| is_set(tx_asyn_fifo_rate.operation)
	|| is_set(tx_control_cells_counter.operation)
	|| is_set(tx_data_byte_counter.operation)
	|| is_set(tx_data_cell_counter.operation);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ovf-status";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus::get_entity_path(Entity* ancestor) const
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

    if (rx_8b_10b_code_errors.is_set || is_set(rx_8b_10b_code_errors.operation)) leaf_name_data.push_back(rx_8b_10b_code_errors.get_name_leafdata());
    if (rx_8b_10b_disparity_errors.is_set || is_set(rx_8b_10b_disparity_errors.operation)) leaf_name_data.push_back(rx_8b_10b_disparity_errors.get_name_leafdata());
    if (rx_asyn_fifo_rate.is_set || is_set(rx_asyn_fifo_rate.operation)) leaf_name_data.push_back(rx_asyn_fifo_rate.get_name_leafdata());
    if (rx_control_cells_counter.is_set || is_set(rx_control_cells_counter.operation)) leaf_name_data.push_back(rx_control_cells_counter.get_name_leafdata());
    if (rx_crc_errors_counter.is_set || is_set(rx_crc_errors_counter.operation)) leaf_name_data.push_back(rx_crc_errors_counter.get_name_leafdata());
    if (rx_data_byte_counter.is_set || is_set(rx_data_byte_counter.operation)) leaf_name_data.push_back(rx_data_byte_counter.get_name_leafdata());
    if (rx_data_cell_counter.is_set || is_set(rx_data_cell_counter.operation)) leaf_name_data.push_back(rx_data_cell_counter.get_name_leafdata());
    if (rx_dropped_retransmitted_control.is_set || is_set(rx_dropped_retransmitted_control.operation)) leaf_name_data.push_back(rx_dropped_retransmitted_control.get_name_leafdata());
    if (rx_lfec_fec_correctable_error.is_set || is_set(rx_lfec_fec_correctable_error.operation)) leaf_name_data.push_back(rx_lfec_fec_correctable_error.get_name_leafdata());
    if (rx_lfec_fec_uncorrectable_errors.is_set || is_set(rx_lfec_fec_uncorrectable_errors.operation)) leaf_name_data.push_back(rx_lfec_fec_uncorrectable_errors.get_name_leafdata());
    if (tx_asyn_fifo_rate.is_set || is_set(tx_asyn_fifo_rate.operation)) leaf_name_data.push_back(tx_asyn_fifo_rate.get_name_leafdata());
    if (tx_control_cells_counter.is_set || is_set(tx_control_cells_counter.operation)) leaf_name_data.push_back(tx_control_cells_counter.get_name_leafdata());
    if (tx_data_byte_counter.is_set || is_set(tx_data_byte_counter.operation)) leaf_name_data.push_back(tx_data_byte_counter.get_name_leafdata());
    if (tx_data_cell_counter.is_set || is_set(tx_data_cell_counter.operation)) leaf_name_data.push_back(tx_data_cell_counter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus::get_children()
{
    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rx-8b-10b-code-errors")
    {
        rx_8b_10b_code_errors = value;
    }
    if(value_path == "rx-8b-10b-disparity-errors")
    {
        rx_8b_10b_disparity_errors = value;
    }
    if(value_path == "rx-asyn-fifo-rate")
    {
        rx_asyn_fifo_rate = value;
    }
    if(value_path == "rx-control-cells-counter")
    {
        rx_control_cells_counter = value;
    }
    if(value_path == "rx-crc-errors-counter")
    {
        rx_crc_errors_counter = value;
    }
    if(value_path == "rx-data-byte-counter")
    {
        rx_data_byte_counter = value;
    }
    if(value_path == "rx-data-cell-counter")
    {
        rx_data_cell_counter = value;
    }
    if(value_path == "rx-dropped-retransmitted-control")
    {
        rx_dropped_retransmitted_control = value;
    }
    if(value_path == "rx-lfec-fec-correctable-error")
    {
        rx_lfec_fec_correctable_error = value;
    }
    if(value_path == "rx-lfec-fec-uncorrectable-errors")
    {
        rx_lfec_fec_uncorrectable_errors = value;
    }
    if(value_path == "tx-asyn-fifo-rate")
    {
        tx_asyn_fifo_rate = value;
    }
    if(value_path == "tx-control-cells-counter")
    {
        tx_control_cells_counter = value;
    }
    if(value_path == "tx-data-byte-counter")
    {
        tx_data_byte_counter = value;
    }
    if(value_path == "tx-data-cell-counter")
    {
        tx_data_cell_counter = value;
    }
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::IncrStats()
    :
    link_counters(std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters>())
	,link_error_status(std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus>())
	,ovf_status(std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus>())
{
    link_counters->parent = this;
    children["link-counters"] = link_counters.get();

    link_error_status->parent = this;
    children["link-error-status"] = link_error_status.get();

    ovf_status->parent = this;
    children["ovf-status"] = ovf_status.get();

    yang_name = "incr-stats"; yang_parent_name = "fmac-asic";
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::~IncrStats()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::has_data() const
{
    return (link_counters !=  nullptr && link_counters->has_data())
	|| (link_error_status !=  nullptr && link_error_status->has_data())
	|| (ovf_status !=  nullptr && ovf_status->has_data());
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::has_operation() const
{
    return is_set(operation)
	|| (link_counters !=  nullptr && link_counters->has_operation())
	|| (link_error_status !=  nullptr && link_error_status->has_operation())
	|| (ovf_status !=  nullptr && ovf_status->has_operation());
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incr-stats";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-counters")
    {
        if(link_counters != nullptr)
        {
            children["link-counters"] = link_counters.get();
        }
        else
        {
            link_counters = std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters>();
            link_counters->parent = this;
            children["link-counters"] = link_counters.get();
        }
        return children.at("link-counters");
    }

    if(child_yang_name == "link-error-status")
    {
        if(link_error_status != nullptr)
        {
            children["link-error-status"] = link_error_status.get();
        }
        else
        {
            link_error_status = std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus>();
            link_error_status->parent = this;
            children["link-error-status"] = link_error_status.get();
        }
        return children.at("link-error-status");
    }

    if(child_yang_name == "ovf-status")
    {
        if(ovf_status != nullptr)
        {
            children["ovf-status"] = ovf_status.get();
        }
        else
        {
            ovf_status = std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus>();
            ovf_status->parent = this;
            children["ovf-status"] = ovf_status.get();
        }
        return children.at("ovf-status");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::get_children()
{
    if(children.find("link-counters") == children.end())
    {
        if(link_counters != nullptr)
        {
            children["link-counters"] = link_counters.get();
        }
    }

    if(children.find("link-error-status") == children.end())
    {
        if(link_error_status != nullptr)
        {
            children["link-error-status"] = link_error_status.get();
        }
    }

    if(children.find("ovf-status") == children.end())
    {
        if(ovf_status != nullptr)
        {
            children["ovf-status"] = ovf_status.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::FmacAsic()
    :
    	asic{YType::int32, "asic"},
	 asic_instance{YType::uint32, "asic-instance"},
	 link_no{YType::uint32, "link-no"},
	 link_valid{YType::boolean, "link-valid"},
	 rack_no{YType::uint32, "rack-no"},
	 slot_no{YType::uint32, "slot-no"},
	 valid{YType::boolean, "valid"}
    	,
    aggr_stats(std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats>())
	,incr_stats(std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats>())
{
    aggr_stats->parent = this;
    children["aggr-stats"] = aggr_stats.get();

    incr_stats->parent = this;
    children["incr-stats"] = incr_stats.get();

    yang_name = "fmac-asic"; yang_parent_name = "fmac-link";
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::~FmacAsic()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::has_data() const
{
    return asic.is_set
	|| asic_instance.is_set
	|| link_no.is_set
	|| link_valid.is_set
	|| rack_no.is_set
	|| slot_no.is_set
	|| valid.is_set
	|| (aggr_stats !=  nullptr && aggr_stats->has_data())
	|| (incr_stats !=  nullptr && incr_stats->has_data());
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::has_operation() const
{
    return is_set(operation)
	|| is_set(asic.operation)
	|| is_set(asic_instance.operation)
	|| is_set(link_no.operation)
	|| is_set(link_valid.operation)
	|| is_set(rack_no.operation)
	|| is_set(slot_no.operation)
	|| is_set(valid.operation)
	|| (aggr_stats !=  nullptr && aggr_stats->has_operation())
	|| (incr_stats !=  nullptr && incr_stats->has_operation());
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fmac-asic" <<"[asic='" <<asic.get() <<"']";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::get_entity_path(Entity* ancestor) const
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

    if (asic.is_set || is_set(asic.operation)) leaf_name_data.push_back(asic.get_name_leafdata());
    if (asic_instance.is_set || is_set(asic_instance.operation)) leaf_name_data.push_back(asic_instance.get_name_leafdata());
    if (link_no.is_set || is_set(link_no.operation)) leaf_name_data.push_back(link_no.get_name_leafdata());
    if (link_valid.is_set || is_set(link_valid.operation)) leaf_name_data.push_back(link_valid.get_name_leafdata());
    if (rack_no.is_set || is_set(rack_no.operation)) leaf_name_data.push_back(rack_no.get_name_leafdata());
    if (slot_no.is_set || is_set(slot_no.operation)) leaf_name_data.push_back(slot_no.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "aggr-stats")
    {
        if(aggr_stats != nullptr)
        {
            children["aggr-stats"] = aggr_stats.get();
        }
        else
        {
            aggr_stats = std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats>();
            aggr_stats->parent = this;
            children["aggr-stats"] = aggr_stats.get();
        }
        return children.at("aggr-stats");
    }

    if(child_yang_name == "incr-stats")
    {
        if(incr_stats != nullptr)
        {
            children["incr-stats"] = incr_stats.get();
        }
        else
        {
            incr_stats = std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats>();
            incr_stats->parent = this;
            children["incr-stats"] = incr_stats.get();
        }
        return children.at("incr-stats");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::get_children()
{
    if(children.find("aggr-stats") == children.end())
    {
        if(aggr_stats != nullptr)
        {
            children["aggr-stats"] = aggr_stats.get();
        }
    }

    if(children.find("incr-stats") == children.end())
    {
        if(incr_stats != nullptr)
        {
            children["incr-stats"] = incr_stats.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asic")
    {
        asic = value;
    }
    if(value_path == "asic-instance")
    {
        asic_instance = value;
    }
    if(value_path == "link-no")
    {
        link_no = value;
    }
    if(value_path == "link-valid")
    {
        link_valid = value;
    }
    if(value_path == "rack-no")
    {
        rack_no = value;
    }
    if(value_path == "slot-no")
    {
        slot_no = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacLink()
    :
    	link{YType::int32, "link"}
{
    yang_name = "fmac-link"; yang_parent_name = "fmac-links";
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::~FmacLink()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::has_data() const
{
    for (std::size_t index=0; index<fmac_asic.size(); index++)
    {
        if(fmac_asic[index]->has_data())
            return true;
    }
    return link.is_set;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::has_operation() const
{
    for (std::size_t index=0; index<fmac_asic.size(); index++)
    {
        if(fmac_asic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(link.operation);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fmac-link" <<"[link='" <<link.get() <<"']";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::get_entity_path(Entity* ancestor) const
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

    if (link.is_set || is_set(link.operation)) leaf_name_data.push_back(link.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fmac-asic")
    {
        for(auto const & c : fmac_asic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic>();
        c->parent = this;
        fmac_asic.push_back(std::move(c));
        children[segment_path] = fmac_asic.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::get_children()
{
    for (auto const & c : fmac_asic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link")
    {
        link = value;
    }
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLinks()
{
    yang_name = "fmac-links"; yang_parent_name = "fmac-statistics";
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::~FmacLinks()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::has_data() const
{
    for (std::size_t index=0; index<fmac_link.size(); index++)
    {
        if(fmac_link[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::has_operation() const
{
    for (std::size_t index=0; index<fmac_link.size(); index++)
    {
        if(fmac_link[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fmac-links";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fmac-link")
    {
        for(auto const & c : fmac_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink>();
        c->parent = this;
        fmac_link.push_back(std::move(c));
        children[segment_path] = fmac_link.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::get_children()
{
    for (auto const & c : fmac_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacStatistics()
    :
    fmac_links(std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks>())
{
    fmac_links->parent = this;
    children["fmac-links"] = fmac_links.get();

    yang_name = "fmac-statistics"; yang_parent_name = "statistics-asic-instance";
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::~FmacStatistics()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::has_data() const
{
    return (fmac_links !=  nullptr && fmac_links->has_data());
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::has_operation() const
{
    return is_set(operation)
	|| (fmac_links !=  nullptr && fmac_links->has_operation());
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fmac-statistics";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fmac-links")
    {
        if(fmac_links != nullptr)
        {
            children["fmac-links"] = fmac_links.get();
        }
        else
        {
            fmac_links = std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks>();
            fmac_links->parent = this;
            children["fmac-links"] = fmac_links.get();
        }
        return children.at("fmac-links");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::get_children()
{
    if(children.find("fmac-links") == children.end())
    {
        if(fmac_links != nullptr)
        {
            children["fmac-links"] = fmac_links.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::StatisticsAsicInstance()
    :
    	instance{YType::uint32, "instance"}
    	,
    fmac_statistics(std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics>())
	,pbc_statistics(std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics>())
{
    fmac_statistics->parent = this;
    children["fmac-statistics"] = fmac_statistics.get();

    pbc_statistics->parent = this;
    children["pbc-statistics"] = pbc_statistics.get();

    yang_name = "statistics-asic-instance"; yang_parent_name = "statistics-asic-instances";
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::~StatisticsAsicInstance()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::has_data() const
{
    return instance.is_set
	|| (fmac_statistics !=  nullptr && fmac_statistics->has_data())
	|| (pbc_statistics !=  nullptr && pbc_statistics->has_data());
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance.operation)
	|| (fmac_statistics !=  nullptr && fmac_statistics->has_operation())
	|| (pbc_statistics !=  nullptr && pbc_statistics->has_operation());
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics-asic-instance" <<"[instance='" <<instance.get() <<"']";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::get_entity_path(Entity* ancestor) const
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

    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fmac-statistics")
    {
        if(fmac_statistics != nullptr)
        {
            children["fmac-statistics"] = fmac_statistics.get();
        }
        else
        {
            fmac_statistics = std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics>();
            fmac_statistics->parent = this;
            children["fmac-statistics"] = fmac_statistics.get();
        }
        return children.at("fmac-statistics");
    }

    if(child_yang_name == "pbc-statistics")
    {
        if(pbc_statistics != nullptr)
        {
            children["pbc-statistics"] = pbc_statistics.get();
        }
        else
        {
            pbc_statistics = std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics>();
            pbc_statistics->parent = this;
            children["pbc-statistics"] = pbc_statistics.get();
        }
        return children.at("pbc-statistics");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::get_children()
{
    if(children.find("fmac-statistics") == children.end())
    {
        if(fmac_statistics != nullptr)
        {
            children["fmac-statistics"] = fmac_statistics.get();
        }
    }

    if(children.find("pbc-statistics") == children.end())
    {
        if(pbc_statistics != nullptr)
        {
            children["pbc-statistics"] = pbc_statistics.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance")
    {
        instance = value;
    }
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstances()
{
    yang_name = "statistics-asic-instances"; yang_parent_name = "asic-statistics";
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::~StatisticsAsicInstances()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::has_data() const
{
    for (std::size_t index=0; index<statistics_asic_instance.size(); index++)
    {
        if(statistics_asic_instance[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::has_operation() const
{
    for (std::size_t index=0; index<statistics_asic_instance.size(); index++)
    {
        if(statistics_asic_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics-asic-instances";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics-asic-instance")
    {
        for(auto const & c : statistics_asic_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance>();
        c->parent = this;
        statistics_asic_instance.push_back(std::move(c));
        children[segment_path] = statistics_asic_instance.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::get_children()
{
    for (auto const & c : statistics_asic_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::AsicStatistics::AsicStatistics()
    :
    statistics_asic_instances(std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances>())
{
    statistics_asic_instances->parent = this;
    children["statistics-asic-instances"] = statistics_asic_instances.get();

    yang_name = "asic-statistics"; yang_parent_name = "node";
}

Fia::Nodes::Node::AsicStatistics::~AsicStatistics()
{
}

bool Fia::Nodes::Node::AsicStatistics::has_data() const
{
    return (statistics_asic_instances !=  nullptr && statistics_asic_instances->has_data());
}

bool Fia::Nodes::Node::AsicStatistics::has_operation() const
{
    return is_set(operation)
	|| (statistics_asic_instances !=  nullptr && statistics_asic_instances->has_operation());
}

std::string Fia::Nodes::Node::AsicStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-statistics";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::AsicStatistics::get_entity_path(Entity* ancestor) const
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

Entity* Fia::Nodes::Node::AsicStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics-asic-instances")
    {
        if(statistics_asic_instances != nullptr)
        {
            children["statistics-asic-instances"] = statistics_asic_instances.get();
        }
        else
        {
            statistics_asic_instances = std::make_unique<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances>();
            statistics_asic_instances->parent = this;
            children["statistics-asic-instances"] = statistics_asic_instances.get();
        }
        return children.at("statistics-asic-instances");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::AsicStatistics::get_children()
{
    if(children.find("statistics-asic-instances") == children.end())
    {
        if(statistics_asic_instances != nullptr)
        {
            children["statistics-asic-instances"] = statistics_asic_instances.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::set_value(const std::string & value_path, std::string value)
{
}

Fia::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    asic_statistics(std::make_unique<Fia::Nodes::Node::AsicStatistics>())
	,clear_statistics(std::make_unique<Fia::Nodes::Node::ClearStatistics>())
	,diag_shell(std::make_unique<Fia::Nodes::Node::DiagShell>())
	,driver_information(std::make_unique<Fia::Nodes::Node::DriverInformation>())
	,oir_history(std::make_unique<Fia::Nodes::Node::OirHistory>())
	,register_dump(std::make_unique<Fia::Nodes::Node::RegisterDump>())
	,rx_link_information(std::make_unique<Fia::Nodes::Node::RxLinkInformation>())
	,tx_link_information(std::make_unique<Fia::Nodes::Node::TxLinkInformation>())
{
    asic_statistics->parent = this;
    children["asic-statistics"] = asic_statistics.get();

    clear_statistics->parent = this;
    children["clear-statistics"] = clear_statistics.get();

    diag_shell->parent = this;
    children["diag-shell"] = diag_shell.get();

    driver_information->parent = this;
    children["driver-information"] = driver_information.get();

    oir_history->parent = this;
    children["oir-history"] = oir_history.get();

    register_dump->parent = this;
    children["register-dump"] = register_dump.get();

    rx_link_information->parent = this;
    children["rx-link-information"] = rx_link_information.get();

    tx_link_information->parent = this;
    children["tx-link-information"] = tx_link_information.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

Fia::Nodes::Node::~Node()
{
}

bool Fia::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (asic_statistics !=  nullptr && asic_statistics->has_data())
	|| (clear_statistics !=  nullptr && clear_statistics->has_data())
	|| (diag_shell !=  nullptr && diag_shell->has_data())
	|| (driver_information !=  nullptr && driver_information->has_data())
	|| (oir_history !=  nullptr && oir_history->has_data())
	|| (register_dump !=  nullptr && register_dump->has_data())
	|| (rx_link_information !=  nullptr && rx_link_information->has_data())
	|| (tx_link_information !=  nullptr && tx_link_information->has_data());
}

bool Fia::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (asic_statistics !=  nullptr && asic_statistics->has_operation())
	|| (clear_statistics !=  nullptr && clear_statistics->has_operation())
	|| (diag_shell !=  nullptr && diag_shell->has_operation())
	|| (driver_information !=  nullptr && driver_information->has_operation())
	|| (oir_history !=  nullptr && oir_history->has_operation())
	|| (register_dump !=  nullptr && register_dump->has_operation())
	|| (rx_link_information !=  nullptr && rx_link_information->has_operation())
	|| (tx_link_information !=  nullptr && tx_link_information->has_operation());
}

std::string Fia::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Fia::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-dnx-driver-oper:fia/nodes/" << get_segment_path();
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

Entity* Fia::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "asic-statistics")
    {
        if(asic_statistics != nullptr)
        {
            children["asic-statistics"] = asic_statistics.get();
        }
        else
        {
            asic_statistics = std::make_unique<Fia::Nodes::Node::AsicStatistics>();
            asic_statistics->parent = this;
            children["asic-statistics"] = asic_statistics.get();
        }
        return children.at("asic-statistics");
    }

    if(child_yang_name == "clear-statistics")
    {
        if(clear_statistics != nullptr)
        {
            children["clear-statistics"] = clear_statistics.get();
        }
        else
        {
            clear_statistics = std::make_unique<Fia::Nodes::Node::ClearStatistics>();
            clear_statistics->parent = this;
            children["clear-statistics"] = clear_statistics.get();
        }
        return children.at("clear-statistics");
    }

    if(child_yang_name == "diag-shell")
    {
        if(diag_shell != nullptr)
        {
            children["diag-shell"] = diag_shell.get();
        }
        else
        {
            diag_shell = std::make_unique<Fia::Nodes::Node::DiagShell>();
            diag_shell->parent = this;
            children["diag-shell"] = diag_shell.get();
        }
        return children.at("diag-shell");
    }

    if(child_yang_name == "driver-information")
    {
        if(driver_information != nullptr)
        {
            children["driver-information"] = driver_information.get();
        }
        else
        {
            driver_information = std::make_unique<Fia::Nodes::Node::DriverInformation>();
            driver_information->parent = this;
            children["driver-information"] = driver_information.get();
        }
        return children.at("driver-information");
    }

    if(child_yang_name == "oir-history")
    {
        if(oir_history != nullptr)
        {
            children["oir-history"] = oir_history.get();
        }
        else
        {
            oir_history = std::make_unique<Fia::Nodes::Node::OirHistory>();
            oir_history->parent = this;
            children["oir-history"] = oir_history.get();
        }
        return children.at("oir-history");
    }

    if(child_yang_name == "register-dump")
    {
        if(register_dump != nullptr)
        {
            children["register-dump"] = register_dump.get();
        }
        else
        {
            register_dump = std::make_unique<Fia::Nodes::Node::RegisterDump>();
            register_dump->parent = this;
            children["register-dump"] = register_dump.get();
        }
        return children.at("register-dump");
    }

    if(child_yang_name == "rx-link-information")
    {
        if(rx_link_information != nullptr)
        {
            children["rx-link-information"] = rx_link_information.get();
        }
        else
        {
            rx_link_information = std::make_unique<Fia::Nodes::Node::RxLinkInformation>();
            rx_link_information->parent = this;
            children["rx-link-information"] = rx_link_information.get();
        }
        return children.at("rx-link-information");
    }

    if(child_yang_name == "tx-link-information")
    {
        if(tx_link_information != nullptr)
        {
            children["tx-link-information"] = tx_link_information.get();
        }
        else
        {
            tx_link_information = std::make_unique<Fia::Nodes::Node::TxLinkInformation>();
            tx_link_information->parent = this;
            children["tx-link-information"] = tx_link_information.get();
        }
        return children.at("tx-link-information");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::Node::get_children()
{
    if(children.find("asic-statistics") == children.end())
    {
        if(asic_statistics != nullptr)
        {
            children["asic-statistics"] = asic_statistics.get();
        }
    }

    if(children.find("clear-statistics") == children.end())
    {
        if(clear_statistics != nullptr)
        {
            children["clear-statistics"] = clear_statistics.get();
        }
    }

    if(children.find("diag-shell") == children.end())
    {
        if(diag_shell != nullptr)
        {
            children["diag-shell"] = diag_shell.get();
        }
    }

    if(children.find("driver-information") == children.end())
    {
        if(driver_information != nullptr)
        {
            children["driver-information"] = driver_information.get();
        }
    }

    if(children.find("oir-history") == children.end())
    {
        if(oir_history != nullptr)
        {
            children["oir-history"] = oir_history.get();
        }
    }

    if(children.find("register-dump") == children.end())
    {
        if(register_dump != nullptr)
        {
            children["register-dump"] = register_dump.get();
        }
    }

    if(children.find("rx-link-information") == children.end())
    {
        if(rx_link_information != nullptr)
        {
            children["rx-link-information"] = rx_link_information.get();
        }
    }

    if(children.find("tx-link-information") == children.end())
    {
        if(tx_link_information != nullptr)
        {
            children["tx-link-information"] = tx_link_information.get();
        }
    }

    return children;
}

void Fia::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Fia::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "fia";
}

Fia::Nodes::~Nodes()
{
}

bool Fia::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fia::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Fia::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-dnx-driver-oper:fia/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Fia::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Fia::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::Nodes::get_children()
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

void Fia::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Fia::Fia()
    :
    nodes(std::make_unique<Fia::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "fia"; yang_parent_name = "Cisco-IOS-XR-dnx-driver-oper";
}

Fia::~Fia()
{
}

bool Fia::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Fia::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Fia::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dnx-driver-oper:fia";

    return path_buffer.str();

}

EntityPath Fia::get_entity_path(Entity* ancestor) const
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

Entity* Fia::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_unique<Fia::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Fia::get_children()
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

void Fia::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Fia::clone_ptr()
{
    return std::make_unique<Fia>();
}

const Enum::YLeaf SliceStateEnum::slice_oper_unset {-1, "slice-oper-unset"};
const Enum::YLeaf SliceStateEnum::slice_oper_down {0, "slice-oper-down"};
const Enum::YLeaf SliceStateEnum::slice_oper_up {1, "slice-oper-up"};
const Enum::YLeaf SliceStateEnum::slice_oper_na {2, "slice-oper-na"};

const Enum::YLeaf AsicAccessStateEnum::asic_state_unset {-1, "asic-state-unset"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_none {0, "asic-state-none"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_device_off_line {1, "asic-state-device-off-line"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_device_created {2, "asic-state-device-created"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_device_online {3, "asic-state-device-online"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_warmboot {4, "asic-state-warmboot"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_de_init_start {5, "asic-state-de-init-start"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_intr_de_init {6, "asic-state-intr-de-init"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_bcm_detach {7, "asic-state-bcm-detach"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_soc_de_init {8, "asic-state-soc-de-init"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_de_init_done {9, "asic-state-de-init-done"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_soc_init {10, "asic-state-soc-init"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_bcm_init {11, "asic-state-bcm-init"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_intr_init {12, "asic-state-intr-init"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_soc_init_start {13, "asic-state-soc-init-start"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_bcm_init_start {14, "asic-state-bcm-init-start"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_intr_init_start {15, "asic-state-intr-init-start"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_hard_reset {16, "asic-state-hard-reset"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_normal {17, "asic-state-normal"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_exception {18, "asic-state-exception"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_hp_attached {19, "asic-state-hp-attached"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_quiesce {20, "asic-state-quiesce"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_issu_started {21, "asic-state-issu-started"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_issu_started_nn {22, "asic-state-issu-started-nn"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_issu_abort {23, "asic-state-issu-abort"};
const Enum::YLeaf AsicAccessStateEnum::asic_state_max {24, "asic-state-max"};

const Enum::YLeaf LinkErrorStateEnum::link_error_unset {-1, "link-error-unset"};
const Enum::YLeaf LinkErrorStateEnum::link_error_none {0, "link-error-none"};
const Enum::YLeaf LinkErrorStateEnum::link_error_shut {1, "link-error-shut"};
const Enum::YLeaf LinkErrorStateEnum::link_error_max {2, "link-error-max"};

const Enum::YLeaf FcModeEnum::fc_mode_unset {-1, "fc-mode-unset"};
const Enum::YLeaf FcModeEnum::fc_mode_unavail {0, "fc-mode-unavail"};
const Enum::YLeaf FcModeEnum::fc_mode_inband {1, "fc-mode-inband"};
const Enum::YLeaf FcModeEnum::fc_mode_oob {2, "fc-mode-oob"};

const Enum::YLeaf AsicEnum::asic_unset {-1, "asic-unset"};
const Enum::YLeaf AsicEnum::asic_unavail {0, "asic-unavail"};
const Enum::YLeaf AsicEnum::asic_fia {1, "asic-fia"};
const Enum::YLeaf AsicEnum::asic_s123 {2, "asic-s123"};
const Enum::YLeaf AsicEnum::asic_s13 {3, "asic-s13"};
const Enum::YLeaf AsicEnum::asic_s2 {4, "asic-s2"};
const Enum::YLeaf AsicEnum::asic_b2b {5, "asic-b2b"};
const Enum::YLeaf AsicEnum::asic_unknown {6, "asic-unknown"};

const Enum::YLeaf AsicOperStateEnum::asic_oper_unset {-1, "asic-oper-unset"};
const Enum::YLeaf AsicOperStateEnum::asic_oper_unknown {0, "asic-oper-unknown"};
const Enum::YLeaf AsicOperStateEnum::asic_oper_up {1, "asic-oper-up"};
const Enum::YLeaf AsicOperStateEnum::asic_oper_down {2, "asic-oper-down"};
const Enum::YLeaf AsicOperStateEnum::asic_card_down {3, "asic-card-down"};

const Enum::YLeaf LinkEnum::link_type_unset {-1, "link-type-unset"};
const Enum::YLeaf LinkEnum::link_type_unavail {0, "link-type-unavail"};
const Enum::YLeaf LinkEnum::link_type_tx {1, "link-type-tx"};
const Enum::YLeaf LinkEnum::link_type_rx {2, "link-type-rx"};

const Enum::YLeaf OperStateEnum::oper_unset {-1, "oper-unset"};
const Enum::YLeaf OperStateEnum::oper_unknown {0, "oper-unknown"};
const Enum::YLeaf OperStateEnum::oper_up {1, "oper-up"};
const Enum::YLeaf OperStateEnum::oper_down {2, "oper-down"};
const Enum::YLeaf OperStateEnum::card_down {3, "card-down"};

const Enum::YLeaf AsicInitMethodEnum::asic_init_method_unset {-1, "asic-init-method-unset"};
const Enum::YLeaf AsicInitMethodEnum::asic_init_method_no_reset {0, "asic-init-method-no-reset"};
const Enum::YLeaf AsicInitMethodEnum::asic_init_method_pon_reset {1, "asic-init-method-pon-reset"};
const Enum::YLeaf AsicInitMethodEnum::asic_init_method_pon_reset_on_intr {2, "asic-init-method-pon-reset-on-intr"};
const Enum::YLeaf AsicInitMethodEnum::asic_init_method_hard_reset {3, "asic-init-method-hard-reset"};
const Enum::YLeaf AsicInitMethodEnum::asic_init_method_warmboot {4, "asic-init-method-warmboot"};
const Enum::YLeaf AsicInitMethodEnum::asic_init_method_issu_wb {5, "asic-init-method-issu-wb"};
const Enum::YLeaf AsicInitMethodEnum::asic_init_method_pci_shutdown {6, "asic-init-method-pci-shutdown"};
const Enum::YLeaf AsicInitMethodEnum::asic_init_method_quiesce {7, "asic-init-method-quiesce"};
const Enum::YLeaf AsicInitMethodEnum::asic_init_method_issu_started {8, "asic-init-method-issu-started"};
const Enum::YLeaf AsicInitMethodEnum::asic_init_method_issu_rollback {9, "asic-init-method-issu-rollback"};
const Enum::YLeaf AsicInitMethodEnum::asic_init_method_issu_abort {10, "asic-init-method-issu-abort"};
const Enum::YLeaf AsicInitMethodEnum::asic_init_method_slice_cleanup {11, "asic-init-method-slice-cleanup"};
const Enum::YLeaf AsicInitMethodEnum::asic_init_method_lc_remove {12, "asic-init-method-lc-remove"};
const Enum::YLeaf AsicInitMethodEnum::asic_init_method_node_down {13, "asic-init-method-node-down"};
const Enum::YLeaf AsicInitMethodEnum::asic_init_method_intr {14, "asic-init-method-intr"};
const Enum::YLeaf AsicInitMethodEnum::asic_init_method_board_reload {15, "asic-init-method-board-reload"};
const Enum::YLeaf AsicInitMethodEnum::asic_init_method_max {16, "asic-init-method-max"};

const Enum::YLeaf AdminStateEnum::admin_unset {-1, "admin-unset"};
const Enum::YLeaf AdminStateEnum::admin_up {0, "admin-up"};
const Enum::YLeaf AdminStateEnum::admin_down {1, "admin-down"};

const Enum::YLeaf LinkStageEnum::link_stage_unset {-1, "link-stage-unset"};
const Enum::YLeaf LinkStageEnum::link_stage_unused {0, "link-stage-unused"};
const Enum::YLeaf LinkStageEnum::link_stage_fia {1, "link-stage-fia"};
const Enum::YLeaf LinkStageEnum::link_stage_s1 {2, "link-stage-s1"};
const Enum::YLeaf LinkStageEnum::link_stage_s2 {3, "link-stage-s2"};
const Enum::YLeaf LinkStageEnum::link_stage_s3 {4, "link-stage-s3"};
const Enum::YLeaf LinkStageEnum::link_stage_unknown {5, "link-stage-unknown"};

const Enum::YLeaf RackEnum::rack_type_unset {-1, "rack-type-unset"};
const Enum::YLeaf RackEnum::rack_type_lcc {0, "rack-type-lcc"};
const Enum::YLeaf RackEnum::rack_type_fcc {1, "rack-type-fcc"};


}
}

