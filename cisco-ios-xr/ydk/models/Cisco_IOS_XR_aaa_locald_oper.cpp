
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_aaa_locald_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_aaa_locald_oper {

Aaa::AllTasks::AllTasks()
    :
    	task_id{YType::str, "task-id"}
{
    yang_name = "all-tasks"; yang_parent_name = "aaa";
}

Aaa::AllTasks::~AllTasks()
{
}

bool Aaa::AllTasks::has_data() const
{
    for (auto const & leaf : task_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Aaa::AllTasks::has_operation() const
{
    for (auto const & leaf : task_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(task_id.operation);
}

std::string Aaa::AllTasks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-tasks";

    return path_buffer.str();

}

EntityPath Aaa::AllTasks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto task_id_name_datas = task_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), task_id_name_datas.begin(), task_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::AllTasks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::AllTasks::get_children()
{
    return children;
}

void Aaa::AllTasks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "task-id")
    {
        task_id.append(value);
    }
}

Aaa::CurrentuserDetail::CurrentuserDetail()
    :
    	authenmethod{YType::int32, "authenmethod"},
	 name{YType::str, "name"},
	 taskmap{YType::str, "taskmap"},
	 usergroup{YType::str, "usergroup"}
{
    yang_name = "currentuser-detail"; yang_parent_name = "aaa";
}

Aaa::CurrentuserDetail::~CurrentuserDetail()
{
}

bool Aaa::CurrentuserDetail::has_data() const
{
    for (auto const & leaf : taskmap.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : usergroup.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return authenmethod.is_set
	|| name.is_set;
}

bool Aaa::CurrentuserDetail::has_operation() const
{
    for (auto const & leaf : taskmap.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : usergroup.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(authenmethod.operation)
	|| is_set(name.operation)
	|| is_set(taskmap.operation)
	|| is_set(usergroup.operation);
}

std::string Aaa::CurrentuserDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "currentuser-detail";

    return path_buffer.str();

}

EntityPath Aaa::CurrentuserDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenmethod.is_set || is_set(authenmethod.operation)) leaf_name_data.push_back(authenmethod.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());

    auto taskmap_name_datas = taskmap.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), taskmap_name_datas.begin(), taskmap_name_datas.end());
    auto usergroup_name_datas = usergroup.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), usergroup_name_datas.begin(), usergroup_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::CurrentuserDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::CurrentuserDetail::get_children()
{
    return children;
}

void Aaa::CurrentuserDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authenmethod")
    {
        authenmethod = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "taskmap")
    {
        taskmap.append(value);
    }
    if(value_path == "usergroup")
    {
        usergroup.append(value);
    }
}

Aaa::TaskMap::TaskMap()
    :
    	authenmethod{YType::int32, "authenmethod"},
	 name{YType::str, "name"},
	 taskmap{YType::str, "taskmap"},
	 usergroup{YType::str, "usergroup"}
{
    yang_name = "task-map"; yang_parent_name = "aaa";
}

Aaa::TaskMap::~TaskMap()
{
}

bool Aaa::TaskMap::has_data() const
{
    for (auto const & leaf : taskmap.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : usergroup.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return authenmethod.is_set
	|| name.is_set;
}

bool Aaa::TaskMap::has_operation() const
{
    for (auto const & leaf : taskmap.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : usergroup.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(authenmethod.operation)
	|| is_set(name.operation)
	|| is_set(taskmap.operation)
	|| is_set(usergroup.operation);
}

std::string Aaa::TaskMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "task-map";

    return path_buffer.str();

}

EntityPath Aaa::TaskMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenmethod.is_set || is_set(authenmethod.operation)) leaf_name_data.push_back(authenmethod.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());

    auto taskmap_name_datas = taskmap.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), taskmap_name_datas.begin(), taskmap_name_datas.end());
    auto usergroup_name_datas = usergroup.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), usergroup_name_datas.begin(), usergroup_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::TaskMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::TaskMap::get_children()
{
    return children;
}

void Aaa::TaskMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authenmethod")
    {
        authenmethod = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "taskmap")
    {
        taskmap.append(value);
    }
    if(value_path == "usergroup")
    {
        usergroup.append(value);
    }
}

Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks::Tasks()
    :
    	debug{YType::boolean, "debug"},
	 execute{YType::boolean, "execute"},
	 read{YType::boolean, "read"},
	 task_id{YType::str, "task-id"},
	 write{YType::boolean, "write"}
{
    yang_name = "tasks"; yang_parent_name = "included-task-ids";
}

Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks::~Tasks()
{
}

bool Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks::has_data() const
{
    return debug.is_set
	|| execute.is_set
	|| read.is_set
	|| task_id.is_set
	|| write.is_set;
}

bool Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks::has_operation() const
{
    return is_set(operation)
	|| is_set(debug.operation)
	|| is_set(execute.operation)
	|| is_set(read.operation)
	|| is_set(task_id.operation)
	|| is_set(write.operation);
}

std::string Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tasks";

    return path_buffer.str();

}

EntityPath Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks::get_entity_path(Entity* ancestor) const
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

    if (debug.is_set || is_set(debug.operation)) leaf_name_data.push_back(debug.get_name_leafdata());
    if (execute.is_set || is_set(execute.operation)) leaf_name_data.push_back(execute.get_name_leafdata());
    if (read.is_set || is_set(read.operation)) leaf_name_data.push_back(read.get_name_leafdata());
    if (task_id.is_set || is_set(task_id.operation)) leaf_name_data.push_back(task_id.get_name_leafdata());
    if (write.is_set || is_set(write.operation)) leaf_name_data.push_back(write.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks::get_children()
{
    return children;
}

void Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "debug")
    {
        debug = value;
    }
    if(value_path == "execute")
    {
        execute = value;
    }
    if(value_path == "read")
    {
        read = value;
    }
    if(value_path == "task-id")
    {
        task_id = value;
    }
    if(value_path == "write")
    {
        write = value;
    }
}

Aaa::Taskgroups::Taskgroup::IncludedTaskIds::IncludedTaskIds()
{
    yang_name = "included-task-ids"; yang_parent_name = "taskgroup";
}

Aaa::Taskgroups::Taskgroup::IncludedTaskIds::~IncludedTaskIds()
{
}

bool Aaa::Taskgroups::Taskgroup::IncludedTaskIds::has_data() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Taskgroups::Taskgroup::IncludedTaskIds::has_operation() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Taskgroups::Taskgroup::IncludedTaskIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "included-task-ids";

    return path_buffer.str();

}

EntityPath Aaa::Taskgroups::Taskgroup::IncludedTaskIds::get_entity_path(Entity* ancestor) const
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

Entity* Aaa::Taskgroups::Taskgroup::IncludedTaskIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tasks")
    {
        for(auto const & c : tasks)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks>();
        c->parent = this;
        tasks.push_back(std::move(c));
        children[segment_path] = tasks.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Taskgroups::Taskgroup::IncludedTaskIds::get_children()
{
    for (auto const & c : tasks)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Taskgroups::Taskgroup::IncludedTaskIds::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Taskgroups::Taskgroup::TaskMap::Tasks::Tasks()
    :
    	debug{YType::boolean, "debug"},
	 execute{YType::boolean, "execute"},
	 read{YType::boolean, "read"},
	 task_id{YType::str, "task-id"},
	 write{YType::boolean, "write"}
{
    yang_name = "tasks"; yang_parent_name = "task-map";
}

Aaa::Taskgroups::Taskgroup::TaskMap::Tasks::~Tasks()
{
}

bool Aaa::Taskgroups::Taskgroup::TaskMap::Tasks::has_data() const
{
    return debug.is_set
	|| execute.is_set
	|| read.is_set
	|| task_id.is_set
	|| write.is_set;
}

bool Aaa::Taskgroups::Taskgroup::TaskMap::Tasks::has_operation() const
{
    return is_set(operation)
	|| is_set(debug.operation)
	|| is_set(execute.operation)
	|| is_set(read.operation)
	|| is_set(task_id.operation)
	|| is_set(write.operation);
}

std::string Aaa::Taskgroups::Taskgroup::TaskMap::Tasks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tasks";

    return path_buffer.str();

}

EntityPath Aaa::Taskgroups::Taskgroup::TaskMap::Tasks::get_entity_path(Entity* ancestor) const
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

    if (debug.is_set || is_set(debug.operation)) leaf_name_data.push_back(debug.get_name_leafdata());
    if (execute.is_set || is_set(execute.operation)) leaf_name_data.push_back(execute.get_name_leafdata());
    if (read.is_set || is_set(read.operation)) leaf_name_data.push_back(read.get_name_leafdata());
    if (task_id.is_set || is_set(task_id.operation)) leaf_name_data.push_back(task_id.get_name_leafdata());
    if (write.is_set || is_set(write.operation)) leaf_name_data.push_back(write.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Taskgroups::Taskgroup::TaskMap::Tasks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Taskgroups::Taskgroup::TaskMap::Tasks::get_children()
{
    return children;
}

void Aaa::Taskgroups::Taskgroup::TaskMap::Tasks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "debug")
    {
        debug = value;
    }
    if(value_path == "execute")
    {
        execute = value;
    }
    if(value_path == "read")
    {
        read = value;
    }
    if(value_path == "task-id")
    {
        task_id = value;
    }
    if(value_path == "write")
    {
        write = value;
    }
}

Aaa::Taskgroups::Taskgroup::TaskMap::TaskMap()
{
    yang_name = "task-map"; yang_parent_name = "taskgroup";
}

Aaa::Taskgroups::Taskgroup::TaskMap::~TaskMap()
{
}

bool Aaa::Taskgroups::Taskgroup::TaskMap::has_data() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Taskgroups::Taskgroup::TaskMap::has_operation() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Taskgroups::Taskgroup::TaskMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "task-map";

    return path_buffer.str();

}

EntityPath Aaa::Taskgroups::Taskgroup::TaskMap::get_entity_path(Entity* ancestor) const
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

Entity* Aaa::Taskgroups::Taskgroup::TaskMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tasks")
    {
        for(auto const & c : tasks)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Taskgroups::Taskgroup::TaskMap::Tasks>();
        c->parent = this;
        tasks.push_back(std::move(c));
        children[segment_path] = tasks.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Taskgroups::Taskgroup::TaskMap::get_children()
{
    for (auto const & c : tasks)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Taskgroups::Taskgroup::TaskMap::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Taskgroups::Taskgroup::Taskgroup()
    :
    	name{YType::str, "name"},
	 name_xr{YType::str, "name-xr"}
    	,
    included_task_ids(std::make_unique<Aaa::Taskgroups::Taskgroup::IncludedTaskIds>())
	,task_map(std::make_unique<Aaa::Taskgroups::Taskgroup::TaskMap>())
{
    included_task_ids->parent = this;
    children["included-task-ids"] = included_task_ids.get();

    task_map->parent = this;
    children["task-map"] = task_map.get();

    yang_name = "taskgroup"; yang_parent_name = "taskgroups";
}

Aaa::Taskgroups::Taskgroup::~Taskgroup()
{
}

bool Aaa::Taskgroups::Taskgroup::has_data() const
{
    return name.is_set
	|| name_xr.is_set
	|| (included_task_ids !=  nullptr && included_task_ids->has_data())
	|| (task_map !=  nullptr && task_map->has_data());
}

bool Aaa::Taskgroups::Taskgroup::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(name_xr.operation)
	|| (included_task_ids !=  nullptr && included_task_ids->has_operation())
	|| (task_map !=  nullptr && task_map->has_operation());
}

std::string Aaa::Taskgroups::Taskgroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "taskgroup" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Taskgroups::Taskgroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/taskgroups/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (name_xr.is_set || is_set(name_xr.operation)) leaf_name_data.push_back(name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Taskgroups::Taskgroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "included-task-ids")
    {
        if(included_task_ids != nullptr)
        {
            children["included-task-ids"] = included_task_ids.get();
        }
        else
        {
            included_task_ids = std::make_unique<Aaa::Taskgroups::Taskgroup::IncludedTaskIds>();
            included_task_ids->parent = this;
            children["included-task-ids"] = included_task_ids.get();
        }
        return children.at("included-task-ids");
    }

    if(child_yang_name == "task-map")
    {
        if(task_map != nullptr)
        {
            children["task-map"] = task_map.get();
        }
        else
        {
            task_map = std::make_unique<Aaa::Taskgroups::Taskgroup::TaskMap>();
            task_map->parent = this;
            children["task-map"] = task_map.get();
        }
        return children.at("task-map");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Taskgroups::Taskgroup::get_children()
{
    if(children.find("included-task-ids") == children.end())
    {
        if(included_task_ids != nullptr)
        {
            children["included-task-ids"] = included_task_ids.get();
        }
    }

    if(children.find("task-map") == children.end())
    {
        if(task_map != nullptr)
        {
            children["task-map"] = task_map.get();
        }
    }

    return children;
}

void Aaa::Taskgroups::Taskgroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "name-xr")
    {
        name_xr = value;
    }
}

Aaa::Taskgroups::Taskgroups()
{
    yang_name = "taskgroups"; yang_parent_name = "aaa";
}

Aaa::Taskgroups::~Taskgroups()
{
}

bool Aaa::Taskgroups::has_data() const
{
    for (std::size_t index=0; index<taskgroup.size(); index++)
    {
        if(taskgroup[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Taskgroups::has_operation() const
{
    for (std::size_t index=0; index<taskgroup.size(); index++)
    {
        if(taskgroup[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Taskgroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "taskgroups";

    return path_buffer.str();

}

EntityPath Aaa::Taskgroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Taskgroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "taskgroup")
    {
        for(auto const & c : taskgroup)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Taskgroups::Taskgroup>();
        c->parent = this;
        taskgroup.push_back(std::move(c));
        children[segment_path] = taskgroup.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Taskgroups::get_children()
{
    for (auto const & c : taskgroup)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Taskgroups::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Users::User::TaskMap::Tasks::Tasks()
    :
    	debug{YType::boolean, "debug"},
	 execute{YType::boolean, "execute"},
	 read{YType::boolean, "read"},
	 task_id{YType::str, "task-id"},
	 write{YType::boolean, "write"}
{
    yang_name = "tasks"; yang_parent_name = "task-map";
}

Aaa::Users::User::TaskMap::Tasks::~Tasks()
{
}

bool Aaa::Users::User::TaskMap::Tasks::has_data() const
{
    return debug.is_set
	|| execute.is_set
	|| read.is_set
	|| task_id.is_set
	|| write.is_set;
}

bool Aaa::Users::User::TaskMap::Tasks::has_operation() const
{
    return is_set(operation)
	|| is_set(debug.operation)
	|| is_set(execute.operation)
	|| is_set(read.operation)
	|| is_set(task_id.operation)
	|| is_set(write.operation);
}

std::string Aaa::Users::User::TaskMap::Tasks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tasks";

    return path_buffer.str();

}

EntityPath Aaa::Users::User::TaskMap::Tasks::get_entity_path(Entity* ancestor) const
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

    if (debug.is_set || is_set(debug.operation)) leaf_name_data.push_back(debug.get_name_leafdata());
    if (execute.is_set || is_set(execute.operation)) leaf_name_data.push_back(execute.get_name_leafdata());
    if (read.is_set || is_set(read.operation)) leaf_name_data.push_back(read.get_name_leafdata());
    if (task_id.is_set || is_set(task_id.operation)) leaf_name_data.push_back(task_id.get_name_leafdata());
    if (write.is_set || is_set(write.operation)) leaf_name_data.push_back(write.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Users::User::TaskMap::Tasks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Users::User::TaskMap::Tasks::get_children()
{
    return children;
}

void Aaa::Users::User::TaskMap::Tasks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "debug")
    {
        debug = value;
    }
    if(value_path == "execute")
    {
        execute = value;
    }
    if(value_path == "read")
    {
        read = value;
    }
    if(value_path == "task-id")
    {
        task_id = value;
    }
    if(value_path == "write")
    {
        write = value;
    }
}

Aaa::Users::User::TaskMap::TaskMap()
{
    yang_name = "task-map"; yang_parent_name = "user";
}

Aaa::Users::User::TaskMap::~TaskMap()
{
}

bool Aaa::Users::User::TaskMap::has_data() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Users::User::TaskMap::has_operation() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Users::User::TaskMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "task-map";

    return path_buffer.str();

}

EntityPath Aaa::Users::User::TaskMap::get_entity_path(Entity* ancestor) const
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

Entity* Aaa::Users::User::TaskMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tasks")
    {
        for(auto const & c : tasks)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Users::User::TaskMap::Tasks>();
        c->parent = this;
        tasks.push_back(std::move(c));
        children[segment_path] = tasks.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Users::User::TaskMap::get_children()
{
    for (auto const & c : tasks)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Users::User::TaskMap::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Users::User::User()
    :
    	name{YType::str, "name"},
	 admin_user{YType::boolean, "admin-user"},
	 first_user{YType::boolean, "first-user"},
	 name_xr{YType::str, "name-xr"},
	 usergroup{YType::str, "usergroup"}
    	,
    task_map(std::make_unique<Aaa::Users::User::TaskMap>())
{
    task_map->parent = this;
    children["task-map"] = task_map.get();

    yang_name = "user"; yang_parent_name = "users";
}

Aaa::Users::User::~User()
{
}

bool Aaa::Users::User::has_data() const
{
    for (auto const & leaf : usergroup.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| admin_user.is_set
	|| first_user.is_set
	|| name_xr.is_set
	|| (task_map !=  nullptr && task_map->has_data());
}

bool Aaa::Users::User::has_operation() const
{
    for (auto const & leaf : usergroup.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(admin_user.operation)
	|| is_set(first_user.operation)
	|| is_set(name_xr.operation)
	|| is_set(usergroup.operation)
	|| (task_map !=  nullptr && task_map->has_operation());
}

std::string Aaa::Users::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Users::User::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/users/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (admin_user.is_set || is_set(admin_user.operation)) leaf_name_data.push_back(admin_user.get_name_leafdata());
    if (first_user.is_set || is_set(first_user.operation)) leaf_name_data.push_back(first_user.get_name_leafdata());
    if (name_xr.is_set || is_set(name_xr.operation)) leaf_name_data.push_back(name_xr.get_name_leafdata());

    auto usergroup_name_datas = usergroup.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), usergroup_name_datas.begin(), usergroup_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Users::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "task-map")
    {
        if(task_map != nullptr)
        {
            children["task-map"] = task_map.get();
        }
        else
        {
            task_map = std::make_unique<Aaa::Users::User::TaskMap>();
            task_map->parent = this;
            children["task-map"] = task_map.get();
        }
        return children.at("task-map");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Users::User::get_children()
{
    if(children.find("task-map") == children.end())
    {
        if(task_map != nullptr)
        {
            children["task-map"] = task_map.get();
        }
    }

    return children;
}

void Aaa::Users::User::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "admin-user")
    {
        admin_user = value;
    }
    if(value_path == "first-user")
    {
        first_user = value;
    }
    if(value_path == "name-xr")
    {
        name_xr = value;
    }
    if(value_path == "usergroup")
    {
        usergroup.append(value);
    }
}

Aaa::Users::Users()
{
    yang_name = "users"; yang_parent_name = "aaa";
}

Aaa::Users::~Users()
{
}

bool Aaa::Users::has_data() const
{
    for (std::size_t index=0; index<user.size(); index++)
    {
        if(user[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Users::has_operation() const
{
    for (std::size_t index=0; index<user.size(); index++)
    {
        if(user[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Users::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "users";

    return path_buffer.str();

}

EntityPath Aaa::Users::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Users::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "user")
    {
        for(auto const & c : user)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Users::User>();
        c->parent = this;
        user.push_back(std::move(c));
        children[segment_path] = user.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Users::get_children()
{
    for (auto const & c : user)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Users::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Usergroups::Usergroup::TaskMap::Tasks::Tasks()
    :
    	debug{YType::boolean, "debug"},
	 execute{YType::boolean, "execute"},
	 read{YType::boolean, "read"},
	 task_id{YType::str, "task-id"},
	 write{YType::boolean, "write"}
{
    yang_name = "tasks"; yang_parent_name = "task-map";
}

Aaa::Usergroups::Usergroup::TaskMap::Tasks::~Tasks()
{
}

bool Aaa::Usergroups::Usergroup::TaskMap::Tasks::has_data() const
{
    return debug.is_set
	|| execute.is_set
	|| read.is_set
	|| task_id.is_set
	|| write.is_set;
}

bool Aaa::Usergroups::Usergroup::TaskMap::Tasks::has_operation() const
{
    return is_set(operation)
	|| is_set(debug.operation)
	|| is_set(execute.operation)
	|| is_set(read.operation)
	|| is_set(task_id.operation)
	|| is_set(write.operation);
}

std::string Aaa::Usergroups::Usergroup::TaskMap::Tasks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tasks";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::Usergroup::TaskMap::Tasks::get_entity_path(Entity* ancestor) const
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

    if (debug.is_set || is_set(debug.operation)) leaf_name_data.push_back(debug.get_name_leafdata());
    if (execute.is_set || is_set(execute.operation)) leaf_name_data.push_back(execute.get_name_leafdata());
    if (read.is_set || is_set(read.operation)) leaf_name_data.push_back(read.get_name_leafdata());
    if (task_id.is_set || is_set(task_id.operation)) leaf_name_data.push_back(task_id.get_name_leafdata());
    if (write.is_set || is_set(write.operation)) leaf_name_data.push_back(write.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Usergroups::Usergroup::TaskMap::Tasks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Usergroups::Usergroup::TaskMap::Tasks::get_children()
{
    return children;
}

void Aaa::Usergroups::Usergroup::TaskMap::Tasks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "debug")
    {
        debug = value;
    }
    if(value_path == "execute")
    {
        execute = value;
    }
    if(value_path == "read")
    {
        read = value;
    }
    if(value_path == "task-id")
    {
        task_id = value;
    }
    if(value_path == "write")
    {
        write = value;
    }
}

Aaa::Usergroups::Usergroup::TaskMap::TaskMap()
{
    yang_name = "task-map"; yang_parent_name = "usergroup";
}

Aaa::Usergroups::Usergroup::TaskMap::~TaskMap()
{
}

bool Aaa::Usergroups::Usergroup::TaskMap::has_data() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Usergroups::Usergroup::TaskMap::has_operation() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Usergroups::Usergroup::TaskMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "task-map";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::Usergroup::TaskMap::get_entity_path(Entity* ancestor) const
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

Entity* Aaa::Usergroups::Usergroup::TaskMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tasks")
    {
        for(auto const & c : tasks)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Usergroups::Usergroup::TaskMap::Tasks>();
        c->parent = this;
        tasks.push_back(std::move(c));
        children[segment_path] = tasks.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Usergroups::Usergroup::TaskMap::get_children()
{
    for (auto const & c : tasks)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Usergroups::Usergroup::TaskMap::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks::Tasks()
    :
    	debug{YType::boolean, "debug"},
	 execute{YType::boolean, "execute"},
	 read{YType::boolean, "read"},
	 task_id{YType::str, "task-id"},
	 write{YType::boolean, "write"}
{
    yang_name = "tasks"; yang_parent_name = "included-task-ids";
}

Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks::~Tasks()
{
}

bool Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks::has_data() const
{
    return debug.is_set
	|| execute.is_set
	|| read.is_set
	|| task_id.is_set
	|| write.is_set;
}

bool Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks::has_operation() const
{
    return is_set(operation)
	|| is_set(debug.operation)
	|| is_set(execute.operation)
	|| is_set(read.operation)
	|| is_set(task_id.operation)
	|| is_set(write.operation);
}

std::string Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tasks";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks::get_entity_path(Entity* ancestor) const
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

    if (debug.is_set || is_set(debug.operation)) leaf_name_data.push_back(debug.get_name_leafdata());
    if (execute.is_set || is_set(execute.operation)) leaf_name_data.push_back(execute.get_name_leafdata());
    if (read.is_set || is_set(read.operation)) leaf_name_data.push_back(read.get_name_leafdata());
    if (task_id.is_set || is_set(task_id.operation)) leaf_name_data.push_back(task_id.get_name_leafdata());
    if (write.is_set || is_set(write.operation)) leaf_name_data.push_back(write.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks::get_children()
{
    return children;
}

void Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "debug")
    {
        debug = value;
    }
    if(value_path == "execute")
    {
        execute = value;
    }
    if(value_path == "read")
    {
        read = value;
    }
    if(value_path == "task-id")
    {
        task_id = value;
    }
    if(value_path == "write")
    {
        write = value;
    }
}

Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::IncludedTaskIds()
{
    yang_name = "included-task-ids"; yang_parent_name = "taskgroup";
}

Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::~IncludedTaskIds()
{
}

bool Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::has_data() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::has_operation() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "included-task-ids";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::get_entity_path(Entity* ancestor) const
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

Entity* Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tasks")
    {
        for(auto const & c : tasks)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks>();
        c->parent = this;
        tasks.push_back(std::move(c));
        children[segment_path] = tasks.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::get_children()
{
    for (auto const & c : tasks)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks::Tasks()
    :
    	debug{YType::boolean, "debug"},
	 execute{YType::boolean, "execute"},
	 read{YType::boolean, "read"},
	 task_id{YType::str, "task-id"},
	 write{YType::boolean, "write"}
{
    yang_name = "tasks"; yang_parent_name = "task-map";
}

Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks::~Tasks()
{
}

bool Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks::has_data() const
{
    return debug.is_set
	|| execute.is_set
	|| read.is_set
	|| task_id.is_set
	|| write.is_set;
}

bool Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks::has_operation() const
{
    return is_set(operation)
	|| is_set(debug.operation)
	|| is_set(execute.operation)
	|| is_set(read.operation)
	|| is_set(task_id.operation)
	|| is_set(write.operation);
}

std::string Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tasks";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks::get_entity_path(Entity* ancestor) const
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

    if (debug.is_set || is_set(debug.operation)) leaf_name_data.push_back(debug.get_name_leafdata());
    if (execute.is_set || is_set(execute.operation)) leaf_name_data.push_back(execute.get_name_leafdata());
    if (read.is_set || is_set(read.operation)) leaf_name_data.push_back(read.get_name_leafdata());
    if (task_id.is_set || is_set(task_id.operation)) leaf_name_data.push_back(task_id.get_name_leafdata());
    if (write.is_set || is_set(write.operation)) leaf_name_data.push_back(write.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks::get_children()
{
    return children;
}

void Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "debug")
    {
        debug = value;
    }
    if(value_path == "execute")
    {
        execute = value;
    }
    if(value_path == "read")
    {
        read = value;
    }
    if(value_path == "task-id")
    {
        task_id = value;
    }
    if(value_path == "write")
    {
        write = value;
    }
}

Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::TaskMap()
{
    yang_name = "task-map"; yang_parent_name = "taskgroup";
}

Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::~TaskMap()
{
}

bool Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::has_data() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::has_operation() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "task-map";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::get_entity_path(Entity* ancestor) const
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

Entity* Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tasks")
    {
        for(auto const & c : tasks)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks>();
        c->parent = this;
        tasks.push_back(std::move(c));
        children[segment_path] = tasks.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::get_children()
{
    for (auto const & c : tasks)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Usergroups::Usergroup::Taskgroup::Taskgroup()
    :
    	name_xr{YType::str, "name-xr"}
    	,
    included_task_ids(std::make_unique<Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds>())
	,task_map(std::make_unique<Aaa::Usergroups::Usergroup::Taskgroup::TaskMap>())
{
    included_task_ids->parent = this;
    children["included-task-ids"] = included_task_ids.get();

    task_map->parent = this;
    children["task-map"] = task_map.get();

    yang_name = "taskgroup"; yang_parent_name = "usergroup";
}

Aaa::Usergroups::Usergroup::Taskgroup::~Taskgroup()
{
}

bool Aaa::Usergroups::Usergroup::Taskgroup::has_data() const
{
    return name_xr.is_set
	|| (included_task_ids !=  nullptr && included_task_ids->has_data())
	|| (task_map !=  nullptr && task_map->has_data());
}

bool Aaa::Usergroups::Usergroup::Taskgroup::has_operation() const
{
    return is_set(operation)
	|| is_set(name_xr.operation)
	|| (included_task_ids !=  nullptr && included_task_ids->has_operation())
	|| (task_map !=  nullptr && task_map->has_operation());
}

std::string Aaa::Usergroups::Usergroup::Taskgroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "taskgroup";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::Usergroup::Taskgroup::get_entity_path(Entity* ancestor) const
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

    if (name_xr.is_set || is_set(name_xr.operation)) leaf_name_data.push_back(name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Usergroups::Usergroup::Taskgroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "included-task-ids")
    {
        if(included_task_ids != nullptr)
        {
            children["included-task-ids"] = included_task_ids.get();
        }
        else
        {
            included_task_ids = std::make_unique<Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds>();
            included_task_ids->parent = this;
            children["included-task-ids"] = included_task_ids.get();
        }
        return children.at("included-task-ids");
    }

    if(child_yang_name == "task-map")
    {
        if(task_map != nullptr)
        {
            children["task-map"] = task_map.get();
        }
        else
        {
            task_map = std::make_unique<Aaa::Usergroups::Usergroup::Taskgroup::TaskMap>();
            task_map->parent = this;
            children["task-map"] = task_map.get();
        }
        return children.at("task-map");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Usergroups::Usergroup::Taskgroup::get_children()
{
    if(children.find("included-task-ids") == children.end())
    {
        if(included_task_ids != nullptr)
        {
            children["included-task-ids"] = included_task_ids.get();
        }
    }

    if(children.find("task-map") == children.end())
    {
        if(task_map != nullptr)
        {
            children["task-map"] = task_map.get();
        }
    }

    return children;
}

void Aaa::Usergroups::Usergroup::Taskgroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name-xr")
    {
        name_xr = value;
    }
}

Aaa::Usergroups::Usergroup::Usergroup()
    :
    	name{YType::str, "name"},
	 name_xr{YType::str, "name-xr"}
    	,
    task_map(std::make_unique<Aaa::Usergroups::Usergroup::TaskMap>())
{
    task_map->parent = this;
    children["task-map"] = task_map.get();

    yang_name = "usergroup"; yang_parent_name = "usergroups";
}

Aaa::Usergroups::Usergroup::~Usergroup()
{
}

bool Aaa::Usergroups::Usergroup::has_data() const
{
    for (std::size_t index=0; index<taskgroup.size(); index++)
    {
        if(taskgroup[index]->has_data())
            return true;
    }
    return name.is_set
	|| name_xr.is_set
	|| (task_map !=  nullptr && task_map->has_data());
}

bool Aaa::Usergroups::Usergroup::has_operation() const
{
    for (std::size_t index=0; index<taskgroup.size(); index++)
    {
        if(taskgroup[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(name_xr.operation)
	|| (task_map !=  nullptr && task_map->has_operation());
}

std::string Aaa::Usergroups::Usergroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usergroup" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::Usergroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/usergroups/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (name_xr.is_set || is_set(name_xr.operation)) leaf_name_data.push_back(name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Usergroups::Usergroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "task-map")
    {
        if(task_map != nullptr)
        {
            children["task-map"] = task_map.get();
        }
        else
        {
            task_map = std::make_unique<Aaa::Usergroups::Usergroup::TaskMap>();
            task_map->parent = this;
            children["task-map"] = task_map.get();
        }
        return children.at("task-map");
    }

    if(child_yang_name == "taskgroup")
    {
        for(auto const & c : taskgroup)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Usergroups::Usergroup::Taskgroup>();
        c->parent = this;
        taskgroup.push_back(std::move(c));
        children[segment_path] = taskgroup.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Usergroups::Usergroup::get_children()
{
    if(children.find("task-map") == children.end())
    {
        if(task_map != nullptr)
        {
            children["task-map"] = task_map.get();
        }
    }

    for (auto const & c : taskgroup)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Usergroups::Usergroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "name-xr")
    {
        name_xr = value;
    }
}

Aaa::Usergroups::Usergroups()
{
    yang_name = "usergroups"; yang_parent_name = "aaa";
}

Aaa::Usergroups::~Usergroups()
{
}

bool Aaa::Usergroups::has_data() const
{
    for (std::size_t index=0; index<usergroup.size(); index++)
    {
        if(usergroup[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Usergroups::has_operation() const
{
    for (std::size_t index=0; index<usergroup.size(); index++)
    {
        if(usergroup[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Usergroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usergroups";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Usergroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "usergroup")
    {
        for(auto const & c : usergroup)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Usergroups::Usergroup>();
        c->parent = this;
        usergroup.push_back(std::move(c));
        children[segment_path] = usergroup.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Usergroups::get_children()
{
    for (auto const & c : usergroup)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Usergroups::set_value(const std::string & value_path, std::string value)
{
}

Aaa::AuthenMethod::AuthenMethod()
    :
    	authenmethod{YType::int32, "authenmethod"},
	 name{YType::str, "name"},
	 taskmap{YType::str, "taskmap"},
	 usergroup{YType::str, "usergroup"}
{
    yang_name = "authen-method"; yang_parent_name = "aaa";
}

Aaa::AuthenMethod::~AuthenMethod()
{
}

bool Aaa::AuthenMethod::has_data() const
{
    for (auto const & leaf : taskmap.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : usergroup.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return authenmethod.is_set
	|| name.is_set;
}

bool Aaa::AuthenMethod::has_operation() const
{
    for (auto const & leaf : taskmap.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : usergroup.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(authenmethod.operation)
	|| is_set(name.operation)
	|| is_set(taskmap.operation)
	|| is_set(usergroup.operation);
}

std::string Aaa::AuthenMethod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authen-method";

    return path_buffer.str();

}

EntityPath Aaa::AuthenMethod::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenmethod.is_set || is_set(authenmethod.operation)) leaf_name_data.push_back(authenmethod.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());

    auto taskmap_name_datas = taskmap.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), taskmap_name_datas.begin(), taskmap_name_datas.end());
    auto usergroup_name_datas = usergroup.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), usergroup_name_datas.begin(), usergroup_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::AuthenMethod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::AuthenMethod::get_children()
{
    return children;
}

void Aaa::AuthenMethod::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authenmethod")
    {
        authenmethod = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "taskmap")
    {
        taskmap.append(value);
    }
    if(value_path == "usergroup")
    {
        usergroup.append(value);
    }
}

Aaa::CurrentUsergroup::CurrentUsergroup()
    :
    	authenmethod{YType::int32, "authenmethod"},
	 name{YType::str, "name"},
	 taskmap{YType::str, "taskmap"},
	 usergroup{YType::str, "usergroup"}
{
    yang_name = "current-usergroup"; yang_parent_name = "aaa";
}

Aaa::CurrentUsergroup::~CurrentUsergroup()
{
}

bool Aaa::CurrentUsergroup::has_data() const
{
    for (auto const & leaf : taskmap.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : usergroup.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return authenmethod.is_set
	|| name.is_set;
}

bool Aaa::CurrentUsergroup::has_operation() const
{
    for (auto const & leaf : taskmap.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : usergroup.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(authenmethod.operation)
	|| is_set(name.operation)
	|| is_set(taskmap.operation)
	|| is_set(usergroup.operation);
}

std::string Aaa::CurrentUsergroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-usergroup";

    return path_buffer.str();

}

EntityPath Aaa::CurrentUsergroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenmethod.is_set || is_set(authenmethod.operation)) leaf_name_data.push_back(authenmethod.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());

    auto taskmap_name_datas = taskmap.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), taskmap_name_datas.begin(), taskmap_name_datas.end());
    auto usergroup_name_datas = usergroup.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), usergroup_name_datas.begin(), usergroup_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::CurrentUsergroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::CurrentUsergroup::get_children()
{
    return children;
}

void Aaa::CurrentUsergroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authenmethod")
    {
        authenmethod = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "taskmap")
    {
        taskmap.append(value);
    }
    if(value_path == "usergroup")
    {
        usergroup.append(value);
    }
}

Aaa::Radius::Servers::Server::Server()
    :
    	aborts{YType::uint32, "aborts"},
	 access_accepts{YType::uint32, "access-accepts"},
	 access_challenges{YType::uint32, "access-challenges"},
	 access_rejects{YType::uint32, "access-rejects"},
	 access_request_retransmits{YType::uint32, "access-request-retransmits"},
	 access_requests{YType::uint32, "access-requests"},
	 access_timeouts{YType::uint32, "access-timeouts"},
	 accounting_port{YType::uint32, "accounting-port"},
	 accounting_requests{YType::uint32, "accounting-requests"},
	 accounting_responses{YType::uint32, "accounting-responses"},
	 accounting_retransmits{YType::uint32, "accounting-retransmits"},
	 accounting_rtt{YType::uint32, "accounting-rtt"},
	 accounting_timeouts{YType::uint32, "accounting-timeouts"},
	 acct_incorrect_responses{YType::uint32, "acct-incorrect-responses"},
	 acct_port_number{YType::uint32, "acct-port-number"},
	 acct_response_time{YType::uint32, "acct-response-time"},
	 acct_server_error_responses{YType::uint32, "acct-server-error-responses"},
	 acct_transaction_failure{YType::uint32, "acct-transaction-failure"},
	 acct_transaction_successess{YType::uint32, "acct-transaction-successess"},
	 acct_unexpected_responses{YType::uint32, "acct-unexpected-responses"},
	 auth_port_number{YType::uint32, "auth-port-number"},
	 authen_incorrect_responses{YType::uint32, "authen-incorrect-responses"},
	 authen_response_time{YType::uint32, "authen-response-time"},
	 authen_server_error_responses{YType::uint32, "authen-server-error-responses"},
	 authen_transaction_failure{YType::uint32, "authen-transaction-failure"},
	 authen_transaction_successess{YType::uint32, "authen-transaction-successess"},
	 authen_unexpected_responses{YType::uint32, "authen-unexpected-responses"},
	 authentication_port{YType::uint32, "authentication-port"},
	 authentication_rtt{YType::uint32, "authentication-rtt"},
	 author_incorrect_responses{YType::uint32, "author-incorrect-responses"},
	 author_request_timeouts{YType::uint32, "author-request-timeouts"},
	 author_requests{YType::uint32, "author-requests"},
	 author_response_time{YType::uint32, "author-response-time"},
	 author_server_error_responses{YType::uint32, "author-server-error-responses"},
	 author_transaction_failure{YType::uint32, "author-transaction-failure"},
	 author_transaction_successess{YType::uint32, "author-transaction-successess"},
	 author_unexpected_responses{YType::uint32, "author-unexpected-responses"},
	 bad_access_authenticators{YType::uint32, "bad-access-authenticators"},
	 bad_access_responses{YType::uint32, "bad-access-responses"},
	 bad_accounting_authenticators{YType::uint32, "bad-accounting-authenticators"},
	 bad_accounting_responses{YType::uint32, "bad-accounting-responses"},
	 current_state_duration{YType::uint32, "current-state-duration"},
	 currently_throttled_access_reqs{YType::uint32, "currently-throttled-access-reqs"},
	 dead_detect_time{YType::uint32, "dead-detect-time"},
	 dead_detect_tries{YType::uint32, "dead-detect-tries"},
	 dead_time{YType::uint32, "dead-time"},
	 dropped_access_responses{YType::uint32, "dropped-access-responses"},
	 dropped_accounting_responses{YType::uint32, "dropped-accounting-responses"},
	 family{YType::str, "family"},
	 group_name{YType::str, "group-name"},
	 ip_address{YType::str, "ip-address"},
	 ip_address_xr{YType::str, "ip-address-xr"},
	 ipv4_address{YType::str, "ipv4-address"},
	 is_a_private_server{YType::boolean, "is-a-private-server"},
	 is_quarantined{YType::boolean, "is-quarantined"},
	 last_deadtime{YType::uint32, "last-deadtime"},
	 max_acct_throttled{YType::uint32, "max-acct-throttled"},
	 max_throttled_access_reqs{YType::uint32, "max-throttled-access-reqs"},
	 packets_in{YType::uint32, "packets-in"},
	 packets_out{YType::uint32, "packets-out"},
	 pending_access_requests{YType::uint32, "pending-access-requests"},
	 pending_accounting_requets{YType::uint32, "pending-accounting-requets"},
	 previous_state_duration{YType::uint32, "previous-state-duration"},
	 priority{YType::uint32, "priority"},
	 redirected_requests{YType::uint32, "redirected-requests"},
	 replies_expected{YType::uint32, "replies-expected"},
	 retransmit{YType::uint32, "retransmit"},
	 state{YType::str, "state"},
	 throttled_access_reqs{YType::uint32, "throttled-access-reqs"},
	 throttled_acct_failures_stats{YType::uint32, "throttled-acct-failures-stats"},
	 throttled_acct_timed_out_stats{YType::uint32, "throttled-acct-timed-out-stats"},
	 throttled_acct_transactions{YType::uint32, "throttled-acct-transactions"},
	 throttled_dropped_reqs{YType::uint32, "throttled-dropped-reqs"},
	 throttled_timed_out_reqs{YType::uint32, "throttled-timed-out-reqs"},
	 throttleda_acct_transactions{YType::uint32, "throttleda-acct-transactions"},
	 timeout_xr{YType::uint32, "timeout-xr"},
	 timeouts{YType::uint32, "timeouts"},
	 total_deadtime{YType::uint32, "total-deadtime"},
	 total_test_acct_pending{YType::uint32, "total-test-acct-pending"},
	 total_test_acct_reqs{YType::uint32, "total-test-acct-reqs"},
	 total_test_acct_response{YType::uint32, "total-test-acct-response"},
	 total_test_acct_timeouts{YType::uint32, "total-test-acct-timeouts"},
	 total_test_auth_pending{YType::uint32, "total-test-auth-pending"},
	 total_test_auth_reqs{YType::uint32, "total-test-auth-reqs"},
	 total_test_auth_response{YType::uint32, "total-test-auth-response"},
	 total_test_auth_timeouts{YType::uint32, "total-test-auth-timeouts"},
	 unknown_access_types{YType::uint32, "unknown-access-types"},
	 unknown_accounting_types{YType::uint32, "unknown-accounting-types"}
{
    yang_name = "server"; yang_parent_name = "servers";
}

Aaa::Radius::Servers::Server::~Server()
{
}

bool Aaa::Radius::Servers::Server::has_data() const
{
    return aborts.is_set
	|| access_accepts.is_set
	|| access_challenges.is_set
	|| access_rejects.is_set
	|| access_request_retransmits.is_set
	|| access_requests.is_set
	|| access_timeouts.is_set
	|| accounting_port.is_set
	|| accounting_requests.is_set
	|| accounting_responses.is_set
	|| accounting_retransmits.is_set
	|| accounting_rtt.is_set
	|| accounting_timeouts.is_set
	|| acct_incorrect_responses.is_set
	|| acct_port_number.is_set
	|| acct_response_time.is_set
	|| acct_server_error_responses.is_set
	|| acct_transaction_failure.is_set
	|| acct_transaction_successess.is_set
	|| acct_unexpected_responses.is_set
	|| auth_port_number.is_set
	|| authen_incorrect_responses.is_set
	|| authen_response_time.is_set
	|| authen_server_error_responses.is_set
	|| authen_transaction_failure.is_set
	|| authen_transaction_successess.is_set
	|| authen_unexpected_responses.is_set
	|| authentication_port.is_set
	|| authentication_rtt.is_set
	|| author_incorrect_responses.is_set
	|| author_request_timeouts.is_set
	|| author_requests.is_set
	|| author_response_time.is_set
	|| author_server_error_responses.is_set
	|| author_transaction_failure.is_set
	|| author_transaction_successess.is_set
	|| author_unexpected_responses.is_set
	|| bad_access_authenticators.is_set
	|| bad_access_responses.is_set
	|| bad_accounting_authenticators.is_set
	|| bad_accounting_responses.is_set
	|| current_state_duration.is_set
	|| currently_throttled_access_reqs.is_set
	|| dead_detect_time.is_set
	|| dead_detect_tries.is_set
	|| dead_time.is_set
	|| dropped_access_responses.is_set
	|| dropped_accounting_responses.is_set
	|| family.is_set
	|| group_name.is_set
	|| ip_address.is_set
	|| ip_address_xr.is_set
	|| ipv4_address.is_set
	|| is_a_private_server.is_set
	|| is_quarantined.is_set
	|| last_deadtime.is_set
	|| max_acct_throttled.is_set
	|| max_throttled_access_reqs.is_set
	|| packets_in.is_set
	|| packets_out.is_set
	|| pending_access_requests.is_set
	|| pending_accounting_requets.is_set
	|| previous_state_duration.is_set
	|| priority.is_set
	|| redirected_requests.is_set
	|| replies_expected.is_set
	|| retransmit.is_set
	|| state.is_set
	|| throttled_access_reqs.is_set
	|| throttled_acct_failures_stats.is_set
	|| throttled_acct_timed_out_stats.is_set
	|| throttled_acct_transactions.is_set
	|| throttled_dropped_reqs.is_set
	|| throttled_timed_out_reqs.is_set
	|| throttleda_acct_transactions.is_set
	|| timeout_xr.is_set
	|| timeouts.is_set
	|| total_deadtime.is_set
	|| total_test_acct_pending.is_set
	|| total_test_acct_reqs.is_set
	|| total_test_acct_response.is_set
	|| total_test_acct_timeouts.is_set
	|| total_test_auth_pending.is_set
	|| total_test_auth_reqs.is_set
	|| total_test_auth_response.is_set
	|| total_test_auth_timeouts.is_set
	|| unknown_access_types.is_set
	|| unknown_accounting_types.is_set;
}

bool Aaa::Radius::Servers::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(aborts.operation)
	|| is_set(access_accepts.operation)
	|| is_set(access_challenges.operation)
	|| is_set(access_rejects.operation)
	|| is_set(access_request_retransmits.operation)
	|| is_set(access_requests.operation)
	|| is_set(access_timeouts.operation)
	|| is_set(accounting_port.operation)
	|| is_set(accounting_requests.operation)
	|| is_set(accounting_responses.operation)
	|| is_set(accounting_retransmits.operation)
	|| is_set(accounting_rtt.operation)
	|| is_set(accounting_timeouts.operation)
	|| is_set(acct_incorrect_responses.operation)
	|| is_set(acct_port_number.operation)
	|| is_set(acct_response_time.operation)
	|| is_set(acct_server_error_responses.operation)
	|| is_set(acct_transaction_failure.operation)
	|| is_set(acct_transaction_successess.operation)
	|| is_set(acct_unexpected_responses.operation)
	|| is_set(auth_port_number.operation)
	|| is_set(authen_incorrect_responses.operation)
	|| is_set(authen_response_time.operation)
	|| is_set(authen_server_error_responses.operation)
	|| is_set(authen_transaction_failure.operation)
	|| is_set(authen_transaction_successess.operation)
	|| is_set(authen_unexpected_responses.operation)
	|| is_set(authentication_port.operation)
	|| is_set(authentication_rtt.operation)
	|| is_set(author_incorrect_responses.operation)
	|| is_set(author_request_timeouts.operation)
	|| is_set(author_requests.operation)
	|| is_set(author_response_time.operation)
	|| is_set(author_server_error_responses.operation)
	|| is_set(author_transaction_failure.operation)
	|| is_set(author_transaction_successess.operation)
	|| is_set(author_unexpected_responses.operation)
	|| is_set(bad_access_authenticators.operation)
	|| is_set(bad_access_responses.operation)
	|| is_set(bad_accounting_authenticators.operation)
	|| is_set(bad_accounting_responses.operation)
	|| is_set(current_state_duration.operation)
	|| is_set(currently_throttled_access_reqs.operation)
	|| is_set(dead_detect_time.operation)
	|| is_set(dead_detect_tries.operation)
	|| is_set(dead_time.operation)
	|| is_set(dropped_access_responses.operation)
	|| is_set(dropped_accounting_responses.operation)
	|| is_set(family.operation)
	|| is_set(group_name.operation)
	|| is_set(ip_address.operation)
	|| is_set(ip_address_xr.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(is_a_private_server.operation)
	|| is_set(is_quarantined.operation)
	|| is_set(last_deadtime.operation)
	|| is_set(max_acct_throttled.operation)
	|| is_set(max_throttled_access_reqs.operation)
	|| is_set(packets_in.operation)
	|| is_set(packets_out.operation)
	|| is_set(pending_access_requests.operation)
	|| is_set(pending_accounting_requets.operation)
	|| is_set(previous_state_duration.operation)
	|| is_set(priority.operation)
	|| is_set(redirected_requests.operation)
	|| is_set(replies_expected.operation)
	|| is_set(retransmit.operation)
	|| is_set(state.operation)
	|| is_set(throttled_access_reqs.operation)
	|| is_set(throttled_acct_failures_stats.operation)
	|| is_set(throttled_acct_timed_out_stats.operation)
	|| is_set(throttled_acct_transactions.operation)
	|| is_set(throttled_dropped_reqs.operation)
	|| is_set(throttled_timed_out_reqs.operation)
	|| is_set(throttleda_acct_transactions.operation)
	|| is_set(timeout_xr.operation)
	|| is_set(timeouts.operation)
	|| is_set(total_deadtime.operation)
	|| is_set(total_test_acct_pending.operation)
	|| is_set(total_test_acct_reqs.operation)
	|| is_set(total_test_acct_response.operation)
	|| is_set(total_test_acct_timeouts.operation)
	|| is_set(total_test_auth_pending.operation)
	|| is_set(total_test_auth_reqs.operation)
	|| is_set(total_test_auth_response.operation)
	|| is_set(total_test_auth_timeouts.operation)
	|| is_set(unknown_access_types.operation)
	|| is_set(unknown_accounting_types.operation);
}

std::string Aaa::Radius::Servers::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

EntityPath Aaa::Radius::Servers::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-protocol-radius-oper:radius/servers/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aborts.is_set || is_set(aborts.operation)) leaf_name_data.push_back(aborts.get_name_leafdata());
    if (access_accepts.is_set || is_set(access_accepts.operation)) leaf_name_data.push_back(access_accepts.get_name_leafdata());
    if (access_challenges.is_set || is_set(access_challenges.operation)) leaf_name_data.push_back(access_challenges.get_name_leafdata());
    if (access_rejects.is_set || is_set(access_rejects.operation)) leaf_name_data.push_back(access_rejects.get_name_leafdata());
    if (access_request_retransmits.is_set || is_set(access_request_retransmits.operation)) leaf_name_data.push_back(access_request_retransmits.get_name_leafdata());
    if (access_requests.is_set || is_set(access_requests.operation)) leaf_name_data.push_back(access_requests.get_name_leafdata());
    if (access_timeouts.is_set || is_set(access_timeouts.operation)) leaf_name_data.push_back(access_timeouts.get_name_leafdata());
    if (accounting_port.is_set || is_set(accounting_port.operation)) leaf_name_data.push_back(accounting_port.get_name_leafdata());
    if (accounting_requests.is_set || is_set(accounting_requests.operation)) leaf_name_data.push_back(accounting_requests.get_name_leafdata());
    if (accounting_responses.is_set || is_set(accounting_responses.operation)) leaf_name_data.push_back(accounting_responses.get_name_leafdata());
    if (accounting_retransmits.is_set || is_set(accounting_retransmits.operation)) leaf_name_data.push_back(accounting_retransmits.get_name_leafdata());
    if (accounting_rtt.is_set || is_set(accounting_rtt.operation)) leaf_name_data.push_back(accounting_rtt.get_name_leafdata());
    if (accounting_timeouts.is_set || is_set(accounting_timeouts.operation)) leaf_name_data.push_back(accounting_timeouts.get_name_leafdata());
    if (acct_incorrect_responses.is_set || is_set(acct_incorrect_responses.operation)) leaf_name_data.push_back(acct_incorrect_responses.get_name_leafdata());
    if (acct_port_number.is_set || is_set(acct_port_number.operation)) leaf_name_data.push_back(acct_port_number.get_name_leafdata());
    if (acct_response_time.is_set || is_set(acct_response_time.operation)) leaf_name_data.push_back(acct_response_time.get_name_leafdata());
    if (acct_server_error_responses.is_set || is_set(acct_server_error_responses.operation)) leaf_name_data.push_back(acct_server_error_responses.get_name_leafdata());
    if (acct_transaction_failure.is_set || is_set(acct_transaction_failure.operation)) leaf_name_data.push_back(acct_transaction_failure.get_name_leafdata());
    if (acct_transaction_successess.is_set || is_set(acct_transaction_successess.operation)) leaf_name_data.push_back(acct_transaction_successess.get_name_leafdata());
    if (acct_unexpected_responses.is_set || is_set(acct_unexpected_responses.operation)) leaf_name_data.push_back(acct_unexpected_responses.get_name_leafdata());
    if (auth_port_number.is_set || is_set(auth_port_number.operation)) leaf_name_data.push_back(auth_port_number.get_name_leafdata());
    if (authen_incorrect_responses.is_set || is_set(authen_incorrect_responses.operation)) leaf_name_data.push_back(authen_incorrect_responses.get_name_leafdata());
    if (authen_response_time.is_set || is_set(authen_response_time.operation)) leaf_name_data.push_back(authen_response_time.get_name_leafdata());
    if (authen_server_error_responses.is_set || is_set(authen_server_error_responses.operation)) leaf_name_data.push_back(authen_server_error_responses.get_name_leafdata());
    if (authen_transaction_failure.is_set || is_set(authen_transaction_failure.operation)) leaf_name_data.push_back(authen_transaction_failure.get_name_leafdata());
    if (authen_transaction_successess.is_set || is_set(authen_transaction_successess.operation)) leaf_name_data.push_back(authen_transaction_successess.get_name_leafdata());
    if (authen_unexpected_responses.is_set || is_set(authen_unexpected_responses.operation)) leaf_name_data.push_back(authen_unexpected_responses.get_name_leafdata());
    if (authentication_port.is_set || is_set(authentication_port.operation)) leaf_name_data.push_back(authentication_port.get_name_leafdata());
    if (authentication_rtt.is_set || is_set(authentication_rtt.operation)) leaf_name_data.push_back(authentication_rtt.get_name_leafdata());
    if (author_incorrect_responses.is_set || is_set(author_incorrect_responses.operation)) leaf_name_data.push_back(author_incorrect_responses.get_name_leafdata());
    if (author_request_timeouts.is_set || is_set(author_request_timeouts.operation)) leaf_name_data.push_back(author_request_timeouts.get_name_leafdata());
    if (author_requests.is_set || is_set(author_requests.operation)) leaf_name_data.push_back(author_requests.get_name_leafdata());
    if (author_response_time.is_set || is_set(author_response_time.operation)) leaf_name_data.push_back(author_response_time.get_name_leafdata());
    if (author_server_error_responses.is_set || is_set(author_server_error_responses.operation)) leaf_name_data.push_back(author_server_error_responses.get_name_leafdata());
    if (author_transaction_failure.is_set || is_set(author_transaction_failure.operation)) leaf_name_data.push_back(author_transaction_failure.get_name_leafdata());
    if (author_transaction_successess.is_set || is_set(author_transaction_successess.operation)) leaf_name_data.push_back(author_transaction_successess.get_name_leafdata());
    if (author_unexpected_responses.is_set || is_set(author_unexpected_responses.operation)) leaf_name_data.push_back(author_unexpected_responses.get_name_leafdata());
    if (bad_access_authenticators.is_set || is_set(bad_access_authenticators.operation)) leaf_name_data.push_back(bad_access_authenticators.get_name_leafdata());
    if (bad_access_responses.is_set || is_set(bad_access_responses.operation)) leaf_name_data.push_back(bad_access_responses.get_name_leafdata());
    if (bad_accounting_authenticators.is_set || is_set(bad_accounting_authenticators.operation)) leaf_name_data.push_back(bad_accounting_authenticators.get_name_leafdata());
    if (bad_accounting_responses.is_set || is_set(bad_accounting_responses.operation)) leaf_name_data.push_back(bad_accounting_responses.get_name_leafdata());
    if (current_state_duration.is_set || is_set(current_state_duration.operation)) leaf_name_data.push_back(current_state_duration.get_name_leafdata());
    if (currently_throttled_access_reqs.is_set || is_set(currently_throttled_access_reqs.operation)) leaf_name_data.push_back(currently_throttled_access_reqs.get_name_leafdata());
    if (dead_detect_time.is_set || is_set(dead_detect_time.operation)) leaf_name_data.push_back(dead_detect_time.get_name_leafdata());
    if (dead_detect_tries.is_set || is_set(dead_detect_tries.operation)) leaf_name_data.push_back(dead_detect_tries.get_name_leafdata());
    if (dead_time.is_set || is_set(dead_time.operation)) leaf_name_data.push_back(dead_time.get_name_leafdata());
    if (dropped_access_responses.is_set || is_set(dropped_access_responses.operation)) leaf_name_data.push_back(dropped_access_responses.get_name_leafdata());
    if (dropped_accounting_responses.is_set || is_set(dropped_accounting_responses.operation)) leaf_name_data.push_back(dropped_accounting_responses.get_name_leafdata());
    if (family.is_set || is_set(family.operation)) leaf_name_data.push_back(family.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_xr.is_set || is_set(ip_address_xr.operation)) leaf_name_data.push_back(ip_address_xr.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (is_a_private_server.is_set || is_set(is_a_private_server.operation)) leaf_name_data.push_back(is_a_private_server.get_name_leafdata());
    if (is_quarantined.is_set || is_set(is_quarantined.operation)) leaf_name_data.push_back(is_quarantined.get_name_leafdata());
    if (last_deadtime.is_set || is_set(last_deadtime.operation)) leaf_name_data.push_back(last_deadtime.get_name_leafdata());
    if (max_acct_throttled.is_set || is_set(max_acct_throttled.operation)) leaf_name_data.push_back(max_acct_throttled.get_name_leafdata());
    if (max_throttled_access_reqs.is_set || is_set(max_throttled_access_reqs.operation)) leaf_name_data.push_back(max_throttled_access_reqs.get_name_leafdata());
    if (packets_in.is_set || is_set(packets_in.operation)) leaf_name_data.push_back(packets_in.get_name_leafdata());
    if (packets_out.is_set || is_set(packets_out.operation)) leaf_name_data.push_back(packets_out.get_name_leafdata());
    if (pending_access_requests.is_set || is_set(pending_access_requests.operation)) leaf_name_data.push_back(pending_access_requests.get_name_leafdata());
    if (pending_accounting_requets.is_set || is_set(pending_accounting_requets.operation)) leaf_name_data.push_back(pending_accounting_requets.get_name_leafdata());
    if (previous_state_duration.is_set || is_set(previous_state_duration.operation)) leaf_name_data.push_back(previous_state_duration.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (redirected_requests.is_set || is_set(redirected_requests.operation)) leaf_name_data.push_back(redirected_requests.get_name_leafdata());
    if (replies_expected.is_set || is_set(replies_expected.operation)) leaf_name_data.push_back(replies_expected.get_name_leafdata());
    if (retransmit.is_set || is_set(retransmit.operation)) leaf_name_data.push_back(retransmit.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (throttled_access_reqs.is_set || is_set(throttled_access_reqs.operation)) leaf_name_data.push_back(throttled_access_reqs.get_name_leafdata());
    if (throttled_acct_failures_stats.is_set || is_set(throttled_acct_failures_stats.operation)) leaf_name_data.push_back(throttled_acct_failures_stats.get_name_leafdata());
    if (throttled_acct_timed_out_stats.is_set || is_set(throttled_acct_timed_out_stats.operation)) leaf_name_data.push_back(throttled_acct_timed_out_stats.get_name_leafdata());
    if (throttled_acct_transactions.is_set || is_set(throttled_acct_transactions.operation)) leaf_name_data.push_back(throttled_acct_transactions.get_name_leafdata());
    if (throttled_dropped_reqs.is_set || is_set(throttled_dropped_reqs.operation)) leaf_name_data.push_back(throttled_dropped_reqs.get_name_leafdata());
    if (throttled_timed_out_reqs.is_set || is_set(throttled_timed_out_reqs.operation)) leaf_name_data.push_back(throttled_timed_out_reqs.get_name_leafdata());
    if (throttleda_acct_transactions.is_set || is_set(throttleda_acct_transactions.operation)) leaf_name_data.push_back(throttleda_acct_transactions.get_name_leafdata());
    if (timeout_xr.is_set || is_set(timeout_xr.operation)) leaf_name_data.push_back(timeout_xr.get_name_leafdata());
    if (timeouts.is_set || is_set(timeouts.operation)) leaf_name_data.push_back(timeouts.get_name_leafdata());
    if (total_deadtime.is_set || is_set(total_deadtime.operation)) leaf_name_data.push_back(total_deadtime.get_name_leafdata());
    if (total_test_acct_pending.is_set || is_set(total_test_acct_pending.operation)) leaf_name_data.push_back(total_test_acct_pending.get_name_leafdata());
    if (total_test_acct_reqs.is_set || is_set(total_test_acct_reqs.operation)) leaf_name_data.push_back(total_test_acct_reqs.get_name_leafdata());
    if (total_test_acct_response.is_set || is_set(total_test_acct_response.operation)) leaf_name_data.push_back(total_test_acct_response.get_name_leafdata());
    if (total_test_acct_timeouts.is_set || is_set(total_test_acct_timeouts.operation)) leaf_name_data.push_back(total_test_acct_timeouts.get_name_leafdata());
    if (total_test_auth_pending.is_set || is_set(total_test_auth_pending.operation)) leaf_name_data.push_back(total_test_auth_pending.get_name_leafdata());
    if (total_test_auth_reqs.is_set || is_set(total_test_auth_reqs.operation)) leaf_name_data.push_back(total_test_auth_reqs.get_name_leafdata());
    if (total_test_auth_response.is_set || is_set(total_test_auth_response.operation)) leaf_name_data.push_back(total_test_auth_response.get_name_leafdata());
    if (total_test_auth_timeouts.is_set || is_set(total_test_auth_timeouts.operation)) leaf_name_data.push_back(total_test_auth_timeouts.get_name_leafdata());
    if (unknown_access_types.is_set || is_set(unknown_access_types.operation)) leaf_name_data.push_back(unknown_access_types.get_name_leafdata());
    if (unknown_accounting_types.is_set || is_set(unknown_accounting_types.operation)) leaf_name_data.push_back(unknown_accounting_types.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::Servers::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Radius::Servers::Server::get_children()
{
    return children;
}

void Aaa::Radius::Servers::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aborts")
    {
        aborts = value;
    }
    if(value_path == "access-accepts")
    {
        access_accepts = value;
    }
    if(value_path == "access-challenges")
    {
        access_challenges = value;
    }
    if(value_path == "access-rejects")
    {
        access_rejects = value;
    }
    if(value_path == "access-request-retransmits")
    {
        access_request_retransmits = value;
    }
    if(value_path == "access-requests")
    {
        access_requests = value;
    }
    if(value_path == "access-timeouts")
    {
        access_timeouts = value;
    }
    if(value_path == "accounting-port")
    {
        accounting_port = value;
    }
    if(value_path == "accounting-requests")
    {
        accounting_requests = value;
    }
    if(value_path == "accounting-responses")
    {
        accounting_responses = value;
    }
    if(value_path == "accounting-retransmits")
    {
        accounting_retransmits = value;
    }
    if(value_path == "accounting-rtt")
    {
        accounting_rtt = value;
    }
    if(value_path == "accounting-timeouts")
    {
        accounting_timeouts = value;
    }
    if(value_path == "acct-incorrect-responses")
    {
        acct_incorrect_responses = value;
    }
    if(value_path == "acct-port-number")
    {
        acct_port_number = value;
    }
    if(value_path == "acct-response-time")
    {
        acct_response_time = value;
    }
    if(value_path == "acct-server-error-responses")
    {
        acct_server_error_responses = value;
    }
    if(value_path == "acct-transaction-failure")
    {
        acct_transaction_failure = value;
    }
    if(value_path == "acct-transaction-successess")
    {
        acct_transaction_successess = value;
    }
    if(value_path == "acct-unexpected-responses")
    {
        acct_unexpected_responses = value;
    }
    if(value_path == "auth-port-number")
    {
        auth_port_number = value;
    }
    if(value_path == "authen-incorrect-responses")
    {
        authen_incorrect_responses = value;
    }
    if(value_path == "authen-response-time")
    {
        authen_response_time = value;
    }
    if(value_path == "authen-server-error-responses")
    {
        authen_server_error_responses = value;
    }
    if(value_path == "authen-transaction-failure")
    {
        authen_transaction_failure = value;
    }
    if(value_path == "authen-transaction-successess")
    {
        authen_transaction_successess = value;
    }
    if(value_path == "authen-unexpected-responses")
    {
        authen_unexpected_responses = value;
    }
    if(value_path == "authentication-port")
    {
        authentication_port = value;
    }
    if(value_path == "authentication-rtt")
    {
        authentication_rtt = value;
    }
    if(value_path == "author-incorrect-responses")
    {
        author_incorrect_responses = value;
    }
    if(value_path == "author-request-timeouts")
    {
        author_request_timeouts = value;
    }
    if(value_path == "author-requests")
    {
        author_requests = value;
    }
    if(value_path == "author-response-time")
    {
        author_response_time = value;
    }
    if(value_path == "author-server-error-responses")
    {
        author_server_error_responses = value;
    }
    if(value_path == "author-transaction-failure")
    {
        author_transaction_failure = value;
    }
    if(value_path == "author-transaction-successess")
    {
        author_transaction_successess = value;
    }
    if(value_path == "author-unexpected-responses")
    {
        author_unexpected_responses = value;
    }
    if(value_path == "bad-access-authenticators")
    {
        bad_access_authenticators = value;
    }
    if(value_path == "bad-access-responses")
    {
        bad_access_responses = value;
    }
    if(value_path == "bad-accounting-authenticators")
    {
        bad_accounting_authenticators = value;
    }
    if(value_path == "bad-accounting-responses")
    {
        bad_accounting_responses = value;
    }
    if(value_path == "current-state-duration")
    {
        current_state_duration = value;
    }
    if(value_path == "currently-throttled-access-reqs")
    {
        currently_throttled_access_reqs = value;
    }
    if(value_path == "dead-detect-time")
    {
        dead_detect_time = value;
    }
    if(value_path == "dead-detect-tries")
    {
        dead_detect_tries = value;
    }
    if(value_path == "dead-time")
    {
        dead_time = value;
    }
    if(value_path == "dropped-access-responses")
    {
        dropped_access_responses = value;
    }
    if(value_path == "dropped-accounting-responses")
    {
        dropped_accounting_responses = value;
    }
    if(value_path == "family")
    {
        family = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "ip-address-xr")
    {
        ip_address_xr = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "is-a-private-server")
    {
        is_a_private_server = value;
    }
    if(value_path == "is-quarantined")
    {
        is_quarantined = value;
    }
    if(value_path == "last-deadtime")
    {
        last_deadtime = value;
    }
    if(value_path == "max-acct-throttled")
    {
        max_acct_throttled = value;
    }
    if(value_path == "max-throttled-access-reqs")
    {
        max_throttled_access_reqs = value;
    }
    if(value_path == "packets-in")
    {
        packets_in = value;
    }
    if(value_path == "packets-out")
    {
        packets_out = value;
    }
    if(value_path == "pending-access-requests")
    {
        pending_access_requests = value;
    }
    if(value_path == "pending-accounting-requets")
    {
        pending_accounting_requets = value;
    }
    if(value_path == "previous-state-duration")
    {
        previous_state_duration = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "redirected-requests")
    {
        redirected_requests = value;
    }
    if(value_path == "replies-expected")
    {
        replies_expected = value;
    }
    if(value_path == "retransmit")
    {
        retransmit = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "throttled-access-reqs")
    {
        throttled_access_reqs = value;
    }
    if(value_path == "throttled-acct-failures-stats")
    {
        throttled_acct_failures_stats = value;
    }
    if(value_path == "throttled-acct-timed-out-stats")
    {
        throttled_acct_timed_out_stats = value;
    }
    if(value_path == "throttled-acct-transactions")
    {
        throttled_acct_transactions = value;
    }
    if(value_path == "throttled-dropped-reqs")
    {
        throttled_dropped_reqs = value;
    }
    if(value_path == "throttled-timed-out-reqs")
    {
        throttled_timed_out_reqs = value;
    }
    if(value_path == "throttleda-acct-transactions")
    {
        throttleda_acct_transactions = value;
    }
    if(value_path == "timeout-xr")
    {
        timeout_xr = value;
    }
    if(value_path == "timeouts")
    {
        timeouts = value;
    }
    if(value_path == "total-deadtime")
    {
        total_deadtime = value;
    }
    if(value_path == "total-test-acct-pending")
    {
        total_test_acct_pending = value;
    }
    if(value_path == "total-test-acct-reqs")
    {
        total_test_acct_reqs = value;
    }
    if(value_path == "total-test-acct-response")
    {
        total_test_acct_response = value;
    }
    if(value_path == "total-test-acct-timeouts")
    {
        total_test_acct_timeouts = value;
    }
    if(value_path == "total-test-auth-pending")
    {
        total_test_auth_pending = value;
    }
    if(value_path == "total-test-auth-reqs")
    {
        total_test_auth_reqs = value;
    }
    if(value_path == "total-test-auth-response")
    {
        total_test_auth_response = value;
    }
    if(value_path == "total-test-auth-timeouts")
    {
        total_test_auth_timeouts = value;
    }
    if(value_path == "unknown-access-types")
    {
        unknown_access_types = value;
    }
    if(value_path == "unknown-accounting-types")
    {
        unknown_accounting_types = value;
    }
}

Aaa::Radius::Servers::Servers()
{
    yang_name = "servers"; yang_parent_name = "radius";
}

Aaa::Radius::Servers::~Servers()
{
}

bool Aaa::Radius::Servers::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Radius::Servers::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Radius::Servers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "servers";

    return path_buffer.str();

}

EntityPath Aaa::Radius::Servers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-protocol-radius-oper:radius/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::Servers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "server")
    {
        for(auto const & c : server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Radius::Servers::Server>();
        c->parent = this;
        server.push_back(std::move(c));
        children[segment_path] = server.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Radius::Servers::get_children()
{
    for (auto const & c : server)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Radius::Servers::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Radius::Global::Global()
    :
    	accounting_nas_id{YType::str, "accounting-nas-id"},
	 authentication_nas_id{YType::str, "authentication-nas-id"},
	 unknown_accounting_response{YType::uint32, "unknown-accounting-response"},
	 unknown_authentication_response{YType::uint32, "unknown-authentication-response"}
{
    yang_name = "global"; yang_parent_name = "radius";
}

Aaa::Radius::Global::~Global()
{
}

bool Aaa::Radius::Global::has_data() const
{
    return accounting_nas_id.is_set
	|| authentication_nas_id.is_set
	|| unknown_accounting_response.is_set
	|| unknown_authentication_response.is_set;
}

bool Aaa::Radius::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(accounting_nas_id.operation)
	|| is_set(authentication_nas_id.operation)
	|| is_set(unknown_accounting_response.operation)
	|| is_set(unknown_authentication_response.operation);
}

std::string Aaa::Radius::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath Aaa::Radius::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-protocol-radius-oper:radius/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting_nas_id.is_set || is_set(accounting_nas_id.operation)) leaf_name_data.push_back(accounting_nas_id.get_name_leafdata());
    if (authentication_nas_id.is_set || is_set(authentication_nas_id.operation)) leaf_name_data.push_back(authentication_nas_id.get_name_leafdata());
    if (unknown_accounting_response.is_set || is_set(unknown_accounting_response.operation)) leaf_name_data.push_back(unknown_accounting_response.get_name_leafdata());
    if (unknown_authentication_response.is_set || is_set(unknown_authentication_response.operation)) leaf_name_data.push_back(unknown_authentication_response.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Radius::Global::get_children()
{
    return children;
}

void Aaa::Radius::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accounting-nas-id")
    {
        accounting_nas_id = value;
    }
    if(value_path == "authentication-nas-id")
    {
        authentication_nas_id = value;
    }
    if(value_path == "unknown-accounting-response")
    {
        unknown_accounting_response = value;
    }
    if(value_path == "unknown-authentication-response")
    {
        unknown_authentication_response = value;
    }
}

Aaa::Radius::Radius()
    :
    global(std::make_unique<Aaa::Radius::Global>())
	,servers(std::make_unique<Aaa::Radius::Servers>())
{
    global->parent = this;
    children["global"] = global.get();

    servers->parent = this;
    children["servers"] = servers.get();

    yang_name = "radius"; yang_parent_name = "aaa";
}

Aaa::Radius::~Radius()
{
}

bool Aaa::Radius::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (servers !=  nullptr && servers->has_data());
}

bool Aaa::Radius::has_operation() const
{
    return is_set(operation)
	|| (global !=  nullptr && global->has_operation())
	|| (servers !=  nullptr && servers->has_operation());
}

std::string Aaa::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-protocol-radius-oper:radius";

    return path_buffer.str();

}

EntityPath Aaa::Radius::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global.get();
        }
        else
        {
            global = std::make_unique<Aaa::Radius::Global>();
            global->parent = this;
            children["global"] = global.get();
        }
        return children.at("global");
    }

    if(child_yang_name == "servers")
    {
        if(servers != nullptr)
        {
            children["servers"] = servers.get();
        }
        else
        {
            servers = std::make_unique<Aaa::Radius::Servers>();
            servers->parent = this;
            children["servers"] = servers.get();
        }
        return children.at("servers");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Radius::get_children()
{
    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global.get();
        }
    }

    if(children.find("servers") == children.end())
    {
        if(servers != nullptr)
        {
            children["servers"] = servers.get();
        }
    }

    return children;
}

void Aaa::Radius::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Tacacs::Requests::Request::TacacsRequestbag::TacacsRequestbag()
    :
    	bytes_in{YType::uint32, "bytes-in"},
	 bytes_out{YType::uint32, "bytes-out"},
	 in_pak_size{YType::uint32, "in-pak-size"},
	 out_pak_size{YType::uint32, "out-pak-size"},
	 pak_type{YType::str, "pak-type"},
	 session_id{YType::int32, "session-id"},
	 sock{YType::int32, "sock"},
	 time_remaining{YType::uint32, "time-remaining"}
{
    yang_name = "tacacs-requestbag"; yang_parent_name = "request";
}

Aaa::Tacacs::Requests::Request::TacacsRequestbag::~TacacsRequestbag()
{
}

bool Aaa::Tacacs::Requests::Request::TacacsRequestbag::has_data() const
{
    return bytes_in.is_set
	|| bytes_out.is_set
	|| in_pak_size.is_set
	|| out_pak_size.is_set
	|| pak_type.is_set
	|| session_id.is_set
	|| sock.is_set
	|| time_remaining.is_set;
}

bool Aaa::Tacacs::Requests::Request::TacacsRequestbag::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes_in.operation)
	|| is_set(bytes_out.operation)
	|| is_set(in_pak_size.operation)
	|| is_set(out_pak_size.operation)
	|| is_set(pak_type.operation)
	|| is_set(session_id.operation)
	|| is_set(sock.operation)
	|| is_set(time_remaining.operation);
}

std::string Aaa::Tacacs::Requests::Request::TacacsRequestbag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacs-requestbag";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::Requests::Request::TacacsRequestbag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-tacacs-oper:tacacs/requests/request/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes_in.is_set || is_set(bytes_in.operation)) leaf_name_data.push_back(bytes_in.get_name_leafdata());
    if (bytes_out.is_set || is_set(bytes_out.operation)) leaf_name_data.push_back(bytes_out.get_name_leafdata());
    if (in_pak_size.is_set || is_set(in_pak_size.operation)) leaf_name_data.push_back(in_pak_size.get_name_leafdata());
    if (out_pak_size.is_set || is_set(out_pak_size.operation)) leaf_name_data.push_back(out_pak_size.get_name_leafdata());
    if (pak_type.is_set || is_set(pak_type.operation)) leaf_name_data.push_back(pak_type.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (sock.is_set || is_set(sock.operation)) leaf_name_data.push_back(sock.get_name_leafdata());
    if (time_remaining.is_set || is_set(time_remaining.operation)) leaf_name_data.push_back(time_remaining.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Tacacs::Requests::Request::TacacsRequestbag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Tacacs::Requests::Request::TacacsRequestbag::get_children()
{
    return children;
}

void Aaa::Tacacs::Requests::Request::TacacsRequestbag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes-in")
    {
        bytes_in = value;
    }
    if(value_path == "bytes-out")
    {
        bytes_out = value;
    }
    if(value_path == "in-pak-size")
    {
        in_pak_size = value;
    }
    if(value_path == "out-pak-size")
    {
        out_pak_size = value;
    }
    if(value_path == "pak-type")
    {
        pak_type = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "sock")
    {
        sock = value;
    }
    if(value_path == "time-remaining")
    {
        time_remaining = value;
    }
}

Aaa::Tacacs::Requests::Request::Request()
{
    yang_name = "request"; yang_parent_name = "requests";
}

Aaa::Tacacs::Requests::Request::~Request()
{
}

bool Aaa::Tacacs::Requests::Request::has_data() const
{
    for (std::size_t index=0; index<tacacs_requestbag.size(); index++)
    {
        if(tacacs_requestbag[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Tacacs::Requests::Request::has_operation() const
{
    for (std::size_t index=0; index<tacacs_requestbag.size(); index++)
    {
        if(tacacs_requestbag[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Tacacs::Requests::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::Requests::Request::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-tacacs-oper:tacacs/requests/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Tacacs::Requests::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tacacs-requestbag")
    {
        for(auto const & c : tacacs_requestbag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Tacacs::Requests::Request::TacacsRequestbag>();
        c->parent = this;
        tacacs_requestbag.push_back(std::move(c));
        children[segment_path] = tacacs_requestbag.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Tacacs::Requests::Request::get_children()
{
    for (auto const & c : tacacs_requestbag)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Tacacs::Requests::Request::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Tacacs::Requests::Requests()
{
    yang_name = "requests"; yang_parent_name = "tacacs";
}

Aaa::Tacacs::Requests::~Requests()
{
}

bool Aaa::Tacacs::Requests::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Tacacs::Requests::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Tacacs::Requests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "requests";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::Requests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-tacacs-oper:tacacs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Tacacs::Requests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "request")
    {
        for(auto const & c : request)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Tacacs::Requests::Request>();
        c->parent = this;
        request.push_back(std::move(c));
        children[segment_path] = request.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Tacacs::Requests::get_children()
{
    for (auto const & c : request)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Tacacs::Requests::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Tacacs::Servers::Server::Server()
    :
    	aborts{YType::uint32, "aborts"},
	 addr{YType::str, "addr"},
	 addr_buf{YType::str, "addr-buf"},
	 bytes_in{YType::uint32, "bytes-in"},
	 bytes_out{YType::uint32, "bytes-out"},
	 closes{YType::uint32, "closes"},
	 conn_up{YType::boolean, "conn-up"},
	 errors{YType::uint32, "errors"},
	 family{YType::str, "family"},
	 is_private{YType::boolean, "is-private"},
	 opens{YType::uint32, "opens"},
	 paks_in{YType::uint32, "paks-in"},
	 paks_out{YType::uint32, "paks-out"},
	 port{YType::uint32, "port"},
	 replies_expected{YType::uint32, "replies-expected"},
	 single_connect{YType::boolean, "single-connect"},
	 timeout{YType::uint32, "timeout"},
	 up{YType::boolean, "up"},
	 vrf_name{YType::str, "vrf-name"}
{
    yang_name = "server"; yang_parent_name = "servers";
}

Aaa::Tacacs::Servers::Server::~Server()
{
}

bool Aaa::Tacacs::Servers::Server::has_data() const
{
    return aborts.is_set
	|| addr.is_set
	|| addr_buf.is_set
	|| bytes_in.is_set
	|| bytes_out.is_set
	|| closes.is_set
	|| conn_up.is_set
	|| errors.is_set
	|| family.is_set
	|| is_private.is_set
	|| opens.is_set
	|| paks_in.is_set
	|| paks_out.is_set
	|| port.is_set
	|| replies_expected.is_set
	|| single_connect.is_set
	|| timeout.is_set
	|| up.is_set
	|| vrf_name.is_set;
}

bool Aaa::Tacacs::Servers::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(aborts.operation)
	|| is_set(addr.operation)
	|| is_set(addr_buf.operation)
	|| is_set(bytes_in.operation)
	|| is_set(bytes_out.operation)
	|| is_set(closes.operation)
	|| is_set(conn_up.operation)
	|| is_set(errors.operation)
	|| is_set(family.operation)
	|| is_set(is_private.operation)
	|| is_set(opens.operation)
	|| is_set(paks_in.operation)
	|| is_set(paks_out.operation)
	|| is_set(port.operation)
	|| is_set(replies_expected.operation)
	|| is_set(single_connect.operation)
	|| is_set(timeout.operation)
	|| is_set(up.operation)
	|| is_set(vrf_name.operation);
}

std::string Aaa::Tacacs::Servers::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::Servers::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-tacacs-oper:tacacs/servers/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aborts.is_set || is_set(aborts.operation)) leaf_name_data.push_back(aborts.get_name_leafdata());
    if (addr.is_set || is_set(addr.operation)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (addr_buf.is_set || is_set(addr_buf.operation)) leaf_name_data.push_back(addr_buf.get_name_leafdata());
    if (bytes_in.is_set || is_set(bytes_in.operation)) leaf_name_data.push_back(bytes_in.get_name_leafdata());
    if (bytes_out.is_set || is_set(bytes_out.operation)) leaf_name_data.push_back(bytes_out.get_name_leafdata());
    if (closes.is_set || is_set(closes.operation)) leaf_name_data.push_back(closes.get_name_leafdata());
    if (conn_up.is_set || is_set(conn_up.operation)) leaf_name_data.push_back(conn_up.get_name_leafdata());
    if (errors.is_set || is_set(errors.operation)) leaf_name_data.push_back(errors.get_name_leafdata());
    if (family.is_set || is_set(family.operation)) leaf_name_data.push_back(family.get_name_leafdata());
    if (is_private.is_set || is_set(is_private.operation)) leaf_name_data.push_back(is_private.get_name_leafdata());
    if (opens.is_set || is_set(opens.operation)) leaf_name_data.push_back(opens.get_name_leafdata());
    if (paks_in.is_set || is_set(paks_in.operation)) leaf_name_data.push_back(paks_in.get_name_leafdata());
    if (paks_out.is_set || is_set(paks_out.operation)) leaf_name_data.push_back(paks_out.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (replies_expected.is_set || is_set(replies_expected.operation)) leaf_name_data.push_back(replies_expected.get_name_leafdata());
    if (single_connect.is_set || is_set(single_connect.operation)) leaf_name_data.push_back(single_connect.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (up.is_set || is_set(up.operation)) leaf_name_data.push_back(up.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Tacacs::Servers::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Tacacs::Servers::Server::get_children()
{
    return children;
}

void Aaa::Tacacs::Servers::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aborts")
    {
        aborts = value;
    }
    if(value_path == "addr")
    {
        addr = value;
    }
    if(value_path == "addr-buf")
    {
        addr_buf = value;
    }
    if(value_path == "bytes-in")
    {
        bytes_in = value;
    }
    if(value_path == "bytes-out")
    {
        bytes_out = value;
    }
    if(value_path == "closes")
    {
        closes = value;
    }
    if(value_path == "conn-up")
    {
        conn_up = value;
    }
    if(value_path == "errors")
    {
        errors = value;
    }
    if(value_path == "family")
    {
        family = value;
    }
    if(value_path == "is-private")
    {
        is_private = value;
    }
    if(value_path == "opens")
    {
        opens = value;
    }
    if(value_path == "paks-in")
    {
        paks_in = value;
    }
    if(value_path == "paks-out")
    {
        paks_out = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "replies-expected")
    {
        replies_expected = value;
    }
    if(value_path == "single-connect")
    {
        single_connect = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "up")
    {
        up = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Aaa::Tacacs::Servers::Servers()
{
    yang_name = "servers"; yang_parent_name = "tacacs";
}

Aaa::Tacacs::Servers::~Servers()
{
}

bool Aaa::Tacacs::Servers::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Tacacs::Servers::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Tacacs::Servers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "servers";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::Servers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-tacacs-oper:tacacs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Tacacs::Servers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "server")
    {
        for(auto const & c : server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Tacacs::Servers::Server>();
        c->parent = this;
        server.push_back(std::move(c));
        children[segment_path] = server.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Tacacs::Servers::get_children()
{
    for (auto const & c : server)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Tacacs::Servers::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Tacacs::ServerGroups::ServerGroup::Server::Server()
    :
    	aborts{YType::uint32, "aborts"},
	 addr{YType::str, "addr"},
	 addr_buf{YType::str, "addr-buf"},
	 bytes_in{YType::uint32, "bytes-in"},
	 bytes_out{YType::uint32, "bytes-out"},
	 closes{YType::uint32, "closes"},
	 conn_up{YType::boolean, "conn-up"},
	 errors{YType::uint32, "errors"},
	 family{YType::str, "family"},
	 is_private{YType::boolean, "is-private"},
	 opens{YType::uint32, "opens"},
	 paks_in{YType::uint32, "paks-in"},
	 paks_out{YType::uint32, "paks-out"},
	 port{YType::uint32, "port"},
	 replies_expected{YType::uint32, "replies-expected"},
	 single_connect{YType::boolean, "single-connect"},
	 timeout{YType::uint32, "timeout"},
	 up{YType::boolean, "up"},
	 vrf_name{YType::str, "vrf-name"}
{
    yang_name = "server"; yang_parent_name = "server-group";
}

Aaa::Tacacs::ServerGroups::ServerGroup::Server::~Server()
{
}

bool Aaa::Tacacs::ServerGroups::ServerGroup::Server::has_data() const
{
    return aborts.is_set
	|| addr.is_set
	|| addr_buf.is_set
	|| bytes_in.is_set
	|| bytes_out.is_set
	|| closes.is_set
	|| conn_up.is_set
	|| errors.is_set
	|| family.is_set
	|| is_private.is_set
	|| opens.is_set
	|| paks_in.is_set
	|| paks_out.is_set
	|| port.is_set
	|| replies_expected.is_set
	|| single_connect.is_set
	|| timeout.is_set
	|| up.is_set
	|| vrf_name.is_set;
}

bool Aaa::Tacacs::ServerGroups::ServerGroup::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(aborts.operation)
	|| is_set(addr.operation)
	|| is_set(addr_buf.operation)
	|| is_set(bytes_in.operation)
	|| is_set(bytes_out.operation)
	|| is_set(closes.operation)
	|| is_set(conn_up.operation)
	|| is_set(errors.operation)
	|| is_set(family.operation)
	|| is_set(is_private.operation)
	|| is_set(opens.operation)
	|| is_set(paks_in.operation)
	|| is_set(paks_out.operation)
	|| is_set(port.operation)
	|| is_set(replies_expected.operation)
	|| is_set(single_connect.operation)
	|| is_set(timeout.operation)
	|| is_set(up.operation)
	|| is_set(vrf_name.operation);
}

std::string Aaa::Tacacs::ServerGroups::ServerGroup::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::ServerGroups::ServerGroup::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-tacacs-oper:tacacs/server-groups/server-group/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aborts.is_set || is_set(aborts.operation)) leaf_name_data.push_back(aborts.get_name_leafdata());
    if (addr.is_set || is_set(addr.operation)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (addr_buf.is_set || is_set(addr_buf.operation)) leaf_name_data.push_back(addr_buf.get_name_leafdata());
    if (bytes_in.is_set || is_set(bytes_in.operation)) leaf_name_data.push_back(bytes_in.get_name_leafdata());
    if (bytes_out.is_set || is_set(bytes_out.operation)) leaf_name_data.push_back(bytes_out.get_name_leafdata());
    if (closes.is_set || is_set(closes.operation)) leaf_name_data.push_back(closes.get_name_leafdata());
    if (conn_up.is_set || is_set(conn_up.operation)) leaf_name_data.push_back(conn_up.get_name_leafdata());
    if (errors.is_set || is_set(errors.operation)) leaf_name_data.push_back(errors.get_name_leafdata());
    if (family.is_set || is_set(family.operation)) leaf_name_data.push_back(family.get_name_leafdata());
    if (is_private.is_set || is_set(is_private.operation)) leaf_name_data.push_back(is_private.get_name_leafdata());
    if (opens.is_set || is_set(opens.operation)) leaf_name_data.push_back(opens.get_name_leafdata());
    if (paks_in.is_set || is_set(paks_in.operation)) leaf_name_data.push_back(paks_in.get_name_leafdata());
    if (paks_out.is_set || is_set(paks_out.operation)) leaf_name_data.push_back(paks_out.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (replies_expected.is_set || is_set(replies_expected.operation)) leaf_name_data.push_back(replies_expected.get_name_leafdata());
    if (single_connect.is_set || is_set(single_connect.operation)) leaf_name_data.push_back(single_connect.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (up.is_set || is_set(up.operation)) leaf_name_data.push_back(up.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Tacacs::ServerGroups::ServerGroup::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Tacacs::ServerGroups::ServerGroup::Server::get_children()
{
    return children;
}

void Aaa::Tacacs::ServerGroups::ServerGroup::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aborts")
    {
        aborts = value;
    }
    if(value_path == "addr")
    {
        addr = value;
    }
    if(value_path == "addr-buf")
    {
        addr_buf = value;
    }
    if(value_path == "bytes-in")
    {
        bytes_in = value;
    }
    if(value_path == "bytes-out")
    {
        bytes_out = value;
    }
    if(value_path == "closes")
    {
        closes = value;
    }
    if(value_path == "conn-up")
    {
        conn_up = value;
    }
    if(value_path == "errors")
    {
        errors = value;
    }
    if(value_path == "family")
    {
        family = value;
    }
    if(value_path == "is-private")
    {
        is_private = value;
    }
    if(value_path == "opens")
    {
        opens = value;
    }
    if(value_path == "paks-in")
    {
        paks_in = value;
    }
    if(value_path == "paks-out")
    {
        paks_out = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "replies-expected")
    {
        replies_expected = value;
    }
    if(value_path == "single-connect")
    {
        single_connect = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "up")
    {
        up = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Aaa::Tacacs::ServerGroups::ServerGroup::ServerGroup()
    :
    	group_name{YType::str, "group-name"},
	 sg_map_num{YType::uint32, "sg-map-num"},
	 vrf_name{YType::str, "vrf-name"}
{
    yang_name = "server-group"; yang_parent_name = "server-groups";
}

Aaa::Tacacs::ServerGroups::ServerGroup::~ServerGroup()
{
}

bool Aaa::Tacacs::ServerGroups::ServerGroup::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return group_name.is_set
	|| sg_map_num.is_set
	|| vrf_name.is_set;
}

bool Aaa::Tacacs::ServerGroups::ServerGroup::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(group_name.operation)
	|| is_set(sg_map_num.operation)
	|| is_set(vrf_name.operation);
}

std::string Aaa::Tacacs::ServerGroups::ServerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-group";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::ServerGroups::ServerGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-tacacs-oper:tacacs/server-groups/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (sg_map_num.is_set || is_set(sg_map_num.operation)) leaf_name_data.push_back(sg_map_num.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Tacacs::ServerGroups::ServerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "server")
    {
        for(auto const & c : server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Tacacs::ServerGroups::ServerGroup::Server>();
        c->parent = this;
        server.push_back(std::move(c));
        children[segment_path] = server.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Tacacs::ServerGroups::ServerGroup::get_children()
{
    for (auto const & c : server)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Tacacs::ServerGroups::ServerGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "sg-map-num")
    {
        sg_map_num = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Aaa::Tacacs::ServerGroups::ServerGroups()
{
    yang_name = "server-groups"; yang_parent_name = "tacacs";
}

Aaa::Tacacs::ServerGroups::~ServerGroups()
{
}

bool Aaa::Tacacs::ServerGroups::has_data() const
{
    for (std::size_t index=0; index<server_group.size(); index++)
    {
        if(server_group[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Tacacs::ServerGroups::has_operation() const
{
    for (std::size_t index=0; index<server_group.size(); index++)
    {
        if(server_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Tacacs::ServerGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-groups";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::ServerGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-tacacs-oper:tacacs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Tacacs::ServerGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "server-group")
    {
        for(auto const & c : server_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Tacacs::ServerGroups::ServerGroup>();
        c->parent = this;
        server_group.push_back(std::move(c));
        children[segment_path] = server_group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Tacacs::ServerGroups::get_children()
{
    for (auto const & c : server_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Tacacs::ServerGroups::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Tacacs::Tacacs()
    :
    requests(std::make_unique<Aaa::Tacacs::Requests>())
	,server_groups(std::make_unique<Aaa::Tacacs::ServerGroups>())
	,servers(std::make_unique<Aaa::Tacacs::Servers>())
{
    requests->parent = this;
    children["requests"] = requests.get();

    server_groups->parent = this;
    children["server-groups"] = server_groups.get();

    servers->parent = this;
    children["servers"] = servers.get();

    yang_name = "tacacs"; yang_parent_name = "aaa";
}

Aaa::Tacacs::~Tacacs()
{
}

bool Aaa::Tacacs::has_data() const
{
    return (requests !=  nullptr && requests->has_data())
	|| (server_groups !=  nullptr && server_groups->has_data())
	|| (servers !=  nullptr && servers->has_data());
}

bool Aaa::Tacacs::has_operation() const
{
    return is_set(operation)
	|| (requests !=  nullptr && requests->has_operation())
	|| (server_groups !=  nullptr && server_groups->has_operation())
	|| (servers !=  nullptr && servers->has_operation());
}

std::string Aaa::Tacacs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-tacacs-oper:tacacs";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Tacacs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "requests")
    {
        if(requests != nullptr)
        {
            children["requests"] = requests.get();
        }
        else
        {
            requests = std::make_unique<Aaa::Tacacs::Requests>();
            requests->parent = this;
            children["requests"] = requests.get();
        }
        return children.at("requests");
    }

    if(child_yang_name == "server-groups")
    {
        if(server_groups != nullptr)
        {
            children["server-groups"] = server_groups.get();
        }
        else
        {
            server_groups = std::make_unique<Aaa::Tacacs::ServerGroups>();
            server_groups->parent = this;
            children["server-groups"] = server_groups.get();
        }
        return children.at("server-groups");
    }

    if(child_yang_name == "servers")
    {
        if(servers != nullptr)
        {
            children["servers"] = servers.get();
        }
        else
        {
            servers = std::make_unique<Aaa::Tacacs::Servers>();
            servers->parent = this;
            children["servers"] = servers.get();
        }
        return children.at("servers");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Tacacs::get_children()
{
    if(children.find("requests") == children.end())
    {
        if(requests != nullptr)
        {
            children["requests"] = requests.get();
        }
    }

    if(children.find("server-groups") == children.end())
    {
        if(server_groups != nullptr)
        {
            children["server-groups"] = server_groups.get();
        }
    }

    if(children.find("servers") == children.end())
    {
        if(servers != nullptr)
        {
            children["servers"] = servers.get();
        }
    }

    return children;
}

void Aaa::Tacacs::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Aaa()
    :
    all_tasks(std::make_unique<Aaa::AllTasks>())
	,authen_method(std::make_unique<Aaa::AuthenMethod>())
	,current_usergroup(std::make_unique<Aaa::CurrentUsergroup>())
	,currentuser_detail(std::make_unique<Aaa::CurrentuserDetail>())
	,radius(std::make_unique<Aaa::Radius>())
	,tacacs(std::make_unique<Aaa::Tacacs>())
	,task_map(std::make_unique<Aaa::TaskMap>())
	,taskgroups(std::make_unique<Aaa::Taskgroups>())
	,usergroups(std::make_unique<Aaa::Usergroups>())
	,users(std::make_unique<Aaa::Users>())
{
    all_tasks->parent = this;
    children["all-tasks"] = all_tasks.get();

    authen_method->parent = this;
    children["authen-method"] = authen_method.get();

    current_usergroup->parent = this;
    children["current-usergroup"] = current_usergroup.get();

    currentuser_detail->parent = this;
    children["currentuser-detail"] = currentuser_detail.get();

    radius->parent = this;
    children["radius"] = radius.get();

    tacacs->parent = this;
    children["tacacs"] = tacacs.get();

    task_map->parent = this;
    children["task-map"] = task_map.get();

    taskgroups->parent = this;
    children["taskgroups"] = taskgroups.get();

    usergroups->parent = this;
    children["usergroups"] = usergroups.get();

    users->parent = this;
    children["users"] = users.get();

    yang_name = "aaa"; yang_parent_name = "Cisco-IOS-XR-aaa-locald-oper";
}

Aaa::~Aaa()
{
}

bool Aaa::has_data() const
{
    return (all_tasks !=  nullptr && all_tasks->has_data())
	|| (authen_method !=  nullptr && authen_method->has_data())
	|| (current_usergroup !=  nullptr && current_usergroup->has_data())
	|| (currentuser_detail !=  nullptr && currentuser_detail->has_data())
	|| (radius !=  nullptr && radius->has_data())
	|| (tacacs !=  nullptr && tacacs->has_data())
	|| (task_map !=  nullptr && task_map->has_data())
	|| (taskgroups !=  nullptr && taskgroups->has_data())
	|| (usergroups !=  nullptr && usergroups->has_data())
	|| (users !=  nullptr && users->has_data());
}

bool Aaa::has_operation() const
{
    return is_set(operation)
	|| (all_tasks !=  nullptr && all_tasks->has_operation())
	|| (authen_method !=  nullptr && authen_method->has_operation())
	|| (current_usergroup !=  nullptr && current_usergroup->has_operation())
	|| (currentuser_detail !=  nullptr && currentuser_detail->has_operation())
	|| (radius !=  nullptr && radius->has_operation())
	|| (tacacs !=  nullptr && tacacs->has_operation())
	|| (task_map !=  nullptr && task_map->has_operation())
	|| (taskgroups !=  nullptr && taskgroups->has_operation())
	|| (usergroups !=  nullptr && usergroups->has_operation())
	|| (users !=  nullptr && users->has_operation());
}

std::string Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa";

    return path_buffer.str();

}

EntityPath Aaa::get_entity_path(Entity* ancestor) const
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

Entity* Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "all-tasks")
    {
        if(all_tasks != nullptr)
        {
            children["all-tasks"] = all_tasks.get();
        }
        else
        {
            all_tasks = std::make_unique<Aaa::AllTasks>();
            all_tasks->parent = this;
            children["all-tasks"] = all_tasks.get();
        }
        return children.at("all-tasks");
    }

    if(child_yang_name == "authen-method")
    {
        if(authen_method != nullptr)
        {
            children["authen-method"] = authen_method.get();
        }
        else
        {
            authen_method = std::make_unique<Aaa::AuthenMethod>();
            authen_method->parent = this;
            children["authen-method"] = authen_method.get();
        }
        return children.at("authen-method");
    }

    if(child_yang_name == "current-usergroup")
    {
        if(current_usergroup != nullptr)
        {
            children["current-usergroup"] = current_usergroup.get();
        }
        else
        {
            current_usergroup = std::make_unique<Aaa::CurrentUsergroup>();
            current_usergroup->parent = this;
            children["current-usergroup"] = current_usergroup.get();
        }
        return children.at("current-usergroup");
    }

    if(child_yang_name == "currentuser-detail")
    {
        if(currentuser_detail != nullptr)
        {
            children["currentuser-detail"] = currentuser_detail.get();
        }
        else
        {
            currentuser_detail = std::make_unique<Aaa::CurrentuserDetail>();
            currentuser_detail->parent = this;
            children["currentuser-detail"] = currentuser_detail.get();
        }
        return children.at("currentuser-detail");
    }

    if(child_yang_name == "radius")
    {
        if(radius != nullptr)
        {
            children["radius"] = radius.get();
        }
        else
        {
            radius = std::make_unique<Aaa::Radius>();
            radius->parent = this;
            children["radius"] = radius.get();
        }
        return children.at("radius");
    }

    if(child_yang_name == "tacacs")
    {
        if(tacacs != nullptr)
        {
            children["tacacs"] = tacacs.get();
        }
        else
        {
            tacacs = std::make_unique<Aaa::Tacacs>();
            tacacs->parent = this;
            children["tacacs"] = tacacs.get();
        }
        return children.at("tacacs");
    }

    if(child_yang_name == "task-map")
    {
        if(task_map != nullptr)
        {
            children["task-map"] = task_map.get();
        }
        else
        {
            task_map = std::make_unique<Aaa::TaskMap>();
            task_map->parent = this;
            children["task-map"] = task_map.get();
        }
        return children.at("task-map");
    }

    if(child_yang_name == "taskgroups")
    {
        if(taskgroups != nullptr)
        {
            children["taskgroups"] = taskgroups.get();
        }
        else
        {
            taskgroups = std::make_unique<Aaa::Taskgroups>();
            taskgroups->parent = this;
            children["taskgroups"] = taskgroups.get();
        }
        return children.at("taskgroups");
    }

    if(child_yang_name == "usergroups")
    {
        if(usergroups != nullptr)
        {
            children["usergroups"] = usergroups.get();
        }
        else
        {
            usergroups = std::make_unique<Aaa::Usergroups>();
            usergroups->parent = this;
            children["usergroups"] = usergroups.get();
        }
        return children.at("usergroups");
    }

    if(child_yang_name == "users")
    {
        if(users != nullptr)
        {
            children["users"] = users.get();
        }
        else
        {
            users = std::make_unique<Aaa::Users>();
            users->parent = this;
            children["users"] = users.get();
        }
        return children.at("users");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::get_children()
{
    if(children.find("all-tasks") == children.end())
    {
        if(all_tasks != nullptr)
        {
            children["all-tasks"] = all_tasks.get();
        }
    }

    if(children.find("authen-method") == children.end())
    {
        if(authen_method != nullptr)
        {
            children["authen-method"] = authen_method.get();
        }
    }

    if(children.find("current-usergroup") == children.end())
    {
        if(current_usergroup != nullptr)
        {
            children["current-usergroup"] = current_usergroup.get();
        }
    }

    if(children.find("currentuser-detail") == children.end())
    {
        if(currentuser_detail != nullptr)
        {
            children["currentuser-detail"] = currentuser_detail.get();
        }
    }

    if(children.find("radius") == children.end())
    {
        if(radius != nullptr)
        {
            children["radius"] = radius.get();
        }
    }

    if(children.find("tacacs") == children.end())
    {
        if(tacacs != nullptr)
        {
            children["tacacs"] = tacacs.get();
        }
    }

    if(children.find("task-map") == children.end())
    {
        if(task_map != nullptr)
        {
            children["task-map"] = task_map.get();
        }
    }

    if(children.find("taskgroups") == children.end())
    {
        if(taskgroups != nullptr)
        {
            children["taskgroups"] = taskgroups.get();
        }
    }

    if(children.find("usergroups") == children.end())
    {
        if(usergroups != nullptr)
        {
            children["usergroups"] = usergroups.get();
        }
    }

    if(children.find("users") == children.end())
    {
        if(users != nullptr)
        {
            children["users"] = users.get();
        }
    }

    return children;
}

void Aaa::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Aaa::clone_ptr()
{
    return std::make_unique<Aaa>();
}


}
}

