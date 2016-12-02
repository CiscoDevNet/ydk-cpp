
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_manageability_object_tracking_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_manageability_object_tracking_cfg {

ObjectTrackings::ObjectTracking::TypeInterface::TypeInterface()
    :
    	interface{YType::str, "interface"}
{
    yang_name = "type-interface"; yang_parent_name = "object-tracking";
}

ObjectTrackings::ObjectTracking::TypeInterface::~TypeInterface()
{
}

bool ObjectTrackings::ObjectTracking::TypeInterface::has_data() const
{
    return interface.is_set;
}

bool ObjectTrackings::ObjectTracking::TypeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string ObjectTrackings::ObjectTracking::TypeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type-interface";

    return path_buffer.str();

}

EntityPath ObjectTrackings::ObjectTracking::TypeInterface::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTrackings::ObjectTracking::TypeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & ObjectTrackings::ObjectTracking::TypeInterface::get_children()
{
    return children;
}

void ObjectTrackings::ObjectTracking::TypeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::ThresholdUpValue()
    :
    	up{YType::int32, "up"},
	 threshold_down{YType::int32, "threshold-down"}
{
    yang_name = "threshold-up-value"; yang_parent_name = "threshold-up-values";
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::~ThresholdUpValue()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::has_data() const
{
    return up.is_set
	|| threshold_down.is_set;
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::has_operation() const
{
    return is_set(operation)
	|| is_set(up.operation)
	|| is_set(threshold_down.operation);
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-up-value" <<"[up='" <<up.get() <<"']";

    return path_buffer.str();

}

EntityPath ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::get_entity_path(Entity* ancestor) const
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

    if (up.is_set || is_set(up.operation)) leaf_name_data.push_back(up.get_name_leafdata());
    if (threshold_down.is_set || is_set(threshold_down.operation)) leaf_name_data.push_back(threshold_down.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::get_children()
{
    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "up")
    {
        up = value;
    }
    if(value_path == "threshold-down")
    {
        threshold_down = value;
    }
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValues()
{
    yang_name = "threshold-up-values"; yang_parent_name = "threshold-limits";
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::~ThresholdUpValues()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::has_data() const
{
    for (std::size_t index=0; index<threshold_up_value.size(); index++)
    {
        if(threshold_up_value[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::has_operation() const
{
    for (std::size_t index=0; index<threshold_up_value.size(); index++)
    {
        if(threshold_up_value[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-up-values";

    return path_buffer.str();

}

EntityPath ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::get_entity_path(Entity* ancestor) const
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

Entity* ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "threshold-up-value")
    {
        for(auto const & c : threshold_up_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue>();
        c->parent = this;
        threshold_up_value.push_back(std::move(c));
        children[segment_path] = threshold_up_value.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::get_children()
{
    for (auto const & c : threshold_up_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::set_value(const std::string & value_path, std::string value)
{
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdLimits()
    :
    threshold_up_values(std::make_unique<ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues>())
{
    threshold_up_values->parent = this;
    children["threshold-up-values"] = threshold_up_values.get();

    yang_name = "threshold-limits"; yang_parent_name = "threshold-weight";
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::~ThresholdLimits()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::has_data() const
{
    return (threshold_up_values !=  nullptr && threshold_up_values->has_data());
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::has_operation() const
{
    return is_set(operation)
	|| (threshold_up_values !=  nullptr && is_set(threshold_up_values->operation));
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-limits";

    return path_buffer.str();

}

EntityPath ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::get_entity_path(Entity* ancestor) const
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

Entity* ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "threshold-up-values")
    {
        if(threshold_up_values != nullptr)
        {
            children["threshold-up-values"] = threshold_up_values.get();
        }
        else
        {
            threshold_up_values = std::make_unique<ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues>();
            threshold_up_values->parent = this;
            children["threshold-up-values"] = threshold_up_values.get();
        }
        return children.at("threshold-up-values");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::get_children()
{
    if(children.find("threshold-up-values") == children.end())
    {
        if(threshold_up_values != nullptr)
        {
            children["threshold-up-values"] = threshold_up_values.get();
        }
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::set_value(const std::string & value_path, std::string value)
{
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdWeight()
    :
    threshold_limits(std::make_unique<ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits>())
{
    threshold_limits->parent = this;
    children["threshold-limits"] = threshold_limits.get();

    yang_name = "threshold-weight"; yang_parent_name = "type-list";
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::~ThresholdWeight()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::has_data() const
{
    return (threshold_limits !=  nullptr && threshold_limits->has_data());
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::has_operation() const
{
    return is_set(operation)
	|| (threshold_limits !=  nullptr && is_set(threshold_limits->operation));
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-weight";

    return path_buffer.str();

}

EntityPath ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::get_entity_path(Entity* ancestor) const
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

Entity* ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "threshold-limits")
    {
        if(threshold_limits != nullptr)
        {
            children["threshold-limits"] = threshold_limits.get();
        }
        else
        {
            threshold_limits = std::make_unique<ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits>();
            threshold_limits->parent = this;
            children["threshold-limits"] = threshold_limits.get();
        }
        return children.at("threshold-limits");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::get_children()
{
    if(children.find("threshold-limits") == children.end())
    {
        if(threshold_limits != nullptr)
        {
            children["threshold-limits"] = threshold_limits.get();
        }
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::set_value(const std::string & value_path, std::string value)
{
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object::Object()
    :
    	object{YType::str, "object"},
	 object_weight{YType::int32, "object-weight"}
{
    yang_name = "object"; yang_parent_name = "threshold-percentage-object";
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object::~Object()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object::has_data() const
{
    return object.is_set
	|| object_weight.is_set;
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object::has_operation() const
{
    return is_set(operation)
	|| is_set(object.operation)
	|| is_set(object_weight.operation);
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object" <<"[object='" <<object.get() <<"']";

    return path_buffer.str();

}

EntityPath ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object::get_entity_path(Entity* ancestor) const
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

    if (object.is_set || is_set(object.operation)) leaf_name_data.push_back(object.get_name_leafdata());
    if (object_weight.is_set || is_set(object_weight.operation)) leaf_name_data.push_back(object_weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object::get_children()
{
    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object = value;
    }
    if(value_path == "object-weight")
    {
        object_weight = value;
    }
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::ThresholdPercentageObject()
{
    yang_name = "threshold-percentage-object"; yang_parent_name = "type-list";
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::~ThresholdPercentageObject()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::has_data() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::has_operation() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-percentage-object";

    return path_buffer.str();

}

EntityPath ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::get_entity_path(Entity* ancestor) const
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

Entity* ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "object")
    {
        for(auto const & c : object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object>();
        c->parent = this;
        object.push_back(std::move(c));
        children[segment_path] = object.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::get_children()
{
    for (auto const & c : object)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::set_value(const std::string & value_path, std::string value)
{
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::ThresholdUpValue()
    :
    	up{YType::int32, "up"},
	 threshold_down{YType::int32, "threshold-down"}
{
    yang_name = "threshold-up-value"; yang_parent_name = "threshold-up-values";
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::~ThresholdUpValue()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::has_data() const
{
    return up.is_set
	|| threshold_down.is_set;
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::has_operation() const
{
    return is_set(operation)
	|| is_set(up.operation)
	|| is_set(threshold_down.operation);
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-up-value" <<"[up='" <<up.get() <<"']";

    return path_buffer.str();

}

EntityPath ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::get_entity_path(Entity* ancestor) const
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

    if (up.is_set || is_set(up.operation)) leaf_name_data.push_back(up.get_name_leafdata());
    if (threshold_down.is_set || is_set(threshold_down.operation)) leaf_name_data.push_back(threshold_down.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::get_children()
{
    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "up")
    {
        up = value;
    }
    if(value_path == "threshold-down")
    {
        threshold_down = value;
    }
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValues()
{
    yang_name = "threshold-up-values"; yang_parent_name = "threshold-limits";
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::~ThresholdUpValues()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::has_data() const
{
    for (std::size_t index=0; index<threshold_up_value.size(); index++)
    {
        if(threshold_up_value[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::has_operation() const
{
    for (std::size_t index=0; index<threshold_up_value.size(); index++)
    {
        if(threshold_up_value[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-up-values";

    return path_buffer.str();

}

EntityPath ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::get_entity_path(Entity* ancestor) const
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

Entity* ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "threshold-up-value")
    {
        for(auto const & c : threshold_up_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue>();
        c->parent = this;
        threshold_up_value.push_back(std::move(c));
        children[segment_path] = threshold_up_value.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::get_children()
{
    for (auto const & c : threshold_up_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::set_value(const std::string & value_path, std::string value)
{
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdLimits()
    :
    threshold_up_values(std::make_unique<ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues>())
{
    threshold_up_values->parent = this;
    children["threshold-up-values"] = threshold_up_values.get();

    yang_name = "threshold-limits"; yang_parent_name = "threshold-percentage";
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::~ThresholdLimits()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::has_data() const
{
    return (threshold_up_values !=  nullptr && threshold_up_values->has_data());
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::has_operation() const
{
    return is_set(operation)
	|| (threshold_up_values !=  nullptr && is_set(threshold_up_values->operation));
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-limits";

    return path_buffer.str();

}

EntityPath ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::get_entity_path(Entity* ancestor) const
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

Entity* ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "threshold-up-values")
    {
        if(threshold_up_values != nullptr)
        {
            children["threshold-up-values"] = threshold_up_values.get();
        }
        else
        {
            threshold_up_values = std::make_unique<ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues>();
            threshold_up_values->parent = this;
            children["threshold-up-values"] = threshold_up_values.get();
        }
        return children.at("threshold-up-values");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::get_children()
{
    if(children.find("threshold-up-values") == children.end())
    {
        if(threshold_up_values != nullptr)
        {
            children["threshold-up-values"] = threshold_up_values.get();
        }
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::set_value(const std::string & value_path, std::string value)
{
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdPercentage()
    :
    threshold_limits(std::make_unique<ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits>())
{
    threshold_limits->parent = this;
    children["threshold-limits"] = threshold_limits.get();

    yang_name = "threshold-percentage"; yang_parent_name = "type-list";
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::~ThresholdPercentage()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::has_data() const
{
    return (threshold_limits !=  nullptr && threshold_limits->has_data());
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::has_operation() const
{
    return is_set(operation)
	|| (threshold_limits !=  nullptr && is_set(threshold_limits->operation));
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-percentage";

    return path_buffer.str();

}

EntityPath ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::get_entity_path(Entity* ancestor) const
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

Entity* ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "threshold-limits")
    {
        if(threshold_limits != nullptr)
        {
            children["threshold-limits"] = threshold_limits.get();
        }
        else
        {
            threshold_limits = std::make_unique<ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits>();
            threshold_limits->parent = this;
            children["threshold-limits"] = threshold_limits.get();
        }
        return children.at("threshold-limits");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::get_children()
{
    if(children.find("threshold-limits") == children.end())
    {
        if(threshold_limits != nullptr)
        {
            children["threshold-limits"] = threshold_limits.get();
        }
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::set_value(const std::string & value_path, std::string value)
{
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object::Object()
    :
    	object{YType::str, "object"},
	 object_weight{YType::int32, "object-weight"}
{
    yang_name = "object"; yang_parent_name = "threshold-weight-object";
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object::~Object()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object::has_data() const
{
    return object.is_set
	|| object_weight.is_set;
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object::has_operation() const
{
    return is_set(operation)
	|| is_set(object.operation)
	|| is_set(object_weight.operation);
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object" <<"[object='" <<object.get() <<"']";

    return path_buffer.str();

}

EntityPath ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object::get_entity_path(Entity* ancestor) const
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

    if (object.is_set || is_set(object.operation)) leaf_name_data.push_back(object.get_name_leafdata());
    if (object_weight.is_set || is_set(object_weight.operation)) leaf_name_data.push_back(object_weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object::get_children()
{
    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object = value;
    }
    if(value_path == "object-weight")
    {
        object_weight = value;
    }
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::ThresholdWeightObject()
{
    yang_name = "threshold-weight-object"; yang_parent_name = "type-list";
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::~ThresholdWeightObject()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::has_data() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::has_operation() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-weight-object";

    return path_buffer.str();

}

EntityPath ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::get_entity_path(Entity* ancestor) const
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

Entity* ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "object")
    {
        for(auto const & c : object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object>();
        c->parent = this;
        object.push_back(std::move(c));
        children[segment_path] = object.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::get_children()
{
    for (auto const & c : object)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::set_value(const std::string & value_path, std::string value)
{
}

ObjectTrackings::ObjectTracking::TypeList::TypeList()
    :
    threshold_percentage(std::make_unique<ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage>())
	,threshold_percentage_object(std::make_unique<ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject>())
	,threshold_weight(std::make_unique<ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight>())
	,threshold_weight_object(std::make_unique<ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject>())
{
    threshold_percentage->parent = this;
    children["threshold-percentage"] = threshold_percentage.get();

    threshold_percentage_object->parent = this;
    children["threshold-percentage-object"] = threshold_percentage_object.get();

    threshold_weight->parent = this;
    children["threshold-weight"] = threshold_weight.get();

    threshold_weight_object->parent = this;
    children["threshold-weight-object"] = threshold_weight_object.get();

    yang_name = "type-list"; yang_parent_name = "object-tracking";
}

ObjectTrackings::ObjectTracking::TypeList::~TypeList()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::has_data() const
{
    return (threshold_percentage !=  nullptr && threshold_percentage->has_data())
	|| (threshold_percentage_object !=  nullptr && threshold_percentage_object->has_data())
	|| (threshold_weight !=  nullptr && threshold_weight->has_data())
	|| (threshold_weight_object !=  nullptr && threshold_weight_object->has_data());
}

bool ObjectTrackings::ObjectTracking::TypeList::has_operation() const
{
    return is_set(operation)
	|| (threshold_percentage !=  nullptr && is_set(threshold_percentage->operation))
	|| (threshold_percentage_object !=  nullptr && is_set(threshold_percentage_object->operation))
	|| (threshold_weight !=  nullptr && is_set(threshold_weight->operation))
	|| (threshold_weight_object !=  nullptr && is_set(threshold_weight_object->operation));
}

std::string ObjectTrackings::ObjectTracking::TypeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type-list";

    return path_buffer.str();

}

EntityPath ObjectTrackings::ObjectTracking::TypeList::get_entity_path(Entity* ancestor) const
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

Entity* ObjectTrackings::ObjectTracking::TypeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "threshold-percentage")
    {
        if(threshold_percentage != nullptr)
        {
            children["threshold-percentage"] = threshold_percentage.get();
        }
        else
        {
            threshold_percentage = std::make_unique<ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage>();
            threshold_percentage->parent = this;
            children["threshold-percentage"] = threshold_percentage.get();
        }
        return children.at("threshold-percentage");
    }

    if(child_yang_name == "threshold-percentage-object")
    {
        if(threshold_percentage_object != nullptr)
        {
            children["threshold-percentage-object"] = threshold_percentage_object.get();
        }
        else
        {
            threshold_percentage_object = std::make_unique<ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject>();
            threshold_percentage_object->parent = this;
            children["threshold-percentage-object"] = threshold_percentage_object.get();
        }
        return children.at("threshold-percentage-object");
    }

    if(child_yang_name == "threshold-weight")
    {
        if(threshold_weight != nullptr)
        {
            children["threshold-weight"] = threshold_weight.get();
        }
        else
        {
            threshold_weight = std::make_unique<ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight>();
            threshold_weight->parent = this;
            children["threshold-weight"] = threshold_weight.get();
        }
        return children.at("threshold-weight");
    }

    if(child_yang_name == "threshold-weight-object")
    {
        if(threshold_weight_object != nullptr)
        {
            children["threshold-weight-object"] = threshold_weight_object.get();
        }
        else
        {
            threshold_weight_object = std::make_unique<ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject>();
            threshold_weight_object->parent = this;
            children["threshold-weight-object"] = threshold_weight_object.get();
        }
        return children.at("threshold-weight-object");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTrackings::ObjectTracking::TypeList::get_children()
{
    if(children.find("threshold-percentage") == children.end())
    {
        if(threshold_percentage != nullptr)
        {
            children["threshold-percentage"] = threshold_percentage.get();
        }
    }

    if(children.find("threshold-percentage-object") == children.end())
    {
        if(threshold_percentage_object != nullptr)
        {
            children["threshold-percentage-object"] = threshold_percentage_object.get();
        }
    }

    if(children.find("threshold-weight") == children.end())
    {
        if(threshold_weight != nullptr)
        {
            children["threshold-weight"] = threshold_weight.get();
        }
    }

    if(children.find("threshold-weight-object") == children.end())
    {
        if(threshold_weight_object != nullptr)
        {
            children["threshold-weight-object"] = threshold_weight_object.get();
        }
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::set_value(const std::string & value_path, std::string value)
{
}

ObjectTrackings::ObjectTracking::TypeRoute::IpAddress::IpAddress()
    :
    	address{YType::str, "address"},
	 mask{YType::str, "mask"}
{
    yang_name = "ip-address"; yang_parent_name = "type-route";
}

ObjectTrackings::ObjectTracking::TypeRoute::IpAddress::~IpAddress()
{
}

bool ObjectTrackings::ObjectTracking::TypeRoute::IpAddress::has_data() const
{
    return address.is_set
	|| mask.is_set;
}

bool ObjectTrackings::ObjectTracking::TypeRoute::IpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(mask.operation);
}

std::string ObjectTrackings::ObjectTracking::TypeRoute::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address";

    return path_buffer.str();

}

EntityPath ObjectTrackings::ObjectTracking::TypeRoute::IpAddress::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTrackings::ObjectTracking::TypeRoute::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & ObjectTrackings::ObjectTracking::TypeRoute::IpAddress::get_children()
{
    return children;
}

void ObjectTrackings::ObjectTracking::TypeRoute::IpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

ObjectTrackings::ObjectTracking::TypeRoute::TypeRoute()
    :
    	vrf{YType::str, "vrf"}
    	,
    ip_address(nullptr) // presence node
{
    yang_name = "type-route"; yang_parent_name = "object-tracking";
}

ObjectTrackings::ObjectTracking::TypeRoute::~TypeRoute()
{
}

bool ObjectTrackings::ObjectTracking::TypeRoute::has_data() const
{
    return vrf.is_set
	|| (ip_address !=  nullptr && ip_address->has_data());
}

bool ObjectTrackings::ObjectTracking::TypeRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf.operation)
	|| (ip_address !=  nullptr && is_set(ip_address->operation));
}

std::string ObjectTrackings::ObjectTracking::TypeRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type-route";

    return path_buffer.str();

}

EntityPath ObjectTrackings::ObjectTracking::TypeRoute::get_entity_path(Entity* ancestor) const
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

    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTrackings::ObjectTracking::TypeRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-address")
    {
        if(ip_address != nullptr)
        {
            children["ip-address"] = ip_address.get();
        }
        else
        {
            ip_address = std::make_unique<ObjectTrackings::ObjectTracking::TypeRoute::IpAddress>();
            ip_address->parent = this;
            children["ip-address"] = ip_address.get();
        }
        return children.at("ip-address");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTrackings::ObjectTracking::TypeRoute::get_children()
{
    if(children.find("ip-address") == children.end())
    {
        if(ip_address != nullptr)
        {
            children["ip-address"] = ip_address.get();
        }
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject::OrObject()
    :
    	object{YType::str, "object"},
	 object_sign{YType::enumeration, "object-sign"}
{
    yang_name = "or-object"; yang_parent_name = "or-objects";
}

ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject::~OrObject()
{
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject::has_data() const
{
    return object.is_set
	|| object_sign.is_set;
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject::has_operation() const
{
    return is_set(operation)
	|| is_set(object.operation)
	|| is_set(object_sign.operation);
}

std::string ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "or-object" <<"[object='" <<object.get() <<"']";

    return path_buffer.str();

}

EntityPath ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject::get_entity_path(Entity* ancestor) const
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

    if (object.is_set || is_set(object.operation)) leaf_name_data.push_back(object.get_name_leafdata());
    if (object_sign.is_set || is_set(object_sign.operation)) leaf_name_data.push_back(object_sign.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject::get_children()
{
    return children;
}

void ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object = value;
    }
    if(value_path == "object-sign")
    {
        object_sign = value;
    }
}

ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObjects()
{
    yang_name = "or-objects"; yang_parent_name = "type-boolean-list";
}

ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::~OrObjects()
{
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::has_data() const
{
    for (std::size_t index=0; index<or_object.size(); index++)
    {
        if(or_object[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::has_operation() const
{
    for (std::size_t index=0; index<or_object.size(); index++)
    {
        if(or_object[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "or-objects";

    return path_buffer.str();

}

EntityPath ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::get_entity_path(Entity* ancestor) const
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

Entity* ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "or-object")
    {
        for(auto const & c : or_object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject>();
        c->parent = this;
        or_object.push_back(std::move(c));
        children[segment_path] = or_object.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::get_children()
{
    for (auto const & c : or_object)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::set_value(const std::string & value_path, std::string value)
{
}

ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject::AndObject()
    :
    	object_name{YType::str, "object-name"},
	 object_sign{YType::enumeration, "object-sign"}
{
    yang_name = "and-object"; yang_parent_name = "and-objects";
}

ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject::~AndObject()
{
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject::has_data() const
{
    return object_name.is_set
	|| object_sign.is_set;
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation)
	|| is_set(object_sign.operation);
}

std::string ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "and-object" <<"[object-name='" <<object_name.get() <<"']";

    return path_buffer.str();

}

EntityPath ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject::get_entity_path(Entity* ancestor) const
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

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (object_sign.is_set || is_set(object_sign.operation)) leaf_name_data.push_back(object_sign.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject::get_children()
{
    return children;
}

void ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "object-sign")
    {
        object_sign = value;
    }
}

ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObjects()
{
    yang_name = "and-objects"; yang_parent_name = "type-boolean-list";
}

ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::~AndObjects()
{
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::has_data() const
{
    for (std::size_t index=0; index<and_object.size(); index++)
    {
        if(and_object[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::has_operation() const
{
    for (std::size_t index=0; index<and_object.size(); index++)
    {
        if(and_object[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "and-objects";

    return path_buffer.str();

}

EntityPath ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::get_entity_path(Entity* ancestor) const
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

Entity* ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "and-object")
    {
        for(auto const & c : and_object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject>();
        c->parent = this;
        and_object.push_back(std::move(c));
        children[segment_path] = and_object.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::get_children()
{
    for (auto const & c : and_object)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::set_value(const std::string & value_path, std::string value)
{
}

ObjectTrackings::ObjectTracking::TypeBooleanList::TypeBooleanList()
    :
    and_objects(std::make_unique<ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects>())
	,or_objects(std::make_unique<ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects>())
{
    and_objects->parent = this;
    children["and-objects"] = and_objects.get();

    or_objects->parent = this;
    children["or-objects"] = or_objects.get();

    yang_name = "type-boolean-list"; yang_parent_name = "object-tracking";
}

ObjectTrackings::ObjectTracking::TypeBooleanList::~TypeBooleanList()
{
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::has_data() const
{
    return (and_objects !=  nullptr && and_objects->has_data())
	|| (or_objects !=  nullptr && or_objects->has_data());
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::has_operation() const
{
    return is_set(operation)
	|| (and_objects !=  nullptr && is_set(and_objects->operation))
	|| (or_objects !=  nullptr && is_set(or_objects->operation));
}

std::string ObjectTrackings::ObjectTracking::TypeBooleanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type-boolean-list";

    return path_buffer.str();

}

EntityPath ObjectTrackings::ObjectTracking::TypeBooleanList::get_entity_path(Entity* ancestor) const
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

Entity* ObjectTrackings::ObjectTracking::TypeBooleanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "and-objects")
    {
        if(and_objects != nullptr)
        {
            children["and-objects"] = and_objects.get();
        }
        else
        {
            and_objects = std::make_unique<ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects>();
            and_objects->parent = this;
            children["and-objects"] = and_objects.get();
        }
        return children.at("and-objects");
    }

    if(child_yang_name == "or-objects")
    {
        if(or_objects != nullptr)
        {
            children["or-objects"] = or_objects.get();
        }
        else
        {
            or_objects = std::make_unique<ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects>();
            or_objects->parent = this;
            children["or-objects"] = or_objects.get();
        }
        return children.at("or-objects");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTrackings::ObjectTracking::TypeBooleanList::get_children()
{
    if(children.find("and-objects") == children.end())
    {
        if(and_objects != nullptr)
        {
            children["and-objects"] = and_objects.get();
        }
    }

    if(children.find("or-objects") == children.end())
    {
        if(or_objects != nullptr)
        {
            children["or-objects"] = or_objects.get();
        }
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeBooleanList::set_value(const std::string & value_path, std::string value)
{
}

ObjectTrackings::ObjectTracking::ObjectTracking()
    :
    	track_name{YType::str, "track-name"},
	 delay_down{YType::uint32, "delay-down"},
	 delay_up{YType::uint32, "delay-up"},
	 enable{YType::empty, "enable"},
	 type_boolean_list_and_enable{YType::empty, "type-boolean-list-and-enable"},
	 type_boolean_list_or_enable{YType::empty, "type-boolean-list-or-enable"},
	 type_interface_enable{YType::empty, "type-interface-enable"},
	 type_route_enable{YType::empty, "type-route-enable"}
    	,
    type_boolean_list(std::make_unique<ObjectTrackings::ObjectTracking::TypeBooleanList>())
	,type_interface(std::make_unique<ObjectTrackings::ObjectTracking::TypeInterface>())
	,type_list(std::make_unique<ObjectTrackings::ObjectTracking::TypeList>())
	,type_route(std::make_unique<ObjectTrackings::ObjectTracking::TypeRoute>())
{
    type_boolean_list->parent = this;
    children["type-boolean-list"] = type_boolean_list.get();

    type_interface->parent = this;
    children["type-interface"] = type_interface.get();

    type_list->parent = this;
    children["type-list"] = type_list.get();

    type_route->parent = this;
    children["type-route"] = type_route.get();

    yang_name = "object-tracking"; yang_parent_name = "object-trackings";
}

ObjectTrackings::ObjectTracking::~ObjectTracking()
{
}

bool ObjectTrackings::ObjectTracking::has_data() const
{
    return track_name.is_set
	|| delay_down.is_set
	|| delay_up.is_set
	|| enable.is_set
	|| type_boolean_list_and_enable.is_set
	|| type_boolean_list_or_enable.is_set
	|| type_interface_enable.is_set
	|| type_route_enable.is_set
	|| (type_boolean_list !=  nullptr && type_boolean_list->has_data())
	|| (type_interface !=  nullptr && type_interface->has_data())
	|| (type_list !=  nullptr && type_list->has_data())
	|| (type_route !=  nullptr && type_route->has_data());
}

bool ObjectTrackings::ObjectTracking::has_operation() const
{
    return is_set(operation)
	|| is_set(track_name.operation)
	|| is_set(delay_down.operation)
	|| is_set(delay_up.operation)
	|| is_set(enable.operation)
	|| is_set(type_boolean_list_and_enable.operation)
	|| is_set(type_boolean_list_or_enable.operation)
	|| is_set(type_interface_enable.operation)
	|| is_set(type_route_enable.operation)
	|| (type_boolean_list !=  nullptr && is_set(type_boolean_list->operation))
	|| (type_interface !=  nullptr && is_set(type_interface->operation))
	|| (type_list !=  nullptr && is_set(type_list->operation))
	|| (type_route !=  nullptr && is_set(type_route->operation));
}

std::string ObjectTrackings::ObjectTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object-tracking" <<"[track-name='" <<track_name.get() <<"']";

    return path_buffer.str();

}

EntityPath ObjectTrackings::ObjectTracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-cfg:object-trackings/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (track_name.is_set || is_set(track_name.operation)) leaf_name_data.push_back(track_name.get_name_leafdata());
    if (delay_down.is_set || is_set(delay_down.operation)) leaf_name_data.push_back(delay_down.get_name_leafdata());
    if (delay_up.is_set || is_set(delay_up.operation)) leaf_name_data.push_back(delay_up.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (type_boolean_list_and_enable.is_set || is_set(type_boolean_list_and_enable.operation)) leaf_name_data.push_back(type_boolean_list_and_enable.get_name_leafdata());
    if (type_boolean_list_or_enable.is_set || is_set(type_boolean_list_or_enable.operation)) leaf_name_data.push_back(type_boolean_list_or_enable.get_name_leafdata());
    if (type_interface_enable.is_set || is_set(type_interface_enable.operation)) leaf_name_data.push_back(type_interface_enable.get_name_leafdata());
    if (type_route_enable.is_set || is_set(type_route_enable.operation)) leaf_name_data.push_back(type_route_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTrackings::ObjectTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "type-boolean-list")
    {
        if(type_boolean_list != nullptr)
        {
            children["type-boolean-list"] = type_boolean_list.get();
        }
        else
        {
            type_boolean_list = std::make_unique<ObjectTrackings::ObjectTracking::TypeBooleanList>();
            type_boolean_list->parent = this;
            children["type-boolean-list"] = type_boolean_list.get();
        }
        return children.at("type-boolean-list");
    }

    if(child_yang_name == "type-interface")
    {
        if(type_interface != nullptr)
        {
            children["type-interface"] = type_interface.get();
        }
        else
        {
            type_interface = std::make_unique<ObjectTrackings::ObjectTracking::TypeInterface>();
            type_interface->parent = this;
            children["type-interface"] = type_interface.get();
        }
        return children.at("type-interface");
    }

    if(child_yang_name == "type-list")
    {
        if(type_list != nullptr)
        {
            children["type-list"] = type_list.get();
        }
        else
        {
            type_list = std::make_unique<ObjectTrackings::ObjectTracking::TypeList>();
            type_list->parent = this;
            children["type-list"] = type_list.get();
        }
        return children.at("type-list");
    }

    if(child_yang_name == "type-route")
    {
        if(type_route != nullptr)
        {
            children["type-route"] = type_route.get();
        }
        else
        {
            type_route = std::make_unique<ObjectTrackings::ObjectTracking::TypeRoute>();
            type_route->parent = this;
            children["type-route"] = type_route.get();
        }
        return children.at("type-route");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTrackings::ObjectTracking::get_children()
{
    if(children.find("type-boolean-list") == children.end())
    {
        if(type_boolean_list != nullptr)
        {
            children["type-boolean-list"] = type_boolean_list.get();
        }
    }

    if(children.find("type-interface") == children.end())
    {
        if(type_interface != nullptr)
        {
            children["type-interface"] = type_interface.get();
        }
    }

    if(children.find("type-list") == children.end())
    {
        if(type_list != nullptr)
        {
            children["type-list"] = type_list.get();
        }
    }

    if(children.find("type-route") == children.end())
    {
        if(type_route != nullptr)
        {
            children["type-route"] = type_route.get();
        }
    }

    return children;
}

void ObjectTrackings::ObjectTracking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "track-name")
    {
        track_name = value;
    }
    if(value_path == "delay-down")
    {
        delay_down = value;
    }
    if(value_path == "delay-up")
    {
        delay_up = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "type-boolean-list-and-enable")
    {
        type_boolean_list_and_enable = value;
    }
    if(value_path == "type-boolean-list-or-enable")
    {
        type_boolean_list_or_enable = value;
    }
    if(value_path == "type-interface-enable")
    {
        type_interface_enable = value;
    }
    if(value_path == "type-route-enable")
    {
        type_route_enable = value;
    }
}

ObjectTrackings::ObjectTrackings()
{
    yang_name = "object-trackings"; yang_parent_name = "Cisco-IOS-XR-manageability-object-tracking-cfg";
}

ObjectTrackings::~ObjectTrackings()
{
}

bool ObjectTrackings::has_data() const
{
    for (std::size_t index=0; index<object_tracking.size(); index++)
    {
        if(object_tracking[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTrackings::has_operation() const
{
    for (std::size_t index=0; index<object_tracking.size(); index++)
    {
        if(object_tracking[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTrackings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-cfg:object-trackings";

    return path_buffer.str();

}

EntityPath ObjectTrackings::get_entity_path(Entity* ancestor) const
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

Entity* ObjectTrackings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "object-tracking")
    {
        for(auto const & c : object_tracking)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTrackings::ObjectTracking>();
        c->parent = this;
        object_tracking.push_back(std::move(c));
        children[segment_path] = object_tracking.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTrackings::get_children()
{
    for (auto const & c : object_tracking)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTrackings::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> ObjectTrackings::clone_ptr()
{
    return std::make_unique<ObjectTrackings>();
}


}
}

