
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_154.hpp"
#include "Cisco_IOS_XE_native_155.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_12M::Rate_12M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_12M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_12M::~Rate_12M()
{
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_12M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_12M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_24Ghz::Rate::Rate_12M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_12M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_24Ghz::Rate::Rate_12M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_12M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_12M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24Ghz::Rate::Rate_12M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_18M::Rate_18M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_18M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_18M::~Rate_18M()
{
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_18M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_18M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_24Ghz::Rate::Rate_18M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_18M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_24Ghz::Rate::Rate_18M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_18M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_18M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24Ghz::Rate::Rate_18M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_1M::Rate_1M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_1M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_1M::~Rate_1M()
{
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_1M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_1M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_24Ghz::Rate::Rate_1M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_1M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_24Ghz::Rate::Rate_1M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_1M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_1M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24Ghz::Rate::Rate_1M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_24M::Rate_24M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_24M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_24M::~Rate_24M()
{
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_24M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_24M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_24Ghz::Rate::Rate_24M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_24M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_24Ghz::Rate::Rate_24M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_24M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_24M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24Ghz::Rate::Rate_24M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_2M::Rate_2M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_2M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_2M::~Rate_2M()
{
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_2M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_2M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_24Ghz::Rate::Rate_2M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_2M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_24Ghz::Rate::Rate_2M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_2M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_2M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24Ghz::Rate::Rate_2M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_36M::Rate_36M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_36M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_36M::~Rate_36M()
{
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_36M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_36M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_24Ghz::Rate::Rate_36M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_36M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_24Ghz::Rate::Rate_36M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_36M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_36M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24Ghz::Rate::Rate_36M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_48M::Rate_48M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_48M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_48M::~Rate_48M()
{
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_48M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_48M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_24Ghz::Rate::Rate_48M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_48M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_24Ghz::Rate::Rate_48M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_48M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_48M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24Ghz::Rate::Rate_48M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_54M::Rate_54M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_54M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_54M::~Rate_54M()
{
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_54M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_54M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_24Ghz::Rate::Rate_54M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_54M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_24Ghz::Rate::Rate_54M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_54M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_54M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24Ghz::Rate::Rate_54M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_5_5M::Rate_5_5M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_5_5M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_5_5M::~Rate_5_5M()
{
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_5_5M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_5_5M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_24Ghz::Rate::Rate_5_5M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_5_5M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_24Ghz::Rate::Rate_5_5M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_5_5M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_5_5M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24Ghz::Rate::Rate_5_5M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_6M::Rate_6M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_6M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_6M::~Rate_6M()
{
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_6M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_6M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_24Ghz::Rate::Rate_6M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_6M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_24Ghz::Rate::Rate_6M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_6M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_6M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24Ghz::Rate::Rate_6M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_9M::Rate_9M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_9M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_9M::~Rate_9M()
{
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_9M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_9M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_24Ghz::Rate::Rate_9M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_9M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_24Ghz::Rate::Rate_9M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_9M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_9M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24Ghz::Rate::Rate_9M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Ap::Dot11::Y_49Ghz::Y_49Ghz()
    :
    rrm(std::make_shared<Native::Ap::Dot11::Y_49Ghz::Rrm>())
{
    rrm->parent = this;

    yang_name = "_49ghz"; yang_parent_name = "dot11";
}

Native::Ap::Dot11::Y_49Ghz::~Y_49Ghz()
{
}

bool Native::Ap::Dot11::Y_49Ghz::has_data() const
{
    return (rrm !=  nullptr && rrm->has_data());
}

bool Native::Ap::Dot11::Y_49Ghz::has_operation() const
{
    return is_set(operation)
	|| (rrm !=  nullptr && rrm->has_operation());
}

std::string Native::Ap::Dot11::Y_49Ghz::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_49ghz";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_49Ghz::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_49Ghz::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rrm")
    {
        if(rrm == nullptr)
        {
            rrm = std::make_shared<Native::Ap::Dot11::Y_49Ghz::Rrm>();
        }
        return rrm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_49Ghz::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rrm != nullptr)
    {
        children["rrm"] = rrm;
    }

    return children;
}

void Native::Ap::Dot11::Y_49Ghz::set_value(const std::string & value_path, std::string value)
{
}

Native::Ap::Dot11::Y_49Ghz::Rrm::Rrm()
    :
    profile(std::make_shared<Native::Ap::Dot11::Y_49Ghz::Rrm::Profile>())
{
    profile->parent = this;

    yang_name = "rrm"; yang_parent_name = "_49ghz";
}

Native::Ap::Dot11::Y_49Ghz::Rrm::~Rrm()
{
}

bool Native::Ap::Dot11::Y_49Ghz::Rrm::has_data() const
{
    return (profile !=  nullptr && profile->has_data());
}

bool Native::Ap::Dot11::Y_49Ghz::Rrm::has_operation() const
{
    return is_set(operation)
	|| (profile !=  nullptr && profile->has_operation());
}

std::string Native::Ap::Dot11::Y_49Ghz::Rrm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rrm";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_49Ghz::Rrm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_49ghz/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_49Ghz::Rrm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Native::Ap::Dot11::Y_49Ghz::Rrm::Profile>();
        }
        return profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_49Ghz::Rrm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(profile != nullptr)
    {
        children["profile"] = profile;
    }

    return children;
}

void Native::Ap::Dot11::Y_49Ghz::Rrm::set_value(const std::string & value_path, std::string value)
{
}

Native::Ap::Dot11::Y_49Ghz::Rrm::Profile::Profile()
    :
    foreign{YType::uint8, "foreign"}
{
    yang_name = "profile"; yang_parent_name = "rrm";
}

Native::Ap::Dot11::Y_49Ghz::Rrm::Profile::~Profile()
{
}

bool Native::Ap::Dot11::Y_49Ghz::Rrm::Profile::has_data() const
{
    return foreign.is_set;
}

bool Native::Ap::Dot11::Y_49Ghz::Rrm::Profile::has_operation() const
{
    return is_set(operation)
	|| is_set(foreign.operation);
}

std::string Native::Ap::Dot11::Y_49Ghz::Rrm::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_49Ghz::Rrm::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_49ghz/rrm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (foreign.is_set || is_set(foreign.operation)) leaf_name_data.push_back(foreign.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_49Ghz::Rrm::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_49Ghz::Rrm::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_49Ghz::Rrm::Profile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "foreign")
    {
        foreign = value;
    }
}

Native::Ap::Dot11::Y_5Ghz::Y_5Ghz()
    :
    rate(std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate>())
{
    rate->parent = this;

    yang_name = "_5ghz"; yang_parent_name = "dot11";
}

Native::Ap::Dot11::Y_5Ghz::~Y_5Ghz()
{
}

bool Native::Ap::Dot11::Y_5Ghz::has_data() const
{
    return (rate !=  nullptr && rate->has_data());
}

bool Native::Ap::Dot11::Y_5Ghz::has_operation() const
{
    return is_set(operation)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Ap::Dot11::Y_5Ghz::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_5ghz";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_5Ghz::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5Ghz::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5Ghz::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::Ap::Dot11::Y_5Ghz::set_value(const std::string & value_path, std::string value)
{
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate()
    :
    rate_11m(std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_11M>())
	,rate_12m(std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_12M>())
	,rate_18m(std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_18M>())
	,rate_1m(std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_1M>())
	,rate_24m(std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_24M>())
	,rate_2m(std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_2M>())
	,rate_36m(std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_36M>())
	,rate_48m(std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_48M>())
	,rate_54m(std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_54M>())
	,rate_5_5m(std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_5_5M>())
	,rate_6m(std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_6M>())
	,rate_9m(std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_9M>())
{
    rate_11m->parent = this;

    rate_12m->parent = this;

    rate_18m->parent = this;

    rate_1m->parent = this;

    rate_24m->parent = this;

    rate_2m->parent = this;

    rate_36m->parent = this;

    rate_48m->parent = this;

    rate_54m->parent = this;

    rate_5_5m->parent = this;

    rate_6m->parent = this;

    rate_9m->parent = this;

    yang_name = "rate"; yang_parent_name = "_5ghz";
}

Native::Ap::Dot11::Y_5Ghz::Rate::~Rate()
{
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::has_data() const
{
    return (rate_11m !=  nullptr && rate_11m->has_data())
	|| (rate_12m !=  nullptr && rate_12m->has_data())
	|| (rate_18m !=  nullptr && rate_18m->has_data())
	|| (rate_1m !=  nullptr && rate_1m->has_data())
	|| (rate_24m !=  nullptr && rate_24m->has_data())
	|| (rate_2m !=  nullptr && rate_2m->has_data())
	|| (rate_36m !=  nullptr && rate_36m->has_data())
	|| (rate_48m !=  nullptr && rate_48m->has_data())
	|| (rate_54m !=  nullptr && rate_54m->has_data())
	|| (rate_5_5m !=  nullptr && rate_5_5m->has_data())
	|| (rate_6m !=  nullptr && rate_6m->has_data())
	|| (rate_9m !=  nullptr && rate_9m->has_data());
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::has_operation() const
{
    return is_set(operation)
	|| (rate_11m !=  nullptr && rate_11m->has_operation())
	|| (rate_12m !=  nullptr && rate_12m->has_operation())
	|| (rate_18m !=  nullptr && rate_18m->has_operation())
	|| (rate_1m !=  nullptr && rate_1m->has_operation())
	|| (rate_24m !=  nullptr && rate_24m->has_operation())
	|| (rate_2m !=  nullptr && rate_2m->has_operation())
	|| (rate_36m !=  nullptr && rate_36m->has_operation())
	|| (rate_48m !=  nullptr && rate_48m->has_operation())
	|| (rate_54m !=  nullptr && rate_54m->has_operation())
	|| (rate_5_5m !=  nullptr && rate_5_5m->has_operation())
	|| (rate_6m !=  nullptr && rate_6m->has_operation())
	|| (rate_9m !=  nullptr && rate_9m->has_operation());
}

std::string Native::Ap::Dot11::Y_5Ghz::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_5Ghz::Rate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5Ghz::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RATE_11M")
    {
        if(rate_11m == nullptr)
        {
            rate_11m = std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_11M>();
        }
        return rate_11m;
    }

    if(child_yang_name == "RATE_12M")
    {
        if(rate_12m == nullptr)
        {
            rate_12m = std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_12M>();
        }
        return rate_12m;
    }

    if(child_yang_name == "RATE_18M")
    {
        if(rate_18m == nullptr)
        {
            rate_18m = std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_18M>();
        }
        return rate_18m;
    }

    if(child_yang_name == "RATE_1M")
    {
        if(rate_1m == nullptr)
        {
            rate_1m = std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_1M>();
        }
        return rate_1m;
    }

    if(child_yang_name == "RATE_24M")
    {
        if(rate_24m == nullptr)
        {
            rate_24m = std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_24M>();
        }
        return rate_24m;
    }

    if(child_yang_name == "RATE_2M")
    {
        if(rate_2m == nullptr)
        {
            rate_2m = std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_2M>();
        }
        return rate_2m;
    }

    if(child_yang_name == "RATE_36M")
    {
        if(rate_36m == nullptr)
        {
            rate_36m = std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_36M>();
        }
        return rate_36m;
    }

    if(child_yang_name == "RATE_48M")
    {
        if(rate_48m == nullptr)
        {
            rate_48m = std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_48M>();
        }
        return rate_48m;
    }

    if(child_yang_name == "RATE_54M")
    {
        if(rate_54m == nullptr)
        {
            rate_54m = std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_54M>();
        }
        return rate_54m;
    }

    if(child_yang_name == "RATE_5_5M")
    {
        if(rate_5_5m == nullptr)
        {
            rate_5_5m = std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_5_5M>();
        }
        return rate_5_5m;
    }

    if(child_yang_name == "RATE_6M")
    {
        if(rate_6m == nullptr)
        {
            rate_6m = std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_6M>();
        }
        return rate_6m;
    }

    if(child_yang_name == "RATE_9M")
    {
        if(rate_9m == nullptr)
        {
            rate_9m = std::make_shared<Native::Ap::Dot11::Y_5Ghz::Rate::Rate_9M>();
        }
        return rate_9m;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5Ghz::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate_11m != nullptr)
    {
        children["RATE_11M"] = rate_11m;
    }

    if(rate_12m != nullptr)
    {
        children["RATE_12M"] = rate_12m;
    }

    if(rate_18m != nullptr)
    {
        children["RATE_18M"] = rate_18m;
    }

    if(rate_1m != nullptr)
    {
        children["RATE_1M"] = rate_1m;
    }

    if(rate_24m != nullptr)
    {
        children["RATE_24M"] = rate_24m;
    }

    if(rate_2m != nullptr)
    {
        children["RATE_2M"] = rate_2m;
    }

    if(rate_36m != nullptr)
    {
        children["RATE_36M"] = rate_36m;
    }

    if(rate_48m != nullptr)
    {
        children["RATE_48M"] = rate_48m;
    }

    if(rate_54m != nullptr)
    {
        children["RATE_54M"] = rate_54m;
    }

    if(rate_5_5m != nullptr)
    {
        children["RATE_5_5M"] = rate_5_5m;
    }

    if(rate_6m != nullptr)
    {
        children["RATE_6M"] = rate_6m;
    }

    if(rate_9m != nullptr)
    {
        children["RATE_9M"] = rate_9m;
    }

    return children;
}

void Native::Ap::Dot11::Y_5Ghz::Rate::set_value(const std::string & value_path, std::string value)
{
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_11M::Rate_11M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_11M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_11M::~Rate_11M()
{
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_11M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_11M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_5Ghz::Rate::Rate_11M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_11M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_5Ghz::Rate::Rate_11M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_11M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_11M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5Ghz::Rate::Rate_11M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_12M::Rate_12M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_12M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_12M::~Rate_12M()
{
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_12M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_12M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_5Ghz::Rate::Rate_12M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_12M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_5Ghz::Rate::Rate_12M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_12M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_12M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5Ghz::Rate::Rate_12M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_18M::Rate_18M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_18M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_18M::~Rate_18M()
{
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_18M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_18M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_5Ghz::Rate::Rate_18M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_18M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_5Ghz::Rate::Rate_18M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_18M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_18M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5Ghz::Rate::Rate_18M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_1M::Rate_1M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_1M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_1M::~Rate_1M()
{
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_1M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_1M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_5Ghz::Rate::Rate_1M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_1M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_5Ghz::Rate::Rate_1M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_1M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_1M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5Ghz::Rate::Rate_1M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_24M::Rate_24M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_24M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_24M::~Rate_24M()
{
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_24M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_24M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_5Ghz::Rate::Rate_24M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_24M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_5Ghz::Rate::Rate_24M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_24M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_24M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5Ghz::Rate::Rate_24M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_2M::Rate_2M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_2M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_2M::~Rate_2M()
{
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_2M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_2M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_5Ghz::Rate::Rate_2M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_2M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_5Ghz::Rate::Rate_2M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_2M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_2M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5Ghz::Rate::Rate_2M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_36M::Rate_36M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_36M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_36M::~Rate_36M()
{
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_36M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_36M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_5Ghz::Rate::Rate_36M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_36M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_5Ghz::Rate::Rate_36M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_36M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_36M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5Ghz::Rate::Rate_36M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_48M::Rate_48M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_48M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_48M::~Rate_48M()
{
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_48M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_48M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_5Ghz::Rate::Rate_48M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_48M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_5Ghz::Rate::Rate_48M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_48M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_48M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5Ghz::Rate::Rate_48M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_54M::Rate_54M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_54M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_54M::~Rate_54M()
{
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_54M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_54M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_5Ghz::Rate::Rate_54M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_54M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_5Ghz::Rate::Rate_54M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_54M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_54M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5Ghz::Rate::Rate_54M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_5_5M::Rate_5_5M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_5_5M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_5_5M::~Rate_5_5M()
{
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_5_5M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_5_5M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_5Ghz::Rate::Rate_5_5M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_5_5M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_5Ghz::Rate::Rate_5_5M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_5_5M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_5_5M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5Ghz::Rate::Rate_5_5M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_6M::Rate_6M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_6M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_6M::~Rate_6M()
{
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_6M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_6M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_5Ghz::Rate::Rate_6M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_6M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_5Ghz::Rate::Rate_6M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_6M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_6M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5Ghz::Rate::Rate_6M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_9M::Rate_9M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_9M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_5Ghz::Rate::Rate_9M::~Rate_9M()
{
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_9M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5Ghz::Rate::Rate_9M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_5Ghz::Rate::Rate_9M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_9M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_5Ghz::Rate::Rate_9M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_9M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5Ghz::Rate::Rate_9M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5Ghz::Rate::Rate_9M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Ap::Dot11::AirtimeFairness::AirtimeFairness()
{
    yang_name = "airtime-fairness"; yang_parent_name = "dot11";
}

Native::Ap::Dot11::AirtimeFairness::~AirtimeFairness()
{
}

bool Native::Ap::Dot11::AirtimeFairness::has_data() const
{
    for (std::size_t index=0; index<policy_name.size(); index++)
    {
        if(policy_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ap::Dot11::AirtimeFairness::has_operation() const
{
    for (std::size_t index=0; index<policy_name.size(); index++)
    {
        if(policy_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ap::Dot11::AirtimeFairness::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "airtime-fairness";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::AirtimeFairness::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::AirtimeFairness::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-name")
    {
        for(auto const & c : policy_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ap::Dot11::AirtimeFairness::PolicyName>();
        c->parent = this;
        policy_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::AirtimeFairness::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ap::Dot11::AirtimeFairness::set_value(const std::string & value_path, std::string value)
{
}

Native::Ap::Dot11::AirtimeFairness::PolicyName::PolicyName()
    :
    policy_name{YType::str, "policy-name"},
    policy_id{YType::uint16, "policy-id"}
{
    yang_name = "policy-name"; yang_parent_name = "airtime-fairness";
}

Native::Ap::Dot11::AirtimeFairness::PolicyName::~PolicyName()
{
}

bool Native::Ap::Dot11::AirtimeFairness::PolicyName::has_data() const
{
    return policy_name.is_set
	|| policy_id.is_set;
}

bool Native::Ap::Dot11::AirtimeFairness::PolicyName::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_name.operation)
	|| is_set(policy_id.operation);
}

std::string Native::Ap::Dot11::AirtimeFairness::PolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-name" <<"[policy-name='" <<policy_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::AirtimeFairness::PolicyName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/airtime-fairness/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_id.is_set || is_set(policy_id.operation)) leaf_name_data.push_back(policy_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::AirtimeFairness::PolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::AirtimeFairness::PolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::AirtimeFairness::PolicyName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "policy-id")
    {
        policy_id = value;
    }
}

Native::Esmc::Esmc()
    :
    process{YType::empty, "process"}
{
    yang_name = "esmc"; yang_parent_name = "native";
}

Native::Esmc::~Esmc()
{
}

bool Native::Esmc::has_data() const
{
    return process.is_set;
}

bool Native::Esmc::has_operation() const
{
    return is_set(operation)
	|| is_set(process.operation);
}

std::string Native::Esmc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:esmc";

    return path_buffer.str();

}

const EntityPath Native::Esmc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process.is_set || is_set(process.operation)) leaf_name_data.push_back(process.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Esmc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Esmc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Esmc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process")
    {
        process = value;
    }
}

Native::BbaGroup::BbaGroup()
{
    yang_name = "bba-group"; yang_parent_name = "native";
}

Native::BbaGroup::~BbaGroup()
{
}

bool Native::BbaGroup::has_data() const
{
    for (std::size_t index=0; index<pppoe.size(); index++)
    {
        if(pppoe[index]->has_data())
            return true;
    }
    return false;
}

bool Native::BbaGroup::has_operation() const
{
    for (std::size_t index=0; index<pppoe.size(); index++)
    {
        if(pppoe[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::BbaGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bba-group:bba-group";

    return path_buffer.str();

}

const EntityPath Native::BbaGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BbaGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        for(auto const & c : pppoe)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BbaGroup::Pppoe>();
        c->parent = this;
        pppoe.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BbaGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pppoe)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::BbaGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::BbaGroup::Pppoe::Pppoe()
    :
    id{YType::str, "id"},
    virtual_template{YType::uint16, "virtual-template"}
    	,
    vendor_tag(std::make_shared<Native::BbaGroup::Pppoe::VendorTag>())
{
    vendor_tag->parent = this;

    yang_name = "pppoe"; yang_parent_name = "bba-group";
}

Native::BbaGroup::Pppoe::~Pppoe()
{
}

bool Native::BbaGroup::Pppoe::has_data() const
{
    return id.is_set
	|| virtual_template.is_set
	|| (vendor_tag !=  nullptr && vendor_tag->has_data());
}

bool Native::BbaGroup::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(virtual_template.operation)
	|| (vendor_tag !=  nullptr && vendor_tag->has_operation());
}

std::string Native::BbaGroup::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::BbaGroup::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-bba-group:bba-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BbaGroup::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vendor-tag")
    {
        if(vendor_tag == nullptr)
        {
            vendor_tag = std::make_shared<Native::BbaGroup::Pppoe::VendorTag>();
        }
        return vendor_tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BbaGroup::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vendor_tag != nullptr)
    {
        children["vendor-tag"] = vendor_tag;
    }

    return children;
}

void Native::BbaGroup::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "virtual-template")
    {
        virtual_template = value;
    }
}

Native::BbaGroup::Pppoe::VendorTag::VendorTag()
    :
    strip{YType::empty, "strip"}
    	,
    circuit_id(std::make_shared<Native::BbaGroup::Pppoe::VendorTag::CircuitId>())
	,dsl_sync_rate(std::make_shared<Native::BbaGroup::Pppoe::VendorTag::DslSyncRate>())
	,remote_id(std::make_shared<Native::BbaGroup::Pppoe::VendorTag::RemoteId>())
{
    circuit_id->parent = this;

    dsl_sync_rate->parent = this;

    remote_id->parent = this;

    yang_name = "vendor-tag"; yang_parent_name = "pppoe";
}

Native::BbaGroup::Pppoe::VendorTag::~VendorTag()
{
}

bool Native::BbaGroup::Pppoe::VendorTag::has_data() const
{
    return strip.is_set
	|| (circuit_id !=  nullptr && circuit_id->has_data())
	|| (dsl_sync_rate !=  nullptr && dsl_sync_rate->has_data())
	|| (remote_id !=  nullptr && remote_id->has_data());
}

bool Native::BbaGroup::Pppoe::VendorTag::has_operation() const
{
    return is_set(operation)
	|| is_set(strip.operation)
	|| (circuit_id !=  nullptr && circuit_id->has_operation())
	|| (dsl_sync_rate !=  nullptr && dsl_sync_rate->has_operation())
	|| (remote_id !=  nullptr && remote_id->has_operation());
}

std::string Native::BbaGroup::Pppoe::VendorTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vendor-tag";

    return path_buffer.str();

}

const EntityPath Native::BbaGroup::Pppoe::VendorTag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VendorTag' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (strip.is_set || is_set(strip.operation)) leaf_name_data.push_back(strip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BbaGroup::Pppoe::VendorTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "circuit-id")
    {
        if(circuit_id == nullptr)
        {
            circuit_id = std::make_shared<Native::BbaGroup::Pppoe::VendorTag::CircuitId>();
        }
        return circuit_id;
    }

    if(child_yang_name == "dsl-sync-rate")
    {
        if(dsl_sync_rate == nullptr)
        {
            dsl_sync_rate = std::make_shared<Native::BbaGroup::Pppoe::VendorTag::DslSyncRate>();
        }
        return dsl_sync_rate;
    }

    if(child_yang_name == "remote-id")
    {
        if(remote_id == nullptr)
        {
            remote_id = std::make_shared<Native::BbaGroup::Pppoe::VendorTag::RemoteId>();
        }
        return remote_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BbaGroup::Pppoe::VendorTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(circuit_id != nullptr)
    {
        children["circuit-id"] = circuit_id;
    }

    if(dsl_sync_rate != nullptr)
    {
        children["dsl-sync-rate"] = dsl_sync_rate;
    }

    if(remote_id != nullptr)
    {
        children["remote-id"] = remote_id;
    }

    return children;
}

void Native::BbaGroup::Pppoe::VendorTag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "strip")
    {
        strip = value;
    }
}

Native::BbaGroup::Pppoe::VendorTag::CircuitId::CircuitId()
    :
    service{YType::empty, "service"}
{
    yang_name = "circuit-id"; yang_parent_name = "vendor-tag";
}

Native::BbaGroup::Pppoe::VendorTag::CircuitId::~CircuitId()
{
}

bool Native::BbaGroup::Pppoe::VendorTag::CircuitId::has_data() const
{
    return service.is_set;
}

bool Native::BbaGroup::Pppoe::VendorTag::CircuitId::has_operation() const
{
    return is_set(operation)
	|| is_set(service.operation);
}

std::string Native::BbaGroup::Pppoe::VendorTag::CircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id";

    return path_buffer.str();

}

const EntityPath Native::BbaGroup::Pppoe::VendorTag::CircuitId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CircuitId' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service.is_set || is_set(service.operation)) leaf_name_data.push_back(service.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BbaGroup::Pppoe::VendorTag::CircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BbaGroup::Pppoe::VendorTag::CircuitId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BbaGroup::Pppoe::VendorTag::CircuitId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service")
    {
        service = value;
    }
}

Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::DslSyncRate()
    :
    service{YType::empty, "service"}
{
    yang_name = "dsl-sync-rate"; yang_parent_name = "vendor-tag";
}

Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::~DslSyncRate()
{
}

bool Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::has_data() const
{
    return service.is_set;
}

bool Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::has_operation() const
{
    return is_set(operation)
	|| is_set(service.operation);
}

std::string Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsl-sync-rate";

    return path_buffer.str();

}

const EntityPath Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DslSyncRate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service.is_set || is_set(service.operation)) leaf_name_data.push_back(service.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service")
    {
        service = value;
    }
}

Native::BbaGroup::Pppoe::VendorTag::RemoteId::RemoteId()
    :
    service{YType::empty, "service"}
{
    yang_name = "remote-id"; yang_parent_name = "vendor-tag";
}

Native::BbaGroup::Pppoe::VendorTag::RemoteId::~RemoteId()
{
}

bool Native::BbaGroup::Pppoe::VendorTag::RemoteId::has_data() const
{
    return service.is_set;
}

bool Native::BbaGroup::Pppoe::VendorTag::RemoteId::has_operation() const
{
    return is_set(operation)
	|| is_set(service.operation);
}

std::string Native::BbaGroup::Pppoe::VendorTag::RemoteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id";

    return path_buffer.str();

}

const EntityPath Native::BbaGroup::Pppoe::VendorTag::RemoteId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteId' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service.is_set || is_set(service.operation)) leaf_name_data.push_back(service.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BbaGroup::Pppoe::VendorTag::RemoteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BbaGroup::Pppoe::VendorTag::RemoteId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BbaGroup::Pppoe::VendorTag::RemoteId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service")
    {
        service = value;
    }
}

Native::Card::Card()
    :
    bay{YType::uint32, "bay"},
    slot{YType::uint32, "slot"},
    type{YType::enumeration, "type"}
{
    yang_name = "card"; yang_parent_name = "native";
}

Native::Card::~Card()
{
}

bool Native::Card::has_data() const
{
    return bay.is_set
	|| slot.is_set
	|| type.is_set;
}

bool Native::Card::has_operation() const
{
    return is_set(operation)
	|| is_set(bay.operation)
	|| is_set(slot.operation)
	|| is_set(type.operation);
}

std::string Native::Card::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-card:card";

    return path_buffer.str();

}

const EntityPath Native::Card::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bay.is_set || is_set(bay.operation)) leaf_name_data.push_back(bay.get_name_leafdata());
    if (slot.is_set || is_set(slot.operation)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Card::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Card::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Card::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bay")
    {
        bay = value;
    }
    if(value_path == "slot")
    {
        slot = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Cef::Cef()
    :
    table(std::make_shared<Native::Cef::Table>())
{
    table->parent = this;

    yang_name = "cef"; yang_parent_name = "native";
}

Native::Cef::~Cef()
{
}

bool Native::Cef::has_data() const
{
    return (table !=  nullptr && table->has_data());
}

bool Native::Cef::has_operation() const
{
    return is_set(operation)
	|| (table !=  nullptr && table->has_operation());
}

std::string Native::Cef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cef:cef";

    return path_buffer.str();

}

const EntityPath Native::Cef::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Cef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "table")
    {
        if(table == nullptr)
        {
            table = std::make_shared<Native::Cef::Table>();
        }
        return table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(table != nullptr)
    {
        children["table"] = table;
    }

    return children;
}

void Native::Cef::set_value(const std::string & value_path, std::string value)
{
}

Native::Cef::Table::Table()
    :
    output_chain(std::make_shared<Native::Cef::Table::OutputChain>())
{
    output_chain->parent = this;

    yang_name = "table"; yang_parent_name = "cef";
}

Native::Cef::Table::~Table()
{
}

bool Native::Cef::Table::has_data() const
{
    return (output_chain !=  nullptr && output_chain->has_data());
}

bool Native::Cef::Table::has_operation() const
{
    return is_set(operation)
	|| (output_chain !=  nullptr && output_chain->has_operation());
}

std::string Native::Cef::Table::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table";

    return path_buffer.str();

}

const EntityPath Native::Cef::Table::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Cef::Table::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output-chain")
    {
        if(output_chain == nullptr)
        {
            output_chain = std::make_shared<Native::Cef::Table::OutputChain>();
        }
        return output_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(output_chain != nullptr)
    {
        children["output-chain"] = output_chain;
    }

    return children;
}

void Native::Cef::Table::set_value(const std::string & value_path, std::string value)
{
}

Native::Cef::Table::OutputChain::OutputChain()
    :
    build(std::make_shared<Native::Cef::Table::OutputChain::Build>())
{
    build->parent = this;

    yang_name = "output-chain"; yang_parent_name = "table";
}

Native::Cef::Table::OutputChain::~OutputChain()
{
}

bool Native::Cef::Table::OutputChain::has_data() const
{
    return (build !=  nullptr && build->has_data());
}

bool Native::Cef::Table::OutputChain::has_operation() const
{
    return is_set(operation)
	|| (build !=  nullptr && build->has_operation());
}

std::string Native::Cef::Table::OutputChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-chain";

    return path_buffer.str();

}

const EntityPath Native::Cef::Table::OutputChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Cef::Table::OutputChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "build")
    {
        if(build == nullptr)
        {
            build = std::make_shared<Native::Cef::Table::OutputChain::Build>();
        }
        return build;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::OutputChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(build != nullptr)
    {
        children["build"] = build;
    }

    return children;
}

void Native::Cef::Table::OutputChain::set_value(const std::string & value_path, std::string value)
{
}

Native::Cef::Table::OutputChain::Build::Build()
    :
    favor(std::make_shared<Native::Cef::Table::OutputChain::Build::Favor>())
{
    favor->parent = this;

    yang_name = "build"; yang_parent_name = "output-chain";
}

Native::Cef::Table::OutputChain::Build::~Build()
{
}

bool Native::Cef::Table::OutputChain::Build::has_data() const
{
    return (favor !=  nullptr && favor->has_data());
}

bool Native::Cef::Table::OutputChain::Build::has_operation() const
{
    return is_set(operation)
	|| (favor !=  nullptr && favor->has_operation());
}

std::string Native::Cef::Table::OutputChain::Build::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "build";

    return path_buffer.str();

}

const EntityPath Native::Cef::Table::OutputChain::Build::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/output-chain/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Cef::Table::OutputChain::Build::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "favor")
    {
        if(favor == nullptr)
        {
            favor = std::make_shared<Native::Cef::Table::OutputChain::Build::Favor>();
        }
        return favor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::OutputChain::Build::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(favor != nullptr)
    {
        children["favor"] = favor;
    }

    return children;
}

void Native::Cef::Table::OutputChain::Build::set_value(const std::string & value_path, std::string value)
{
}

Native::Cef::Table::OutputChain::Build::Favor::Favor()
    :
    convergence_speed{YType::empty, "convergence-speed"},
    memory_utilization{YType::empty, "memory-utilization"}
{
    yang_name = "favor"; yang_parent_name = "build";
}

Native::Cef::Table::OutputChain::Build::Favor::~Favor()
{
}

bool Native::Cef::Table::OutputChain::Build::Favor::has_data() const
{
    return convergence_speed.is_set
	|| memory_utilization.is_set;
}

bool Native::Cef::Table::OutputChain::Build::Favor::has_operation() const
{
    return is_set(operation)
	|| is_set(convergence_speed.operation)
	|| is_set(memory_utilization.operation);
}

std::string Native::Cef::Table::OutputChain::Build::Favor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "favor";

    return path_buffer.str();

}

const EntityPath Native::Cef::Table::OutputChain::Build::Favor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/output-chain/build/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (convergence_speed.is_set || is_set(convergence_speed.operation)) leaf_name_data.push_back(convergence_speed.get_name_leafdata());
    if (memory_utilization.is_set || is_set(memory_utilization.operation)) leaf_name_data.push_back(memory_utilization.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Cef::Table::OutputChain::Build::Favor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::OutputChain::Build::Favor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::OutputChain::Build::Favor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "convergence-speed")
    {
        convergence_speed = value;
    }
    if(value_path == "memory-utilization")
    {
        memory_utilization = value;
    }
}

Native::Coap::Coap()
    :
    http(std::make_shared<Native::Coap::Http>())
{
    http->parent = this;

    yang_name = "coap"; yang_parent_name = "native";
}

Native::Coap::~Coap()
{
}

bool Native::Coap::has_data() const
{
    return (http !=  nullptr && http->has_data());
}

bool Native::Coap::has_operation() const
{
    return is_set(operation)
	|| (http !=  nullptr && http->has_operation());
}

std::string Native::Coap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-coap:coap";

    return path_buffer.str();

}

const EntityPath Native::Coap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Coap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Coap::Http>();
        }
        return http;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Coap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(http != nullptr)
    {
        children["http"] = http;
    }

    return children;
}

void Native::Coap::set_value(const std::string & value_path, std::string value)
{
}

Native::Coap::Http::Http()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "http"; yang_parent_name = "coap";
}

Native::Coap::Http::~Http()
{
}

bool Native::Coap::Http::has_data() const
{
    return enable.is_set;
}

bool Native::Coap::Http::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Native::Coap::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";

    return path_buffer.str();

}

const EntityPath Native::Coap::Http::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-coap:coap/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Coap::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Coap::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Coap::Http::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::DeviceSensor::DeviceSensor()
    :
    accounting{YType::empty, "accounting"}
{
    yang_name = "device-sensor"; yang_parent_name = "native";
}

Native::DeviceSensor::~DeviceSensor()
{
}

bool Native::DeviceSensor::has_data() const
{
    return accounting.is_set;
}

bool Native::DeviceSensor::has_operation() const
{
    return is_set(operation)
	|| is_set(accounting.operation);
}

std::string Native::DeviceSensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-device-sensor:device-sensor";

    return path_buffer.str();

}

const EntityPath Native::DeviceSensor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.operation)) leaf_name_data.push_back(accounting.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::DeviceSensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceSensor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceSensor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accounting")
    {
        accounting = value;
    }
}

Native::Diagnostic::Diagnostic()
    :
    bootup(std::make_shared<Native::Diagnostic::Bootup>())
	,event_log(std::make_shared<Native::Diagnostic::EventLog>())
	,monitor(std::make_shared<Native::Diagnostic::Monitor>())
	,schedule(std::make_shared<Native::Diagnostic::Schedule>())
{
    bootup->parent = this;

    event_log->parent = this;

    monitor->parent = this;

    schedule->parent = this;

    yang_name = "diagnostic"; yang_parent_name = "native";
}

Native::Diagnostic::~Diagnostic()
{
}

bool Native::Diagnostic::has_data() const
{
    return (bootup !=  nullptr && bootup->has_data())
	|| (event_log !=  nullptr && event_log->has_data())
	|| (monitor !=  nullptr && monitor->has_data())
	|| (schedule !=  nullptr && schedule->has_data());
}

bool Native::Diagnostic::has_operation() const
{
    return is_set(operation)
	|| (bootup !=  nullptr && bootup->has_operation())
	|| (event_log !=  nullptr && event_log->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (schedule !=  nullptr && schedule->has_operation());
}

std::string Native::Diagnostic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-diagnostics:diagnostic";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bootup")
    {
        if(bootup == nullptr)
        {
            bootup = std::make_shared<Native::Diagnostic::Bootup>();
        }
        return bootup;
    }

    if(child_yang_name == "event-log")
    {
        if(event_log == nullptr)
        {
            event_log = std::make_shared<Native::Diagnostic::EventLog>();
        }
        return event_log;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Diagnostic::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "schedule")
    {
        if(schedule == nullptr)
        {
            schedule = std::make_shared<Native::Diagnostic::Schedule>();
        }
        return schedule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bootup != nullptr)
    {
        children["bootup"] = bootup;
    }

    if(event_log != nullptr)
    {
        children["event-log"] = event_log;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    if(schedule != nullptr)
    {
        children["schedule"] = schedule;
    }

    return children;
}

void Native::Diagnostic::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Bootup::Bootup()
    :
    level{YType::enumeration, "level"}
{
    yang_name = "bootup"; yang_parent_name = "diagnostic";
}

Native::Diagnostic::Bootup::~Bootup()
{
}

bool Native::Diagnostic::Bootup::has_data() const
{
    return level.is_set;
}

bool Native::Diagnostic::Bootup::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation);
}

std::string Native::Diagnostic::Bootup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootup";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Bootup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Bootup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Bootup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Bootup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
}

Native::Diagnostic::EventLog::EventLog()
    :
    size{YType::uint16, "size"}
{
    yang_name = "event-log"; yang_parent_name = "diagnostic";
}

Native::Diagnostic::EventLog::~EventLog()
{
}

bool Native::Diagnostic::EventLog::has_data() const
{
    return size.is_set;
}

bool Native::Diagnostic::EventLog::has_operation() const
{
    return is_set(operation)
	|| is_set(size.operation);
}

std::string Native::Diagnostic::EventLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-log";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::EventLog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Diagnostic::EventLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::EventLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::EventLog::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "size")
    {
        size = value;
    }
}

Native::Diagnostic::Monitor::Monitor()
    :
    syslog{YType::empty, "syslog"}
    	,
    interval(std::make_shared<Native::Diagnostic::Monitor::Interval>())
	,threshold(std::make_shared<Native::Diagnostic::Monitor::Threshold>())
{
    interval->parent = this;

    threshold->parent = this;

    yang_name = "monitor"; yang_parent_name = "diagnostic";
}

Native::Diagnostic::Monitor::~Monitor()
{
}

bool Native::Diagnostic::Monitor::has_data() const
{
    for (std::size_t index=0; index<switch.size(); index++)
    {
        if(switch[index]->has_data())
            return true;
    }
    return syslog.is_set
	|| (interval !=  nullptr && interval->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Diagnostic::Monitor::has_operation() const
{
    for (std::size_t index=0; index<switch.size(); index++)
    {
        if(switch[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(syslog.operation)
	|| (interval !=  nullptr && interval->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Diagnostic::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Monitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (syslog.is_set || is_set(syslog.operation)) leaf_name_data.push_back(syslog.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::Diagnostic::Monitor::Interval>();
        }
        return interval;
    }

    if(child_yang_name == "switch")
    {
        for(auto const & c : switch)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Monitor::Switch>();
        c->parent = this;
        switch.push_back(c);
        return c;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Diagnostic::Monitor::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interval != nullptr)
    {
        children["interval"] = interval;
    }

    for (auto const & c : switch)
    {
        children[c->get_segment_path()] = c;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Diagnostic::Monitor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "syslog")
    {
        syslog = value;
    }
}

Native::Diagnostic::Monitor::Interval::Interval()
    :
    switch(std::make_shared<Native::Diagnostic::Monitor::Interval::Switch>())
{
    switch->parent = this;

    yang_name = "interval"; yang_parent_name = "monitor";
}

Native::Diagnostic::Monitor::Interval::~Interval()
{
}

bool Native::Diagnostic::Monitor::Interval::has_data() const
{
    return (switch !=  nullptr && switch->has_data());
}

bool Native::Diagnostic::Monitor::Interval::has_operation() const
{
    return is_set(operation)
	|| (switch !=  nullptr && switch->has_operation());
}

std::string Native::Diagnostic::Monitor::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interval";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Monitor::Interval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        if(switch == nullptr)
        {
            switch = std::make_shared<Native::Diagnostic::Monitor::Interval::Switch>();
        }
        return switch;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(switch != nullptr)
    {
        children["switch"] = switch;
    }

    return children;
}

void Native::Diagnostic::Monitor::Interval::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Monitor::Interval::Switch::Switch()
{
    yang_name = "switch"; yang_parent_name = "interval";
}

Native::Diagnostic::Monitor::Interval::Switch::~Switch()
{
}

bool Native::Diagnostic::Monitor::Interval::Switch::has_data() const
{
    for (std::size_t index=0; index<switch.size(); index++)
    {
        if(switch[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Diagnostic::Monitor::Interval::Switch::has_operation() const
{
    for (std::size_t index=0; index<switch.size(); index++)
    {
        if(switch[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Diagnostic::Monitor::Interval::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Monitor::Interval::Switch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/interval/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        for(auto const & c : switch)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Monitor::Interval::Switch::Switch_>();
        c->parent = this;
        switch.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : switch)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Monitor::Interval::Switch::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Monitor::Interval::Switch::Switch_::Switch_()
    :
    number{YType::uint8, "number"}
    	,
    test(std::make_shared<Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test>())
{
    test->parent = this;

    yang_name = "switch"; yang_parent_name = "switch";
}

Native::Diagnostic::Monitor::Interval::Switch::Switch_::~Switch_()
{
}

bool Native::Diagnostic::Monitor::Interval::Switch::Switch_::has_data() const
{
    return number.is_set
	|| (test !=  nullptr && test->has_data());
}

bool Native::Diagnostic::Monitor::Interval::Switch::Switch_::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::Diagnostic::Monitor::Interval::Switch::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Monitor::Interval::Switch::Switch_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/interval/switch/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::Switch::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::Switch::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(test != nullptr)
    {
        children["test"] = test;
    }

    return children;
}

void Native::Diagnostic::Monitor::Interval::Switch::Switch_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::Test()
    :
    all(std::make_shared<Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All>())
{
    all->parent = this;

    yang_name = "test"; yang_parent_name = "switch";
}

Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::~Test()
{
}

bool Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::has_data() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::has_operation() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Test' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All>();
        }
        return all;
    }

    if(child_yang_name == "test-ids")
    {
        for(auto const & c : test_ids)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds>();
        c->parent = this;
        test_ids.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    for (auto const & c : test_ids)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds::TestIds()
    :
    id{YType::str, "id"},
    hh_mm_ss{YType::str, "hh-mm-ss"},
    milli_seconds{YType::uint16, "milli-seconds"},
    number_of_days{YType::uint16, "number-of-days"}
{
    yang_name = "test-ids"; yang_parent_name = "test";
}

Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds::~TestIds()
{
}

bool Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds::has_data() const
{
    return id.is_set
	|| hh_mm_ss.is_set
	|| milli_seconds.is_set
	|| number_of_days.is_set;
}

bool Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(hh_mm_ss.operation)
	|| is_set(milli_seconds.operation)
	|| is_set(number_of_days.operation);
}

std::string Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test-ids" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TestIds' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (hh_mm_ss.is_set || is_set(hh_mm_ss.operation)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());
    if (milli_seconds.is_set || is_set(milli_seconds.operation)) leaf_name_data.push_back(milli_seconds.get_name_leafdata());
    if (number_of_days.is_set || is_set(number_of_days.operation)) leaf_name_data.push_back(number_of_days.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds = value;
    }
    if(value_path == "number-of-days")
    {
        number_of_days = value;
    }
}

Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All::All()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"},
    milli_seconds{YType::uint16, "milli-seconds"},
    number_of_days{YType::uint16, "number-of-days"}
{
    yang_name = "all"; yang_parent_name = "test";
}

Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All::~All()
{
}

bool Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All::has_data() const
{
    return hh_mm_ss.is_set
	|| milli_seconds.is_set
	|| number_of_days.is_set;
}

bool Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All::has_operation() const
{
    return is_set(operation)
	|| is_set(hh_mm_ss.operation)
	|| is_set(milli_seconds.operation)
	|| is_set(number_of_days.operation);
}

std::string Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.operation)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());
    if (milli_seconds.is_set || is_set(milli_seconds.operation)) leaf_name_data.push_back(milli_seconds.get_name_leafdata());
    if (number_of_days.is_set || is_set(number_of_days.operation)) leaf_name_data.push_back(number_of_days.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds = value;
    }
    if(value_path == "number-of-days")
    {
        number_of_days = value;
    }
}

Native::Diagnostic::Monitor::Switch::Switch()
    :
    number{YType::uint8, "number"}
    	,
    test(std::make_shared<Native::Diagnostic::Monitor::Switch::Test>())
{
    test->parent = this;

    yang_name = "switch"; yang_parent_name = "monitor";
}

Native::Diagnostic::Monitor::Switch::~Switch()
{
}

bool Native::Diagnostic::Monitor::Switch::has_data() const
{
    return number.is_set
	|| (test !=  nullptr && test->has_data());
}

bool Native::Diagnostic::Monitor::Switch::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::Diagnostic::Monitor::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Monitor::Switch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::Diagnostic::Monitor::Switch::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(test != nullptr)
    {
        children["test"] = test;
    }

    return children;
}

void Native::Diagnostic::Monitor::Switch::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Diagnostic::Monitor::Switch::Test::Test()
    :
    all{YType::empty, "all"},
    id{YType::str, "id"}
{
    yang_name = "test"; yang_parent_name = "switch";
}

Native::Diagnostic::Monitor::Switch::Test::~Test()
{
}

bool Native::Diagnostic::Monitor::Switch::Test::has_data() const
{
    return all.is_set
	|| id.is_set;
}

bool Native::Diagnostic::Monitor::Switch::Test::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(id.operation);
}

std::string Native::Diagnostic::Monitor::Switch::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Monitor::Switch::Test::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Test' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Switch::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Switch::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Monitor::Switch::Test::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Diagnostic::Monitor::Threshold::Threshold()
{
    yang_name = "threshold"; yang_parent_name = "monitor";
}

Native::Diagnostic::Monitor::Threshold::~Threshold()
{
}

bool Native::Diagnostic::Monitor::Threshold::has_data() const
{
    for (std::size_t index=0; index<switch.size(); index++)
    {
        if(switch[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Diagnostic::Monitor::Threshold::has_operation() const
{
    for (std::size_t index=0; index<switch.size(); index++)
    {
        if(switch[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Diagnostic::Monitor::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Monitor::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        for(auto const & c : switch)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch>();
        c->parent = this;
        switch.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : switch)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Monitor::Threshold::Switch::Switch()
    :
    number{YType::uint8, "number"}
    	,
    test(std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch::Test>())
{
    test->parent = this;

    yang_name = "switch"; yang_parent_name = "threshold";
}

Native::Diagnostic::Monitor::Threshold::Switch::~Switch()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch::has_data() const
{
    return number.is_set
	|| (test !=  nullptr && test->has_data());
}

bool Native::Diagnostic::Monitor::Threshold::Switch::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::Diagnostic::Monitor::Threshold::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Monitor::Threshold::Switch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(test != nullptr)
    {
        children["test"] = test;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::Test()
    :
    all(std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch::Test::All>())
{
    all->parent = this;

    yang_name = "test"; yang_parent_name = "switch";
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::~Test()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::has_data() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::has_operation() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Monitor::Threshold::Switch::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Monitor::Threshold::Switch::Test::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Test' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch::Test::All>();
        }
        return all;
    }

    if(child_yang_name == "test-ids")
    {
        for(auto const & c : test_ids)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds>();
        c->parent = this;
        test_ids.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    for (auto const & c : test_ids)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch::Test::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::TestIds()
    :
    id{YType::str, "id"}
    	,
    failure(std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure>())
{
    failure->parent = this;

    yang_name = "test-ids"; yang_parent_name = "test";
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::~TestIds()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::has_data() const
{
    return id.is_set
	|| (failure !=  nullptr && failure->has_data());
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (failure !=  nullptr && failure->has_operation());
}

std::string Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test-ids" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TestIds' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure")
    {
        if(failure == nullptr)
        {
            failure = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure>();
        }
        return failure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(failure != nullptr)
    {
        children["failure"] = failure;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Failure()
{
    yang_name = "failure"; yang_parent_name = "test-ids";
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::~Failure()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::has_data() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::has_operation() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Failure' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "count")
    {
        for(auto const & c : count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count>();
        c->parent = this;
        count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count::Count()
    :
    range{YType::uint16, "range"},
    days{YType::uint32, "days"},
    hours{YType::uint32, "hours"},
    milli_seconds{YType::uint32, "milli-seconds"},
    minutes{YType::uint32, "minutes"},
    runs{YType::uint16, "runs"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "count"; yang_parent_name = "failure";
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count::~Count()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count::has_data() const
{
    return range.is_set
	|| days.is_set
	|| hours.is_set
	|| milli_seconds.is_set
	|| minutes.is_set
	|| runs.is_set
	|| seconds.is_set;
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| is_set(days.operation)
	|| is_set(hours.operation)
	|| is_set(milli_seconds.operation)
	|| is_set(minutes.operation)
	|| is_set(runs.operation)
	|| is_set(seconds.operation);
}

std::string Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Count' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (days.is_set || is_set(days.operation)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.operation)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (milli_seconds.is_set || is_set(milli_seconds.operation)) leaf_name_data.push_back(milli_seconds.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (runs.is_set || is_set(runs.operation)) leaf_name_data.push_back(runs.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "days")
    {
        days = value;
    }
    if(value_path == "hours")
    {
        hours = value;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds = value;
    }
    if(value_path == "minutes")
    {
        minutes = value;
    }
    if(value_path == "runs")
    {
        runs = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::All::All()
    :
    failure(std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure>())
{
    failure->parent = this;

    yang_name = "all"; yang_parent_name = "test";
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::All::~All()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::All::has_data() const
{
    return (failure !=  nullptr && failure->has_data());
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::All::has_operation() const
{
    return is_set(operation)
	|| (failure !=  nullptr && failure->has_operation());
}

std::string Native::Diagnostic::Monitor::Threshold::Switch::Test::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Monitor::Threshold::Switch::Test::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch::Test::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure")
    {
        if(failure == nullptr)
        {
            failure = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure>();
        }
        return failure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch::Test::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(failure != nullptr)
    {
        children["failure"] = failure;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch::Test::All::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Failure()
{
    yang_name = "failure"; yang_parent_name = "all";
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::~Failure()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::has_data() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::has_operation() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Failure' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "count")
    {
        for(auto const & c : count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count>();
        c->parent = this;
        count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count::Count()
    :
    range{YType::uint16, "range"},
    days{YType::uint32, "days"},
    hours{YType::uint32, "hours"},
    milli_seconds{YType::uint32, "milli-seconds"},
    minutes{YType::uint32, "minutes"},
    runs{YType::uint16, "runs"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "count"; yang_parent_name = "failure";
}

Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count::~Count()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count::has_data() const
{
    return range.is_set
	|| days.is_set
	|| hours.is_set
	|| milli_seconds.is_set
	|| minutes.is_set
	|| runs.is_set
	|| seconds.is_set;
}

bool Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| is_set(days.operation)
	|| is_set(hours.operation)
	|| is_set(milli_seconds.operation)
	|| is_set(minutes.operation)
	|| is_set(runs.operation)
	|| is_set(seconds.operation);
}

std::string Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Count' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (days.is_set || is_set(days.operation)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.operation)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (milli_seconds.is_set || is_set(milli_seconds.operation)) leaf_name_data.push_back(milli_seconds.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (runs.is_set || is_set(runs.operation)) leaf_name_data.push_back(runs.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "days")
    {
        days = value;
    }
    if(value_path == "hours")
    {
        hours = value;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds = value;
    }
    if(value_path == "minutes")
    {
        minutes = value;
    }
    if(value_path == "runs")
    {
        runs = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Diagnostic::Schedule::Schedule()
{
    yang_name = "schedule"; yang_parent_name = "diagnostic";
}

Native::Diagnostic::Schedule::~Schedule()
{
}

bool Native::Diagnostic::Schedule::has_data() const
{
    for (std::size_t index=0; index<switch.size(); index++)
    {
        if(switch[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Diagnostic::Schedule::has_operation() const
{
    for (std::size_t index=0; index<switch.size(); index++)
    {
        if(switch[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Diagnostic::Schedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        for(auto const & c : switch)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch>();
        c->parent = this;
        switch.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : switch)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Schedule::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Schedule::Switch::Switch()
    :
    switch_number{YType::uint8, "switch-number"}
    	,
    test(std::make_shared<Native::Diagnostic::Schedule::Switch::Test>())
{
    test->parent = this;

    yang_name = "switch"; yang_parent_name = "schedule";
}

Native::Diagnostic::Schedule::Switch::~Switch()
{
}

bool Native::Diagnostic::Schedule::Switch::has_data() const
{
    return switch_number.is_set
	|| (test !=  nullptr && test->has_data());
}

bool Native::Diagnostic::Schedule::Switch::has_operation() const
{
    return is_set(operation)
	|| is_set(switch_number.operation)
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch" <<"[switch-number='" <<switch_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/schedule/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_number.is_set || is_set(switch_number.operation)) leaf_name_data.push_back(switch_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::Diagnostic::Schedule::Switch::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(test != nullptr)
    {
        children["test"] = test;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switch-number")
    {
        switch_number = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::Test()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All>())
	,basic(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic>())
	,complete(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Complete>())
	,minimal(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Minimal>())
	,non_disruptive(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive>())
	,per_port(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort>())
{
    all->parent = this;

    basic->parent = this;

    complete->parent = this;

    minimal->parent = this;

    non_disruptive->parent = this;

    per_port->parent = this;

    yang_name = "test"; yang_parent_name = "switch";
}

Native::Diagnostic::Schedule::Switch::Test::~Test()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::has_data() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data())
	|| (basic !=  nullptr && basic->has_data())
	|| (complete !=  nullptr && complete->has_data())
	|| (minimal !=  nullptr && minimal->has_data())
	|| (non_disruptive !=  nullptr && non_disruptive->has_data())
	|| (per_port !=  nullptr && per_port->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::has_operation() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation())
	|| (basic !=  nullptr && basic->has_operation())
	|| (complete !=  nullptr && complete->has_operation())
	|| (minimal !=  nullptr && minimal->has_operation())
	|| (non_disruptive !=  nullptr && non_disruptive->has_operation())
	|| (per_port !=  nullptr && per_port->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Test' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All>();
        }
        return all;
    }

    if(child_yang_name == "basic")
    {
        if(basic == nullptr)
        {
            basic = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic>();
        }
        return basic;
    }

    if(child_yang_name == "complete")
    {
        if(complete == nullptr)
        {
            complete = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Complete>();
        }
        return complete;
    }

    if(child_yang_name == "minimal")
    {
        if(minimal == nullptr)
        {
            minimal = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Minimal>();
        }
        return minimal;
    }

    if(child_yang_name == "non-disruptive")
    {
        if(non_disruptive == nullptr)
        {
            non_disruptive = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive>();
        }
        return non_disruptive;
    }

    if(child_yang_name == "per-port")
    {
        if(per_port == nullptr)
        {
            per_port = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort>();
        }
        return per_port;
    }

    if(child_yang_name == "test-ids")
    {
        for(auto const & c : test_ids)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds>();
        c->parent = this;
        test_ids.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(basic != nullptr)
    {
        children["basic"] = basic;
    }

    if(complete != nullptr)
    {
        children["complete"] = complete;
    }

    if(minimal != nullptr)
    {
        children["minimal"] = minimal;
    }

    if(non_disruptive != nullptr)
    {
        children["non-disruptive"] = non_disruptive;
    }

    if(per_port != nullptr)
    {
        children["per-port"] = per_port;
    }

    for (auto const & c : test_ids)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::TestIds()
    :
    id{YType::str, "id"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::On>())
	,port(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly>())
{
    daily->parent = this;

    on->parent = this;

    port->parent = this;

    weekly->parent = this;

    yang_name = "test-ids"; yang_parent_name = "test";
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::~TestIds()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::has_data() const
{
    return id.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (port !=  nullptr && port->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (port !=  nullptr && port->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test-ids" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::TestIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TestIds' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::On>();
        }
        return on;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port>();
        }
        return port;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "daily"; yang_parent_name = "test-ids";
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{
    yang_name = "on"; yang_parent_name = "test-ids";
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::On::has_operation() const
{
    return is_set(operation)
	|| is_set(day_of_month.operation)
	|| is_set(hh_mm.operation)
	|| is_set(month.operation)
	|| is_set(year.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::TestIds::On::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'On' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.operation)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::On::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "Year")
    {
        year = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "weekly"; yang_parent_name = "test-ids";
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::Port()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All>())
{
    all->parent = this;

    yang_name = "port"; yang_parent_name = "test-ids";
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::~Port()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::has_data() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::has_operation() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All>();
        }
        return all;
    }

    if(child_yang_name == "interface-port-number")
    {
        for(auto const & c : interface_port_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber>();
        c->parent = this;
        interface_port_number.push_back(c);
        return c;
    }

    if(child_yang_name == "port-number-list")
    {
        for(auto const & c : port_number_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList>();
        c->parent = this;
        port_number_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    for (auto const & c : interface_port_number)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_number_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::InterfacePortNumber()
    :
    number{YType::uint8, "number"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly>())
{
    daily->parent = this;

    on->parent = this;

    weekly->parent = this;

    yang_name = "interface-port-number"; yang_parent_name = "port";
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::~InterfacePortNumber()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::has_data() const
{
    return number.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-port-number" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfacePortNumber' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "daily"; yang_parent_name = "interface-port-number";
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{
    yang_name = "on"; yang_parent_name = "interface-port-number";
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On::has_operation() const
{
    return is_set(operation)
	|| is_set(day_of_month.operation)
	|| is_set(hh_mm.operation)
	|| is_set(month.operation)
	|| is_set(year.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'On' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.operation)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "Year")
    {
        year = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "weekly"; yang_parent_name = "interface-port-number";
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::PortNumberList()
    :
    number_list{YType::str, "number-list"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly>())
{
    daily->parent = this;

    on->parent = this;

    weekly->parent = this;

    yang_name = "port-number-list"; yang_parent_name = "port";
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::~PortNumberList()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::has_data() const
{
    return number_list.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::has_operation() const
{
    return is_set(operation)
	|| is_set(number_list.operation)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-number-list" <<"[number-list='" <<number_list <<"']";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortNumberList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_list.is_set || is_set(number_list.operation)) leaf_name_data.push_back(number_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number-list")
    {
        number_list = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "daily"; yang_parent_name = "port-number-list";
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{
    yang_name = "on"; yang_parent_name = "port-number-list";
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On::has_operation() const
{
    return is_set(operation)
	|| is_set(day_of_month.operation)
	|| is_set(hh_mm.operation)
	|| is_set(month.operation)
	|| is_set(year.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'On' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.operation)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "Year")
    {
        year = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "weekly"; yang_parent_name = "port-number-list";
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::All()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly>())
{
    daily->parent = this;

    on->parent = this;

    weekly->parent = this;

    yang_name = "all"; yang_parent_name = "port";
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::~All()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::has_operation() const
{
    return is_set(operation)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "daily"; yang_parent_name = "all";
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{
    yang_name = "on"; yang_parent_name = "all";
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On::has_operation() const
{
    return is_set(operation)
	|| is_set(day_of_month.operation)
	|| is_set(hh_mm.operation)
	|| is_set(month.operation)
	|| is_set(year.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'On' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.operation)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "Year")
    {
        year = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "weekly"; yang_parent_name = "all";
}

Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::All::All()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::On>())
	,port(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Weekly>())
{
    daily->parent = this;

    on->parent = this;

    port->parent = this;

    weekly->parent = this;

    yang_name = "all"; yang_parent_name = "test";
}

Native::Diagnostic::Schedule::Switch::Test::All::~All()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (port !=  nullptr && port->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::All::has_operation() const
{
    return is_set(operation)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (port !=  nullptr && port->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::On>();
        }
        return on;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port>();
        }
        return port;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Schedule::Switch::Test::All::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "daily"; yang_parent_name = "all";
}

Native::Diagnostic::Schedule::Switch::Test::All::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::All::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::All::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{
    yang_name = "on"; yang_parent_name = "all";
}

Native::Diagnostic::Schedule::Switch::Test::All::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::On::has_operation() const
{
    return is_set(operation)
	|| is_set(day_of_month.operation)
	|| is_set(hh_mm.operation)
	|| is_set(month.operation)
	|| is_set(year.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::All::On::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'On' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.operation)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::On::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "Year")
    {
        year = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::All::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "weekly"; yang_parent_name = "all";
}

Native::Diagnostic::Schedule::Switch::Test::All::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::All::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::Port()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::All_>())
{
    all->parent = this;

    yang_name = "port"; yang_parent_name = "all";
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::~Port()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::has_data() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::has_operation() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::All::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::All_>();
        }
        return all;
    }

    if(child_yang_name == "interface-port-number")
    {
        for(auto const & c : interface_port_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber>();
        c->parent = this;
        interface_port_number.push_back(c);
        return c;
    }

    if(child_yang_name == "port-number-list")
    {
        for(auto const & c : port_number_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList>();
        c->parent = this;
        port_number_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    for (auto const & c : interface_port_number)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_number_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::InterfacePortNumber()
    :
    number{YType::uint8, "number"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly>())
{
    daily->parent = this;

    on->parent = this;

    weekly->parent = this;

    yang_name = "interface-port-number"; yang_parent_name = "port";
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::~InterfacePortNumber()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::has_data() const
{
    return number.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-port-number" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfacePortNumber' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "daily"; yang_parent_name = "interface-port-number";
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{
    yang_name = "on"; yang_parent_name = "interface-port-number";
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On::has_operation() const
{
    return is_set(operation)
	|| is_set(day_of_month.operation)
	|| is_set(hh_mm.operation)
	|| is_set(month.operation)
	|| is_set(year.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'On' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.operation)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "Year")
    {
        year = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "weekly"; yang_parent_name = "interface-port-number";
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::PortNumberList()
    :
    number_list{YType::str, "number-list"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly>())
{
    daily->parent = this;

    on->parent = this;

    weekly->parent = this;

    yang_name = "port-number-list"; yang_parent_name = "port";
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::~PortNumberList()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::has_data() const
{
    return number_list.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::has_operation() const
{
    return is_set(operation)
	|| is_set(number_list.operation)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-number-list" <<"[number-list='" <<number_list <<"']";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortNumberList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_list.is_set || is_set(number_list.operation)) leaf_name_data.push_back(number_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number-list")
    {
        number_list = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "daily"; yang_parent_name = "port-number-list";
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{
    yang_name = "on"; yang_parent_name = "port-number-list";
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On::has_operation() const
{
    return is_set(operation)
	|| is_set(day_of_month.operation)
	|| is_set(hh_mm.operation)
	|| is_set(month.operation)
	|| is_set(year.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'On' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.operation)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "Year")
    {
        year = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "weekly"; yang_parent_name = "port-number-list";
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::All_()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly>())
{
    daily->parent = this;

    on->parent = this;

    weekly->parent = this;

    yang_name = "all"; yang_parent_name = "port";
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::~All_()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::has_operation() const
{
    return is_set(operation)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "daily"; yang_parent_name = "all";
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{
    yang_name = "on"; yang_parent_name = "all";
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On::has_operation() const
{
    return is_set(operation)
	|| is_set(day_of_month.operation)
	|| is_set(hh_mm.operation)
	|| is_set(month.operation)
	|| is_set(year.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'On' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.operation)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "Year")
    {
        year = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "weekly"; yang_parent_name = "all";
}

Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Basic()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::On>())
	,port(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly>())
{
    daily->parent = this;

    on->parent = this;

    port->parent = this;

    weekly->parent = this;

    yang_name = "basic"; yang_parent_name = "test";
}

Native::Diagnostic::Schedule::Switch::Test::Basic::~Basic()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (port !=  nullptr && port->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::has_operation() const
{
    return is_set(operation)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (port !=  nullptr && port->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Basic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Basic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::On>();
        }
        return on;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port>();
        }
        return port;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "daily"; yang_parent_name = "basic";
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Basic::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::Basic::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{
    yang_name = "on"; yang_parent_name = "basic";
}

Native::Diagnostic::Schedule::Switch::Test::Basic::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::On::has_operation() const
{
    return is_set(operation)
	|| is_set(day_of_month.operation)
	|| is_set(hh_mm.operation)
	|| is_set(month.operation)
	|| is_set(year.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Basic::On::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'On' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.operation)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::On::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "Year")
    {
        year = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "weekly"; yang_parent_name = "basic";
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::Port()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All>())
{
    all->parent = this;

    yang_name = "port"; yang_parent_name = "basic";
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::~Port()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::has_data() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::has_operation() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Basic::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All>();
        }
        return all;
    }

    if(child_yang_name == "interface-port-number")
    {
        for(auto const & c : interface_port_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber>();
        c->parent = this;
        interface_port_number.push_back(c);
        return c;
    }

    if(child_yang_name == "port-number-list")
    {
        for(auto const & c : port_number_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList>();
        c->parent = this;
        port_number_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    for (auto const & c : interface_port_number)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_number_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::InterfacePortNumber()
    :
    number{YType::uint8, "number"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly>())
{
    daily->parent = this;

    on->parent = this;

    weekly->parent = this;

    yang_name = "interface-port-number"; yang_parent_name = "port";
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::~InterfacePortNumber()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::has_data() const
{
    return number.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-port-number" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfacePortNumber' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "daily"; yang_parent_name = "interface-port-number";
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{
    yang_name = "on"; yang_parent_name = "interface-port-number";
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On::has_operation() const
{
    return is_set(operation)
	|| is_set(day_of_month.operation)
	|| is_set(hh_mm.operation)
	|| is_set(month.operation)
	|| is_set(year.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'On' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.operation)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "Year")
    {
        year = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "weekly"; yang_parent_name = "interface-port-number";
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::PortNumberList()
    :
    number_list{YType::str, "number-list"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly>())
{
    daily->parent = this;

    on->parent = this;

    weekly->parent = this;

    yang_name = "port-number-list"; yang_parent_name = "port";
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::~PortNumberList()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::has_data() const
{
    return number_list.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::has_operation() const
{
    return is_set(operation)
	|| is_set(number_list.operation)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-number-list" <<"[number-list='" <<number_list <<"']";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortNumberList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_list.is_set || is_set(number_list.operation)) leaf_name_data.push_back(number_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number-list")
    {
        number_list = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "daily"; yang_parent_name = "port-number-list";
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{
    yang_name = "on"; yang_parent_name = "port-number-list";
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On::has_operation() const
{
    return is_set(operation)
	|| is_set(day_of_month.operation)
	|| is_set(hh_mm.operation)
	|| is_set(month.operation)
	|| is_set(year.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'On' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.operation)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "Year")
    {
        year = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "weekly"; yang_parent_name = "port-number-list";
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::All()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly>())
{
    daily->parent = this;

    on->parent = this;

    weekly->parent = this;

    yang_name = "all"; yang_parent_name = "port";
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::~All()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::has_operation() const
{
    return is_set(operation)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "daily"; yang_parent_name = "all";
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{
    yang_name = "on"; yang_parent_name = "all";
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On::has_operation() const
{
    return is_set(operation)
	|| is_set(day_of_month.operation)
	|| is_set(hh_mm.operation)
	|| is_set(month.operation)
	|| is_set(year.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'On' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.operation)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "Year")
    {
        year = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "weekly"; yang_parent_name = "all";
}

Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::Complete::Complete()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Complete::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Complete::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly>())
{
    daily->parent = this;

    on->parent = this;

    weekly->parent = this;

    yang_name = "complete"; yang_parent_name = "test";
}

Native::Diagnostic::Schedule::Switch::Test::Complete::~Complete()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Complete::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::Complete::has_operation() const
{
    return is_set(operation)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::Complete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "complete";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Complete::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Complete' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Complete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Complete::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Complete::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Complete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Complete::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Schedule::Switch::Test::Complete::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "daily"; yang_parent_name = "complete";
}

Native::Diagnostic::Schedule::Switch::Test::Complete::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Complete::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Complete::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Complete::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Complete::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Complete::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Complete::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Complete::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::Complete::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{
    yang_name = "on"; yang_parent_name = "complete";
}

Native::Diagnostic::Schedule::Switch::Test::Complete::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Complete::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Complete::On::has_operation() const
{
    return is_set(operation)
	|| is_set(day_of_month.operation)
	|| is_set(hh_mm.operation)
	|| is_set(month.operation)
	|| is_set(year.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Complete::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Complete::On::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'On' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.operation)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Complete::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Complete::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Complete::On::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "Year")
    {
        year = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "weekly"; yang_parent_name = "complete";
}

Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::Minimal::Minimal()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Minimal::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly>())
{
    daily->parent = this;

    on->parent = this;

    weekly->parent = this;

    yang_name = "minimal"; yang_parent_name = "test";
}

Native::Diagnostic::Schedule::Switch::Test::Minimal::~Minimal()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Minimal::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::Minimal::has_operation() const
{
    return is_set(operation)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::Minimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minimal";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Minimal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minimal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Minimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Minimal::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Minimal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Minimal::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "daily"; yang_parent_name = "minimal";
}

Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::Minimal::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{
    yang_name = "on"; yang_parent_name = "minimal";
}

Native::Diagnostic::Schedule::Switch::Test::Minimal::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Minimal::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Minimal::On::has_operation() const
{
    return is_set(operation)
	|| is_set(day_of_month.operation)
	|| is_set(hh_mm.operation)
	|| is_set(month.operation)
	|| is_set(year.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Minimal::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Minimal::On::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'On' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.operation)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Minimal::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Minimal::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Minimal::On::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "Year")
    {
        year = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "weekly"; yang_parent_name = "minimal";
}

Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::NonDisruptive()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On>())
	,port(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly>())
{
    daily->parent = this;

    on->parent = this;

    port->parent = this;

    weekly->parent = this;

    yang_name = "non-disruptive"; yang_parent_name = "test";
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::~NonDisruptive()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (port !=  nullptr && port->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::has_operation() const
{
    return is_set(operation)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (port !=  nullptr && port->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-disruptive";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonDisruptive' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On>();
        }
        return on;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port>();
        }
        return port;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "daily"; yang_parent_name = "non-disruptive";
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{
    yang_name = "on"; yang_parent_name = "non-disruptive";
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On::has_operation() const
{
    return is_set(operation)
	|| is_set(day_of_month.operation)
	|| is_set(hh_mm.operation)
	|| is_set(month.operation)
	|| is_set(year.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'On' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.operation)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "Year")
    {
        year = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "weekly"; yang_parent_name = "non-disruptive";
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::Port()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All>())
{
    all->parent = this;

    yang_name = "port"; yang_parent_name = "non-disruptive";
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::~Port()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::has_data() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::has_operation() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All>();
        }
        return all;
    }

    if(child_yang_name == "interface-port-number")
    {
        for(auto const & c : interface_port_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber>();
        c->parent = this;
        interface_port_number.push_back(c);
        return c;
    }

    if(child_yang_name == "port-number-list")
    {
        for(auto const & c : port_number_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList>();
        c->parent = this;
        port_number_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    for (auto const & c : interface_port_number)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_number_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::InterfacePortNumber()
    :
    number{YType::uint8, "number"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly>())
{
    daily->parent = this;

    on->parent = this;

    weekly->parent = this;

    yang_name = "interface-port-number"; yang_parent_name = "port";
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::~InterfacePortNumber()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::has_data() const
{
    return number.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-port-number" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfacePortNumber' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "daily"; yang_parent_name = "interface-port-number";
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{
    yang_name = "on"; yang_parent_name = "interface-port-number";
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On::has_operation() const
{
    return is_set(operation)
	|| is_set(day_of_month.operation)
	|| is_set(hh_mm.operation)
	|| is_set(month.operation)
	|| is_set(year.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'On' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.operation)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "Year")
    {
        year = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "weekly"; yang_parent_name = "interface-port-number";
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::PortNumberList()
    :
    number_list{YType::str, "number-list"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly>())
{
    daily->parent = this;

    on->parent = this;

    weekly->parent = this;

    yang_name = "port-number-list"; yang_parent_name = "port";
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::~PortNumberList()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::has_data() const
{
    return number_list.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::has_operation() const
{
    return is_set(operation)
	|| is_set(number_list.operation)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-number-list" <<"[number-list='" <<number_list <<"']";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortNumberList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_list.is_set || is_set(number_list.operation)) leaf_name_data.push_back(number_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number-list")
    {
        number_list = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "daily"; yang_parent_name = "port-number-list";
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{
    yang_name = "on"; yang_parent_name = "port-number-list";
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On::has_operation() const
{
    return is_set(operation)
	|| is_set(day_of_month.operation)
	|| is_set(hh_mm.operation)
	|| is_set(month.operation)
	|| is_set(year.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'On' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.operation)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "Year")
    {
        year = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "weekly"; yang_parent_name = "port-number-list";
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::All()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly>())
{
    daily->parent = this;

    on->parent = this;

    weekly->parent = this;

    yang_name = "all"; yang_parent_name = "port";
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::~All()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::has_operation() const
{
    return is_set(operation)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "daily"; yang_parent_name = "all";
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{
    yang_name = "on"; yang_parent_name = "all";
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On::has_operation() const
{
    return is_set(operation)
	|| is_set(day_of_month.operation)
	|| is_set(hh_mm.operation)
	|| is_set(month.operation)
	|| is_set(year.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'On' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.operation)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "Year")
    {
        year = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "weekly"; yang_parent_name = "all";
}

Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::PerPort()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::On>())
	,port(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly>())
{
    daily->parent = this;

    on->parent = this;

    port->parent = this;

    weekly->parent = this;

    yang_name = "per-port"; yang_parent_name = "test";
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::~PerPort()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (port !=  nullptr && port->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::has_operation() const
{
    return is_set(operation)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (port !=  nullptr && port->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-port";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::PerPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerPort' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::On>();
        }
        return on;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port>();
        }
        return port;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "daily"; yang_parent_name = "per-port";
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{
    yang_name = "on"; yang_parent_name = "per-port";
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::On::has_operation() const
{
    return is_set(operation)
	|| is_set(day_of_month.operation)
	|| is_set(hh_mm.operation)
	|| is_set(month.operation)
	|| is_set(year.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::PerPort::On::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'On' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.operation)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::On::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "Year")
    {
        year = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "weekly"; yang_parent_name = "per-port";
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

const Enum::YLeaf Native::BbaGroup::Pppoe::IdEnum::global {0, "global"};

const Enum::YLeaf Native::Card::TypeEnum::t1 {0, "t1"};
const Enum::YLeaf Native::Card::TypeEnum::e1 {1, "e1"};

const Enum::YLeaf Native::Diagnostic::Bootup::LevelEnum::complete {0, "complete"};
const Enum::YLeaf Native::Diagnostic::Bootup::LevelEnum::minimal {1, "minimal"};


}
}

