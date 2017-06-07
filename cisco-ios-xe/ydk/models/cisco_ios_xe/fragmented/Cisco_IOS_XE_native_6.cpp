
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_6.hpp"
#include "Cisco_IOS_XE_native_7.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Flow::Record::Match::Ipv6::Destination::Mask::Mask()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{
    yang_name = "mask"; yang_parent_name = "destination";
}

Native::Flow::Record::Match::Ipv6::Destination::Mask::~Mask()
{
}

bool Native::Flow::Record::Match::Ipv6::Destination::Mask::has_data() const
{
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Destination::Mask::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum_mask.operation);
}

std::string Native::Flow::Record::Match::Ipv6::Destination::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Ipv6::Destination::Mask::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mask' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.operation)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Destination::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Destination::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv6::Destination::Mask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
    }
}

Native::Flow::Record::Match::Ipv6::Destination::Prefix::Prefix()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{
    yang_name = "prefix"; yang_parent_name = "destination";
}

Native::Flow::Record::Match::Ipv6::Destination::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Match::Ipv6::Destination::Prefix::has_data() const
{
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Destination::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum_mask.operation);
}

std::string Native::Flow::Record::Match::Ipv6::Destination::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Ipv6::Destination::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.operation)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Destination::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Destination::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv6::Destination::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
    }
}

Native::Flow::Record::Match::Ipv6::Extension::Extension()
    :
    map{YType::empty, "map"}
{
    yang_name = "extension"; yang_parent_name = "ipv6";
}

Native::Flow::Record::Match::Ipv6::Extension::~Extension()
{
}

bool Native::Flow::Record::Match::Ipv6::Extension::has_data() const
{
    return map.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Extension::has_operation() const
{
    return is_set(operation)
	|| is_set(map.operation);
}

std::string Native::Flow::Record::Match::Ipv6::Extension::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extension";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Ipv6::Extension::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Extension' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.operation)) leaf_name_data.push_back(map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Extension::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Extension::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv6::Extension::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map")
    {
        map = value;
    }
}

Native::Flow::Record::Match::Ipv6::Fragmentation::Fragmentation()
    :
    flags{YType::empty, "flags"},
    id{YType::empty, "id"},
    offset{YType::empty, "offset"}
{
    yang_name = "fragmentation"; yang_parent_name = "ipv6";
}

Native::Flow::Record::Match::Ipv6::Fragmentation::~Fragmentation()
{
}

bool Native::Flow::Record::Match::Ipv6::Fragmentation::has_data() const
{
    return flags.is_set
	|| id.is_set
	|| offset.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Fragmentation::has_operation() const
{
    return is_set(operation)
	|| is_set(flags.operation)
	|| is_set(id.operation)
	|| is_set(offset.operation);
}

std::string Native::Flow::Record::Match::Ipv6::Fragmentation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fragmentation";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Ipv6::Fragmentation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fragmentation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (offset.is_set || is_set(offset.operation)) leaf_name_data.push_back(offset.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Fragmentation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Fragmentation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv6::Fragmentation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "offset")
    {
        offset = value;
    }
}

Native::Flow::Record::Match::Ipv6::HopLimit::HopLimit()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
{
    yang_name = "hop-limit"; yang_parent_name = "ipv6";
}

Native::Flow::Record::Match::Ipv6::HopLimit::~HopLimit()
{
}

bool Native::Flow::Record::Match::Ipv6::HopLimit::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Flow::Record::Match::Ipv6::HopLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation);
}

std::string Native::Flow::Record::Match::Ipv6::HopLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop-limit";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Ipv6::HopLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HopLimit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::HopLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::HopLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv6::HopLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
}

Native::Flow::Record::Match::Ipv6::Length::Length()
    :
    header{YType::empty, "header"},
    payload{YType::empty, "payload"}
    	,
    total(nullptr) // presence node
{
    yang_name = "length"; yang_parent_name = "ipv6";
}

Native::Flow::Record::Match::Ipv6::Length::~Length()
{
}

bool Native::Flow::Record::Match::Ipv6::Length::has_data() const
{
    return header.is_set
	|| payload.is_set
	|| (total !=  nullptr && total->has_data());
}

bool Native::Flow::Record::Match::Ipv6::Length::has_operation() const
{
    return is_set(operation)
	|| is_set(header.operation)
	|| is_set(payload.operation)
	|| (total !=  nullptr && total->has_operation());
}

std::string Native::Flow::Record::Match::Ipv6::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Ipv6::Length::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Length' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header.is_set || is_set(header.operation)) leaf_name_data.push_back(header.get_name_leafdata());
    if (payload.is_set || is_set(payload.operation)) leaf_name_data.push_back(payload.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Native::Flow::Record::Match::Ipv6::Length::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(total != nullptr)
    {
        children["total"] = total;
    }

    return children;
}

void Native::Flow::Record::Match::Ipv6::Length::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header")
    {
        header = value;
    }
    if(value_path == "payload")
    {
        payload = value;
    }
}

Native::Flow::Record::Match::Ipv6::Length::Total::Total()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
{
    yang_name = "total"; yang_parent_name = "length";
}

Native::Flow::Record::Match::Ipv6::Length::Total::~Total()
{
}

bool Native::Flow::Record::Match::Ipv6::Length::Total::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Length::Total::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation);
}

std::string Native::Flow::Record::Match::Ipv6::Length::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Ipv6::Length::Total::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Total' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Length::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Length::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv6::Length::Total::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
}

Native::Flow::Record::Match::Ipv6::Section::Section()
    :
    header(std::make_shared<Native::Flow::Record::Match::Ipv6::Section::Header>())
	,payload(std::make_shared<Native::Flow::Record::Match::Ipv6::Section::Payload>())
{
    header->parent = this;

    payload->parent = this;

    yang_name = "section"; yang_parent_name = "ipv6";
}

Native::Flow::Record::Match::Ipv6::Section::~Section()
{
}

bool Native::Flow::Record::Match::Ipv6::Section::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (payload !=  nullptr && payload->has_data());
}

bool Native::Flow::Record::Match::Ipv6::Section::has_operation() const
{
    return is_set(operation)
	|| (header !=  nullptr && header->has_operation())
	|| (payload !=  nullptr && payload->has_operation());
}

std::string Native::Flow::Record::Match::Ipv6::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Ipv6::Section::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Section' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<Native::Flow::Record::Match::Ipv6::Section::Header>();
        }
        return header;
    }

    if(child_yang_name == "payload")
    {
        if(payload == nullptr)
        {
            payload = std::make_shared<Native::Flow::Record::Match::Ipv6::Section::Payload>();
        }
        return payload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(payload != nullptr)
    {
        children["payload"] = payload;
    }

    return children;
}

void Native::Flow::Record::Match::Ipv6::Section::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Match::Ipv6::Section::Header::Header()
    :
    size{YType::uint16, "size"}
{
    yang_name = "header"; yang_parent_name = "section";
}

Native::Flow::Record::Match::Ipv6::Section::Header::~Header()
{
}

bool Native::Flow::Record::Match::Ipv6::Section::Header::has_data() const
{
    return size.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Section::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(size.operation);
}

std::string Native::Flow::Record::Match::Ipv6::Section::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Ipv6::Section::Header::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Header' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Section::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Section::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv6::Section::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "size")
    {
        size = value;
    }
}

Native::Flow::Record::Match::Ipv6::Section::Payload::Payload()
    :
    size{YType::uint16, "size"}
{
    yang_name = "payload"; yang_parent_name = "section";
}

Native::Flow::Record::Match::Ipv6::Section::Payload::~Payload()
{
}

bool Native::Flow::Record::Match::Ipv6::Section::Payload::has_data() const
{
    return size.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Section::Payload::has_operation() const
{
    return is_set(operation)
	|| is_set(size.operation);
}

std::string Native::Flow::Record::Match::Ipv6::Section::Payload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "payload";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Ipv6::Section::Payload::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Payload' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Section::Payload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Section::Payload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv6::Section::Payload::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "size")
    {
        size = value;
    }
}

Native::Flow::Record::Match::Ipv6::Source::Source()
    :
    address{YType::empty, "address"}
    	,
    mask(nullptr) // presence node
	,prefix(nullptr) // presence node
{
    yang_name = "source"; yang_parent_name = "ipv6";
}

Native::Flow::Record::Match::Ipv6::Source::~Source()
{
}

bool Native::Flow::Record::Match::Ipv6::Source::has_data() const
{
    return address.is_set
	|| (mask !=  nullptr && mask->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Match::Ipv6::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (mask !=  nullptr && mask->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Match::Ipv6::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Ipv6::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Match::Ipv6::Source::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Match::Ipv6::Source::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mask != nullptr)
    {
        children["mask"] = mask;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Native::Flow::Record::Match::Ipv6::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Flow::Record::Match::Ipv6::Source::Mask::Mask()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{
    yang_name = "mask"; yang_parent_name = "source";
}

Native::Flow::Record::Match::Ipv6::Source::Mask::~Mask()
{
}

bool Native::Flow::Record::Match::Ipv6::Source::Mask::has_data() const
{
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Source::Mask::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum_mask.operation);
}

std::string Native::Flow::Record::Match::Ipv6::Source::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Ipv6::Source::Mask::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mask' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.operation)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Source::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Source::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv6::Source::Mask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
    }
}

Native::Flow::Record::Match::Ipv6::Source::Prefix::Prefix()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{
    yang_name = "prefix"; yang_parent_name = "source";
}

Native::Flow::Record::Match::Ipv6::Source::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Match::Ipv6::Source::Prefix::has_data() const
{
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Source::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum_mask.operation);
}

std::string Native::Flow::Record::Match::Ipv6::Source::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Ipv6::Source::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.operation)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Source::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Source::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv6::Source::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
    }
}

Native::Flow::Record::Match::Metadata::Metadata()
    :
    global_session_id{YType::empty, "global-session-id"},
    multi_party_session_id{YType::empty, "multi-party-session-id"}
{
    yang_name = "metadata"; yang_parent_name = "match";
}

Native::Flow::Record::Match::Metadata::~Metadata()
{
}

bool Native::Flow::Record::Match::Metadata::has_data() const
{
    return global_session_id.is_set
	|| multi_party_session_id.is_set;
}

bool Native::Flow::Record::Match::Metadata::has_operation() const
{
    return is_set(operation)
	|| is_set(global_session_id.operation)
	|| is_set(multi_party_session_id.operation);
}

std::string Native::Flow::Record::Match::Metadata::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Metadata::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metadata' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_session_id.is_set || is_set(global_session_id.operation)) leaf_name_data.push_back(global_session_id.get_name_leafdata());
    if (multi_party_session_id.is_set || is_set(multi_party_session_id.operation)) leaf_name_data.push_back(multi_party_session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Metadata::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Metadata::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Metadata::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "global-session-id")
    {
        global_session_id = value;
    }
    if(value_path == "multi-party-session-id")
    {
        multi_party_session_id = value;
    }
}

Native::Flow::Record::Match::Mpls::Mpls()
    :
    label(std::make_shared<Native::Flow::Record::Match::Mpls::Label>())
{
    label->parent = this;

    yang_name = "mpls"; yang_parent_name = "match";
}

Native::Flow::Record::Match::Mpls::~Mpls()
{
}

bool Native::Flow::Record::Match::Mpls::has_data() const
{
    return (label !=  nullptr && label->has_data());
}

bool Native::Flow::Record::Match::Mpls::has_operation() const
{
    return is_set(operation)
	|| (label !=  nullptr && label->has_operation());
}

std::string Native::Flow::Record::Match::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::Flow::Record::Match::Mpls::Label>();
        }
        return label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label != nullptr)
    {
        children["label"] = label;
    }

    return children;
}

void Native::Flow::Record::Match::Mpls::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Match::Mpls::Label::Label()
    :
    five(std::make_shared<Native::Flow::Record::Match::Mpls::Label::Five>())
	,four(std::make_shared<Native::Flow::Record::Match::Mpls::Label::Four>())
	,one(std::make_shared<Native::Flow::Record::Match::Mpls::Label::One>())
	,six(std::make_shared<Native::Flow::Record::Match::Mpls::Label::Six>())
	,three(std::make_shared<Native::Flow::Record::Match::Mpls::Label::Three>())
	,two(std::make_shared<Native::Flow::Record::Match::Mpls::Label::Two>())
{
    five->parent = this;

    four->parent = this;

    one->parent = this;

    six->parent = this;

    three->parent = this;

    two->parent = this;

    yang_name = "label"; yang_parent_name = "mpls";
}

Native::Flow::Record::Match::Mpls::Label::~Label()
{
}

bool Native::Flow::Record::Match::Mpls::Label::has_data() const
{
    return (five !=  nullptr && five->has_data())
	|| (four !=  nullptr && four->has_data())
	|| (one !=  nullptr && one->has_data())
	|| (six !=  nullptr && six->has_data())
	|| (three !=  nullptr && three->has_data())
	|| (two !=  nullptr && two->has_data());
}

bool Native::Flow::Record::Match::Mpls::Label::has_operation() const
{
    return is_set(operation)
	|| (five !=  nullptr && five->has_operation())
	|| (four !=  nullptr && four->has_operation())
	|| (one !=  nullptr && one->has_operation())
	|| (six !=  nullptr && six->has_operation())
	|| (three !=  nullptr && three->has_operation())
	|| (two !=  nullptr && two->has_operation());
}

std::string Native::Flow::Record::Match::Mpls::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Mpls::Label::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Label' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Mpls::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "five")
    {
        if(five == nullptr)
        {
            five = std::make_shared<Native::Flow::Record::Match::Mpls::Label::Five>();
        }
        return five;
    }

    if(child_yang_name == "four")
    {
        if(four == nullptr)
        {
            four = std::make_shared<Native::Flow::Record::Match::Mpls::Label::Four>();
        }
        return four;
    }

    if(child_yang_name == "one")
    {
        if(one == nullptr)
        {
            one = std::make_shared<Native::Flow::Record::Match::Mpls::Label::One>();
        }
        return one;
    }

    if(child_yang_name == "six")
    {
        if(six == nullptr)
        {
            six = std::make_shared<Native::Flow::Record::Match::Mpls::Label::Six>();
        }
        return six;
    }

    if(child_yang_name == "three")
    {
        if(three == nullptr)
        {
            three = std::make_shared<Native::Flow::Record::Match::Mpls::Label::Three>();
        }
        return three;
    }

    if(child_yang_name == "two")
    {
        if(two == nullptr)
        {
            two = std::make_shared<Native::Flow::Record::Match::Mpls::Label::Two>();
        }
        return two;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Mpls::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(five != nullptr)
    {
        children["five"] = five;
    }

    if(four != nullptr)
    {
        children["four"] = four;
    }

    if(one != nullptr)
    {
        children["one"] = one;
    }

    if(six != nullptr)
    {
        children["six"] = six;
    }

    if(three != nullptr)
    {
        children["three"] = three;
    }

    if(two != nullptr)
    {
        children["two"] = two;
    }

    return children;
}

void Native::Flow::Record::Match::Mpls::Label::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Match::Mpls::Label::One::One()
    :
    details{YType::empty, "details"},
    exp{YType::empty, "exp"},
    ttl{YType::empty, "ttl"},
    type{YType::empty, "type"}
{
    yang_name = "one"; yang_parent_name = "label";
}

Native::Flow::Record::Match::Mpls::Label::One::~One()
{
}

bool Native::Flow::Record::Match::Mpls::Label::One::has_data() const
{
    return details.is_set
	|| exp.is_set
	|| ttl.is_set
	|| type.is_set;
}

bool Native::Flow::Record::Match::Mpls::Label::One::has_operation() const
{
    return is_set(operation)
	|| is_set(details.operation)
	|| is_set(exp.operation)
	|| is_set(ttl.operation)
	|| is_set(type.operation);
}

std::string Native::Flow::Record::Match::Mpls::Label::One::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Mpls::Label::One::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'One' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.operation)) leaf_name_data.push_back(details.get_name_leafdata());
    if (exp.is_set || is_set(exp.operation)) leaf_name_data.push_back(exp.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Mpls::Label::One::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Mpls::Label::One::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Mpls::Label::One::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "details")
    {
        details = value;
    }
    if(value_path == "exp")
    {
        exp = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Flow::Record::Match::Mpls::Label::Two::Two()
    :
    details{YType::empty, "details"}
{
    yang_name = "two"; yang_parent_name = "label";
}

Native::Flow::Record::Match::Mpls::Label::Two::~Two()
{
}

bool Native::Flow::Record::Match::Mpls::Label::Two::has_data() const
{
    return details.is_set;
}

bool Native::Flow::Record::Match::Mpls::Label::Two::has_operation() const
{
    return is_set(operation)
	|| is_set(details.operation);
}

std::string Native::Flow::Record::Match::Mpls::Label::Two::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Mpls::Label::Two::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Two' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.operation)) leaf_name_data.push_back(details.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Mpls::Label::Two::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Mpls::Label::Two::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Mpls::Label::Two::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "details")
    {
        details = value;
    }
}

Native::Flow::Record::Match::Mpls::Label::Three::Three()
    :
    details{YType::empty, "details"}
{
    yang_name = "three"; yang_parent_name = "label";
}

Native::Flow::Record::Match::Mpls::Label::Three::~Three()
{
}

bool Native::Flow::Record::Match::Mpls::Label::Three::has_data() const
{
    return details.is_set;
}

bool Native::Flow::Record::Match::Mpls::Label::Three::has_operation() const
{
    return is_set(operation)
	|| is_set(details.operation);
}

std::string Native::Flow::Record::Match::Mpls::Label::Three::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "three";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Mpls::Label::Three::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Three' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.operation)) leaf_name_data.push_back(details.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Mpls::Label::Three::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Mpls::Label::Three::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Mpls::Label::Three::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "details")
    {
        details = value;
    }
}

Native::Flow::Record::Match::Mpls::Label::Four::Four()
    :
    details{YType::empty, "details"}
{
    yang_name = "four"; yang_parent_name = "label";
}

Native::Flow::Record::Match::Mpls::Label::Four::~Four()
{
}

bool Native::Flow::Record::Match::Mpls::Label::Four::has_data() const
{
    return details.is_set;
}

bool Native::Flow::Record::Match::Mpls::Label::Four::has_operation() const
{
    return is_set(operation)
	|| is_set(details.operation);
}

std::string Native::Flow::Record::Match::Mpls::Label::Four::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Mpls::Label::Four::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Four' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.operation)) leaf_name_data.push_back(details.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Mpls::Label::Four::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Mpls::Label::Four::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Mpls::Label::Four::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "details")
    {
        details = value;
    }
}

Native::Flow::Record::Match::Mpls::Label::Five::Five()
    :
    details{YType::empty, "details"}
{
    yang_name = "five"; yang_parent_name = "label";
}

Native::Flow::Record::Match::Mpls::Label::Five::~Five()
{
}

bool Native::Flow::Record::Match::Mpls::Label::Five::has_data() const
{
    return details.is_set;
}

bool Native::Flow::Record::Match::Mpls::Label::Five::has_operation() const
{
    return is_set(operation)
	|| is_set(details.operation);
}

std::string Native::Flow::Record::Match::Mpls::Label::Five::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "five";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Mpls::Label::Five::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Five' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.operation)) leaf_name_data.push_back(details.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Mpls::Label::Five::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Mpls::Label::Five::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Mpls::Label::Five::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "details")
    {
        details = value;
    }
}

Native::Flow::Record::Match::Mpls::Label::Six::Six()
    :
    details{YType::empty, "details"}
{
    yang_name = "six"; yang_parent_name = "label";
}

Native::Flow::Record::Match::Mpls::Label::Six::~Six()
{
}

bool Native::Flow::Record::Match::Mpls::Label::Six::has_data() const
{
    return details.is_set;
}

bool Native::Flow::Record::Match::Mpls::Label::Six::has_operation() const
{
    return is_set(operation)
	|| is_set(details.operation);
}

std::string Native::Flow::Record::Match::Mpls::Label::Six::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "six";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Mpls::Label::Six::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Six' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.operation)) leaf_name_data.push_back(details.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Mpls::Label::Six::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Mpls::Label::Six::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Mpls::Label::Six::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "details")
    {
        details = value;
    }
}

Native::Flow::Record::Match::Network::Network()
    :
    delay(std::make_shared<Native::Flow::Record::Match::Network::Delay>())
{
    delay->parent = this;

    yang_name = "network"; yang_parent_name = "match";
}

Native::Flow::Record::Match::Network::~Network()
{
}

bool Native::Flow::Record::Match::Network::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Flow::Record::Match::Network::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Flow::Record::Match::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Flow::Record::Match::Network::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Flow::Record::Match::Network::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Match::Network::Delay::Delay()
    :
    sample{YType::empty, "sample"},
    sum{YType::empty, "sum"}
{
    yang_name = "delay"; yang_parent_name = "network";
}

Native::Flow::Record::Match::Network::Delay::~Delay()
{
}

bool Native::Flow::Record::Match::Network::Delay::has_data() const
{
    return sample.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Match::Network::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(sample.operation)
	|| is_set(sum.operation);
}

std::string Native::Flow::Record::Match::Network::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Network::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample.is_set || is_set(sample.operation)) leaf_name_data.push_back(sample.get_name_leafdata());
    if (sum.is_set || is_set(sum.operation)) leaf_name_data.push_back(sum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Network::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Network::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Network::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sample")
    {
        sample = value;
    }
    if(value_path == "sum")
    {
        sum = value;
    }
}

Native::Flow::Record::Match::Pfr::Pfr()
    :
    label(std::make_shared<Native::Flow::Record::Match::Pfr::Label>())
	,one_way_delay(std::make_shared<Native::Flow::Record::Match::Pfr::OneWayDelay>())
	,service(std::make_shared<Native::Flow::Record::Match::Pfr::Service>())
	,site(std::make_shared<Native::Flow::Record::Match::Pfr::Site>())
{
    label->parent = this;

    one_way_delay->parent = this;

    service->parent = this;

    site->parent = this;

    yang_name = "pfr"; yang_parent_name = "match";
}

Native::Flow::Record::Match::Pfr::~Pfr()
{
}

bool Native::Flow::Record::Match::Pfr::has_data() const
{
    return (label !=  nullptr && label->has_data())
	|| (one_way_delay !=  nullptr && one_way_delay->has_data())
	|| (service !=  nullptr && service->has_data())
	|| (site !=  nullptr && site->has_data());
}

bool Native::Flow::Record::Match::Pfr::has_operation() const
{
    return is_set(operation)
	|| (label !=  nullptr && label->has_operation())
	|| (one_way_delay !=  nullptr && one_way_delay->has_operation())
	|| (service !=  nullptr && service->has_operation())
	|| (site !=  nullptr && site->has_operation());
}

std::string Native::Flow::Record::Match::Pfr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Pfr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pfr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::Flow::Record::Match::Pfr::Label>();
        }
        return label;
    }

    if(child_yang_name == "one-way-delay")
    {
        if(one_way_delay == nullptr)
        {
            one_way_delay = std::make_shared<Native::Flow::Record::Match::Pfr::OneWayDelay>();
        }
        return one_way_delay;
    }

    if(child_yang_name == "service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Flow::Record::Match::Pfr::Service>();
        }
        return service;
    }

    if(child_yang_name == "site")
    {
        if(site == nullptr)
        {
            site = std::make_shared<Native::Flow::Record::Match::Pfr::Site>();
        }
        return site;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label != nullptr)
    {
        children["label"] = label;
    }

    if(one_way_delay != nullptr)
    {
        children["one-way-delay"] = one_way_delay;
    }

    if(service != nullptr)
    {
        children["service"] = service;
    }

    if(site != nullptr)
    {
        children["site"] = site;
    }

    return children;
}

void Native::Flow::Record::Match::Pfr::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Match::Pfr::Label::Label()
    :
    identifier{YType::empty, "identifier"}
{
    yang_name = "label"; yang_parent_name = "pfr";
}

Native::Flow::Record::Match::Pfr::Label::~Label()
{
}

bool Native::Flow::Record::Match::Pfr::Label::has_data() const
{
    return identifier.is_set;
}

bool Native::Flow::Record::Match::Pfr::Label::has_operation() const
{
    return is_set(operation)
	|| is_set(identifier.operation);
}

std::string Native::Flow::Record::Match::Pfr::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Pfr::Label::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Label' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Pfr::Label::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "identifier")
    {
        identifier = value;
    }
}

Native::Flow::Record::Match::Pfr::OneWayDelay::OneWayDelay()
    :
    samples{YType::empty, "samples"},
    sum{YType::empty, "sum"}
{
    yang_name = "one-way-delay"; yang_parent_name = "pfr";
}

Native::Flow::Record::Match::Pfr::OneWayDelay::~OneWayDelay()
{
}

bool Native::Flow::Record::Match::Pfr::OneWayDelay::has_data() const
{
    return samples.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Match::Pfr::OneWayDelay::has_operation() const
{
    return is_set(operation)
	|| is_set(samples.operation)
	|| is_set(sum.operation);
}

std::string Native::Flow::Record::Match::Pfr::OneWayDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one-way-delay";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Pfr::OneWayDelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OneWayDelay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (samples.is_set || is_set(samples.operation)) leaf_name_data.push_back(samples.get_name_leafdata());
    if (sum.is_set || is_set(sum.operation)) leaf_name_data.push_back(sum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::OneWayDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::OneWayDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Pfr::OneWayDelay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "samples")
    {
        samples = value;
    }
    if(value_path == "sum")
    {
        sum = value;
    }
}

Native::Flow::Record::Match::Pfr::Service::Service()
    :
    identifier{YType::empty, "identifier"},
    provider{YType::empty, "provider"},
    tag{YType::empty, "tag"}
{
    yang_name = "service"; yang_parent_name = "pfr";
}

Native::Flow::Record::Match::Pfr::Service::~Service()
{
}

bool Native::Flow::Record::Match::Pfr::Service::has_data() const
{
    return identifier.is_set
	|| provider.is_set
	|| tag.is_set;
}

bool Native::Flow::Record::Match::Pfr::Service::has_operation() const
{
    return is_set(operation)
	|| is_set(identifier.operation)
	|| is_set(provider.operation)
	|| is_set(tag.operation);
}

std::string Native::Flow::Record::Match::Pfr::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Pfr::Service::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Service' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (provider.is_set || is_set(provider.operation)) leaf_name_data.push_back(provider.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Pfr::Service::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "identifier")
    {
        identifier = value;
    }
    if(value_path == "provider")
    {
        provider = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Flow::Record::Match::Pfr::Site::Site()
    :
    destination(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination>())
	,source(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source>())
{
    destination->parent = this;

    source->parent = this;

    yang_name = "site"; yang_parent_name = "pfr";
}

Native::Flow::Record::Match::Pfr::Site::~Site()
{
}

bool Native::Flow::Record::Match::Pfr::Site::has_data() const
{
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Flow::Record::Match::Pfr::Site::has_operation() const
{
    return is_set(operation)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Flow::Record::Match::Pfr::Site::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Pfr::Site::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Site' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::Site::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::Site::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Flow::Record::Match::Pfr::Site::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Match::Pfr::Site::Destination::Destination()
    :
    id(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination::Id>())
	,prefix(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination::Prefix>())
{
    id->parent = this;

    prefix->parent = this;

    yang_name = "destination"; yang_parent_name = "site";
}

Native::Flow::Record::Match::Pfr::Site::Destination::~Destination()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::has_data() const
{
    return (id !=  nullptr && id->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::has_operation() const
{
    return is_set(operation)
	|| (id !=  nullptr && id->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Match::Pfr::Site::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Pfr::Site::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Destination' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::Site::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination::Id>();
        }
        return id;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::Site::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(id != nullptr)
    {
        children["id"] = id;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Native::Flow::Record::Match::Pfr::Site::Destination::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Match::Pfr::Site::Destination::Id::Id()
    :
    ipv4{YType::empty, "ipv4"}
{
    yang_name = "id"; yang_parent_name = "destination";
}

Native::Flow::Record::Match::Pfr::Site::Destination::Id::~Id()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Id::has_data() const
{
    return ipv4.is_set;
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Id::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation);
}

std::string Native::Flow::Record::Match::Pfr::Site::Destination::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Pfr::Site::Destination::Id::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Id' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::Site::Destination::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::Site::Destination::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Pfr::Site::Destination::Id::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Prefix()
    :
    ipv4{YType::empty, "ipv4"}
    	,
    mask(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask>())
{
    mask->parent = this;

    yang_name = "prefix"; yang_parent_name = "destination";
}

Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::has_data() const
{
    return ipv4.is_set
	|| (mask !=  nullptr && mask->has_data());
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| (mask !=  nullptr && mask->has_operation());
}

std::string Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask>();
        }
        return mask;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mask != nullptr)
    {
        children["mask"] = mask;
    }

    return children;
}

void Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::Mask()
    :
    ipv4{YType::empty, "ipv4"}
{
    yang_name = "mask"; yang_parent_name = "prefix";
}

Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::~Mask()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::has_data() const
{
    return ipv4.is_set;
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation);
}

std::string Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mask' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

Native::Flow::Record::Match::Pfr::Site::Source::Source()
    :
    id(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source::Id>())
	,prefix(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source::Prefix>())
{
    id->parent = this;

    prefix->parent = this;

    yang_name = "source"; yang_parent_name = "site";
}

Native::Flow::Record::Match::Pfr::Site::Source::~Source()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Source::has_data() const
{
    return (id !=  nullptr && id->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Match::Pfr::Site::Source::has_operation() const
{
    return is_set(operation)
	|| (id !=  nullptr && id->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Match::Pfr::Site::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Pfr::Site::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::Site::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source::Id>();
        }
        return id;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::Site::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(id != nullptr)
    {
        children["id"] = id;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Native::Flow::Record::Match::Pfr::Site::Source::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Match::Pfr::Site::Source::Id::Id()
    :
    ipv4{YType::empty, "ipv4"}
{
    yang_name = "id"; yang_parent_name = "source";
}

Native::Flow::Record::Match::Pfr::Site::Source::Id::~Id()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Id::has_data() const
{
    return ipv4.is_set;
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Id::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation);
}

std::string Native::Flow::Record::Match::Pfr::Site::Source::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Pfr::Site::Source::Id::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Id' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::Site::Source::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::Site::Source::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Pfr::Site::Source::Id::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Prefix()
    :
    ipv4{YType::empty, "ipv4"}
    	,
    mask(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask>())
{
    mask->parent = this;

    yang_name = "prefix"; yang_parent_name = "source";
}

Native::Flow::Record::Match::Pfr::Site::Source::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Prefix::has_data() const
{
    return ipv4.is_set
	|| (mask !=  nullptr && mask->has_data());
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| (mask !=  nullptr && mask->has_operation());
}

std::string Native::Flow::Record::Match::Pfr::Site::Source::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Pfr::Site::Source::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::Site::Source::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask>();
        }
        return mask;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::Site::Source::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mask != nullptr)
    {
        children["mask"] = mask;
    }

    return children;
}

void Native::Flow::Record::Match::Pfr::Site::Source::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::Mask()
    :
    ipv4{YType::empty, "ipv4"}
{
    yang_name = "mask"; yang_parent_name = "prefix";
}

Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::~Mask()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::has_data() const
{
    return ipv4.is_set;
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation);
}

std::string Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mask' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

Native::Flow::Record::Match::Policy::Policy()
    :
    performance_monitor(std::make_shared<Native::Flow::Record::Match::Policy::PerformanceMonitor>())
	,qos(std::make_shared<Native::Flow::Record::Match::Policy::Qos>())
{
    performance_monitor->parent = this;

    qos->parent = this;

    yang_name = "policy"; yang_parent_name = "match";
}

Native::Flow::Record::Match::Policy::~Policy()
{
}

bool Native::Flow::Record::Match::Policy::has_data() const
{
    return (performance_monitor !=  nullptr && performance_monitor->has_data())
	|| (qos !=  nullptr && qos->has_data());
}

bool Native::Flow::Record::Match::Policy::has_operation() const
{
    return is_set(operation)
	|| (performance_monitor !=  nullptr && performance_monitor->has_operation())
	|| (qos !=  nullptr && qos->has_operation());
}

std::string Native::Flow::Record::Match::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Policy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "performance-monitor")
    {
        if(performance_monitor == nullptr)
        {
            performance_monitor = std::make_shared<Native::Flow::Record::Match::Policy::PerformanceMonitor>();
        }
        return performance_monitor;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Flow::Record::Match::Policy::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(performance_monitor != nullptr)
    {
        children["performance-monitor"] = performance_monitor;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    return children;
}

void Native::Flow::Record::Match::Policy::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Match::Policy::PerformanceMonitor::PerformanceMonitor()
    :
    classification(std::make_shared<Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification>())
{
    classification->parent = this;

    yang_name = "performance-monitor"; yang_parent_name = "policy";
}

Native::Flow::Record::Match::Policy::PerformanceMonitor::~PerformanceMonitor()
{
}

bool Native::Flow::Record::Match::Policy::PerformanceMonitor::has_data() const
{
    return (classification !=  nullptr && classification->has_data());
}

bool Native::Flow::Record::Match::Policy::PerformanceMonitor::has_operation() const
{
    return is_set(operation)
	|| (classification !=  nullptr && classification->has_operation());
}

std::string Native::Flow::Record::Match::Policy::PerformanceMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-monitor";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Policy::PerformanceMonitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerformanceMonitor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Policy::PerformanceMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classification")
    {
        if(classification == nullptr)
        {
            classification = std::make_shared<Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification>();
        }
        return classification;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Policy::PerformanceMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(classification != nullptr)
    {
        children["classification"] = classification;
    }

    return children;
}

void Native::Flow::Record::Match::Policy::PerformanceMonitor::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::Classification()
    :
    hierarchy{YType::empty, "hierarchy"}
{
    yang_name = "classification"; yang_parent_name = "performance-monitor";
}

Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::~Classification()
{
}

bool Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::has_data() const
{
    return hierarchy.is_set;
}

bool Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::has_operation() const
{
    return is_set(operation)
	|| is_set(hierarchy.operation);
}

std::string Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classification";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Classification' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hierarchy.is_set || is_set(hierarchy.operation)) leaf_name_data.push_back(hierarchy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hierarchy")
    {
        hierarchy = value;
    }
}

Native::Flow::Record::Match::Policy::Qos::Qos()
    :
    classification(std::make_shared<Native::Flow::Record::Match::Policy::Qos::Classification>())
	,queue(std::make_shared<Native::Flow::Record::Match::Policy::Qos::Queue>())
{
    classification->parent = this;

    queue->parent = this;

    yang_name = "qos"; yang_parent_name = "policy";
}

Native::Flow::Record::Match::Policy::Qos::~Qos()
{
}

bool Native::Flow::Record::Match::Policy::Qos::has_data() const
{
    return (classification !=  nullptr && classification->has_data())
	|| (queue !=  nullptr && queue->has_data());
}

bool Native::Flow::Record::Match::Policy::Qos::has_operation() const
{
    return is_set(operation)
	|| (classification !=  nullptr && classification->has_operation())
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::Flow::Record::Match::Policy::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Policy::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qos' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Policy::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classification")
    {
        if(classification == nullptr)
        {
            classification = std::make_shared<Native::Flow::Record::Match::Policy::Qos::Classification>();
        }
        return classification;
    }

    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::Flow::Record::Match::Policy::Qos::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Policy::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(classification != nullptr)
    {
        children["classification"] = classification;
    }

    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    return children;
}

void Native::Flow::Record::Match::Policy::Qos::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Match::Policy::Qos::Classification::Classification()
    :
    hierarchy{YType::empty, "hierarchy"}
{
    yang_name = "classification"; yang_parent_name = "qos";
}

Native::Flow::Record::Match::Policy::Qos::Classification::~Classification()
{
}

bool Native::Flow::Record::Match::Policy::Qos::Classification::has_data() const
{
    return hierarchy.is_set;
}

bool Native::Flow::Record::Match::Policy::Qos::Classification::has_operation() const
{
    return is_set(operation)
	|| is_set(hierarchy.operation);
}

std::string Native::Flow::Record::Match::Policy::Qos::Classification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classification";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Policy::Qos::Classification::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Classification' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hierarchy.is_set || is_set(hierarchy.operation)) leaf_name_data.push_back(hierarchy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Policy::Qos::Classification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Policy::Qos::Classification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Policy::Qos::Classification::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hierarchy")
    {
        hierarchy = value;
    }
}

Native::Flow::Record::Match::Policy::Qos::Queue::Queue()
    :
    drops{YType::empty, "drops"},
    index_{YType::empty, "index"}
{
    yang_name = "queue"; yang_parent_name = "qos";
}

Native::Flow::Record::Match::Policy::Qos::Queue::~Queue()
{
}

bool Native::Flow::Record::Match::Policy::Qos::Queue::has_data() const
{
    return drops.is_set
	|| index_.is_set;
}

bool Native::Flow::Record::Match::Policy::Qos::Queue::has_operation() const
{
    return is_set(operation)
	|| is_set(drops.operation)
	|| is_set(index_.operation);
}

std::string Native::Flow::Record::Match::Policy::Qos::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Policy::Qos::Queue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Queue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drops.is_set || is_set(drops.operation)) leaf_name_data.push_back(drops.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Policy::Qos::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Policy::Qos::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Policy::Qos::Queue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drops")
    {
        drops = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
}

Native::Flow::Record::Match::Routing::Routing()
    :
    is_multicast{YType::empty, "is-multicast"}
    	,
    destination(std::make_shared<Native::Flow::Record::Match::Routing::Destination>())
	,forwarding_status(nullptr) // presence node
	,next_hop(std::make_shared<Native::Flow::Record::Match::Routing::NextHop>())
	,pw(std::make_shared<Native::Flow::Record::Match::Routing::Pw>())
	,source(std::make_shared<Native::Flow::Record::Match::Routing::Source>())
	,vrf(std::make_shared<Native::Flow::Record::Match::Routing::Vrf>())
{
    destination->parent = this;

    next_hop->parent = this;

    pw->parent = this;

    source->parent = this;

    vrf->parent = this;

    yang_name = "routing"; yang_parent_name = "match";
}

Native::Flow::Record::Match::Routing::~Routing()
{
}

bool Native::Flow::Record::Match::Routing::has_data() const
{
    return is_multicast.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (forwarding_status !=  nullptr && forwarding_status->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (pw !=  nullptr && pw->has_data())
	|| (source !=  nullptr && source->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Flow::Record::Match::Routing::has_operation() const
{
    return is_set(operation)
	|| is_set(is_multicast.operation)
	|| (destination !=  nullptr && destination->has_operation())
	|| (forwarding_status !=  nullptr && forwarding_status->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (pw !=  nullptr && pw->has_operation())
	|| (source !=  nullptr && source->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Flow::Record::Match::Routing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Routing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routing' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_multicast.is_set || is_set(is_multicast.operation)) leaf_name_data.push_back(is_multicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Match::Routing::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "forwarding-status")
    {
        if(forwarding_status == nullptr)
        {
            forwarding_status = std::make_shared<Native::Flow::Record::Match::Routing::ForwardingStatus>();
        }
        return forwarding_status;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::Flow::Record::Match::Routing::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<Native::Flow::Record::Match::Routing::Pw>();
        }
        return pw;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Match::Routing::Source>();
        }
        return source;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Flow::Record::Match::Routing::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(forwarding_status != nullptr)
    {
        children["forwarding-status"] = forwarding_status;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(pw != nullptr)
    {
        children["pw"] = pw;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Flow::Record::Match::Routing::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-multicast")
    {
        is_multicast = value;
    }
}

Native::Flow::Record::Match::Routing::Destination::Destination()
    :
    traffic_index{YType::empty, "traffic-index"}
    	,
    as(nullptr) // presence node
{
    yang_name = "destination"; yang_parent_name = "routing";
}

Native::Flow::Record::Match::Routing::Destination::~Destination()
{
}

bool Native::Flow::Record::Match::Routing::Destination::has_data() const
{
    return traffic_index.is_set
	|| (as !=  nullptr && as->has_data());
}

bool Native::Flow::Record::Match::Routing::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(traffic_index.operation)
	|| (as !=  nullptr && as->has_operation());
}

std::string Native::Flow::Record::Match::Routing::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Routing::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Destination' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        if(as == nullptr)
        {
            as = std::make_shared<Native::Flow::Record::Match::Routing::Destination::As>();
        }
        return as;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(as != nullptr)
    {
        children["as"] = as;
    }

    return children;
}

void Native::Flow::Record::Match::Routing::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
}

Native::Flow::Record::Match::Routing::Destination::As::As()
    :
    as4_octet{YType::empty, "as4-octet"}
    	,
    peer(nullptr) // presence node
{
    yang_name = "as"; yang_parent_name = "destination";
}

Native::Flow::Record::Match::Routing::Destination::As::~As()
{
}

bool Native::Flow::Record::Match::Routing::Destination::As::has_data() const
{
    return as4_octet.is_set
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Flow::Record::Match::Routing::Destination::As::has_operation() const
{
    return is_set(operation)
	|| is_set(as4_octet.operation)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Flow::Record::Match::Routing::Destination::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Routing::Destination::As::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'As' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as4_octet.is_set || is_set(as4_octet.operation)) leaf_name_data.push_back(as4_octet.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Destination::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Flow::Record::Match::Routing::Destination::As::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Destination::As::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Flow::Record::Match::Routing::Destination::As::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as4-octet")
    {
        as4_octet = value;
    }
}

Native::Flow::Record::Match::Routing::Destination::As::Peer::Peer()
    :
    peer4_octet{YType::empty, "peer4-octet"}
{
    yang_name = "peer"; yang_parent_name = "as";
}

Native::Flow::Record::Match::Routing::Destination::As::Peer::~Peer()
{
}

bool Native::Flow::Record::Match::Routing::Destination::As::Peer::has_data() const
{
    return peer4_octet.is_set;
}

bool Native::Flow::Record::Match::Routing::Destination::As::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(peer4_octet.operation);
}

std::string Native::Flow::Record::Match::Routing::Destination::As::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Routing::Destination::As::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer4_octet.is_set || is_set(peer4_octet.operation)) leaf_name_data.push_back(peer4_octet.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Destination::As::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Destination::As::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Routing::Destination::As::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet = value;
    }
}

Native::Flow::Record::Match::Routing::ForwardingStatus::ForwardingStatus()
    :
    reason{YType::empty, "reason"}
{
    yang_name = "forwarding-status"; yang_parent_name = "routing";
}

Native::Flow::Record::Match::Routing::ForwardingStatus::~ForwardingStatus()
{
}

bool Native::Flow::Record::Match::Routing::ForwardingStatus::has_data() const
{
    return reason.is_set;
}

bool Native::Flow::Record::Match::Routing::ForwardingStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(reason.operation);
}

std::string Native::Flow::Record::Match::Routing::ForwardingStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-status";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Routing::ForwardingStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardingStatus' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::ForwardingStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::ForwardingStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Routing::ForwardingStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reason")
    {
        reason = value;
    }
}

Native::Flow::Record::Match::Routing::NextHop::NextHop()
    :
    address(std::make_shared<Native::Flow::Record::Match::Routing::NextHop::Address>())
{
    address->parent = this;

    yang_name = "next-hop"; yang_parent_name = "routing";
}

Native::Flow::Record::Match::Routing::NextHop::~NextHop()
{
}

bool Native::Flow::Record::Match::Routing::NextHop::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Flow::Record::Match::Routing::NextHop::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Flow::Record::Match::Routing::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Routing::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Flow::Record::Match::Routing::NextHop::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Flow::Record::Match::Routing::NextHop::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Match::Routing::NextHop::Address::Address()
    :
    ipv4(nullptr) // presence node
	,ipv6(nullptr) // presence node
{
    yang_name = "address"; yang_parent_name = "next-hop";
}

Native::Flow::Record::Match::Routing::NextHop::Address::~Address()
{
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Flow::Record::Match::Routing::NextHop::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Routing::NextHop::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::NextHop::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::NextHop::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Flow::Record::Match::Routing::NextHop::Address::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::Ipv4()
    :
    bgp{YType::empty, "bgp"}
{
    yang_name = "ipv4"; yang_parent_name = "address";
}

Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::has_data() const
{
    return bgp.is_set;
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp.operation);
}

std::string Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.operation)) leaf_name_data.push_back(bgp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp")
    {
        bgp = value;
    }
}

Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::Ipv6()
    :
    bgp{YType::empty, "bgp"}
{
    yang_name = "ipv6"; yang_parent_name = "address";
}

Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::has_data() const
{
    return bgp.is_set;
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp.operation);
}

std::string Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.operation)) leaf_name_data.push_back(bgp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp")
    {
        bgp = value;
    }
}

Native::Flow::Record::Match::Routing::Pw::Pw()
    :
    destination(std::make_shared<Native::Flow::Record::Match::Routing::Pw::Destination>())
{
    destination->parent = this;

    yang_name = "pw"; yang_parent_name = "routing";
}

Native::Flow::Record::Match::Routing::Pw::~Pw()
{
}

bool Native::Flow::Record::Match::Routing::Pw::has_data() const
{
    return (destination !=  nullptr && destination->has_data());
}

bool Native::Flow::Record::Match::Routing::Pw::has_operation() const
{
    return is_set(operation)
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::Flow::Record::Match::Routing::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Routing::Pw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pw' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Match::Routing::Pw::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    return children;
}

void Native::Flow::Record::Match::Routing::Pw::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Match::Routing::Pw::Destination::Destination()
    :
    address{YType::empty, "address"}
{
    yang_name = "destination"; yang_parent_name = "pw";
}

Native::Flow::Record::Match::Routing::Pw::Destination::~Destination()
{
}

bool Native::Flow::Record::Match::Routing::Pw::Destination::has_data() const
{
    return address.is_set;
}

bool Native::Flow::Record::Match::Routing::Pw::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::Flow::Record::Match::Routing::Pw::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Routing::Pw::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Destination' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Pw::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Pw::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Routing::Pw::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Flow::Record::Match::Routing::Source::Source()
    :
    traffic_index{YType::empty, "traffic-index"}
    	,
    as(nullptr) // presence node
{
    yang_name = "source"; yang_parent_name = "routing";
}

Native::Flow::Record::Match::Routing::Source::~Source()
{
}

bool Native::Flow::Record::Match::Routing::Source::has_data() const
{
    return traffic_index.is_set
	|| (as !=  nullptr && as->has_data());
}

bool Native::Flow::Record::Match::Routing::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(traffic_index.operation)
	|| (as !=  nullptr && as->has_operation());
}

std::string Native::Flow::Record::Match::Routing::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Routing::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        if(as == nullptr)
        {
            as = std::make_shared<Native::Flow::Record::Match::Routing::Source::As>();
        }
        return as;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(as != nullptr)
    {
        children["as"] = as;
    }

    return children;
}

void Native::Flow::Record::Match::Routing::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
}

Native::Flow::Record::Match::Routing::Source::As::As()
    :
    as4_octet{YType::empty, "as4-octet"}
    	,
    peer(nullptr) // presence node
{
    yang_name = "as"; yang_parent_name = "source";
}

Native::Flow::Record::Match::Routing::Source::As::~As()
{
}

bool Native::Flow::Record::Match::Routing::Source::As::has_data() const
{
    return as4_octet.is_set
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Flow::Record::Match::Routing::Source::As::has_operation() const
{
    return is_set(operation)
	|| is_set(as4_octet.operation)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Flow::Record::Match::Routing::Source::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Routing::Source::As::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'As' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as4_octet.is_set || is_set(as4_octet.operation)) leaf_name_data.push_back(as4_octet.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Source::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Flow::Record::Match::Routing::Source::As::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Source::As::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Flow::Record::Match::Routing::Source::As::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as4-octet")
    {
        as4_octet = value;
    }
}

Native::Flow::Record::Match::Routing::Source::As::Peer::Peer()
    :
    peer4_octet{YType::empty, "peer4-octet"}
{
    yang_name = "peer"; yang_parent_name = "as";
}

Native::Flow::Record::Match::Routing::Source::As::Peer::~Peer()
{
}

bool Native::Flow::Record::Match::Routing::Source::As::Peer::has_data() const
{
    return peer4_octet.is_set;
}

bool Native::Flow::Record::Match::Routing::Source::As::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(peer4_octet.operation);
}

std::string Native::Flow::Record::Match::Routing::Source::As::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Routing::Source::As::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer4_octet.is_set || is_set(peer4_octet.operation)) leaf_name_data.push_back(peer4_octet.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Source::As::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Source::As::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Routing::Source::As::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet = value;
    }
}

Native::Flow::Record::Match::Routing::Vrf::Vrf()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{
    yang_name = "vrf"; yang_parent_name = "routing";
}

Native::Flow::Record::Match::Routing::Vrf::~Vrf()
{
}

bool Native::Flow::Record::Match::Routing::Vrf::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Native::Flow::Record::Match::Routing::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(input.operation)
	|| is_set(output.operation);
}

std::string Native::Flow::Record::Match::Routing::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Routing::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.operation)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Routing::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "input")
    {
        input = value;
    }
    if(value_path == "output")
    {
        output = value;
    }
}

Native::Flow::Record::Match::Services::Services()
    :
    waas(std::make_shared<Native::Flow::Record::Match::Services::Waas>())
{
    waas->parent = this;

    yang_name = "services"; yang_parent_name = "match";
}

Native::Flow::Record::Match::Services::~Services()
{
}

bool Native::Flow::Record::Match::Services::has_data() const
{
    return (waas !=  nullptr && waas->has_data());
}

bool Native::Flow::Record::Match::Services::has_operation() const
{
    return is_set(operation)
	|| (waas !=  nullptr && waas->has_operation());
}

std::string Native::Flow::Record::Match::Services::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "services";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Services::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Services' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Services::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "waas")
    {
        if(waas == nullptr)
        {
            waas = std::make_shared<Native::Flow::Record::Match::Services::Waas>();
        }
        return waas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Services::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(waas != nullptr)
    {
        children["waas"] = waas;
    }

    return children;
}

void Native::Flow::Record::Match::Services::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Match::Services::Waas::Waas()
    :
    passthrough_reason{YType::empty, "passthrough-reason"}
    	,
    segment(nullptr) // presence node
{
    yang_name = "waas"; yang_parent_name = "services";
}

Native::Flow::Record::Match::Services::Waas::~Waas()
{
}

bool Native::Flow::Record::Match::Services::Waas::has_data() const
{
    return passthrough_reason.is_set
	|| (segment !=  nullptr && segment->has_data());
}

bool Native::Flow::Record::Match::Services::Waas::has_operation() const
{
    return is_set(operation)
	|| is_set(passthrough_reason.operation)
	|| (segment !=  nullptr && segment->has_operation());
}

std::string Native::Flow::Record::Match::Services::Waas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "waas";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Services::Waas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Waas' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passthrough_reason.is_set || is_set(passthrough_reason.operation)) leaf_name_data.push_back(passthrough_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Services::Waas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        if(segment == nullptr)
        {
            segment = std::make_shared<Native::Flow::Record::Match::Services::Waas::Segment>();
        }
        return segment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Services::Waas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(segment != nullptr)
    {
        children["segment"] = segment;
    }

    return children;
}

void Native::Flow::Record::Match::Services::Waas::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "passthrough-reason")
    {
        passthrough_reason = value;
    }
}

Native::Flow::Record::Match::Services::Waas::Segment::Segment()
    :
    account_on_resolution{YType::empty, "account-on-resolution"}
{
    yang_name = "segment"; yang_parent_name = "waas";
}

Native::Flow::Record::Match::Services::Waas::Segment::~Segment()
{
}

bool Native::Flow::Record::Match::Services::Waas::Segment::has_data() const
{
    return account_on_resolution.is_set;
}

bool Native::Flow::Record::Match::Services::Waas::Segment::has_operation() const
{
    return is_set(operation)
	|| is_set(account_on_resolution.operation);
}

std::string Native::Flow::Record::Match::Services::Waas::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Services::Waas::Segment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Segment' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_on_resolution.is_set || is_set(account_on_resolution.operation)) leaf_name_data.push_back(account_on_resolution.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Services::Waas::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Services::Waas::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Services::Waas::Segment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "account-on-resolution")
    {
        account_on_resolution = value;
    }
}

Native::Flow::Record::Match::Timestamp::Timestamp()
    :
    absolute(std::make_shared<Native::Flow::Record::Match::Timestamp::Absolute>())
{
    absolute->parent = this;

    yang_name = "timestamp"; yang_parent_name = "match";
}

Native::Flow::Record::Match::Timestamp::~Timestamp()
{
}

bool Native::Flow::Record::Match::Timestamp::has_data() const
{
    return (absolute !=  nullptr && absolute->has_data());
}

bool Native::Flow::Record::Match::Timestamp::has_operation() const
{
    return is_set(operation)
	|| (absolute !=  nullptr && absolute->has_operation());
}

std::string Native::Flow::Record::Match::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Timestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timestamp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::Flow::Record::Match::Timestamp::Absolute>();
        }
        return absolute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    return children;
}

void Native::Flow::Record::Match::Timestamp::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Match::Timestamp::Absolute::Absolute()
    :
    monitoring_interval(std::make_shared<Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval>())
{
    monitoring_interval->parent = this;

    yang_name = "absolute"; yang_parent_name = "timestamp";
}

Native::Flow::Record::Match::Timestamp::Absolute::~Absolute()
{
}

bool Native::Flow::Record::Match::Timestamp::Absolute::has_data() const
{
    return (monitoring_interval !=  nullptr && monitoring_interval->has_data());
}

bool Native::Flow::Record::Match::Timestamp::Absolute::has_operation() const
{
    return is_set(operation)
	|| (monitoring_interval !=  nullptr && monitoring_interval->has_operation());
}

std::string Native::Flow::Record::Match::Timestamp::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Timestamp::Absolute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Absolute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Timestamp::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitoring-interval")
    {
        if(monitoring_interval == nullptr)
        {
            monitoring_interval = std::make_shared<Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval>();
        }
        return monitoring_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Timestamp::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitoring_interval != nullptr)
    {
        children["monitoring-interval"] = monitoring_interval;
    }

    return children;
}

void Native::Flow::Record::Match::Timestamp::Absolute::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::MonitoringInterval()
    :
    start{YType::empty, "start"}
{
    yang_name = "monitoring-interval"; yang_parent_name = "absolute";
}

Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::~MonitoringInterval()
{
}

bool Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::has_data() const
{
    return start.is_set;
}

bool Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(start.operation);
}

std::string Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitoring-interval";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MonitoringInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "start")
    {
        start = value;
    }
}

Native::Flow::Record::Match::Transport::Transport()
    :
    destination_port{YType::empty, "destination-port"},
    source_port{YType::empty, "source-port"}
    	,
    bytes(std::make_shared<Native::Flow::Record::Match::Transport::Bytes>())
	,icmp(std::make_shared<Native::Flow::Record::Match::Transport::Icmp>())
	,igmp(std::make_shared<Native::Flow::Record::Match::Transport::Igmp>())
	,rtp(std::make_shared<Native::Flow::Record::Match::Transport::Rtp>())
	,tcp(std::make_shared<Native::Flow::Record::Match::Transport::Tcp>())
	,udp(std::make_shared<Native::Flow::Record::Match::Transport::Udp>())
{
    bytes->parent = this;

    icmp->parent = this;

    igmp->parent = this;

    rtp->parent = this;

    tcp->parent = this;

    udp->parent = this;

    yang_name = "transport"; yang_parent_name = "match";
}

Native::Flow::Record::Match::Transport::~Transport()
{
}

bool Native::Flow::Record::Match::Transport::has_data() const
{
    return destination_port.is_set
	|| source_port.is_set
	|| (bytes !=  nullptr && bytes->has_data())
	|| (icmp !=  nullptr && icmp->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (rtp !=  nullptr && rtp->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Flow::Record::Match::Transport::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_port.operation)
	|| is_set(source_port.operation)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (rtp !=  nullptr && rtp->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Flow::Record::Match::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Match::Transport::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<Native::Flow::Record::Match::Transport::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<Native::Flow::Record::Match::Transport::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "rtp")
    {
        if(rtp == nullptr)
        {
            rtp = std::make_shared<Native::Flow::Record::Match::Transport::Rtp>();
        }
        return rtp;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Flow::Record::Match::Transport::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Flow::Record::Match::Transport::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bytes != nullptr)
    {
        children["bytes"] = bytes;
    }

    if(icmp != nullptr)
    {
        children["icmp"] = icmp;
    }

    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    if(rtp != nullptr)
    {
        children["rtp"] = rtp;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Flow::Record::Match::Transport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
}

Native::Flow::Record::Match::Transport::Bytes::Bytes()
    :
    expected{YType::empty, "expected"}
    	,
    lost(nullptr) // presence node
{
    yang_name = "bytes"; yang_parent_name = "transport";
}

Native::Flow::Record::Match::Transport::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Match::Transport::Bytes::has_data() const
{
    return expected.is_set
	|| (lost !=  nullptr && lost->has_data());
}

bool Native::Flow::Record::Match::Transport::Bytes::has_operation() const
{
    return is_set(operation)
	|| is_set(expected.operation)
	|| (lost !=  nullptr && lost->has_operation());
}

std::string Native::Flow::Record::Match::Transport::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Transport::Bytes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bytes' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expected.is_set || is_set(expected.operation)) leaf_name_data.push_back(expected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lost")
    {
        if(lost == nullptr)
        {
            lost = std::make_shared<Native::Flow::Record::Match::Transport::Bytes::Lost>();
        }
        return lost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lost != nullptr)
    {
        children["lost"] = lost;
    }

    return children;
}

void Native::Flow::Record::Match::Transport::Bytes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expected")
    {
        expected = value;
    }
}

Native::Flow::Record::Match::Transport::Bytes::Lost::Lost()
    :
    rate{YType::empty, "rate"}
{
    yang_name = "lost"; yang_parent_name = "bytes";
}

Native::Flow::Record::Match::Transport::Bytes::Lost::~Lost()
{
}

bool Native::Flow::Record::Match::Transport::Bytes::Lost::has_data() const
{
    return rate.is_set;
}

bool Native::Flow::Record::Match::Transport::Bytes::Lost::has_operation() const
{
    return is_set(operation)
	|| is_set(rate.operation);
}

std::string Native::Flow::Record::Match::Transport::Bytes::Lost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lost";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Transport::Bytes::Lost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Bytes::Lost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Bytes::Lost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Transport::Bytes::Lost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rate")
    {
        rate = value;
    }
}

Native::Flow::Record::Match::Transport::Rtp::Rtp()
    :
    ssrc{YType::empty, "ssrc"}
{
    yang_name = "rtp"; yang_parent_name = "transport";
}

Native::Flow::Record::Match::Transport::Rtp::~Rtp()
{
}

bool Native::Flow::Record::Match::Transport::Rtp::has_data() const
{
    return ssrc.is_set;
}

bool Native::Flow::Record::Match::Transport::Rtp::has_operation() const
{
    return is_set(operation)
	|| is_set(ssrc.operation);
}

std::string Native::Flow::Record::Match::Transport::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Transport::Rtp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rtp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ssrc.is_set || is_set(ssrc.operation)) leaf_name_data.push_back(ssrc.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Transport::Rtp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ssrc")
    {
        ssrc = value;
    }
}

Native::Flow::Record::Match::Transport::Icmp::Icmp()
    :
    ipv4(std::make_shared<Native::Flow::Record::Match::Transport::Icmp::Ipv4>())
	,ipv6(std::make_shared<Native::Flow::Record::Match::Transport::Icmp::Ipv6>())
{
    ipv4->parent = this;

    ipv6->parent = this;

    yang_name = "icmp"; yang_parent_name = "transport";
}

Native::Flow::Record::Match::Transport::Icmp::~Icmp()
{
}

bool Native::Flow::Record::Match::Transport::Icmp::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Flow::Record::Match::Transport::Icmp::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Flow::Record::Match::Transport::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Transport::Icmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Icmp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Match::Transport::Icmp::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Match::Transport::Icmp::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Flow::Record::Match::Transport::Icmp::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Match::Transport::Icmp::Ipv4::Ipv4()
    :
    code{YType::empty, "code"},
    type{YType::empty, "type"}
{
    yang_name = "ipv4"; yang_parent_name = "icmp";
}

Native::Flow::Record::Match::Transport::Icmp::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Match::Transport::Icmp::Ipv4::has_data() const
{
    return code.is_set
	|| type.is_set;
}

bool Native::Flow::Record::Match::Transport::Icmp::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(code.operation)
	|| is_set(type.operation);
}

std::string Native::Flow::Record::Match::Transport::Icmp::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Transport::Icmp::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.operation)) leaf_name_data.push_back(code.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Icmp::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Icmp::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Transport::Icmp::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "code")
    {
        code = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Flow::Record::Match::Transport::Icmp::Ipv6::Ipv6()
    :
    code{YType::empty, "code"},
    type{YType::empty, "type"}
{
    yang_name = "ipv6"; yang_parent_name = "icmp";
}

Native::Flow::Record::Match::Transport::Icmp::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Match::Transport::Icmp::Ipv6::has_data() const
{
    return code.is_set
	|| type.is_set;
}

bool Native::Flow::Record::Match::Transport::Icmp::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(code.operation)
	|| is_set(type.operation);
}

std::string Native::Flow::Record::Match::Transport::Icmp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Transport::Icmp::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.operation)) leaf_name_data.push_back(code.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Icmp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Icmp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Transport::Icmp::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "code")
    {
        code = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Flow::Record::Match::Transport::Igmp::Igmp()
    :
    type{YType::empty, "type"}
{
    yang_name = "igmp"; yang_parent_name = "transport";
}

Native::Flow::Record::Match::Transport::Igmp::~Igmp()
{
}

bool Native::Flow::Record::Match::Transport::Igmp::has_data() const
{
    return type.is_set;
}

bool Native::Flow::Record::Match::Transport::Igmp::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation);
}

std::string Native::Flow::Record::Match::Transport::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Transport::Igmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Igmp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Transport::Igmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Flow::Record::Match::Transport::Tcp::Tcp()
    :
    acknowledgement_number{YType::empty, "acknowledgement-number"},
    destination_port{YType::empty, "destination-port"},
    header_length{YType::empty, "header-length"},
    maximum_segment_size{YType::empty, "maximum-segment-size"},
    sequence_number{YType::empty, "sequence-number"},
    source_port{YType::empty, "source-port"},
    urgent_pointer{YType::empty, "urgent-pointer"}
    	,
    flags(nullptr) // presence node
	,flow(std::make_shared<Native::Flow::Record::Match::Transport::Tcp::Flow_>())
	,option(std::make_shared<Native::Flow::Record::Match::Transport::Tcp::Option>())
	,window_size(nullptr) // presence node
{
    flow->parent = this;

    option->parent = this;

    yang_name = "tcp"; yang_parent_name = "transport";
}

Native::Flow::Record::Match::Transport::Tcp::~Tcp()
{
}

bool Native::Flow::Record::Match::Transport::Tcp::has_data() const
{
    return acknowledgement_number.is_set
	|| destination_port.is_set
	|| header_length.is_set
	|| maximum_segment_size.is_set
	|| sequence_number.is_set
	|| source_port.is_set
	|| urgent_pointer.is_set
	|| (flags !=  nullptr && flags->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (window_size !=  nullptr && window_size->has_data());
}

bool Native::Flow::Record::Match::Transport::Tcp::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledgement_number.operation)
	|| is_set(destination_port.operation)
	|| is_set(header_length.operation)
	|| is_set(maximum_segment_size.operation)
	|| is_set(sequence_number.operation)
	|| is_set(source_port.operation)
	|| is_set(urgent_pointer.operation)
	|| (flags !=  nullptr && flags->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (window_size !=  nullptr && window_size->has_operation());
}

std::string Native::Flow::Record::Match::Transport::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Transport::Tcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement_number.is_set || is_set(acknowledgement_number.operation)) leaf_name_data.push_back(acknowledgement_number.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (header_length.is_set || is_set(header_length.operation)) leaf_name_data.push_back(header_length.get_name_leafdata());
    if (maximum_segment_size.is_set || is_set(maximum_segment_size.operation)) leaf_name_data.push_back(maximum_segment_size.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (urgent_pointer.is_set || is_set(urgent_pointer.operation)) leaf_name_data.push_back(urgent_pointer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<Native::Flow::Record::Match::Transport::Tcp::Flags>();
        }
        return flags;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Flow::Record::Match::Transport::Tcp::Flow_>();
        }
        return flow;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Flow::Record::Match::Transport::Tcp::Option>();
        }
        return option;
    }

    if(child_yang_name == "window-size")
    {
        if(window_size == nullptr)
        {
            window_size = std::make_shared<Native::Flow::Record::Match::Transport::Tcp::WindowSize>();
        }
        return window_size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(window_size != nullptr)
    {
        children["window-size"] = window_size;
    }

    return children;
}

void Native::Flow::Record::Match::Transport::Tcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledgement-number")
    {
        acknowledgement_number = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "header-length")
    {
        header_length = value;
    }
    if(value_path == "maximum-segment-size")
    {
        maximum_segment_size = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "urgent-pointer")
    {
        urgent_pointer = value;
    }
}

Native::Flow::Record::Match::Transport::Tcp::Flags::Flags()
    :
    ack{YType::empty, "ack"},
    cwr{YType::empty, "cwr"},
    ece{YType::empty, "ece"},
    fin{YType::empty, "fin"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    syn{YType::empty, "syn"},
    urg{YType::empty, "urg"}
{
    yang_name = "flags"; yang_parent_name = "tcp";
}

Native::Flow::Record::Match::Transport::Tcp::Flags::~Flags()
{
}

bool Native::Flow::Record::Match::Transport::Tcp::Flags::has_data() const
{
    return ack.is_set
	|| cwr.is_set
	|| ece.is_set
	|| fin.is_set
	|| psh.is_set
	|| rst.is_set
	|| syn.is_set
	|| urg.is_set;
}

bool Native::Flow::Record::Match::Transport::Tcp::Flags::has_operation() const
{
    return is_set(operation)
	|| is_set(ack.operation)
	|| is_set(cwr.operation)
	|| is_set(ece.operation)
	|| is_set(fin.operation)
	|| is_set(psh.operation)
	|| is_set(rst.operation)
	|| is_set(syn.operation)
	|| is_set(urg.operation);
}

std::string Native::Flow::Record::Match::Transport::Tcp::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Transport::Tcp::Flags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flags' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.operation)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (cwr.is_set || is_set(cwr.operation)) leaf_name_data.push_back(cwr.get_name_leafdata());
    if (ece.is_set || is_set(ece.operation)) leaf_name_data.push_back(ece.get_name_leafdata());
    if (fin.is_set || is_set(fin.operation)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (psh.is_set || is_set(psh.operation)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.operation)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (syn.is_set || is_set(syn.operation)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (urg.is_set || is_set(urg.operation)) leaf_name_data.push_back(urg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Tcp::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Tcp::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Transport::Tcp::Flags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack")
    {
        ack = value;
    }
    if(value_path == "cwr")
    {
        cwr = value;
    }
    if(value_path == "ece")
    {
        ece = value;
    }
    if(value_path == "fin")
    {
        fin = value;
    }
    if(value_path == "psh")
    {
        psh = value;
    }
    if(value_path == "rst")
    {
        rst = value;
    }
    if(value_path == "syn")
    {
        syn = value;
    }
    if(value_path == "urg")
    {
        urg = value;
    }
}

Native::Flow::Record::Match::Transport::Tcp::Flow_::Flow_()
    :
    count{YType::empty, "count"}
{
    yang_name = "flow"; yang_parent_name = "tcp";
}

Native::Flow::Record::Match::Transport::Tcp::Flow_::~Flow_()
{
}

bool Native::Flow::Record::Match::Transport::Tcp::Flow_::has_data() const
{
    return count.is_set;
}

bool Native::Flow::Record::Match::Transport::Tcp::Flow_::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation);
}

std::string Native::Flow::Record::Match::Transport::Tcp::Flow_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Transport::Tcp::Flow_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flow_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Tcp::Flow_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Tcp::Flow_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Transport::Tcp::Flow_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Native::Flow::Record::Match::Transport::Tcp::Option::Option()
    :
    map(nullptr) // presence node
{
    yang_name = "option"; yang_parent_name = "tcp";
}

Native::Flow::Record::Match::Transport::Tcp::Option::~Option()
{
}

bool Native::Flow::Record::Match::Transport::Tcp::Option::has_data() const
{
    return (map !=  nullptr && map->has_data());
}

bool Native::Flow::Record::Match::Transport::Tcp::Option::has_operation() const
{
    return is_set(operation)
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Flow::Record::Match::Transport::Tcp::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Transport::Tcp::Option::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Option' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Tcp::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Flow::Record::Match::Transport::Tcp::Option::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Tcp::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map != nullptr)
    {
        children["map"] = map;
    }

    return children;
}

void Native::Flow::Record::Match::Transport::Tcp::Option::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Match::Transport::Tcp::Option::Map::Map()
    :
    long_{YType::empty, "long"}
{
    yang_name = "map"; yang_parent_name = "option";
}

Native::Flow::Record::Match::Transport::Tcp::Option::Map::~Map()
{
}

bool Native::Flow::Record::Match::Transport::Tcp::Option::Map::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Match::Transport::Tcp::Option::Map::has_operation() const
{
    return is_set(operation)
	|| is_set(long_.operation);
}

std::string Native::Flow::Record::Match::Transport::Tcp::Option::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Transport::Tcp::Option::Map::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Map' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.operation)) leaf_name_data.push_back(long_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Tcp::Option::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Tcp::Option::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Transport::Tcp::Option::Map::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "long")
    {
        long_ = value;
    }
}

Native::Flow::Record::Match::Transport::Tcp::WindowSize::WindowSize()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"},
    sum{YType::empty, "sum"}
    	,
    average(nullptr) // presence node
{
    yang_name = "window-size"; yang_parent_name = "tcp";
}

Native::Flow::Record::Match::Transport::Tcp::WindowSize::~WindowSize()
{
}

bool Native::Flow::Record::Match::Transport::Tcp::WindowSize::has_data() const
{
    return maximum.is_set
	|| minimum.is_set
	|| sum.is_set
	|| (average !=  nullptr && average->has_data());
}

bool Native::Flow::Record::Match::Transport::Tcp::WindowSize::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(sum.operation)
	|| (average !=  nullptr && average->has_operation());
}

std::string Native::Flow::Record::Match::Transport::Tcp::WindowSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window-size";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Transport::Tcp::WindowSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WindowSize' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (sum.is_set || is_set(sum.operation)) leaf_name_data.push_back(sum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Tcp::WindowSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "average")
    {
        if(average == nullptr)
        {
            average = std::make_shared<Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average>();
        }
        return average;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Tcp::WindowSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(average != nullptr)
    {
        children["average"] = average;
    }

    return children;
}

void Native::Flow::Record::Match::Transport::Tcp::WindowSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "sum")
    {
        sum = value;
    }
}

Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::Average()
    :
    sum{YType::empty, "sum"}
{
    yang_name = "average"; yang_parent_name = "window-size";
}

Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::~Average()
{
}

bool Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::has_data() const
{
    return sum.is_set;
}

bool Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::has_operation() const
{
    return is_set(operation)
	|| is_set(sum.operation);
}

std::string Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "average";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Average' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sum.is_set || is_set(sum.operation)) leaf_name_data.push_back(sum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sum")
    {
        sum = value;
    }
}

Native::Flow::Record::Match::Transport::Udp::Udp()
    :
    destination_port{YType::empty, "destination-port"},
    message_length{YType::empty, "message-length"},
    source_port{YType::empty, "source-port"}
{
    yang_name = "udp"; yang_parent_name = "transport";
}

Native::Flow::Record::Match::Transport::Udp::~Udp()
{
}

bool Native::Flow::Record::Match::Transport::Udp::has_data() const
{
    return destination_port.is_set
	|| message_length.is_set
	|| source_port.is_set;
}

bool Native::Flow::Record::Match::Transport::Udp::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_port.operation)
	|| is_set(message_length.operation)
	|| is_set(source_port.operation);
}

std::string Native::Flow::Record::Match::Transport::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Match::Transport::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (message_length.is_set || is_set(message_length.operation)) leaf_name_data.push_back(message_length.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Transport::Udp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "message-length")
    {
        message_length = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
}

Native::Flow::Exporter::Exporter()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    dscp{YType::uint8, "dscp"},
    export_protocol{YType::enumeration, "export-protocol"},
    ttl{YType::uint8, "ttl"}
    	,
    default_(std::make_shared<Native::Flow::Exporter::Default_>())
	,destination(std::make_shared<Native::Flow::Exporter::Destination>())
	,option(std::make_shared<Native::Flow::Exporter::Option>())
	,output_features(nullptr) // presence node
	,source(std::make_shared<Native::Flow::Exporter::Source>())
	,template_(std::make_shared<Native::Flow::Exporter::Template_>())
	,transport(std::make_shared<Native::Flow::Exporter::Transport>())
{
    default_->parent = this;

    destination->parent = this;

    option->parent = this;

    source->parent = this;

    template_->parent = this;

    transport->parent = this;

    yang_name = "exporter"; yang_parent_name = "flow";
}

Native::Flow::Exporter::~Exporter()
{
}

bool Native::Flow::Exporter::has_data() const
{
    return name.is_set
	|| description.is_set
	|| dscp.is_set
	|| export_protocol.is_set
	|| ttl.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (destination !=  nullptr && destination->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (output_features !=  nullptr && output_features->has_data())
	|| (source !=  nullptr && source->has_data())
	|| (template_ !=  nullptr && template_->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Exporter::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| is_set(dscp.operation)
	|| is_set(export_protocol.operation)
	|| is_set(ttl.operation)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (destination !=  nullptr && destination->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (output_features !=  nullptr && output_features->has_operation())
	|| (source !=  nullptr && source->has_operation())
	|| (template_ !=  nullptr && template_->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Exporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:exporter" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/flow/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (export_protocol.is_set || is_set(export_protocol.operation)) leaf_name_data.push_back(export_protocol.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Flow::Exporter::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Exporter::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Flow::Exporter::Option>();
        }
        return option;
    }

    if(child_yang_name == "output-features")
    {
        if(output_features == nullptr)
        {
            output_features = std::make_shared<Native::Flow::Exporter::OutputFeatures>();
        }
        return output_features;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Exporter::Source>();
        }
        return source;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::Flow::Exporter::Template_>();
        }
        return template_;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Exporter::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(output_features != nullptr)
    {
        children["output-features"] = output_features;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Flow::Exporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "export-protocol")
    {
        export_protocol = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

Native::Flow::Exporter::Destination::Destination()
    :
    ip{YType::str, "ip"},
    vrf{YType::str, "vrf"}
{
    yang_name = "destination"; yang_parent_name = "exporter";
}

Native::Flow::Exporter::Destination::~Destination()
{
}

bool Native::Flow::Exporter::Destination::has_data() const
{
    return ip.is_set
	|| vrf.is_set;
}

bool Native::Flow::Exporter::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(vrf.operation);
}

std::string Native::Flow::Exporter::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Destination' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Flow::Exporter::Option::Option()
    :
    application_attributes(nullptr) // presence node
	,application_table(nullptr) // presence node
	,c3pl_class_table(nullptr) // presence node
	,c3pl_policy_table(nullptr) // presence node
	,exporter_stats(nullptr) // presence node
	,interface_table(nullptr) // presence node
	,metadata_version_table(nullptr) // presence node
	,sampler_table(nullptr) // presence node
	,sub_application_table(nullptr) // presence node
	,vrf_table(nullptr) // presence node
{
    yang_name = "option"; yang_parent_name = "exporter";
}

Native::Flow::Exporter::Option::~Option()
{
}

bool Native::Flow::Exporter::Option::has_data() const
{
    return (application_attributes !=  nullptr && application_attributes->has_data())
	|| (application_table !=  nullptr && application_table->has_data())
	|| (c3pl_class_table !=  nullptr && c3pl_class_table->has_data())
	|| (c3pl_policy_table !=  nullptr && c3pl_policy_table->has_data())
	|| (exporter_stats !=  nullptr && exporter_stats->has_data())
	|| (interface_table !=  nullptr && interface_table->has_data())
	|| (metadata_version_table !=  nullptr && metadata_version_table->has_data())
	|| (sampler_table !=  nullptr && sampler_table->has_data())
	|| (sub_application_table !=  nullptr && sub_application_table->has_data())
	|| (vrf_table !=  nullptr && vrf_table->has_data());
}

bool Native::Flow::Exporter::Option::has_operation() const
{
    return is_set(operation)
	|| (application_attributes !=  nullptr && application_attributes->has_operation())
	|| (application_table !=  nullptr && application_table->has_operation())
	|| (c3pl_class_table !=  nullptr && c3pl_class_table->has_operation())
	|| (c3pl_policy_table !=  nullptr && c3pl_policy_table->has_operation())
	|| (exporter_stats !=  nullptr && exporter_stats->has_operation())
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (metadata_version_table !=  nullptr && metadata_version_table->has_operation())
	|| (sampler_table !=  nullptr && sampler_table->has_operation())
	|| (sub_application_table !=  nullptr && sub_application_table->has_operation())
	|| (vrf_table !=  nullptr && vrf_table->has_operation());
}

std::string Native::Flow::Exporter::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Option::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Option' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-attributes")
    {
        if(application_attributes == nullptr)
        {
            application_attributes = std::make_shared<Native::Flow::Exporter::Option::ApplicationAttributes>();
        }
        return application_attributes;
    }

    if(child_yang_name == "application-table")
    {
        if(application_table == nullptr)
        {
            application_table = std::make_shared<Native::Flow::Exporter::Option::ApplicationTable>();
        }
        return application_table;
    }

    if(child_yang_name == "c3pl-class-table")
    {
        if(c3pl_class_table == nullptr)
        {
            c3pl_class_table = std::make_shared<Native::Flow::Exporter::Option::C3PlClassTable>();
        }
        return c3pl_class_table;
    }

    if(child_yang_name == "c3pl-policy-table")
    {
        if(c3pl_policy_table == nullptr)
        {
            c3pl_policy_table = std::make_shared<Native::Flow::Exporter::Option::C3PlPolicyTable>();
        }
        return c3pl_policy_table;
    }

    if(child_yang_name == "exporter-stats")
    {
        if(exporter_stats == nullptr)
        {
            exporter_stats = std::make_shared<Native::Flow::Exporter::Option::ExporterStats>();
        }
        return exporter_stats;
    }

    if(child_yang_name == "interface-table")
    {
        if(interface_table == nullptr)
        {
            interface_table = std::make_shared<Native::Flow::Exporter::Option::InterfaceTable>();
        }
        return interface_table;
    }

    if(child_yang_name == "metadata-version-table")
    {
        if(metadata_version_table == nullptr)
        {
            metadata_version_table = std::make_shared<Native::Flow::Exporter::Option::MetadataVersionTable>();
        }
        return metadata_version_table;
    }

    if(child_yang_name == "sampler-table")
    {
        if(sampler_table == nullptr)
        {
            sampler_table = std::make_shared<Native::Flow::Exporter::Option::SamplerTable>();
        }
        return sampler_table;
    }

    if(child_yang_name == "sub-application-table")
    {
        if(sub_application_table == nullptr)
        {
            sub_application_table = std::make_shared<Native::Flow::Exporter::Option::SubApplicationTable>();
        }
        return sub_application_table;
    }

    if(child_yang_name == "vrf-table")
    {
        if(vrf_table == nullptr)
        {
            vrf_table = std::make_shared<Native::Flow::Exporter::Option::VrfTable>();
        }
        return vrf_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application_attributes != nullptr)
    {
        children["application-attributes"] = application_attributes;
    }

    if(application_table != nullptr)
    {
        children["application-table"] = application_table;
    }

    if(c3pl_class_table != nullptr)
    {
        children["c3pl-class-table"] = c3pl_class_table;
    }

    if(c3pl_policy_table != nullptr)
    {
        children["c3pl-policy-table"] = c3pl_policy_table;
    }

    if(exporter_stats != nullptr)
    {
        children["exporter-stats"] = exporter_stats;
    }

    if(interface_table != nullptr)
    {
        children["interface-table"] = interface_table;
    }

    if(metadata_version_table != nullptr)
    {
        children["metadata-version-table"] = metadata_version_table;
    }

    if(sampler_table != nullptr)
    {
        children["sampler-table"] = sampler_table;
    }

    if(sub_application_table != nullptr)
    {
        children["sub-application-table"] = sub_application_table;
    }

    if(vrf_table != nullptr)
    {
        children["vrf-table"] = vrf_table;
    }

    return children;
}

void Native::Flow::Exporter::Option::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Exporter::Option::ApplicationAttributes::ApplicationAttributes()
    :
    timeout{YType::uint32, "timeout"}
{
    yang_name = "application-attributes"; yang_parent_name = "option";
}

Native::Flow::Exporter::Option::ApplicationAttributes::~ApplicationAttributes()
{
}

bool Native::Flow::Exporter::Option::ApplicationAttributes::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::ApplicationAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string Native::Flow::Exporter::Option::ApplicationAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-attributes";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Option::ApplicationAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplicationAttributes' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::ApplicationAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::ApplicationAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Option::ApplicationAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Flow::Exporter::Option::ApplicationTable::ApplicationTable()
    :
    timeout{YType::uint32, "timeout"}
{
    yang_name = "application-table"; yang_parent_name = "option";
}

Native::Flow::Exporter::Option::ApplicationTable::~ApplicationTable()
{
}

bool Native::Flow::Exporter::Option::ApplicationTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::ApplicationTable::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string Native::Flow::Exporter::Option::ApplicationTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-table";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Option::ApplicationTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplicationTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::ApplicationTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::ApplicationTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Option::ApplicationTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Flow::Exporter::Option::C3PlClassTable::C3PlClassTable()
    :
    timeout{YType::uint32, "timeout"}
{
    yang_name = "c3pl-class-table"; yang_parent_name = "option";
}

Native::Flow::Exporter::Option::C3PlClassTable::~C3PlClassTable()
{
}

bool Native::Flow::Exporter::Option::C3PlClassTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::C3PlClassTable::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string Native::Flow::Exporter::Option::C3PlClassTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "c3pl-class-table";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Option::C3PlClassTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'C3PlClassTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::C3PlClassTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::C3PlClassTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Option::C3PlClassTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Flow::Exporter::Option::C3PlPolicyTable::C3PlPolicyTable()
    :
    timeout{YType::uint32, "timeout"}
{
    yang_name = "c3pl-policy-table"; yang_parent_name = "option";
}

Native::Flow::Exporter::Option::C3PlPolicyTable::~C3PlPolicyTable()
{
}

bool Native::Flow::Exporter::Option::C3PlPolicyTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::C3PlPolicyTable::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string Native::Flow::Exporter::Option::C3PlPolicyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "c3pl-policy-table";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Option::C3PlPolicyTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'C3PlPolicyTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::C3PlPolicyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::C3PlPolicyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Option::C3PlPolicyTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Flow::Exporter::Option::ExporterStats::ExporterStats()
    :
    timeout{YType::uint32, "timeout"}
{
    yang_name = "exporter-stats"; yang_parent_name = "option";
}

Native::Flow::Exporter::Option::ExporterStats::~ExporterStats()
{
}

bool Native::Flow::Exporter::Option::ExporterStats::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::ExporterStats::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string Native::Flow::Exporter::Option::ExporterStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter-stats";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Option::ExporterStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExporterStats' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::ExporterStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::ExporterStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Option::ExporterStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Flow::Exporter::Option::InterfaceTable::InterfaceTable()
    :
    timeout{YType::uint32, "timeout"}
{
    yang_name = "interface-table"; yang_parent_name = "option";
}

Native::Flow::Exporter::Option::InterfaceTable::~InterfaceTable()
{
}

bool Native::Flow::Exporter::Option::InterfaceTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::InterfaceTable::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string Native::Flow::Exporter::Option::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Option::InterfaceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::InterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Option::InterfaceTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Flow::Exporter::Option::MetadataVersionTable::MetadataVersionTable()
    :
    timeout{YType::uint32, "timeout"}
{
    yang_name = "metadata-version-table"; yang_parent_name = "option";
}

Native::Flow::Exporter::Option::MetadataVersionTable::~MetadataVersionTable()
{
}

bool Native::Flow::Exporter::Option::MetadataVersionTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::MetadataVersionTable::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string Native::Flow::Exporter::Option::MetadataVersionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata-version-table";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Option::MetadataVersionTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MetadataVersionTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::MetadataVersionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::MetadataVersionTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Option::MetadataVersionTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Flow::Exporter::Option::SamplerTable::SamplerTable()
    :
    timeout{YType::uint32, "timeout"}
{
    yang_name = "sampler-table"; yang_parent_name = "option";
}

Native::Flow::Exporter::Option::SamplerTable::~SamplerTable()
{
}

bool Native::Flow::Exporter::Option::SamplerTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::SamplerTable::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string Native::Flow::Exporter::Option::SamplerTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sampler-table";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Option::SamplerTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SamplerTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::SamplerTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::SamplerTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Option::SamplerTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Flow::Exporter::Option::SubApplicationTable::SubApplicationTable()
    :
    timeout{YType::uint32, "timeout"}
{
    yang_name = "sub-application-table"; yang_parent_name = "option";
}

Native::Flow::Exporter::Option::SubApplicationTable::~SubApplicationTable()
{
}

bool Native::Flow::Exporter::Option::SubApplicationTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::SubApplicationTable::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string Native::Flow::Exporter::Option::SubApplicationTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-application-table";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Option::SubApplicationTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubApplicationTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::SubApplicationTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::SubApplicationTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Option::SubApplicationTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Flow::Exporter::Option::VrfTable::VrfTable()
    :
    timeout{YType::uint32, "timeout"}
{
    yang_name = "vrf-table"; yang_parent_name = "option";
}

Native::Flow::Exporter::Option::VrfTable::~VrfTable()
{
}

bool Native::Flow::Exporter::Option::VrfTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::VrfTable::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string Native::Flow::Exporter::Option::VrfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-table";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Option::VrfTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::VrfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::VrfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Option::VrfTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Flow::Exporter::OutputFeatures::OutputFeatures()
{
    yang_name = "output-features"; yang_parent_name = "exporter";
}

Native::Flow::Exporter::OutputFeatures::~OutputFeatures()
{
}

bool Native::Flow::Exporter::OutputFeatures::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::OutputFeatures::has_operation() const
{
    return is_set(operation);
}

std::string Native::Flow::Exporter::OutputFeatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-features";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::OutputFeatures::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputFeatures' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::OutputFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::OutputFeatures::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::OutputFeatures::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Exporter::Source::Source()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Flow::Exporter::Source::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Flow::Exporter::Source::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Flow::Exporter::Source::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Flow::Exporter::Source::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "source"; yang_parent_name = "exporter";
}

Native::Flow::Exporter::Source::~Source()
{
}

bool Native::Flow::Exporter::Source::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Flow::Exporter::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Flow::Exporter::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Flow::Exporter::Source::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Flow::Exporter::Source::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Flow::Exporter::Source::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Flow::Exporter::Source::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Flow::Exporter::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::Flow::Exporter::Source::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "source";
}

Native::Flow::Exporter::Source::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Flow::Exporter::Source::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Flow::Exporter::Source::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Flow::Exporter::Source::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Source::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Source::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Source::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Source::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Flow::Exporter::Source::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source";
}

Native::Flow::Exporter::Source::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Flow::Exporter::Source::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Flow::Exporter::Source::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Flow::Exporter::Source::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Source::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmAcrsubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Source::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Source::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Source::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Flow::Exporter::Source::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "source";
}

Native::Flow::Exporter::Source::LispSubinterface::~LispSubinterface()
{
}

bool Native::Flow::Exporter::Source::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Flow::Exporter::Source::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Flow::Exporter::Source::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Source::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Source::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Source::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Source::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Flow::Exporter::Source::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "source";
}

Native::Flow::Exporter::Source::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Flow::Exporter::Source::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Flow::Exporter::Source::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Flow::Exporter::Source::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Source::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortChannelSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Source::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Source::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Source::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Flow::Exporter::Template_::Template_()
    :
    data(std::make_shared<Native::Flow::Exporter::Template_::Data>())
{
    data->parent = this;

    yang_name = "template"; yang_parent_name = "exporter";
}

Native::Flow::Exporter::Template_::~Template_()
{
}

bool Native::Flow::Exporter::Template_::has_data() const
{
    return (data !=  nullptr && data->has_data());
}

bool Native::Flow::Exporter::Template_::has_operation() const
{
    return is_set(operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string Native::Flow::Exporter::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Template_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Template_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<Native::Flow::Exporter::Template_::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void Native::Flow::Exporter::Template_::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Exporter::Template_::Data::Data()
    :
    timeout{YType::uint32, "timeout"}
{
    yang_name = "data"; yang_parent_name = "template";
}

Native::Flow::Exporter::Template_::Data::~Data()
{
}

bool Native::Flow::Exporter::Template_::Data::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Template_::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string Native::Flow::Exporter::Template_::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Template_::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Template_::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Template_::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Template_::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Flow::Exporter::Transport::Transport()
    :
    udp{YType::uint16, "udp"}
{
    yang_name = "transport"; yang_parent_name = "exporter";
}

Native::Flow::Exporter::Transport::~Transport()
{
}

bool Native::Flow::Exporter::Transport::has_data() const
{
    return udp.is_set;
}

bool Native::Flow::Exporter::Transport::has_operation() const
{
    return is_set(operation)
	|| is_set(udp.operation);
}

std::string Native::Flow::Exporter::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udp.is_set || is_set(udp.operation)) leaf_name_data.push_back(udp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Transport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "udp")
    {
        udp = value;
    }
}

Native::Flow::Exporter::Default_::Default_()
    :
    description{YType::empty, "description"},
    dscp{YType::empty, "dscp"},
    export_protocol{YType::empty, "export-protocol"},
    transport{YType::empty, "transport"},
    ttl{YType::empty, "ttl"}
    	,
    option(std::make_shared<Native::Flow::Exporter::Default_::Option>())
	,template_(std::make_shared<Native::Flow::Exporter::Default_::Template_>())
{
    option->parent = this;

    template_->parent = this;

    yang_name = "default"; yang_parent_name = "exporter";
}

Native::Flow::Exporter::Default_::~Default_()
{
}

bool Native::Flow::Exporter::Default_::has_data() const
{
    return description.is_set
	|| dscp.is_set
	|| export_protocol.is_set
	|| transport.is_set
	|| ttl.is_set
	|| (option !=  nullptr && option->has_data())
	|| (template_ !=  nullptr && template_->has_data());
}

bool Native::Flow::Exporter::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(dscp.operation)
	|| is_set(export_protocol.operation)
	|| is_set(transport.operation)
	|| is_set(ttl.operation)
	|| (option !=  nullptr && option->has_operation())
	|| (template_ !=  nullptr && template_->has_operation());
}

std::string Native::Flow::Exporter::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (export_protocol.is_set || is_set(export_protocol.operation)) leaf_name_data.push_back(export_protocol.get_name_leafdata());
    if (transport.is_set || is_set(transport.operation)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Flow::Exporter::Default_::Option>();
        }
        return option;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::Flow::Exporter::Default_::Template_>();
        }
        return template_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    return children;
}

void Native::Flow::Exporter::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "export-protocol")
    {
        export_protocol = value;
    }
    if(value_path == "transport")
    {
        transport = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

Native::Flow::Exporter::Default_::Option::Option()
    :
    application_attributes(nullptr) // presence node
	,c3pl_class_table(nullptr) // presence node
	,c3pl_policy_table(nullptr) // presence node
	,exporter_stats(nullptr) // presence node
	,interface_table(nullptr) // presence node
	,metadata_version_table(nullptr) // presence node
	,sampler_table(nullptr) // presence node
	,sub_application_table(nullptr) // presence node
	,vrf_table(nullptr) // presence node
{
    yang_name = "option"; yang_parent_name = "default";
}

Native::Flow::Exporter::Default_::Option::~Option()
{
}

bool Native::Flow::Exporter::Default_::Option::has_data() const
{
    return (application_attributes !=  nullptr && application_attributes->has_data())
	|| (c3pl_class_table !=  nullptr && c3pl_class_table->has_data())
	|| (c3pl_policy_table !=  nullptr && c3pl_policy_table->has_data())
	|| (exporter_stats !=  nullptr && exporter_stats->has_data())
	|| (interface_table !=  nullptr && interface_table->has_data())
	|| (metadata_version_table !=  nullptr && metadata_version_table->has_data())
	|| (sampler_table !=  nullptr && sampler_table->has_data())
	|| (sub_application_table !=  nullptr && sub_application_table->has_data())
	|| (vrf_table !=  nullptr && vrf_table->has_data());
}

bool Native::Flow::Exporter::Default_::Option::has_operation() const
{
    return is_set(operation)
	|| (application_attributes !=  nullptr && application_attributes->has_operation())
	|| (c3pl_class_table !=  nullptr && c3pl_class_table->has_operation())
	|| (c3pl_policy_table !=  nullptr && c3pl_policy_table->has_operation())
	|| (exporter_stats !=  nullptr && exporter_stats->has_operation())
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (metadata_version_table !=  nullptr && metadata_version_table->has_operation())
	|| (sampler_table !=  nullptr && sampler_table->has_operation())
	|| (sub_application_table !=  nullptr && sub_application_table->has_operation())
	|| (vrf_table !=  nullptr && vrf_table->has_operation());
}

std::string Native::Flow::Exporter::Default_::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Default_::Option::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Option' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-attributes")
    {
        if(application_attributes == nullptr)
        {
            application_attributes = std::make_shared<Native::Flow::Exporter::Default_::Option::ApplicationAttributes>();
        }
        return application_attributes;
    }

    if(child_yang_name == "c3pl-class-table")
    {
        if(c3pl_class_table == nullptr)
        {
            c3pl_class_table = std::make_shared<Native::Flow::Exporter::Default_::Option::C3PlClassTable>();
        }
        return c3pl_class_table;
    }

    if(child_yang_name == "c3pl-policy-table")
    {
        if(c3pl_policy_table == nullptr)
        {
            c3pl_policy_table = std::make_shared<Native::Flow::Exporter::Default_::Option::C3PlPolicyTable>();
        }
        return c3pl_policy_table;
    }

    if(child_yang_name == "exporter-stats")
    {
        if(exporter_stats == nullptr)
        {
            exporter_stats = std::make_shared<Native::Flow::Exporter::Default_::Option::ExporterStats>();
        }
        return exporter_stats;
    }

    if(child_yang_name == "interface-table")
    {
        if(interface_table == nullptr)
        {
            interface_table = std::make_shared<Native::Flow::Exporter::Default_::Option::InterfaceTable>();
        }
        return interface_table;
    }

    if(child_yang_name == "metadata-version-table")
    {
        if(metadata_version_table == nullptr)
        {
            metadata_version_table = std::make_shared<Native::Flow::Exporter::Default_::Option::MetadataVersionTable>();
        }
        return metadata_version_table;
    }

    if(child_yang_name == "sampler-table")
    {
        if(sampler_table == nullptr)
        {
            sampler_table = std::make_shared<Native::Flow::Exporter::Default_::Option::SamplerTable>();
        }
        return sampler_table;
    }

    if(child_yang_name == "sub-application-table")
    {
        if(sub_application_table == nullptr)
        {
            sub_application_table = std::make_shared<Native::Flow::Exporter::Default_::Option::SubApplicationTable>();
        }
        return sub_application_table;
    }

    if(child_yang_name == "vrf-table")
    {
        if(vrf_table == nullptr)
        {
            vrf_table = std::make_shared<Native::Flow::Exporter::Default_::Option::VrfTable>();
        }
        return vrf_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application_attributes != nullptr)
    {
        children["application-attributes"] = application_attributes;
    }

    if(c3pl_class_table != nullptr)
    {
        children["c3pl-class-table"] = c3pl_class_table;
    }

    if(c3pl_policy_table != nullptr)
    {
        children["c3pl-policy-table"] = c3pl_policy_table;
    }

    if(exporter_stats != nullptr)
    {
        children["exporter-stats"] = exporter_stats;
    }

    if(interface_table != nullptr)
    {
        children["interface-table"] = interface_table;
    }

    if(metadata_version_table != nullptr)
    {
        children["metadata-version-table"] = metadata_version_table;
    }

    if(sampler_table != nullptr)
    {
        children["sampler-table"] = sampler_table;
    }

    if(sub_application_table != nullptr)
    {
        children["sub-application-table"] = sub_application_table;
    }

    if(vrf_table != nullptr)
    {
        children["vrf-table"] = vrf_table;
    }

    return children;
}

void Native::Flow::Exporter::Default_::Option::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Exporter::Default_::Option::ApplicationAttributes::ApplicationAttributes()
{
    yang_name = "application-attributes"; yang_parent_name = "option";
}

Native::Flow::Exporter::Default_::Option::ApplicationAttributes::~ApplicationAttributes()
{
}

bool Native::Flow::Exporter::Default_::Option::ApplicationAttributes::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default_::Option::ApplicationAttributes::has_operation() const
{
    return is_set(operation);
}

std::string Native::Flow::Exporter::Default_::Option::ApplicationAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-attributes";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Default_::Option::ApplicationAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplicationAttributes' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Option::ApplicationAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Option::ApplicationAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Default_::Option::ApplicationAttributes::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Exporter::Default_::Option::C3PlClassTable::C3PlClassTable()
{
    yang_name = "c3pl-class-table"; yang_parent_name = "option";
}

Native::Flow::Exporter::Default_::Option::C3PlClassTable::~C3PlClassTable()
{
}

bool Native::Flow::Exporter::Default_::Option::C3PlClassTable::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default_::Option::C3PlClassTable::has_operation() const
{
    return is_set(operation);
}

std::string Native::Flow::Exporter::Default_::Option::C3PlClassTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "c3pl-class-table";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Default_::Option::C3PlClassTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'C3PlClassTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Option::C3PlClassTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Option::C3PlClassTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Default_::Option::C3PlClassTable::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Exporter::Default_::Option::C3PlPolicyTable::C3PlPolicyTable()
{
    yang_name = "c3pl-policy-table"; yang_parent_name = "option";
}

Native::Flow::Exporter::Default_::Option::C3PlPolicyTable::~C3PlPolicyTable()
{
}

bool Native::Flow::Exporter::Default_::Option::C3PlPolicyTable::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default_::Option::C3PlPolicyTable::has_operation() const
{
    return is_set(operation);
}

std::string Native::Flow::Exporter::Default_::Option::C3PlPolicyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "c3pl-policy-table";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Default_::Option::C3PlPolicyTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'C3PlPolicyTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Option::C3PlPolicyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Option::C3PlPolicyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Default_::Option::C3PlPolicyTable::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Exporter::Default_::Option::ExporterStats::ExporterStats()
{
    yang_name = "exporter-stats"; yang_parent_name = "option";
}

Native::Flow::Exporter::Default_::Option::ExporterStats::~ExporterStats()
{
}

bool Native::Flow::Exporter::Default_::Option::ExporterStats::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default_::Option::ExporterStats::has_operation() const
{
    return is_set(operation);
}

std::string Native::Flow::Exporter::Default_::Option::ExporterStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter-stats";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Default_::Option::ExporterStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExporterStats' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Option::ExporterStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Option::ExporterStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Default_::Option::ExporterStats::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Exporter::Default_::Option::InterfaceTable::InterfaceTable()
{
    yang_name = "interface-table"; yang_parent_name = "option";
}

Native::Flow::Exporter::Default_::Option::InterfaceTable::~InterfaceTable()
{
}

bool Native::Flow::Exporter::Default_::Option::InterfaceTable::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default_::Option::InterfaceTable::has_operation() const
{
    return is_set(operation);
}

std::string Native::Flow::Exporter::Default_::Option::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Default_::Option::InterfaceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Option::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Option::InterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Default_::Option::InterfaceTable::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Exporter::Default_::Option::MetadataVersionTable::MetadataVersionTable()
{
    yang_name = "metadata-version-table"; yang_parent_name = "option";
}

Native::Flow::Exporter::Default_::Option::MetadataVersionTable::~MetadataVersionTable()
{
}

bool Native::Flow::Exporter::Default_::Option::MetadataVersionTable::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default_::Option::MetadataVersionTable::has_operation() const
{
    return is_set(operation);
}

std::string Native::Flow::Exporter::Default_::Option::MetadataVersionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata-version-table";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Default_::Option::MetadataVersionTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MetadataVersionTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Option::MetadataVersionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Option::MetadataVersionTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Default_::Option::MetadataVersionTable::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Exporter::Default_::Option::SamplerTable::SamplerTable()
{
    yang_name = "sampler-table"; yang_parent_name = "option";
}

Native::Flow::Exporter::Default_::Option::SamplerTable::~SamplerTable()
{
}

bool Native::Flow::Exporter::Default_::Option::SamplerTable::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default_::Option::SamplerTable::has_operation() const
{
    return is_set(operation);
}

std::string Native::Flow::Exporter::Default_::Option::SamplerTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sampler-table";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Default_::Option::SamplerTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SamplerTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Option::SamplerTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Option::SamplerTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Default_::Option::SamplerTable::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Exporter::Default_::Option::SubApplicationTable::SubApplicationTable()
{
    yang_name = "sub-application-table"; yang_parent_name = "option";
}

Native::Flow::Exporter::Default_::Option::SubApplicationTable::~SubApplicationTable()
{
}

bool Native::Flow::Exporter::Default_::Option::SubApplicationTable::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default_::Option::SubApplicationTable::has_operation() const
{
    return is_set(operation);
}

std::string Native::Flow::Exporter::Default_::Option::SubApplicationTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-application-table";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Default_::Option::SubApplicationTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubApplicationTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Option::SubApplicationTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Option::SubApplicationTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Default_::Option::SubApplicationTable::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Exporter::Default_::Option::VrfTable::VrfTable()
{
    yang_name = "vrf-table"; yang_parent_name = "option";
}

Native::Flow::Exporter::Default_::Option::VrfTable::~VrfTable()
{
}

bool Native::Flow::Exporter::Default_::Option::VrfTable::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default_::Option::VrfTable::has_operation() const
{
    return is_set(operation);
}

std::string Native::Flow::Exporter::Default_::Option::VrfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-table";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Default_::Option::VrfTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Option::VrfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Option::VrfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Default_::Option::VrfTable::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Exporter::Default_::Template_::Template_()
    :
    data(std::make_shared<Native::Flow::Exporter::Default_::Template_::Data>())
{
    data->parent = this;

    yang_name = "template"; yang_parent_name = "default";
}

Native::Flow::Exporter::Default_::Template_::~Template_()
{
}

bool Native::Flow::Exporter::Default_::Template_::has_data() const
{
    return (data !=  nullptr && data->has_data());
}

bool Native::Flow::Exporter::Default_::Template_::has_operation() const
{
    return is_set(operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string Native::Flow::Exporter::Default_::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Default_::Template_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Template_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<Native::Flow::Exporter::Default_::Template_::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void Native::Flow::Exporter::Default_::Template_::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Exporter::Default_::Template_::Data::Data()
    :
    timeout{YType::empty, "timeout"}
{
    yang_name = "data"; yang_parent_name = "template";
}

Native::Flow::Exporter::Default_::Template_::Data::~Data()
{
}

bool Native::Flow::Exporter::Default_::Template_::Data::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Default_::Template_::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string Native::Flow::Exporter::Default_::Template_::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath Native::Flow::Exporter::Default_::Template_::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Template_::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Template_::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Default_::Template_::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Flow::Monitor::Monitor()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    type{YType::enumeration, "type"}
    	,
    cache(std::make_shared<Native::Flow::Monitor::Cache>())
	,default_(std::make_shared<Native::Flow::Monitor::Default_>())
	,history(std::make_shared<Native::Flow::Monitor::History>())
	,record(std::make_shared<Native::Flow::Monitor::Record>())
	,statistics(std::make_shared<Native::Flow::Monitor::Statistics>())
{
    cache->parent = this;

    default_->parent = this;

    history->parent = this;

    record->parent = this;

    statistics->parent = this;

    yang_name = "monitor"; yang_parent_name = "flow";
}

Native::Flow::Monitor::~Monitor()
{
}

bool Native::Flow::Monitor::has_data() const
{
    for (std::size_t index=0; index<exporter.size(); index++)
    {
        if(exporter[index]->has_data())
            return true;
    }
    return name.is_set
	|| description.is_set
	|| type.is_set
	|| (cache !=  nullptr && cache->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (record !=  nullptr && record->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Native::Flow::Monitor::has_operation() const
{
    for (std::size_t index=0; index<exporter.size(); index++)
    {
        if(exporter[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| is_set(type.operation)
	|| (cache !=  nullptr && cache->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (record !=  nullptr && record->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Native::Flow::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:monitor" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/flow/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Native::Flow::Monitor::Cache>();
        }
        return cache;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Flow::Monitor::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "exporter")
    {
        for(auto const & c : exporter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Flow::Monitor::Exporter>();
        c->parent = this;
        exporter.push_back(c);
        return c;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Flow::Monitor::History>();
        }
        return history;
    }

    if(child_yang_name == "record")
    {
        if(record == nullptr)
        {
            record = std::make_shared<Native::Flow::Monitor::Record>();
        }
        return record;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Native::Flow::Monitor::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cache != nullptr)
    {
        children["cache"] = cache;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    for (auto const & c : exporter)
    {
        children[c->get_segment_path()] = c;
    }

    if(history != nullptr)
    {
        children["history"] = history;
    }

    if(record != nullptr)
    {
        children["record"] = record;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Native::Flow::Monitor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Flow::Monitor::Cache::Cache()
    :
    entries{YType::uint32, "entries"},
    type{YType::enumeration, "type"}
    	,
    timeout(std::make_shared<Native::Flow::Monitor::Cache::Timeout>())
{
    timeout->parent = this;

    yang_name = "cache"; yang_parent_name = "monitor";
}

Native::Flow::Monitor::Cache::~Cache()
{
}

bool Native::Flow::Monitor::Cache::has_data() const
{
    return entries.is_set
	|| type.is_set
	|| (timeout !=  nullptr && timeout->has_data());
}

bool Native::Flow::Monitor::Cache::has_operation() const
{
    return is_set(operation)
	|| is_set(entries.operation)
	|| is_set(type.operation)
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string Native::Flow::Monitor::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Cache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cache' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entries.is_set || is_set(entries.operation)) leaf_name_data.push_back(entries.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Flow::Monitor::Cache::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    return children;
}

void Native::Flow::Monitor::Cache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entries")
    {
        entries = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Flow::Monitor::Cache::Timeout::Timeout()
    :
    active{YType::uint32, "active"},
    inactive{YType::uint32, "inactive"},
    synchronized{YType::uint16, "synchronized"},
    update{YType::uint32, "update"}
    	,
    event(std::make_shared<Native::Flow::Monitor::Cache::Timeout::Event>())
{
    event->parent = this;

    yang_name = "timeout"; yang_parent_name = "cache";
}

Native::Flow::Monitor::Cache::Timeout::~Timeout()
{
}

bool Native::Flow::Monitor::Cache::Timeout::has_data() const
{
    return active.is_set
	|| inactive.is_set
	|| synchronized.is_set
	|| update.is_set
	|| (event !=  nullptr && event->has_data());
}

bool Native::Flow::Monitor::Cache::Timeout::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(inactive.operation)
	|| is_set(synchronized.operation)
	|| is_set(update.operation)
	|| (event !=  nullptr && event->has_operation());
}

std::string Native::Flow::Monitor::Cache::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Cache::Timeout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timeout' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (inactive.is_set || is_set(inactive.operation)) leaf_name_data.push_back(inactive.get_name_leafdata());
    if (synchronized.is_set || is_set(synchronized.operation)) leaf_name_data.push_back(synchronized.get_name_leafdata());
    if (update.is_set || is_set(update.operation)) leaf_name_data.push_back(update.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Cache::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Flow::Monitor::Cache::Timeout::Event>();
        }
        return event;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Cache::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(event != nullptr)
    {
        children["event"] = event;
    }

    return children;
}

void Native::Flow::Monitor::Cache::Timeout::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "inactive")
    {
        inactive = value;
    }
    if(value_path == "synchronized")
    {
        synchronized = value;
    }
    if(value_path == "update")
    {
        update = value;
    }
}

Native::Flow::Monitor::Cache::Timeout::Event::Event()
    :
    transaction_end{YType::empty, "transaction-end"}
{
    yang_name = "event"; yang_parent_name = "timeout";
}

Native::Flow::Monitor::Cache::Timeout::Event::~Event()
{
}

bool Native::Flow::Monitor::Cache::Timeout::Event::has_data() const
{
    return transaction_end.is_set;
}

bool Native::Flow::Monitor::Cache::Timeout::Event::has_operation() const
{
    return is_set(operation)
	|| is_set(transaction_end.operation);
}

std::string Native::Flow::Monitor::Cache::Timeout::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Cache::Timeout::Event::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Event' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transaction_end.is_set || is_set(transaction_end.operation)) leaf_name_data.push_back(transaction_end.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Cache::Timeout::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Cache::Timeout::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Cache::Timeout::Event::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transaction-end")
    {
        transaction_end = value;
    }
}

Native::Flow::Monitor::Exporter::Exporter()
    :
    name{YType::str, "name"}
{
    yang_name = "exporter"; yang_parent_name = "monitor";
}

Native::Flow::Monitor::Exporter::~Exporter()
{
}

bool Native::Flow::Monitor::Exporter::has_data() const
{
    return name.is_set;
}

bool Native::Flow::Monitor::Exporter::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Flow::Monitor::Exporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Exporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Exporter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Flow::Monitor::Exporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Exporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Exporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Flow::Monitor::History::History()
    :
    size{YType::uint8, "size"},
    timeout{YType::uint8, "timeout"}
{
    yang_name = "history"; yang_parent_name = "monitor";
}

Native::Flow::Monitor::History::~History()
{
}

bool Native::Flow::Monitor::History::has_data() const
{
    return size.is_set
	|| timeout.is_set;
}

bool Native::Flow::Monitor::History::has_operation() const
{
    return is_set(operation)
	|| is_set(size.operation)
	|| is_set(timeout.operation);
}

std::string Native::Flow::Monitor::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'History' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::History::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "size")
    {
        size = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Flow::Monitor::Record::Record()
    :
    type{YType::str, "type"}
    	,
    netflow(std::make_shared<Native::Flow::Monitor::Record::Netflow>())
{
    netflow->parent = this;

    yang_name = "record"; yang_parent_name = "monitor";
}

Native::Flow::Monitor::Record::~Record()
{
}

bool Native::Flow::Monitor::Record::has_data() const
{
    return type.is_set
	|| (netflow !=  nullptr && netflow->has_data());
}

bool Native::Flow::Monitor::Record::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (netflow !=  nullptr && netflow->has_operation());
}

std::string Native::Flow::Monitor::Record::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "record";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Record::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Record' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "netflow")
    {
        if(netflow == nullptr)
        {
            netflow = std::make_shared<Native::Flow::Monitor::Record::Netflow>();
        }
        return netflow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(netflow != nullptr)
    {
        children["netflow"] = netflow;
    }

    return children;
}

void Native::Flow::Monitor::Record::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Flow::Monitor::Record::Netflow::Netflow()
    :
    ipv4(std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4>())
	,ipv6(std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6>())
{
    ipv4->parent = this;

    ipv6->parent = this;

    yang_name = "netflow"; yang_parent_name = "record";
}

Native::Flow::Monitor::Record::Netflow::~Netflow()
{
}

bool Native::Flow::Monitor::Record::Netflow::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Flow::Monitor::Record::Netflow::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Flow::Monitor::Record::Netflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netflow";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Record::Netflow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Netflow' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Flow::Monitor::Record::Netflow::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Monitor::Record::Netflow::Ipv4::Ipv4()
    :
    prefix_port{YType::empty, "prefix-port"},
    protocol_port{YType::empty, "protocol-port"},
    protocol_port_tos{YType::empty, "protocol-port-tos"}
    	,
    as(nullptr) // presence node
	,as_tos(nullptr) // presence node
	,bgp_nexthop_tos(nullptr) // presence node
	,destination_prefix(nullptr) // presence node
	,destination_prefix_tos(nullptr) // presence node
	,original_input(nullptr) // presence node
	,original_output(nullptr) // presence node
	,prefix(nullptr) // presence node
	,prefix_tos(nullptr) // presence node
	,source_prefix(nullptr) // presence node
	,source_prefix_tos(nullptr) // presence node
{
    yang_name = "ipv4"; yang_parent_name = "netflow";
}

Native::Flow::Monitor::Record::Netflow::Ipv4::~Ipv4()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::has_data() const
{
    return prefix_port.is_set
	|| protocol_port.is_set
	|| protocol_port_tos.is_set
	|| (as !=  nullptr && as->has_data())
	|| (as_tos !=  nullptr && as_tos->has_data())
	|| (bgp_nexthop_tos !=  nullptr && bgp_nexthop_tos->has_data())
	|| (destination_prefix !=  nullptr && destination_prefix->has_data())
	|| (destination_prefix_tos !=  nullptr && destination_prefix_tos->has_data())
	|| (original_input !=  nullptr && original_input->has_data())
	|| (original_output !=  nullptr && original_output->has_data())
	|| (prefix !=  nullptr && prefix->has_data())
	|| (prefix_tos !=  nullptr && prefix_tos->has_data())
	|| (source_prefix !=  nullptr && source_prefix->has_data())
	|| (source_prefix_tos !=  nullptr && source_prefix_tos->has_data());
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_port.operation)
	|| is_set(protocol_port.operation)
	|| is_set(protocol_port_tos.operation)
	|| (as !=  nullptr && as->has_operation())
	|| (as_tos !=  nullptr && as_tos->has_operation())
	|| (bgp_nexthop_tos !=  nullptr && bgp_nexthop_tos->has_operation())
	|| (destination_prefix !=  nullptr && destination_prefix->has_operation())
	|| (destination_prefix_tos !=  nullptr && destination_prefix_tos->has_operation())
	|| (original_input !=  nullptr && original_input->has_operation())
	|| (original_output !=  nullptr && original_output->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (prefix_tos !=  nullptr && prefix_tos->has_operation())
	|| (source_prefix !=  nullptr && source_prefix->has_operation())
	|| (source_prefix_tos !=  nullptr && source_prefix_tos->has_operation());
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Record::Netflow::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_port.is_set || is_set(prefix_port.operation)) leaf_name_data.push_back(prefix_port.get_name_leafdata());
    if (protocol_port.is_set || is_set(protocol_port.operation)) leaf_name_data.push_back(protocol_port.get_name_leafdata());
    if (protocol_port_tos.is_set || is_set(protocol_port_tos.operation)) leaf_name_data.push_back(protocol_port_tos.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        if(as == nullptr)
        {
            as = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::As>();
        }
        return as;
    }

    if(child_yang_name == "as-tos")
    {
        if(as_tos == nullptr)
        {
            as_tos = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos>();
        }
        return as_tos;
    }

    if(child_yang_name == "bgp-nexthop-tos")
    {
        if(bgp_nexthop_tos == nullptr)
        {
            bgp_nexthop_tos = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos>();
        }
        return bgp_nexthop_tos;
    }

    if(child_yang_name == "destination-prefix")
    {
        if(destination_prefix == nullptr)
        {
            destination_prefix = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix>();
        }
        return destination_prefix;
    }

    if(child_yang_name == "destination-prefix-tos")
    {
        if(destination_prefix_tos == nullptr)
        {
            destination_prefix_tos = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos>();
        }
        return destination_prefix_tos;
    }

    if(child_yang_name == "original-input")
    {
        if(original_input == nullptr)
        {
            original_input = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput>();
        }
        return original_input;
    }

    if(child_yang_name == "original-output")
    {
        if(original_output == nullptr)
        {
            original_output = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput>();
        }
        return original_output;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "prefix-tos")
    {
        if(prefix_tos == nullptr)
        {
            prefix_tos = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos>();
        }
        return prefix_tos;
    }

    if(child_yang_name == "source-prefix")
    {
        if(source_prefix == nullptr)
        {
            source_prefix = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix>();
        }
        return source_prefix;
    }

    if(child_yang_name == "source-prefix-tos")
    {
        if(source_prefix_tos == nullptr)
        {
            source_prefix_tos = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos>();
        }
        return source_prefix_tos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(as != nullptr)
    {
        children["as"] = as;
    }

    if(as_tos != nullptr)
    {
        children["as-tos"] = as_tos;
    }

    if(bgp_nexthop_tos != nullptr)
    {
        children["bgp-nexthop-tos"] = bgp_nexthop_tos;
    }

    if(destination_prefix != nullptr)
    {
        children["destination-prefix"] = destination_prefix;
    }

    if(destination_prefix_tos != nullptr)
    {
        children["destination-prefix-tos"] = destination_prefix_tos;
    }

    if(original_input != nullptr)
    {
        children["original-input"] = original_input;
    }

    if(original_output != nullptr)
    {
        children["original-output"] = original_output;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(prefix_tos != nullptr)
    {
        children["prefix-tos"] = prefix_tos;
    }

    if(source_prefix != nullptr)
    {
        children["source-prefix"] = source_prefix;
    }

    if(source_prefix_tos != nullptr)
    {
        children["source-prefix-tos"] = source_prefix_tos;
    }

    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-port")
    {
        prefix_port = value;
    }
    if(value_path == "protocol-port")
    {
        protocol_port = value;
    }
    if(value_path == "protocol-port-tos")
    {
        protocol_port_tos = value;
    }
}

Native::Flow::Monitor::Record::Netflow::Ipv4::As::As()
    :
    peer{YType::empty, "peer"}
{
    yang_name = "as"; yang_parent_name = "ipv4";
}

Native::Flow::Monitor::Record::Netflow::Ipv4::As::~As()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::As::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::As::has_operation() const
{
    return is_set(operation)
	|| is_set(peer.operation);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Record::Netflow::Ipv4::As::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'As' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::As::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::As::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer")
    {
        peer = value;
    }
}

Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::DestinationPrefix()
    :
    peer{YType::empty, "peer"}
{
    yang_name = "destination-prefix"; yang_parent_name = "ipv4";
}

Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::~DestinationPrefix()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(peer.operation);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-prefix";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationPrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer")
    {
        peer = value;
    }
}

Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::OriginalInput()
    :
    peer{YType::empty, "peer"}
{
    yang_name = "original-input"; yang_parent_name = "ipv4";
}

Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::~OriginalInput()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::has_operation() const
{
    return is_set(operation)
	|| is_set(peer.operation);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "original-input";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OriginalInput' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer")
    {
        peer = value;
    }
}

Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::OriginalOutput()
    :
    peer{YType::empty, "peer"}
{
    yang_name = "original-output"; yang_parent_name = "ipv4";
}

Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::~OriginalOutput()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::has_operation() const
{
    return is_set(operation)
	|| is_set(peer.operation);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "original-output";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OriginalOutput' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer")
    {
        peer = value;
    }
}

Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::Prefix()
    :
    peer{YType::empty, "peer"}
{
    yang_name = "prefix"; yang_parent_name = "ipv4";
}

Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::~Prefix()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(peer.operation);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer")
    {
        peer = value;
    }
}

Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::SourcePrefix()
    :
    peer{YType::empty, "peer"}
{
    yang_name = "source-prefix"; yang_parent_name = "ipv4";
}

Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::~SourcePrefix()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(peer.operation);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-prefix";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourcePrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer")
    {
        peer = value;
    }
}

Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::AsTos()
    :
    peer{YType::empty, "peer"}
{
    yang_name = "as-tos"; yang_parent_name = "ipv4";
}

Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::~AsTos()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::has_operation() const
{
    return is_set(operation)
	|| is_set(peer.operation);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-tos";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsTos' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer")
    {
        peer = value;
    }
}

Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::BgpNexthopTos()
    :
    peer{YType::empty, "peer"}
{
    yang_name = "bgp-nexthop-tos"; yang_parent_name = "ipv4";
}

Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::~BgpNexthopTos()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::has_operation() const
{
    return is_set(operation)
	|| is_set(peer.operation);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-nexthop-tos";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpNexthopTos' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer")
    {
        peer = value;
    }
}

Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::DestinationPrefixTos()
    :
    peer{YType::empty, "peer"}
{
    yang_name = "destination-prefix-tos"; yang_parent_name = "ipv4";
}

Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::~DestinationPrefixTos()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::has_operation() const
{
    return is_set(operation)
	|| is_set(peer.operation);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-prefix-tos";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationPrefixTos' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer")
    {
        peer = value;
    }
}

Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::PrefixTos()
    :
    peer{YType::empty, "peer"}
{
    yang_name = "prefix-tos"; yang_parent_name = "ipv4";
}

Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::~PrefixTos()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::has_operation() const
{
    return is_set(operation)
	|| is_set(peer.operation);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-tos";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixTos' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer")
    {
        peer = value;
    }
}

Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::SourcePrefixTos()
    :
    peer{YType::empty, "peer"}
{
    yang_name = "source-prefix-tos"; yang_parent_name = "ipv4";
}

Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::~SourcePrefixTos()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::has_operation() const
{
    return is_set(operation)
	|| is_set(peer.operation);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-prefix-tos";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourcePrefixTos' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer")
    {
        peer = value;
    }
}

Native::Flow::Monitor::Record::Netflow::Ipv6::Ipv6()
    :
    protocol_port{YType::empty, "protocol-port"}
    	,
    as(nullptr) // presence node
	,bgp_nexthop(nullptr) // presence node
	,destination_prefix(nullptr) // presence node
	,original_input(nullptr) // presence node
	,original_output(nullptr) // presence node
	,prefix(nullptr) // presence node
	,source_prefix(nullptr) // presence node
{
    yang_name = "ipv6"; yang_parent_name = "netflow";
}

Native::Flow::Monitor::Record::Netflow::Ipv6::~Ipv6()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::has_data() const
{
    return protocol_port.is_set
	|| (as !=  nullptr && as->has_data())
	|| (bgp_nexthop !=  nullptr && bgp_nexthop->has_data())
	|| (destination_prefix !=  nullptr && destination_prefix->has_data())
	|| (original_input !=  nullptr && original_input->has_data())
	|| (original_output !=  nullptr && original_output->has_data())
	|| (prefix !=  nullptr && prefix->has_data())
	|| (source_prefix !=  nullptr && source_prefix->has_data());
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol_port.operation)
	|| (as !=  nullptr && as->has_operation())
	|| (bgp_nexthop !=  nullptr && bgp_nexthop->has_operation())
	|| (destination_prefix !=  nullptr && destination_prefix->has_operation())
	|| (original_input !=  nullptr && original_input->has_operation())
	|| (original_output !=  nullptr && original_output->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (source_prefix !=  nullptr && source_prefix->has_operation());
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Record::Netflow::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_port.is_set || is_set(protocol_port.operation)) leaf_name_data.push_back(protocol_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        if(as == nullptr)
        {
            as = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6::As>();
        }
        return as;
    }

    if(child_yang_name == "bgp-nexthop")
    {
        if(bgp_nexthop == nullptr)
        {
            bgp_nexthop = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop>();
        }
        return bgp_nexthop;
    }

    if(child_yang_name == "destination-prefix")
    {
        if(destination_prefix == nullptr)
        {
            destination_prefix = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix>();
        }
        return destination_prefix;
    }

    if(child_yang_name == "original-input")
    {
        if(original_input == nullptr)
        {
            original_input = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput>();
        }
        return original_input;
    }

    if(child_yang_name == "original-output")
    {
        if(original_output == nullptr)
        {
            original_output = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput>();
        }
        return original_output;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "source-prefix")
    {
        if(source_prefix == nullptr)
        {
            source_prefix = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix>();
        }
        return source_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(as != nullptr)
    {
        children["as"] = as;
    }

    if(bgp_nexthop != nullptr)
    {
        children["bgp-nexthop"] = bgp_nexthop;
    }

    if(destination_prefix != nullptr)
    {
        children["destination-prefix"] = destination_prefix;
    }

    if(original_input != nullptr)
    {
        children["original-input"] = original_input;
    }

    if(original_output != nullptr)
    {
        children["original-output"] = original_output;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(source_prefix != nullptr)
    {
        children["source-prefix"] = source_prefix;
    }

    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol-port")
    {
        protocol_port = value;
    }
}

Native::Flow::Monitor::Record::Netflow::Ipv6::As::As()
    :
    peer{YType::empty, "peer"}
{
    yang_name = "as"; yang_parent_name = "ipv6";
}

Native::Flow::Monitor::Record::Netflow::Ipv6::As::~As()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::As::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::As::has_operation() const
{
    return is_set(operation)
	|| is_set(peer.operation);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Record::Netflow::Ipv6::As::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'As' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::As::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::As::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer")
    {
        peer = value;
    }
}

Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::DestinationPrefix()
    :
    peer{YType::empty, "peer"}
{
    yang_name = "destination-prefix"; yang_parent_name = "ipv6";
}

Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::~DestinationPrefix()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(peer.operation);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-prefix";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationPrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer")
    {
        peer = value;
    }
}

Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::OriginalInput()
    :
    peer{YType::empty, "peer"}
{
    yang_name = "original-input"; yang_parent_name = "ipv6";
}

Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::~OriginalInput()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::has_operation() const
{
    return is_set(operation)
	|| is_set(peer.operation);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "original-input";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OriginalInput' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer")
    {
        peer = value;
    }
}

Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::OriginalOutput()
    :
    peer{YType::empty, "peer"}
{
    yang_name = "original-output"; yang_parent_name = "ipv6";
}

Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::~OriginalOutput()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::has_operation() const
{
    return is_set(operation)
	|| is_set(peer.operation);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "original-output";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OriginalOutput' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer")
    {
        peer = value;
    }
}

Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::Prefix()
    :
    peer{YType::empty, "peer"}
{
    yang_name = "prefix"; yang_parent_name = "ipv6";
}

Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::~Prefix()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(peer.operation);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer")
    {
        peer = value;
    }
}

Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::SourcePrefix()
    :
    peer{YType::empty, "peer"}
{
    yang_name = "source-prefix"; yang_parent_name = "ipv6";
}

Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::~SourcePrefix()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(peer.operation);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-prefix";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourcePrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer")
    {
        peer = value;
    }
}

Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::BgpNexthop()
    :
    peer{YType::empty, "peer"}
{
    yang_name = "bgp-nexthop"; yang_parent_name = "ipv6";
}

Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::~BgpNexthop()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::has_operation() const
{
    return is_set(operation)
	|| is_set(peer.operation);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-nexthop";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpNexthop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer")
    {
        peer = value;
    }
}

Native::Flow::Monitor::Statistics::Statistics()
    :
    packet(std::make_shared<Native::Flow::Monitor::Statistics::Packet>())
{
    packet->parent = this;

    yang_name = "statistics"; yang_parent_name = "monitor";
}

Native::Flow::Monitor::Statistics::~Statistics()
{
}

bool Native::Flow::Monitor::Statistics::has_data() const
{
    return (packet !=  nullptr && packet->has_data());
}

bool Native::Flow::Monitor::Statistics::has_operation() const
{
    return is_set(operation)
	|| (packet !=  nullptr && packet->has_operation());
}

std::string Native::Flow::Monitor::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Native::Flow::Monitor::Statistics::Packet>();
        }
        return packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(packet != nullptr)
    {
        children["packet"] = packet;
    }

    return children;
}

void Native::Flow::Monitor::Statistics::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Monitor::Statistics::Packet::Packet()
    :
    protocol{YType::empty, "protocol"},
    size{YType::empty, "size"}
{
    yang_name = "packet"; yang_parent_name = "statistics";
}

Native::Flow::Monitor::Statistics::Packet::~Packet()
{
}

bool Native::Flow::Monitor::Statistics::Packet::has_data() const
{
    return protocol.is_set
	|| size.is_set;
}

bool Native::Flow::Monitor::Statistics::Packet::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol.operation)
	|| is_set(size.operation);
}

std::string Native::Flow::Monitor::Statistics::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Statistics::Packet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Packet' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Statistics::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Statistics::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Statistics::Packet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
}

Native::Flow::Monitor::Default_::Default_()
    :
    description{YType::empty, "description"},
    exporter{YType::empty, "exporter"},
    record{YType::empty, "record"}
    	,
    cache(std::make_shared<Native::Flow::Monitor::Default_::Cache>())
	,statistics(std::make_shared<Native::Flow::Monitor::Default_::Statistics>())
{
    cache->parent = this;

    statistics->parent = this;

    yang_name = "default"; yang_parent_name = "monitor";
}

Native::Flow::Monitor::Default_::~Default_()
{
}

bool Native::Flow::Monitor::Default_::has_data() const
{
    return description.is_set
	|| exporter.is_set
	|| record.is_set
	|| (cache !=  nullptr && cache->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Native::Flow::Monitor::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(exporter.operation)
	|| is_set(record.operation)
	|| (cache !=  nullptr && cache->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Native::Flow::Monitor::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (exporter.is_set || is_set(exporter.operation)) leaf_name_data.push_back(exporter.get_name_leafdata());
    if (record.is_set || is_set(record.operation)) leaf_name_data.push_back(record.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Native::Flow::Monitor::Default_::Cache>();
        }
        return cache;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Native::Flow::Monitor::Default_::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cache != nullptr)
    {
        children["cache"] = cache;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Native::Flow::Monitor::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "exporter")
    {
        exporter = value;
    }
    if(value_path == "record")
    {
        record = value;
    }
}

Native::Flow::Monitor::Default_::Cache::Cache()
    :
    entries{YType::empty, "entries"},
    type{YType::empty, "type"}
    	,
    timeout(std::make_shared<Native::Flow::Monitor::Default_::Cache::Timeout>())
{
    timeout->parent = this;

    yang_name = "cache"; yang_parent_name = "default";
}

Native::Flow::Monitor::Default_::Cache::~Cache()
{
}

bool Native::Flow::Monitor::Default_::Cache::has_data() const
{
    return entries.is_set
	|| type.is_set
	|| (timeout !=  nullptr && timeout->has_data());
}

bool Native::Flow::Monitor::Default_::Cache::has_operation() const
{
    return is_set(operation)
	|| is_set(entries.operation)
	|| is_set(type.operation)
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string Native::Flow::Monitor::Default_::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Default_::Cache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cache' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entries.is_set || is_set(entries.operation)) leaf_name_data.push_back(entries.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default_::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Flow::Monitor::Default_::Cache::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default_::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    return children;
}

void Native::Flow::Monitor::Default_::Cache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entries")
    {
        entries = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Flow::Monitor::Default_::Cache::Timeout::Timeout()
    :
    active{YType::empty, "active"},
    inactive{YType::empty, "inactive"},
    synchronized{YType::empty, "synchronized"},
    update{YType::empty, "update"}
    	,
    event(std::make_shared<Native::Flow::Monitor::Default_::Cache::Timeout::Event>())
{
    event->parent = this;

    yang_name = "timeout"; yang_parent_name = "cache";
}

Native::Flow::Monitor::Default_::Cache::Timeout::~Timeout()
{
}

bool Native::Flow::Monitor::Default_::Cache::Timeout::has_data() const
{
    return active.is_set
	|| inactive.is_set
	|| synchronized.is_set
	|| update.is_set
	|| (event !=  nullptr && event->has_data());
}

bool Native::Flow::Monitor::Default_::Cache::Timeout::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(inactive.operation)
	|| is_set(synchronized.operation)
	|| is_set(update.operation)
	|| (event !=  nullptr && event->has_operation());
}

std::string Native::Flow::Monitor::Default_::Cache::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Default_::Cache::Timeout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timeout' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (inactive.is_set || is_set(inactive.operation)) leaf_name_data.push_back(inactive.get_name_leafdata());
    if (synchronized.is_set || is_set(synchronized.operation)) leaf_name_data.push_back(synchronized.get_name_leafdata());
    if (update.is_set || is_set(update.operation)) leaf_name_data.push_back(update.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default_::Cache::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Flow::Monitor::Default_::Cache::Timeout::Event>();
        }
        return event;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default_::Cache::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(event != nullptr)
    {
        children["event"] = event;
    }

    return children;
}

void Native::Flow::Monitor::Default_::Cache::Timeout::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "inactive")
    {
        inactive = value;
    }
    if(value_path == "synchronized")
    {
        synchronized = value;
    }
    if(value_path == "update")
    {
        update = value;
    }
}

Native::Flow::Monitor::Default_::Cache::Timeout::Event::Event()
    :
    transaction_end{YType::empty, "transaction-end"}
{
    yang_name = "event"; yang_parent_name = "timeout";
}

Native::Flow::Monitor::Default_::Cache::Timeout::Event::~Event()
{
}

bool Native::Flow::Monitor::Default_::Cache::Timeout::Event::has_data() const
{
    return transaction_end.is_set;
}

bool Native::Flow::Monitor::Default_::Cache::Timeout::Event::has_operation() const
{
    return is_set(operation)
	|| is_set(transaction_end.operation);
}

std::string Native::Flow::Monitor::Default_::Cache::Timeout::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Default_::Cache::Timeout::Event::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Event' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transaction_end.is_set || is_set(transaction_end.operation)) leaf_name_data.push_back(transaction_end.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default_::Cache::Timeout::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default_::Cache::Timeout::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Default_::Cache::Timeout::Event::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transaction-end")
    {
        transaction_end = value;
    }
}

Native::Flow::Monitor::Default_::Statistics::Statistics()
    :
    packet(std::make_shared<Native::Flow::Monitor::Default_::Statistics::Packet>())
{
    packet->parent = this;

    yang_name = "statistics"; yang_parent_name = "default";
}

Native::Flow::Monitor::Default_::Statistics::~Statistics()
{
}

bool Native::Flow::Monitor::Default_::Statistics::has_data() const
{
    return (packet !=  nullptr && packet->has_data());
}

bool Native::Flow::Monitor::Default_::Statistics::has_operation() const
{
    return is_set(operation)
	|| (packet !=  nullptr && packet->has_operation());
}

std::string Native::Flow::Monitor::Default_::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Default_::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default_::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Native::Flow::Monitor::Default_::Statistics::Packet>();
        }
        return packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default_::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(packet != nullptr)
    {
        children["packet"] = packet;
    }

    return children;
}

void Native::Flow::Monitor::Default_::Statistics::set_value(const std::string & value_path, std::string value)
{
}

const Enum::YLeaf Native::Flow::Exporter::ExportProtocolEnum::ipfix {0, "ipfix"};
const Enum::YLeaf Native::Flow::Exporter::ExportProtocolEnum::netflow_v5 {1, "netflow-v5"};
const Enum::YLeaf Native::Flow::Exporter::ExportProtocolEnum::netflow_v9 {2, "netflow-v9"};

const Enum::YLeaf Native::Flow::Monitor::TypeEnum::performance_monitor {0, "performance-monitor"};

const Enum::YLeaf Native::Flow::Monitor::Cache::TypeEnum::immediate {0, "immediate"};
const Enum::YLeaf Native::Flow::Monitor::Cache::TypeEnum::normal {1, "normal"};
const Enum::YLeaf Native::Flow::Monitor::Cache::TypeEnum::permanent {2, "permanent"};
const Enum::YLeaf Native::Flow::Monitor::Cache::TypeEnum::synchronized {3, "synchronized"};

const Enum::YLeaf Native::Flow::Monitor::Record::TypeEnum::default_rtp {0, "default-rtp"};
const Enum::YLeaf Native::Flow::Monitor::Record::TypeEnum::default_tcp {1, "default-tcp"};
const Enum::YLeaf Native::Flow::Monitor::Record::TypeEnum::netflow_original {2, "netflow-original"};


}
}

