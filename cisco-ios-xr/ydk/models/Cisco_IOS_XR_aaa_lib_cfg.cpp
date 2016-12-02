
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_aaa_lib_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_aaa_lib_cfg {

Aaa::Accountings::Accounting::Accounting()
    :
    	listname{YType::str, "listname"},
	 type{YType::str, "type"},
	 broadcast{YType::enumeration, "broadcast"},
	 method{YType::enumeration, "method"},
	 rp_failover{YType::enumeration, "rp-failover"},
	 server_group_name{YType::str, "server-group-name"},
	 type_xr{YType::enumeration, "type-xr"}
{
    yang_name = "accounting"; yang_parent_name = "accountings";
}

Aaa::Accountings::Accounting::~Accounting()
{
}

bool Aaa::Accountings::Accounting::has_data() const
{
    for (auto const & leaf : method.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : server_group_name.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return listname.is_set
	|| type.is_set
	|| broadcast.is_set
	|| rp_failover.is_set
	|| type_xr.is_set;
}

bool Aaa::Accountings::Accounting::has_operation() const
{
    for (auto const & leaf : method.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : server_group_name.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(listname.operation)
	|| is_set(type.operation)
	|| is_set(broadcast.operation)
	|| is_set(rp_failover.operation)
	|| is_set(type_xr.operation);
}

std::string Aaa::Accountings::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting" <<"[listname='" <<listname.get() <<"']" <<"[type='" <<type.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Accountings::Accounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/accountings/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (listname.is_set || is_set(listname.operation)) leaf_name_data.push_back(listname.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (rp_failover.is_set || is_set(rp_failover.operation)) leaf_name_data.push_back(rp_failover.get_name_leafdata());
    if (type_xr.is_set || is_set(type_xr.operation)) leaf_name_data.push_back(type_xr.get_name_leafdata());

    auto method_name_datas = method.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), method_name_datas.begin(), method_name_datas.end());
    auto server_group_name_name_datas = server_group_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), server_group_name_name_datas.begin(), server_group_name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Accountings::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Accountings::Accounting::get_children()
{
    return children;
}

void Aaa::Accountings::Accounting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "listname")
    {
        listname = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "method")
    {
        method.append(value);
    }
    if(value_path == "rp-failover")
    {
        rp_failover = value;
    }
    if(value_path == "server-group-name")
    {
        server_group_name.append(value);
    }
    if(value_path == "type-xr")
    {
        type_xr = value;
    }
}

Aaa::Accountings::Accountings()
{
    yang_name = "accountings"; yang_parent_name = "aaa";
}

Aaa::Accountings::~Accountings()
{
}

bool Aaa::Accountings::has_data() const
{
    for (std::size_t index=0; index<accounting.size(); index++)
    {
        if(accounting[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Accountings::has_operation() const
{
    for (std::size_t index=0; index<accounting.size(); index++)
    {
        if(accounting[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Accountings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accountings";

    return path_buffer.str();

}

EntityPath Aaa::Accountings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Accountings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accounting")
    {
        for(auto const & c : accounting)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Accountings::Accounting>();
        c->parent = this;
        accounting.push_back(std::move(c));
        children[segment_path] = accounting.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Accountings::get_children()
{
    for (auto const & c : accounting)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Accountings::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Authorizations::Authorization::Authorization()
    :
    	listname{YType::str, "listname"},
	 type{YType::str, "type"},
	 method{YType::enumeration, "method"},
	 server_group_name{YType::str, "server-group-name"}
{
    yang_name = "authorization"; yang_parent_name = "authorizations";
}

Aaa::Authorizations::Authorization::~Authorization()
{
}

bool Aaa::Authorizations::Authorization::has_data() const
{
    for (auto const & leaf : method.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : server_group_name.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return listname.is_set
	|| type.is_set;
}

bool Aaa::Authorizations::Authorization::has_operation() const
{
    for (auto const & leaf : method.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : server_group_name.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(listname.operation)
	|| is_set(type.operation);
}

std::string Aaa::Authorizations::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization" <<"[listname='" <<listname.get() <<"']" <<"[type='" <<type.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Authorizations::Authorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/authorizations/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (listname.is_set || is_set(listname.operation)) leaf_name_data.push_back(listname.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());

    auto method_name_datas = method.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), method_name_datas.begin(), method_name_datas.end());
    auto server_group_name_name_datas = server_group_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), server_group_name_name_datas.begin(), server_group_name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Authorizations::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Authorizations::Authorization::get_children()
{
    return children;
}

void Aaa::Authorizations::Authorization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "listname")
    {
        listname = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "method")
    {
        method.append(value);
    }
    if(value_path == "server-group-name")
    {
        server_group_name.append(value);
    }
}

Aaa::Authorizations::Authorizations()
{
    yang_name = "authorizations"; yang_parent_name = "aaa";
}

Aaa::Authorizations::~Authorizations()
{
}

bool Aaa::Authorizations::has_data() const
{
    for (std::size_t index=0; index<authorization.size(); index++)
    {
        if(authorization[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Authorizations::has_operation() const
{
    for (std::size_t index=0; index<authorization.size(); index++)
    {
        if(authorization[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Authorizations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorizations";

    return path_buffer.str();

}

EntityPath Aaa::Authorizations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Authorizations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authorization")
    {
        for(auto const & c : authorization)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Authorizations::Authorization>();
        c->parent = this;
        authorization.push_back(std::move(c));
        children[segment_path] = authorization.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Authorizations::get_children()
{
    for (auto const & c : authorization)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Authorizations::set_value(const std::string & value_path, std::string value)
{
}

Aaa::AccountingUpdate::AccountingUpdate()
    :
    	periodic_interval{YType::uint32, "periodic-interval"},
	 type{YType::enumeration, "type"}
{
    yang_name = "accounting-update"; yang_parent_name = "aaa";
}

Aaa::AccountingUpdate::~AccountingUpdate()
{
}

bool Aaa::AccountingUpdate::has_data() const
{
    return periodic_interval.is_set
	|| type.is_set;
}

bool Aaa::AccountingUpdate::has_operation() const
{
    return is_set(operation)
	|| is_set(periodic_interval.operation)
	|| is_set(type.operation);
}

std::string Aaa::AccountingUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting-update";

    return path_buffer.str();

}

EntityPath Aaa::AccountingUpdate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (periodic_interval.is_set || is_set(periodic_interval.operation)) leaf_name_data.push_back(periodic_interval.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::AccountingUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::AccountingUpdate::get_children()
{
    return children;
}

void Aaa::AccountingUpdate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "periodic-interval")
    {
        periodic_interval = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Aaa::Authentications::Authentication::Authentication()
    :
    	listname{YType::str, "listname"},
	 type{YType::str, "type"},
	 method{YType::enumeration, "method"},
	 server_group_name{YType::str, "server-group-name"}
{
    yang_name = "authentication"; yang_parent_name = "authentications";
}

Aaa::Authentications::Authentication::~Authentication()
{
}

bool Aaa::Authentications::Authentication::has_data() const
{
    for (auto const & leaf : method.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : server_group_name.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return listname.is_set
	|| type.is_set;
}

bool Aaa::Authentications::Authentication::has_operation() const
{
    for (auto const & leaf : method.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : server_group_name.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(listname.operation)
	|| is_set(type.operation);
}

std::string Aaa::Authentications::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication" <<"[listname='" <<listname.get() <<"']" <<"[type='" <<type.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Authentications::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/authentications/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (listname.is_set || is_set(listname.operation)) leaf_name_data.push_back(listname.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());

    auto method_name_datas = method.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), method_name_datas.begin(), method_name_datas.end());
    auto server_group_name_name_datas = server_group_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), server_group_name_name_datas.begin(), server_group_name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Authentications::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Authentications::Authentication::get_children()
{
    return children;
}

void Aaa::Authentications::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "listname")
    {
        listname = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "method")
    {
        method.append(value);
    }
    if(value_path == "server-group-name")
    {
        server_group_name.append(value);
    }
}

Aaa::Authentications::Authentications()
{
    yang_name = "authentications"; yang_parent_name = "aaa";
}

Aaa::Authentications::~Authentications()
{
}

bool Aaa::Authentications::has_data() const
{
    for (std::size_t index=0; index<authentication.size(); index++)
    {
        if(authentication[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Authentications::has_operation() const
{
    for (std::size_t index=0; index<authentication.size(); index++)
    {
        if(authentication[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Authentications::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentications";

    return path_buffer.str();

}

EntityPath Aaa::Authentications::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Authentications::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication")
    {
        for(auto const & c : authentication)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Authentications::Authentication>();
        c->parent = this;
        authentication.push_back(std::move(c));
        children[segment_path] = authentication.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Authentications::get_children()
{
    for (auto const & c : authentication)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Authentications::set_value(const std::string & value_path, std::string value)
{
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request::Request()
    :
    	action{YType::enumeration, "action"},
	 attribute_list_name{YType::str, "attribute-list-name"}
{
    yang_name = "request"; yang_parent_name = "accounting";
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request::~Request()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request::has_data() const
{
    return action.is_set
	|| attribute_list_name.is_set;
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request::has_operation() const
{
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(attribute_list_name.operation);
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request::get_entity_path(Entity* ancestor) const
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

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (attribute_list_name.is_set || is_set(attribute_list_name.operation)) leaf_name_data.push_back(attribute_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request::get_children()
{
    return children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "attribute-list-name")
    {
        attribute_list_name = value;
    }
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply::Reply()
    :
    	action{YType::enumeration, "action"},
	 attribute_list_name{YType::str, "attribute-list-name"}
{
    yang_name = "reply"; yang_parent_name = "accounting";
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply::~Reply()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply::has_data() const
{
    return action.is_set
	|| attribute_list_name.is_set;
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply::has_operation() const
{
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(attribute_list_name.operation);
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reply";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply::get_entity_path(Entity* ancestor) const
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

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (attribute_list_name.is_set || is_set(attribute_list_name.operation)) leaf_name_data.push_back(attribute_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply::get_children()
{
    return children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "attribute-list-name")
    {
        attribute_list_name = value;
    }
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Accounting()
    :
    reply(std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply>())
	,request(std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request>())
{
    reply->parent = this;
    children["reply"] = reply.get();

    request->parent = this;
    children["request"] = request.get();

    yang_name = "accounting"; yang_parent_name = "radius-server-group";
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::~Accounting()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::has_data() const
{
    return (reply !=  nullptr && reply->has_data())
	|| (request !=  nullptr && request->has_data());
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::has_operation() const
{
    return is_set(operation)
	|| (reply !=  nullptr && is_set(reply->operation))
	|| (request !=  nullptr && is_set(request->operation));
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::get_entity_path(Entity* ancestor) const
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

Entity* Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "reply")
    {
        if(reply != nullptr)
        {
            children["reply"] = reply.get();
        }
        else
        {
            reply = std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply>();
            reply->parent = this;
            children["reply"] = reply.get();
        }
        return children.at("reply");
    }

    if(child_yang_name == "request")
    {
        if(request != nullptr)
        {
            children["request"] = request.get();
        }
        else
        {
            request = std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request>();
            request->parent = this;
            children["request"] = request.get();
        }
        return children.at("request");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::get_children()
{
    if(children.find("reply") == children.end())
    {
        if(reply != nullptr)
        {
            children["reply"] = reply.get();
        }
    }

    if(children.find("request") == children.end())
    {
        if(request != nullptr)
        {
            children["request"] = request.get();
        }
    }

    return children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::set_value(const std::string & value_path, std::string value)
{
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server::Server()
    :
    	acct_port_number{YType::uint16, "acct-port-number"},
	 auth_port_number{YType::uint16, "auth-port-number"},
	 ip_address{YType::str, "ip-address"},
	 ordering_index{YType::int32, "ordering-index"}
{
    yang_name = "server"; yang_parent_name = "servers";
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server::~Server()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server::has_data() const
{
    return acct_port_number.is_set
	|| auth_port_number.is_set
	|| ip_address.is_set
	|| ordering_index.is_set;
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(acct_port_number.operation)
	|| is_set(auth_port_number.operation)
	|| is_set(ip_address.operation)
	|| is_set(ordering_index.operation);
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server" <<"[acct-port-number='" <<acct_port_number.get() <<"']" <<"[auth-port-number='" <<auth_port_number.get() <<"']" <<"[ip-address='" <<ip_address.get() <<"']" <<"[ordering-index='" <<ordering_index.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server::get_entity_path(Entity* ancestor) const
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

    if (acct_port_number.is_set || is_set(acct_port_number.operation)) leaf_name_data.push_back(acct_port_number.get_name_leafdata());
    if (auth_port_number.is_set || is_set(auth_port_number.operation)) leaf_name_data.push_back(auth_port_number.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ordering_index.is_set || is_set(ordering_index.operation)) leaf_name_data.push_back(ordering_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server::get_children()
{
    return children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acct-port-number")
    {
        acct_port_number = value;
    }
    if(value_path == "auth-port-number")
    {
        auth_port_number = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "ordering-index")
    {
        ordering_index = value;
    }
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Servers()
{
    yang_name = "servers"; yang_parent_name = "radius-server-group";
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::~Servers()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "servers";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::get_entity_path(Entity* ancestor) const
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

Entity* Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server>();
        c->parent = this;
        server.push_back(std::move(c));
        children[segment_path] = server.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::get_children()
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

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::set_value(const std::string & value_path, std::string value)
{
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer::PrivateServer()
    :
    	acct_port_number{YType::uint16, "acct-port-number"},
	 auth_port_number{YType::uint16, "auth-port-number"},
	 ip_address{YType::str, "ip-address"},
	 ordering_index{YType::int32, "ordering-index"},
	 idle_time{YType::uint32, "idle-time"},
	 ignore_accounting_port{YType::boolean, "ignore-accounting-port"},
	 ignore_auth_port{YType::boolean, "ignore-auth-port"},
	 private_key{YType::str, "private-key"},
	 private_retransmit{YType::uint32, "private-retransmit"},
	 private_timeout{YType::uint32, "private-timeout"},
	 username{YType::str, "username"}
{
    yang_name = "private-server"; yang_parent_name = "private-servers";
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer::~PrivateServer()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer::has_data() const
{
    return acct_port_number.is_set
	|| auth_port_number.is_set
	|| ip_address.is_set
	|| ordering_index.is_set
	|| idle_time.is_set
	|| ignore_accounting_port.is_set
	|| ignore_auth_port.is_set
	|| private_key.is_set
	|| private_retransmit.is_set
	|| private_timeout.is_set
	|| username.is_set;
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer::has_operation() const
{
    return is_set(operation)
	|| is_set(acct_port_number.operation)
	|| is_set(auth_port_number.operation)
	|| is_set(ip_address.operation)
	|| is_set(ordering_index.operation)
	|| is_set(idle_time.operation)
	|| is_set(ignore_accounting_port.operation)
	|| is_set(ignore_auth_port.operation)
	|| is_set(private_key.operation)
	|| is_set(private_retransmit.operation)
	|| is_set(private_timeout.operation)
	|| is_set(username.operation);
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-server" <<"[acct-port-number='" <<acct_port_number.get() <<"']" <<"[auth-port-number='" <<auth_port_number.get() <<"']" <<"[ip-address='" <<ip_address.get() <<"']" <<"[ordering-index='" <<ordering_index.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer::get_entity_path(Entity* ancestor) const
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

    if (acct_port_number.is_set || is_set(acct_port_number.operation)) leaf_name_data.push_back(acct_port_number.get_name_leafdata());
    if (auth_port_number.is_set || is_set(auth_port_number.operation)) leaf_name_data.push_back(auth_port_number.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ordering_index.is_set || is_set(ordering_index.operation)) leaf_name_data.push_back(ordering_index.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.operation)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (ignore_accounting_port.is_set || is_set(ignore_accounting_port.operation)) leaf_name_data.push_back(ignore_accounting_port.get_name_leafdata());
    if (ignore_auth_port.is_set || is_set(ignore_auth_port.operation)) leaf_name_data.push_back(ignore_auth_port.get_name_leafdata());
    if (private_key.is_set || is_set(private_key.operation)) leaf_name_data.push_back(private_key.get_name_leafdata());
    if (private_retransmit.is_set || is_set(private_retransmit.operation)) leaf_name_data.push_back(private_retransmit.get_name_leafdata());
    if (private_timeout.is_set || is_set(private_timeout.operation)) leaf_name_data.push_back(private_timeout.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer::get_children()
{
    return children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acct-port-number")
    {
        acct_port_number = value;
    }
    if(value_path == "auth-port-number")
    {
        auth_port_number = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "ordering-index")
    {
        ordering_index = value;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
    }
    if(value_path == "ignore-accounting-port")
    {
        ignore_accounting_port = value;
    }
    if(value_path == "ignore-auth-port")
    {
        ignore_auth_port = value;
    }
    if(value_path == "private-key")
    {
        private_key = value;
    }
    if(value_path == "private-retransmit")
    {
        private_retransmit = value;
    }
    if(value_path == "private-timeout")
    {
        private_timeout = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServers()
{
    yang_name = "private-servers"; yang_parent_name = "radius-server-group";
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::~PrivateServers()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::has_data() const
{
    for (std::size_t index=0; index<private_server.size(); index++)
    {
        if(private_server[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::has_operation() const
{
    for (std::size_t index=0; index<private_server.size(); index++)
    {
        if(private_server[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-servers";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::get_entity_path(Entity* ancestor) const
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

Entity* Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "private-server")
    {
        for(auto const & c : private_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer>();
        c->parent = this;
        private_server.push_back(std::move(c));
        children[segment_path] = private_server.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::get_children()
{
    for (auto const & c : private_server)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::set_value(const std::string & value_path, std::string value)
{
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle::ServerGroupThrottle()
    :
    	access{YType::uint32, "access"},
	 access_timeout{YType::uint32, "access-timeout"},
	 accounting{YType::uint32, "accounting"}
{
    yang_name = "server-group-throttle"; yang_parent_name = "radius-server-group";
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle::~ServerGroupThrottle()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle::has_data() const
{
    return access.is_set
	|| access_timeout.is_set
	|| accounting.is_set;
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle::has_operation() const
{
    return is_set(operation)
	|| is_set(access.operation)
	|| is_set(access_timeout.operation)
	|| is_set(accounting.operation);
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-group-throttle";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle::get_entity_path(Entity* ancestor) const
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

    if (access.is_set || is_set(access.operation)) leaf_name_data.push_back(access.get_name_leafdata());
    if (access_timeout.is_set || is_set(access_timeout.operation)) leaf_name_data.push_back(access_timeout.get_name_leafdata());
    if (accounting.is_set || is_set(accounting.operation)) leaf_name_data.push_back(accounting.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle::get_children()
{
    return children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access")
    {
        access = value;
    }
    if(value_path == "access-timeout")
    {
        access_timeout = value;
    }
    if(value_path == "accounting")
    {
        accounting = value;
    }
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name::Name()
    :
    	batch_size{YType::uint32, "batch-size"},
	 ignore_preferred_server{YType::int32, "ignore-preferred-server"},
	 least_outstanding{YType::int32, "least-outstanding"}
{
    yang_name = "name"; yang_parent_name = "method";
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name::~Name()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name::has_data() const
{
    return batch_size.is_set
	|| ignore_preferred_server.is_set
	|| least_outstanding.is_set;
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name::has_operation() const
{
    return is_set(operation)
	|| is_set(batch_size.operation)
	|| is_set(ignore_preferred_server.operation)
	|| is_set(least_outstanding.operation);
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name::get_entity_path(Entity* ancestor) const
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

    if (batch_size.is_set || is_set(batch_size.operation)) leaf_name_data.push_back(batch_size.get_name_leafdata());
    if (ignore_preferred_server.is_set || is_set(ignore_preferred_server.operation)) leaf_name_data.push_back(ignore_preferred_server.get_name_leafdata());
    if (least_outstanding.is_set || is_set(least_outstanding.operation)) leaf_name_data.push_back(least_outstanding.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name::get_children()
{
    return children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "batch-size")
    {
        batch_size = value;
    }
    if(value_path == "ignore-preferred-server")
    {
        ignore_preferred_server = value;
    }
    if(value_path == "least-outstanding")
    {
        least_outstanding = value;
    }
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Method()
    :
    name(std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name>())
{
    name->parent = this;
    children["name"] = name.get();

    yang_name = "method"; yang_parent_name = "load-balance";
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::~Method()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::has_data() const
{
    return (name !=  nullptr && name->has_data());
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::has_operation() const
{
    return is_set(operation)
	|| (name !=  nullptr && is_set(name->operation));
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::get_entity_path(Entity* ancestor) const
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

Entity* Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "name")
    {
        if(name != nullptr)
        {
            children["name"] = name.get();
        }
        else
        {
            name = std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name>();
            name->parent = this;
            children["name"] = name.get();
        }
        return children.at("name");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::get_children()
{
    if(children.find("name") == children.end())
    {
        if(name != nullptr)
        {
            children["name"] = name.get();
        }
    }

    return children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::set_value(const std::string & value_path, std::string value)
{
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::LoadBalance()
    :
    method(std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method>())
{
    method->parent = this;
    children["method"] = method.get();

    yang_name = "load-balance"; yang_parent_name = "radius-server-group";
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::~LoadBalance()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::has_data() const
{
    return (method !=  nullptr && method->has_data());
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::has_operation() const
{
    return is_set(operation)
	|| (method !=  nullptr && is_set(method->operation));
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::get_entity_path(Entity* ancestor) const
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

Entity* Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "method")
    {
        if(method != nullptr)
        {
            children["method"] = method.get();
        }
        else
        {
            method = std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method>();
            method->parent = this;
            children["method"] = method.get();
        }
        return children.at("method");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::get_children()
{
    if(children.find("method") == children.end())
    {
        if(method != nullptr)
        {
            children["method"] = method.get();
        }
    }

    return children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::set_value(const std::string & value_path, std::string value)
{
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request::Request()
    :
    	action{YType::enumeration, "action"},
	 attribute_list_name{YType::str, "attribute-list-name"}
{
    yang_name = "request"; yang_parent_name = "authorization";
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request::~Request()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request::has_data() const
{
    return action.is_set
	|| attribute_list_name.is_set;
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request::has_operation() const
{
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(attribute_list_name.operation);
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request::get_entity_path(Entity* ancestor) const
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

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (attribute_list_name.is_set || is_set(attribute_list_name.operation)) leaf_name_data.push_back(attribute_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request::get_children()
{
    return children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "attribute-list-name")
    {
        attribute_list_name = value;
    }
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply::Reply()
    :
    	action{YType::enumeration, "action"},
	 attribute_list_name{YType::str, "attribute-list-name"}
{
    yang_name = "reply"; yang_parent_name = "authorization";
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply::~Reply()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply::has_data() const
{
    return action.is_set
	|| attribute_list_name.is_set;
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply::has_operation() const
{
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(attribute_list_name.operation);
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reply";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply::get_entity_path(Entity* ancestor) const
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

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (attribute_list_name.is_set || is_set(attribute_list_name.operation)) leaf_name_data.push_back(attribute_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply::get_children()
{
    return children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "attribute-list-name")
    {
        attribute_list_name = value;
    }
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Authorization()
    :
    reply(std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply>())
	,request(std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request>())
{
    reply->parent = this;
    children["reply"] = reply.get();

    request->parent = this;
    children["request"] = request.get();

    yang_name = "authorization"; yang_parent_name = "radius-server-group";
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::~Authorization()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::has_data() const
{
    return (reply !=  nullptr && reply->has_data())
	|| (request !=  nullptr && request->has_data());
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::has_operation() const
{
    return is_set(operation)
	|| (reply !=  nullptr && is_set(reply->operation))
	|| (request !=  nullptr && is_set(request->operation));
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::get_entity_path(Entity* ancestor) const
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

Entity* Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "reply")
    {
        if(reply != nullptr)
        {
            children["reply"] = reply.get();
        }
        else
        {
            reply = std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply>();
            reply->parent = this;
            children["reply"] = reply.get();
        }
        return children.at("reply");
    }

    if(child_yang_name == "request")
    {
        if(request != nullptr)
        {
            children["request"] = request.get();
        }
        else
        {
            request = std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request>();
            request->parent = this;
            children["request"] = request.get();
        }
        return children.at("request");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::get_children()
{
    if(children.find("reply") == children.end())
    {
        if(reply != nullptr)
        {
            children["reply"] = reply.get();
        }
    }

    if(children.find("request") == children.end())
    {
        if(request != nullptr)
        {
            children["request"] = request.get();
        }
    }

    return children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::set_value(const std::string & value_path, std::string value)
{
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::RadiusServerGroup()
    :
    	server_group_name{YType::str, "server-group-name"},
	 dead_time{YType::uint32, "dead-time"},
	 source_interface{YType::str, "source-interface"},
	 vrf{YType::str, "vrf"}
    	,
    accounting(std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting>())
	,authorization(std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization>())
	,load_balance(std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance>())
	,private_servers(std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers>())
	,server_group_throttle(std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle>())
	,servers(std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers>())
{
    accounting->parent = this;
    children["accounting"] = accounting.get();

    authorization->parent = this;
    children["authorization"] = authorization.get();

    load_balance->parent = this;
    children["load-balance"] = load_balance.get();

    private_servers->parent = this;
    children["private-servers"] = private_servers.get();

    server_group_throttle->parent = this;
    children["server-group-throttle"] = server_group_throttle.get();

    servers->parent = this;
    children["servers"] = servers.get();

    yang_name = "radius-server-group"; yang_parent_name = "radius-server-groups";
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::~RadiusServerGroup()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::has_data() const
{
    return server_group_name.is_set
	|| dead_time.is_set
	|| source_interface.is_set
	|| vrf.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (load_balance !=  nullptr && load_balance->has_data())
	|| (private_servers !=  nullptr && private_servers->has_data())
	|| (server_group_throttle !=  nullptr && server_group_throttle->has_data())
	|| (servers !=  nullptr && servers->has_data());
}

bool Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(server_group_name.operation)
	|| is_set(dead_time.operation)
	|| is_set(source_interface.operation)
	|| is_set(vrf.operation)
	|| (accounting !=  nullptr && is_set(accounting->operation))
	|| (authorization !=  nullptr && is_set(authorization->operation))
	|| (load_balance !=  nullptr && is_set(load_balance->operation))
	|| (private_servers !=  nullptr && is_set(private_servers->operation))
	|| (server_group_throttle !=  nullptr && is_set(server_group_throttle->operation))
	|| (servers !=  nullptr && is_set(servers->operation));
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius-server-group" <<"[server-group-name='" <<server_group_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-locald-cfg:server-groups/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius-server-groups/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_group_name.is_set || is_set(server_group_name.operation)) leaf_name_data.push_back(server_group_name.get_name_leafdata());
    if (dead_time.is_set || is_set(dead_time.operation)) leaf_name_data.push_back(dead_time.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accounting")
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting.get();
        }
        else
        {
            accounting = std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting>();
            accounting->parent = this;
            children["accounting"] = accounting.get();
        }
        return children.at("accounting");
    }

    if(child_yang_name == "authorization")
    {
        if(authorization != nullptr)
        {
            children["authorization"] = authorization.get();
        }
        else
        {
            authorization = std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization>();
            authorization->parent = this;
            children["authorization"] = authorization.get();
        }
        return children.at("authorization");
    }

    if(child_yang_name == "load-balance")
    {
        if(load_balance != nullptr)
        {
            children["load-balance"] = load_balance.get();
        }
        else
        {
            load_balance = std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance>();
            load_balance->parent = this;
            children["load-balance"] = load_balance.get();
        }
        return children.at("load-balance");
    }

    if(child_yang_name == "private-servers")
    {
        if(private_servers != nullptr)
        {
            children["private-servers"] = private_servers.get();
        }
        else
        {
            private_servers = std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers>();
            private_servers->parent = this;
            children["private-servers"] = private_servers.get();
        }
        return children.at("private-servers");
    }

    if(child_yang_name == "server-group-throttle")
    {
        if(server_group_throttle != nullptr)
        {
            children["server-group-throttle"] = server_group_throttle.get();
        }
        else
        {
            server_group_throttle = std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle>();
            server_group_throttle->parent = this;
            children["server-group-throttle"] = server_group_throttle.get();
        }
        return children.at("server-group-throttle");
    }

    if(child_yang_name == "servers")
    {
        if(servers != nullptr)
        {
            children["servers"] = servers.get();
        }
        else
        {
            servers = std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers>();
            servers->parent = this;
            children["servers"] = servers.get();
        }
        return children.at("servers");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::get_children()
{
    if(children.find("accounting") == children.end())
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting.get();
        }
    }

    if(children.find("authorization") == children.end())
    {
        if(authorization != nullptr)
        {
            children["authorization"] = authorization.get();
        }
    }

    if(children.find("load-balance") == children.end())
    {
        if(load_balance != nullptr)
        {
            children["load-balance"] = load_balance.get();
        }
    }

    if(children.find("private-servers") == children.end())
    {
        if(private_servers != nullptr)
        {
            children["private-servers"] = private_servers.get();
        }
    }

    if(children.find("server-group-throttle") == children.end())
    {
        if(server_group_throttle != nullptr)
        {
            children["server-group-throttle"] = server_group_throttle.get();
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

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server-group-name")
    {
        server_group_name = value;
    }
    if(value_path == "dead-time")
    {
        dead_time = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroups()
{
    yang_name = "radius-server-groups"; yang_parent_name = "server-groups";
}

Aaa::ServerGroups::RadiusServerGroups::~RadiusServerGroups()
{
}

bool Aaa::ServerGroups::RadiusServerGroups::has_data() const
{
    for (std::size_t index=0; index<radius_server_group.size(); index++)
    {
        if(radius_server_group[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::ServerGroups::RadiusServerGroups::has_operation() const
{
    for (std::size_t index=0; index<radius_server_group.size(); index++)
    {
        if(radius_server_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::ServerGroups::RadiusServerGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-protocol-radius-cfg:radius-server-groups";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::RadiusServerGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-locald-cfg:server-groups/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::ServerGroups::RadiusServerGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "radius-server-group")
    {
        for(auto const & c : radius_server_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup>();
        c->parent = this;
        radius_server_group.push_back(std::move(c));
        children[segment_path] = radius_server_group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::ServerGroups::RadiusServerGroups::get_children()
{
    for (auto const & c : radius_server_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::ServerGroups::RadiusServerGroups::set_value(const std::string & value_path, std::string value)
{
}

Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server::Server()
    :
    	ip_address{YType::str, "ip-address"},
	 ordering_index{YType::int32, "ordering-index"}
{
    yang_name = "server"; yang_parent_name = "servers";
}

Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server::~Server()
{
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server::has_data() const
{
    return ip_address.is_set
	|| ordering_index.is_set;
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| is_set(ordering_index.operation);
}

std::string Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server" <<"[ip-address='" <<ip_address.get() <<"']" <<"[ordering-index='" <<ordering_index.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server::get_entity_path(Entity* ancestor) const
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

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ordering_index.is_set || is_set(ordering_index.operation)) leaf_name_data.push_back(ordering_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server::get_children()
{
    return children;
}

void Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "ordering-index")
    {
        ordering_index = value;
    }
}

Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Servers()
{
    yang_name = "servers"; yang_parent_name = "tacacs-server-group";
}

Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::~Servers()
{
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "servers";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::get_entity_path(Entity* ancestor) const
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

Entity* Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server>();
        c->parent = this;
        server.push_back(std::move(c));
        children[segment_path] = server.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::get_children()
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

void Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::set_value(const std::string & value_path, std::string value)
{
}

Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer::PrivateServer()
    :
    	ip_address{YType::str, "ip-address"},
	 ordering_index{YType::int32, "ordering-index"},
	 port_number{YType::uint32, "port-number"},
	 key{YType::str, "key"},
	 timeout{YType::uint32, "timeout"}
{
    yang_name = "private-server"; yang_parent_name = "private-servers";
}

Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer::~PrivateServer()
{
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer::has_data() const
{
    return ip_address.is_set
	|| ordering_index.is_set
	|| port_number.is_set
	|| key.is_set
	|| timeout.is_set;
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| is_set(ordering_index.operation)
	|| is_set(port_number.operation)
	|| is_set(key.operation)
	|| is_set(timeout.operation);
}

std::string Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-server" <<"[ip-address='" <<ip_address.get() <<"']" <<"[ordering-index='" <<ordering_index.get() <<"']" <<"[port-number='" <<port_number.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer::get_entity_path(Entity* ancestor) const
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

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ordering_index.is_set || is_set(ordering_index.operation)) leaf_name_data.push_back(ordering_index.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.operation)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer::get_children()
{
    return children;
}

void Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "ordering-index")
    {
        ordering_index = value;
    }
    if(value_path == "port-number")
    {
        port_number = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServers()
{
    yang_name = "private-servers"; yang_parent_name = "tacacs-server-group";
}

Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::~PrivateServers()
{
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::has_data() const
{
    for (std::size_t index=0; index<private_server.size(); index++)
    {
        if(private_server[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::has_operation() const
{
    for (std::size_t index=0; index<private_server.size(); index++)
    {
        if(private_server[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-servers";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::get_entity_path(Entity* ancestor) const
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

Entity* Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "private-server")
    {
        for(auto const & c : private_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer>();
        c->parent = this;
        private_server.push_back(std::move(c));
        children[segment_path] = private_server.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::get_children()
{
    for (auto const & c : private_server)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::set_value(const std::string & value_path, std::string value)
{
}

Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::TacacsServerGroup()
    :
    	server_group_name{YType::str, "server-group-name"},
	 vrf{YType::str, "vrf"}
    	,
    private_servers(std::make_unique<Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers>())
	,servers(std::make_unique<Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers>())
{
    private_servers->parent = this;
    children["private-servers"] = private_servers.get();

    servers->parent = this;
    children["servers"] = servers.get();

    yang_name = "tacacs-server-group"; yang_parent_name = "tacacs-server-groups";
}

Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::~TacacsServerGroup()
{
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::has_data() const
{
    return server_group_name.is_set
	|| vrf.is_set
	|| (private_servers !=  nullptr && private_servers->has_data())
	|| (servers !=  nullptr && servers->has_data());
}

bool Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(server_group_name.operation)
	|| is_set(vrf.operation)
	|| (private_servers !=  nullptr && is_set(private_servers->operation))
	|| (servers !=  nullptr && is_set(servers->operation));
}

std::string Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacs-server-group" <<"[server-group-name='" <<server_group_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-locald-cfg:server-groups/Cisco-IOS-XR-aaa-tacacs-cfg:tacacs-server-groups/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_group_name.is_set || is_set(server_group_name.operation)) leaf_name_data.push_back(server_group_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "private-servers")
    {
        if(private_servers != nullptr)
        {
            children["private-servers"] = private_servers.get();
        }
        else
        {
            private_servers = std::make_unique<Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers>();
            private_servers->parent = this;
            children["private-servers"] = private_servers.get();
        }
        return children.at("private-servers");
    }

    if(child_yang_name == "servers")
    {
        if(servers != nullptr)
        {
            children["servers"] = servers.get();
        }
        else
        {
            servers = std::make_unique<Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers>();
            servers->parent = this;
            children["servers"] = servers.get();
        }
        return children.at("servers");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::get_children()
{
    if(children.find("private-servers") == children.end())
    {
        if(private_servers != nullptr)
        {
            children["private-servers"] = private_servers.get();
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

void Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server-group-name")
    {
        server_group_name = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroups()
{
    yang_name = "tacacs-server-groups"; yang_parent_name = "server-groups";
}

Aaa::ServerGroups::TacacsServerGroups::~TacacsServerGroups()
{
}

bool Aaa::ServerGroups::TacacsServerGroups::has_data() const
{
    for (std::size_t index=0; index<tacacs_server_group.size(); index++)
    {
        if(tacacs_server_group[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::ServerGroups::TacacsServerGroups::has_operation() const
{
    for (std::size_t index=0; index<tacacs_server_group.size(); index++)
    {
        if(tacacs_server_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::ServerGroups::TacacsServerGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-tacacs-cfg:tacacs-server-groups";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::TacacsServerGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-locald-cfg:server-groups/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::ServerGroups::TacacsServerGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tacacs-server-group")
    {
        for(auto const & c : tacacs_server_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup>();
        c->parent = this;
        tacacs_server_group.push_back(std::move(c));
        children[segment_path] = tacacs_server_group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::ServerGroups::TacacsServerGroups::get_children()
{
    for (auto const & c : tacacs_server_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::ServerGroups::TacacsServerGroups::set_value(const std::string & value_path, std::string value)
{
}

Aaa::ServerGroups::ServerGroups()
    :
    radius_server_groups(std::make_unique<Aaa::ServerGroups::RadiusServerGroups>())
	,tacacs_server_groups(std::make_unique<Aaa::ServerGroups::TacacsServerGroups>())
{
    radius_server_groups->parent = this;
    children["radius-server-groups"] = radius_server_groups.get();

    tacacs_server_groups->parent = this;
    children["tacacs-server-groups"] = tacacs_server_groups.get();

    yang_name = "server-groups"; yang_parent_name = "aaa";
}

Aaa::ServerGroups::~ServerGroups()
{
}

bool Aaa::ServerGroups::has_data() const
{
    return (radius_server_groups !=  nullptr && radius_server_groups->has_data())
	|| (tacacs_server_groups !=  nullptr && tacacs_server_groups->has_data());
}

bool Aaa::ServerGroups::has_operation() const
{
    return is_set(operation)
	|| (radius_server_groups !=  nullptr && is_set(radius_server_groups->operation))
	|| (tacacs_server_groups !=  nullptr && is_set(tacacs_server_groups->operation));
}

std::string Aaa::ServerGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-locald-cfg:server-groups";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::ServerGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "radius-server-groups")
    {
        if(radius_server_groups != nullptr)
        {
            children["radius-server-groups"] = radius_server_groups.get();
        }
        else
        {
            radius_server_groups = std::make_unique<Aaa::ServerGroups::RadiusServerGroups>();
            radius_server_groups->parent = this;
            children["radius-server-groups"] = radius_server_groups.get();
        }
        return children.at("radius-server-groups");
    }

    if(child_yang_name == "tacacs-server-groups")
    {
        if(tacacs_server_groups != nullptr)
        {
            children["tacacs-server-groups"] = tacacs_server_groups.get();
        }
        else
        {
            tacacs_server_groups = std::make_unique<Aaa::ServerGroups::TacacsServerGroups>();
            tacacs_server_groups->parent = this;
            children["tacacs-server-groups"] = tacacs_server_groups.get();
        }
        return children.at("tacacs-server-groups");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::ServerGroups::get_children()
{
    if(children.find("radius-server-groups") == children.end())
    {
        if(radius_server_groups != nullptr)
        {
            children["radius-server-groups"] = radius_server_groups.get();
        }
    }

    if(children.find("tacacs-server-groups") == children.end())
    {
        if(tacacs_server_groups != nullptr)
        {
            children["tacacs-server-groups"] = tacacs_server_groups.get();
        }
    }

    return children;
}

void Aaa::ServerGroups::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::UsergroupUnderUsername()
    :
    	name{YType::str, "name"}
{
    yang_name = "usergroup-under-username"; yang_parent_name = "usergroup-under-usernames";
}

Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::~UsergroupUnderUsername()
{
}

bool Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::has_data() const
{
    return name.is_set;
}

bool Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usergroup-under-username" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::get_children()
{
    return children;
}

void Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsernames()
{
    yang_name = "usergroup-under-usernames"; yang_parent_name = "username";
}

Aaa::Usernames::Username::UsergroupUnderUsernames::~UsergroupUnderUsernames()
{
}

bool Aaa::Usernames::Username::UsergroupUnderUsernames::has_data() const
{
    for (std::size_t index=0; index<usergroup_under_username.size(); index++)
    {
        if(usergroup_under_username[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Usernames::Username::UsergroupUnderUsernames::has_operation() const
{
    for (std::size_t index=0; index<usergroup_under_username.size(); index++)
    {
        if(usergroup_under_username[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Usernames::Username::UsergroupUnderUsernames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usergroup-under-usernames";

    return path_buffer.str();

}

EntityPath Aaa::Usernames::Username::UsergroupUnderUsernames::get_entity_path(Entity* ancestor) const
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

Entity* Aaa::Usernames::Username::UsergroupUnderUsernames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "usergroup-under-username")
    {
        for(auto const & c : usergroup_under_username)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername>();
        c->parent = this;
        usergroup_under_username.push_back(std::move(c));
        children[segment_path] = usergroup_under_username.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Usernames::Username::UsergroupUnderUsernames::get_children()
{
    for (auto const & c : usergroup_under_username)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Usernames::Username::UsergroupUnderUsernames::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Usernames::Username::Username()
    :
    	name{YType::str, "name"},
	 ordering_index{YType::int32, "ordering-index"},
	 password{YType::str, "password"},
	 secret{YType::str, "secret"}
    	,
    usergroup_under_usernames(std::make_unique<Aaa::Usernames::Username::UsergroupUnderUsernames>())
{
    usergroup_under_usernames->parent = this;
    children["usergroup-under-usernames"] = usergroup_under_usernames.get();

    yang_name = "username"; yang_parent_name = "usernames";
}

Aaa::Usernames::Username::~Username()
{
}

bool Aaa::Usernames::Username::has_data() const
{
    return name.is_set
	|| ordering_index.is_set
	|| password.is_set
	|| secret.is_set
	|| (usergroup_under_usernames !=  nullptr && usergroup_under_usernames->has_data());
}

bool Aaa::Usernames::Username::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(ordering_index.operation)
	|| is_set(password.operation)
	|| is_set(secret.operation)
	|| (usergroup_under_usernames !=  nullptr && is_set(usergroup_under_usernames->operation));
}

std::string Aaa::Usernames::Username::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username" <<"[name='" <<name.get() <<"']" <<"[ordering-index='" <<ordering_index.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Usernames::Username::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-locald-cfg:usernames/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ordering_index.is_set || is_set(ordering_index.operation)) leaf_name_data.push_back(ordering_index.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (secret.is_set || is_set(secret.operation)) leaf_name_data.push_back(secret.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Usernames::Username::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "usergroup-under-usernames")
    {
        if(usergroup_under_usernames != nullptr)
        {
            children["usergroup-under-usernames"] = usergroup_under_usernames.get();
        }
        else
        {
            usergroup_under_usernames = std::make_unique<Aaa::Usernames::Username::UsergroupUnderUsernames>();
            usergroup_under_usernames->parent = this;
            children["usergroup-under-usernames"] = usergroup_under_usernames.get();
        }
        return children.at("usergroup-under-usernames");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Usernames::Username::get_children()
{
    if(children.find("usergroup-under-usernames") == children.end())
    {
        if(usergroup_under_usernames != nullptr)
        {
            children["usergroup-under-usernames"] = usergroup_under_usernames.get();
        }
    }

    return children;
}

void Aaa::Usernames::Username::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "ordering-index")
    {
        ordering_index = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "secret")
    {
        secret = value;
    }
}

Aaa::Usernames::Usernames()
{
    yang_name = "usernames"; yang_parent_name = "aaa";
}

Aaa::Usernames::~Usernames()
{
}

bool Aaa::Usernames::has_data() const
{
    for (std::size_t index=0; index<username.size(); index++)
    {
        if(username[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Usernames::has_operation() const
{
    for (std::size_t index=0; index<username.size(); index++)
    {
        if(username[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Usernames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-locald-cfg:usernames";

    return path_buffer.str();

}

EntityPath Aaa::Usernames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Usernames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "username")
    {
        for(auto const & c : username)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Usernames::Username>();
        c->parent = this;
        username.push_back(std::move(c));
        children[segment_path] = username.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Usernames::get_children()
{
    for (auto const & c : username)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Usernames::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup::TaskgroupUnderTaskgroup()
    :
    	name{YType::str, "name"}
{
    yang_name = "taskgroup-under-taskgroup"; yang_parent_name = "taskgroup-under-taskgroups";
}

Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup::~TaskgroupUnderTaskgroup()
{
}

bool Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup::has_data() const
{
    return name.is_set;
}

bool Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "taskgroup-under-taskgroup" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup::get_children()
{
    return children;
}

void Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroups()
{
    yang_name = "taskgroup-under-taskgroups"; yang_parent_name = "taskgroup";
}

Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::~TaskgroupUnderTaskgroups()
{
}

bool Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::has_data() const
{
    for (std::size_t index=0; index<taskgroup_under_taskgroup.size(); index++)
    {
        if(taskgroup_under_taskgroup[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::has_operation() const
{
    for (std::size_t index=0; index<taskgroup_under_taskgroup.size(); index++)
    {
        if(taskgroup_under_taskgroup[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "taskgroup-under-taskgroups";

    return path_buffer.str();

}

EntityPath Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::get_entity_path(Entity* ancestor) const
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

Entity* Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "taskgroup-under-taskgroup")
    {
        for(auto const & c : taskgroup_under_taskgroup)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup>();
        c->parent = this;
        taskgroup_under_taskgroup.push_back(std::move(c));
        children[segment_path] = taskgroup_under_taskgroup.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::get_children()
{
    for (auto const & c : taskgroup_under_taskgroup)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Taskgroups::Taskgroup::Tasks::Task::Task()
    :
    	task_id{YType::str, "task-id"},
	 type{YType::enumeration, "type"}
{
    yang_name = "task"; yang_parent_name = "tasks";
}

Aaa::Taskgroups::Taskgroup::Tasks::Task::~Task()
{
}

bool Aaa::Taskgroups::Taskgroup::Tasks::Task::has_data() const
{
    return task_id.is_set
	|| type.is_set;
}

bool Aaa::Taskgroups::Taskgroup::Tasks::Task::has_operation() const
{
    return is_set(operation)
	|| is_set(task_id.operation)
	|| is_set(type.operation);
}

std::string Aaa::Taskgroups::Taskgroup::Tasks::Task::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "task" <<"[task-id='" <<task_id.get() <<"']" <<"[type='" <<type.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Taskgroups::Taskgroup::Tasks::Task::get_entity_path(Entity* ancestor) const
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

    if (task_id.is_set || is_set(task_id.operation)) leaf_name_data.push_back(task_id.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Taskgroups::Taskgroup::Tasks::Task::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Taskgroups::Taskgroup::Tasks::Task::get_children()
{
    return children;
}

void Aaa::Taskgroups::Taskgroup::Tasks::Task::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "task-id")
    {
        task_id = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Aaa::Taskgroups::Taskgroup::Tasks::Tasks()
{
    yang_name = "tasks"; yang_parent_name = "taskgroup";
}

Aaa::Taskgroups::Taskgroup::Tasks::~Tasks()
{
}

bool Aaa::Taskgroups::Taskgroup::Tasks::has_data() const
{
    for (std::size_t index=0; index<task.size(); index++)
    {
        if(task[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Taskgroups::Taskgroup::Tasks::has_operation() const
{
    for (std::size_t index=0; index<task.size(); index++)
    {
        if(task[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Taskgroups::Taskgroup::Tasks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tasks";

    return path_buffer.str();

}

EntityPath Aaa::Taskgroups::Taskgroup::Tasks::get_entity_path(Entity* ancestor) const
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

Entity* Aaa::Taskgroups::Taskgroup::Tasks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "task")
    {
        for(auto const & c : task)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Taskgroups::Taskgroup::Tasks::Task>();
        c->parent = this;
        task.push_back(std::move(c));
        children[segment_path] = task.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Taskgroups::Taskgroup::Tasks::get_children()
{
    for (auto const & c : task)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Taskgroups::Taskgroup::Tasks::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Taskgroups::Taskgroup::Taskgroup()
    :
    	name{YType::str, "name"},
	 description{YType::str, "description"}
    	,
    taskgroup_under_taskgroups(std::make_unique<Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups>())
	,tasks(std::make_unique<Aaa::Taskgroups::Taskgroup::Tasks>())
{
    taskgroup_under_taskgroups->parent = this;
    children["taskgroup-under-taskgroups"] = taskgroup_under_taskgroups.get();

    tasks->parent = this;
    children["tasks"] = tasks.get();

    yang_name = "taskgroup"; yang_parent_name = "taskgroups";
}

Aaa::Taskgroups::Taskgroup::~Taskgroup()
{
}

bool Aaa::Taskgroups::Taskgroup::has_data() const
{
    return name.is_set
	|| description.is_set
	|| (taskgroup_under_taskgroups !=  nullptr && taskgroup_under_taskgroups->has_data())
	|| (tasks !=  nullptr && tasks->has_data());
}

bool Aaa::Taskgroups::Taskgroup::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| (taskgroup_under_taskgroups !=  nullptr && is_set(taskgroup_under_taskgroups->operation))
	|| (tasks !=  nullptr && is_set(tasks->operation));
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
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-locald-cfg:taskgroups/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


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

    if(child_yang_name == "taskgroup-under-taskgroups")
    {
        if(taskgroup_under_taskgroups != nullptr)
        {
            children["taskgroup-under-taskgroups"] = taskgroup_under_taskgroups.get();
        }
        else
        {
            taskgroup_under_taskgroups = std::make_unique<Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups>();
            taskgroup_under_taskgroups->parent = this;
            children["taskgroup-under-taskgroups"] = taskgroup_under_taskgroups.get();
        }
        return children.at("taskgroup-under-taskgroups");
    }

    if(child_yang_name == "tasks")
    {
        if(tasks != nullptr)
        {
            children["tasks"] = tasks.get();
        }
        else
        {
            tasks = std::make_unique<Aaa::Taskgroups::Taskgroup::Tasks>();
            tasks->parent = this;
            children["tasks"] = tasks.get();
        }
        return children.at("tasks");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Taskgroups::Taskgroup::get_children()
{
    if(children.find("taskgroup-under-taskgroups") == children.end())
    {
        if(taskgroup_under_taskgroups != nullptr)
        {
            children["taskgroup-under-taskgroups"] = taskgroup_under_taskgroups.get();
        }
    }

    if(children.find("tasks") == children.end())
    {
        if(tasks != nullptr)
        {
            children["tasks"] = tasks.get();
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
    if(value_path == "description")
    {
        description = value;
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
    path_buffer << "Cisco-IOS-XR-aaa-locald-cfg:taskgroups";

    return path_buffer.str();

}

EntityPath Aaa::Taskgroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
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

Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup::TaskgroupUnderUsergroup()
    :
    	name{YType::str, "name"}
{
    yang_name = "taskgroup-under-usergroup"; yang_parent_name = "taskgroup-under-usergroups";
}

Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup::~TaskgroupUnderUsergroup()
{
}

bool Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup::has_data() const
{
    return name.is_set;
}

bool Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "taskgroup-under-usergroup" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup::get_children()
{
    return children;
}

void Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroups()
{
    yang_name = "taskgroup-under-usergroups"; yang_parent_name = "usergroup";
}

Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::~TaskgroupUnderUsergroups()
{
}

bool Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::has_data() const
{
    for (std::size_t index=0; index<taskgroup_under_usergroup.size(); index++)
    {
        if(taskgroup_under_usergroup[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::has_operation() const
{
    for (std::size_t index=0; index<taskgroup_under_usergroup.size(); index++)
    {
        if(taskgroup_under_usergroup[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "taskgroup-under-usergroups";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::get_entity_path(Entity* ancestor) const
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

Entity* Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "taskgroup-under-usergroup")
    {
        for(auto const & c : taskgroup_under_usergroup)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup>();
        c->parent = this;
        taskgroup_under_usergroup.push_back(std::move(c));
        children[segment_path] = taskgroup_under_usergroup.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::get_children()
{
    for (auto const & c : taskgroup_under_usergroup)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup::UsergroupUnderUsergroup()
    :
    	name{YType::str, "name"}
{
    yang_name = "usergroup-under-usergroup"; yang_parent_name = "usergroup-under-usergroups";
}

Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup::~UsergroupUnderUsergroup()
{
}

bool Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup::has_data() const
{
    return name.is_set;
}

bool Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usergroup-under-usergroup" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup::get_children()
{
    return children;
}

void Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroups()
{
    yang_name = "usergroup-under-usergroups"; yang_parent_name = "usergroup";
}

Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::~UsergroupUnderUsergroups()
{
}

bool Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::has_data() const
{
    for (std::size_t index=0; index<usergroup_under_usergroup.size(); index++)
    {
        if(usergroup_under_usergroup[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::has_operation() const
{
    for (std::size_t index=0; index<usergroup_under_usergroup.size(); index++)
    {
        if(usergroup_under_usergroup[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usergroup-under-usergroups";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::get_entity_path(Entity* ancestor) const
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

Entity* Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "usergroup-under-usergroup")
    {
        for(auto const & c : usergroup_under_usergroup)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup>();
        c->parent = this;
        usergroup_under_usergroup.push_back(std::move(c));
        children[segment_path] = usergroup_under_usergroup.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::get_children()
{
    for (auto const & c : usergroup_under_usergroup)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Usergroups::Usergroup::Usergroup()
    :
    	name{YType::str, "name"},
	 description{YType::str, "description"}
    	,
    taskgroup_under_usergroups(std::make_unique<Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups>())
	,usergroup_under_usergroups(std::make_unique<Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups>())
{
    taskgroup_under_usergroups->parent = this;
    children["taskgroup-under-usergroups"] = taskgroup_under_usergroups.get();

    usergroup_under_usergroups->parent = this;
    children["usergroup-under-usergroups"] = usergroup_under_usergroups.get();

    yang_name = "usergroup"; yang_parent_name = "usergroups";
}

Aaa::Usergroups::Usergroup::~Usergroup()
{
}

bool Aaa::Usergroups::Usergroup::has_data() const
{
    return name.is_set
	|| description.is_set
	|| (taskgroup_under_usergroups !=  nullptr && taskgroup_under_usergroups->has_data())
	|| (usergroup_under_usergroups !=  nullptr && usergroup_under_usergroups->has_data());
}

bool Aaa::Usergroups::Usergroup::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| (taskgroup_under_usergroups !=  nullptr && is_set(taskgroup_under_usergroups->operation))
	|| (usergroup_under_usergroups !=  nullptr && is_set(usergroup_under_usergroups->operation));
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
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-locald-cfg:usergroups/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


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

    if(child_yang_name == "taskgroup-under-usergroups")
    {
        if(taskgroup_under_usergroups != nullptr)
        {
            children["taskgroup-under-usergroups"] = taskgroup_under_usergroups.get();
        }
        else
        {
            taskgroup_under_usergroups = std::make_unique<Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups>();
            taskgroup_under_usergroups->parent = this;
            children["taskgroup-under-usergroups"] = taskgroup_under_usergroups.get();
        }
        return children.at("taskgroup-under-usergroups");
    }

    if(child_yang_name == "usergroup-under-usergroups")
    {
        if(usergroup_under_usergroups != nullptr)
        {
            children["usergroup-under-usergroups"] = usergroup_under_usergroups.get();
        }
        else
        {
            usergroup_under_usergroups = std::make_unique<Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups>();
            usergroup_under_usergroups->parent = this;
            children["usergroup-under-usergroups"] = usergroup_under_usergroups.get();
        }
        return children.at("usergroup-under-usergroups");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Usergroups::Usergroup::get_children()
{
    if(children.find("taskgroup-under-usergroups") == children.end())
    {
        if(taskgroup_under_usergroups != nullptr)
        {
            children["taskgroup-under-usergroups"] = taskgroup_under_usergroups.get();
        }
    }

    if(children.find("usergroup-under-usergroups") == children.end())
    {
        if(usergroup_under_usergroups != nullptr)
        {
            children["usergroup-under-usergroups"] = usergroup_under_usergroups.get();
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
    if(value_path == "description")
    {
        description = value;
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
    path_buffer << "Cisco-IOS-XR-aaa-locald-cfg:usergroups";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
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

Aaa::Radius::Hosts::Host::Host()
    :
    	acct_port_number{YType::uint16, "acct-port-number"},
	 auth_port_number{YType::uint16, "auth-port-number"},
	 ip_address{YType::str, "ip-address"},
	 ordering_index{YType::int32, "ordering-index"},
	 host_key{YType::str, "host-key"},
	 host_retransmit{YType::uint32, "host-retransmit"},
	 host_timeout{YType::uint32, "host-timeout"},
	 idle_time{YType::uint32, "idle-time"},
	 ignore_accounting_port{YType::boolean, "ignore-accounting-port"},
	 ignore_auth_port{YType::boolean, "ignore-auth-port"},
	 username{YType::str, "username"}
{
    yang_name = "host"; yang_parent_name = "hosts";
}

Aaa::Radius::Hosts::Host::~Host()
{
}

bool Aaa::Radius::Hosts::Host::has_data() const
{
    return acct_port_number.is_set
	|| auth_port_number.is_set
	|| ip_address.is_set
	|| ordering_index.is_set
	|| host_key.is_set
	|| host_retransmit.is_set
	|| host_timeout.is_set
	|| idle_time.is_set
	|| ignore_accounting_port.is_set
	|| ignore_auth_port.is_set
	|| username.is_set;
}

bool Aaa::Radius::Hosts::Host::has_operation() const
{
    return is_set(operation)
	|| is_set(acct_port_number.operation)
	|| is_set(auth_port_number.operation)
	|| is_set(ip_address.operation)
	|| is_set(ordering_index.operation)
	|| is_set(host_key.operation)
	|| is_set(host_retransmit.operation)
	|| is_set(host_timeout.operation)
	|| is_set(idle_time.operation)
	|| is_set(ignore_accounting_port.operation)
	|| is_set(ignore_auth_port.operation)
	|| is_set(username.operation);
}

std::string Aaa::Radius::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host" <<"[acct-port-number='" <<acct_port_number.get() <<"']" <<"[auth-port-number='" <<auth_port_number.get() <<"']" <<"[ip-address='" <<ip_address.get() <<"']" <<"[ordering-index='" <<ordering_index.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Radius::Hosts::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/hosts/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acct_port_number.is_set || is_set(acct_port_number.operation)) leaf_name_data.push_back(acct_port_number.get_name_leafdata());
    if (auth_port_number.is_set || is_set(auth_port_number.operation)) leaf_name_data.push_back(auth_port_number.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ordering_index.is_set || is_set(ordering_index.operation)) leaf_name_data.push_back(ordering_index.get_name_leafdata());
    if (host_key.is_set || is_set(host_key.operation)) leaf_name_data.push_back(host_key.get_name_leafdata());
    if (host_retransmit.is_set || is_set(host_retransmit.operation)) leaf_name_data.push_back(host_retransmit.get_name_leafdata());
    if (host_timeout.is_set || is_set(host_timeout.operation)) leaf_name_data.push_back(host_timeout.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.operation)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (ignore_accounting_port.is_set || is_set(ignore_accounting_port.operation)) leaf_name_data.push_back(ignore_accounting_port.get_name_leafdata());
    if (ignore_auth_port.is_set || is_set(ignore_auth_port.operation)) leaf_name_data.push_back(ignore_auth_port.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Radius::Hosts::Host::get_children()
{
    return children;
}

void Aaa::Radius::Hosts::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acct-port-number")
    {
        acct_port_number = value;
    }
    if(value_path == "auth-port-number")
    {
        auth_port_number = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "ordering-index")
    {
        ordering_index = value;
    }
    if(value_path == "host-key")
    {
        host_key = value;
    }
    if(value_path == "host-retransmit")
    {
        host_retransmit = value;
    }
    if(value_path == "host-timeout")
    {
        host_timeout = value;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
    }
    if(value_path == "ignore-accounting-port")
    {
        ignore_accounting_port = value;
    }
    if(value_path == "ignore-auth-port")
    {
        ignore_auth_port = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

Aaa::Radius::Hosts::Hosts()
{
    yang_name = "hosts"; yang_parent_name = "radius";
}

Aaa::Radius::Hosts::~Hosts()
{
}

bool Aaa::Radius::Hosts::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Radius::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Radius::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";

    return path_buffer.str();

}

EntityPath Aaa::Radius::Hosts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Radius::Hosts::Host>();
        c->parent = this;
        host.push_back(std::move(c));
        children[segment_path] = host.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Radius::Hosts::get_children()
{
    for (auto const & c : host)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Radius::Hosts::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Radius::DeadCriteria::DeadCriteria()
    :
    	time{YType::uint32, "time"},
	 tries{YType::uint32, "tries"}
{
    yang_name = "dead-criteria"; yang_parent_name = "radius";
}

Aaa::Radius::DeadCriteria::~DeadCriteria()
{
}

bool Aaa::Radius::DeadCriteria::has_data() const
{
    return time.is_set
	|| tries.is_set;
}

bool Aaa::Radius::DeadCriteria::has_operation() const
{
    return is_set(operation)
	|| is_set(time.operation)
	|| is_set(tries.operation);
}

std::string Aaa::Radius::DeadCriteria::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-criteria";

    return path_buffer.str();

}

EntityPath Aaa::Radius::DeadCriteria::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());
    if (tries.is_set || is_set(tries.operation)) leaf_name_data.push_back(tries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::DeadCriteria::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Radius::DeadCriteria::get_children()
{
    return children;
}

void Aaa::Radius::DeadCriteria::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time")
    {
        time = value;
    }
    if(value_path == "tries")
    {
        tries = value;
    }
}

Aaa::Radius::Disallow::Disallow()
    :
    	null_username{YType::int32, "null-username"}
{
    yang_name = "disallow"; yang_parent_name = "radius";
}

Aaa::Radius::Disallow::~Disallow()
{
}

bool Aaa::Radius::Disallow::has_data() const
{
    return null_username.is_set;
}

bool Aaa::Radius::Disallow::has_operation() const
{
    return is_set(operation)
	|| is_set(null_username.operation);
}

std::string Aaa::Radius::Disallow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disallow";

    return path_buffer.str();

}

EntityPath Aaa::Radius::Disallow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null_username.is_set || is_set(null_username.operation)) leaf_name_data.push_back(null_username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::Disallow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Radius::Disallow::get_children()
{
    return children;
}

void Aaa::Radius::Disallow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "null-username")
    {
        null_username = value;
    }
}

Aaa::Radius::Ipv6::Ipv6()
    :
    	dscp{YType::str, "dscp"}
{
    yang_name = "ipv6"; yang_parent_name = "radius";
}

Aaa::Radius::Ipv6::~Ipv6()
{
}

bool Aaa::Radius::Ipv6::has_data() const
{
    return dscp.is_set;
}

bool Aaa::Radius::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp.operation);
}

std::string Aaa::Radius::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath Aaa::Radius::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Radius::Ipv6::get_children()
{
    return children;
}

void Aaa::Radius::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp")
    {
        dscp = value;
    }
}

Aaa::Radius::DynamicAuthorization::Clients::Client::Client()
    :
    	ip_address{YType::str, "ip-address"},
	 server_key{YType::str, "server-key"}
{
    yang_name = "client"; yang_parent_name = "clients";
}

Aaa::Radius::DynamicAuthorization::Clients::Client::~Client()
{
}

bool Aaa::Radius::DynamicAuthorization::Clients::Client::has_data() const
{
    return ip_address.is_set
	|| server_key.is_set;
}

bool Aaa::Radius::DynamicAuthorization::Clients::Client::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| is_set(server_key.operation);
}

std::string Aaa::Radius::DynamicAuthorization::Clients::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client" <<"[ip-address='" <<ip_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Radius::DynamicAuthorization::Clients::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/dynamic-authorization/clients/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (server_key.is_set || is_set(server_key.operation)) leaf_name_data.push_back(server_key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::DynamicAuthorization::Clients::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Radius::DynamicAuthorization::Clients::Client::get_children()
{
    return children;
}

void Aaa::Radius::DynamicAuthorization::Clients::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "server-key")
    {
        server_key = value;
    }
}

Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName::ClientVrfName()
    :
    	ip_address{YType::str, "ip-address"},
	 vrf_name{YType::str, "vrf-name"},
	 server_key{YType::str, "server-key"}
{
    yang_name = "client-vrf-name"; yang_parent_name = "clients";
}

Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName::~ClientVrfName()
{
}

bool Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName::has_data() const
{
    return ip_address.is_set
	|| vrf_name.is_set
	|| server_key.is_set;
}

bool Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| is_set(vrf_name.operation)
	|| is_set(server_key.operation);
}

std::string Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-vrf-name" <<"[ip-address='" <<ip_address.get() <<"']" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/dynamic-authorization/clients/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (server_key.is_set || is_set(server_key.operation)) leaf_name_data.push_back(server_key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName::get_children()
{
    return children;
}

void Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "server-key")
    {
        server_key = value;
    }
}

Aaa::Radius::DynamicAuthorization::Clients::Clients()
{
    yang_name = "clients"; yang_parent_name = "dynamic-authorization";
}

Aaa::Radius::DynamicAuthorization::Clients::~Clients()
{
}

bool Aaa::Radius::DynamicAuthorization::Clients::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<client_vrf_name.size(); index++)
    {
        if(client_vrf_name[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Radius::DynamicAuthorization::Clients::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<client_vrf_name.size(); index++)
    {
        if(client_vrf_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Radius::DynamicAuthorization::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";

    return path_buffer.str();

}

EntityPath Aaa::Radius::DynamicAuthorization::Clients::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/dynamic-authorization/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::DynamicAuthorization::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "client")
    {
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Radius::DynamicAuthorization::Clients::Client>();
        c->parent = this;
        client.push_back(std::move(c));
        children[segment_path] = client.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "client-vrf-name")
    {
        for(auto const & c : client_vrf_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName>();
        c->parent = this;
        client_vrf_name.push_back(std::move(c));
        children[segment_path] = client_vrf_name.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Radius::DynamicAuthorization::Clients::get_children()
{
    for (auto const & c : client)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : client_vrf_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Radius::DynamicAuthorization::Clients::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Radius::DynamicAuthorization::DynamicAuthorization()
    :
    	authentication_type{YType::enumeration, "authentication-type"},
	 ignore{YType::enumeration, "ignore"},
	 port{YType::uint32, "port"},
	 server_key{YType::str, "server-key"}
    	,
    clients(std::make_unique<Aaa::Radius::DynamicAuthorization::Clients>())
{
    clients->parent = this;
    children["clients"] = clients.get();

    yang_name = "dynamic-authorization"; yang_parent_name = "radius";
}

Aaa::Radius::DynamicAuthorization::~DynamicAuthorization()
{
}

bool Aaa::Radius::DynamicAuthorization::has_data() const
{
    return authentication_type.is_set
	|| ignore.is_set
	|| port.is_set
	|| server_key.is_set
	|| (clients !=  nullptr && clients->has_data());
}

bool Aaa::Radius::DynamicAuthorization::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_type.operation)
	|| is_set(ignore.operation)
	|| is_set(port.operation)
	|| is_set(server_key.operation)
	|| (clients !=  nullptr && is_set(clients->operation));
}

std::string Aaa::Radius::DynamicAuthorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-authorization";

    return path_buffer.str();

}

EntityPath Aaa::Radius::DynamicAuthorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_type.is_set || is_set(authentication_type.operation)) leaf_name_data.push_back(authentication_type.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (server_key.is_set || is_set(server_key.operation)) leaf_name_data.push_back(server_key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::DynamicAuthorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "clients")
    {
        if(clients != nullptr)
        {
            children["clients"] = clients.get();
        }
        else
        {
            clients = std::make_unique<Aaa::Radius::DynamicAuthorization::Clients>();
            clients->parent = this;
            children["clients"] = clients.get();
        }
        return children.at("clients");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Radius::DynamicAuthorization::get_children()
{
    if(children.find("clients") == children.end())
    {
        if(clients != nullptr)
        {
            children["clients"] = clients.get();
        }
    }

    return children;
}

void Aaa::Radius::DynamicAuthorization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-type")
    {
        authentication_type = value;
    }
    if(value_path == "ignore")
    {
        ignore = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "server-key")
    {
        server_key = value;
    }
}

Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize::BatchSize()
    :
    	batch_size{YType::uint32, "batch-size"},
	 ignore_preferred_server{YType::int32, "ignore-preferred-server"}
{
    yang_name = "batch-size"; yang_parent_name = "load-balance-method";
}

Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize::~BatchSize()
{
}

bool Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize::has_data() const
{
    return batch_size.is_set
	|| ignore_preferred_server.is_set;
}

bool Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize::has_operation() const
{
    return is_set(operation)
	|| is_set(batch_size.operation)
	|| is_set(ignore_preferred_server.operation);
}

std::string Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "batch-size";

    return path_buffer.str();

}

EntityPath Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/load-balance-options/load-balance-method/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (batch_size.is_set || is_set(batch_size.operation)) leaf_name_data.push_back(batch_size.get_name_leafdata());
    if (ignore_preferred_server.is_set || is_set(ignore_preferred_server.operation)) leaf_name_data.push_back(ignore_preferred_server.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize::get_children()
{
    return children;
}

void Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "batch-size")
    {
        batch_size = value;
    }
    if(value_path == "ignore-preferred-server")
    {
        ignore_preferred_server = value;
    }
}

Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::LoadBalanceMethod()
    :
    batch_size(std::make_unique<Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize>())
{
    batch_size->parent = this;
    children["batch-size"] = batch_size.get();

    yang_name = "load-balance-method"; yang_parent_name = "load-balance-options";
}

Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::~LoadBalanceMethod()
{
}

bool Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::has_data() const
{
    return (batch_size !=  nullptr && batch_size->has_data());
}

bool Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::has_operation() const
{
    return is_set(operation)
	|| (batch_size !=  nullptr && is_set(batch_size->operation));
}

std::string Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance-method";

    return path_buffer.str();

}

EntityPath Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/load-balance-options/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "batch-size")
    {
        if(batch_size != nullptr)
        {
            children["batch-size"] = batch_size.get();
        }
        else
        {
            batch_size = std::make_unique<Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize>();
            batch_size->parent = this;
            children["batch-size"] = batch_size.get();
        }
        return children.at("batch-size");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::get_children()
{
    if(children.find("batch-size") == children.end())
    {
        if(batch_size != nullptr)
        {
            children["batch-size"] = batch_size.get();
        }
    }

    return children;
}

void Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Radius::LoadBalanceOptions::LoadBalanceOptions()
    :
    load_balance_method(std::make_unique<Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod>())
{
    load_balance_method->parent = this;
    children["load-balance-method"] = load_balance_method.get();

    yang_name = "load-balance-options"; yang_parent_name = "radius";
}

Aaa::Radius::LoadBalanceOptions::~LoadBalanceOptions()
{
}

bool Aaa::Radius::LoadBalanceOptions::has_data() const
{
    return (load_balance_method !=  nullptr && load_balance_method->has_data());
}

bool Aaa::Radius::LoadBalanceOptions::has_operation() const
{
    return is_set(operation)
	|| (load_balance_method !=  nullptr && is_set(load_balance_method->operation));
}

std::string Aaa::Radius::LoadBalanceOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance-options";

    return path_buffer.str();

}

EntityPath Aaa::Radius::LoadBalanceOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::LoadBalanceOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "load-balance-method")
    {
        if(load_balance_method != nullptr)
        {
            children["load-balance-method"] = load_balance_method.get();
        }
        else
        {
            load_balance_method = std::make_unique<Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod>();
            load_balance_method->parent = this;
            children["load-balance-method"] = load_balance_method.get();
        }
        return children.at("load-balance-method");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Radius::LoadBalanceOptions::get_children()
{
    if(children.find("load-balance-method") == children.end())
    {
        if(load_balance_method != nullptr)
        {
            children["load-balance-method"] = load_balance_method.get();
        }
    }

    return children;
}

void Aaa::Radius::LoadBalanceOptions::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Radius::Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"},
	 source_interface{YType::str, "source-interface"}
{
    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Aaa::Radius::Vrfs::Vrf::~Vrf()
{
}

bool Aaa::Radius::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| source_interface.is_set;
}

bool Aaa::Radius::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(source_interface.operation);
}

std::string Aaa::Radius::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Radius::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/vrfs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Radius::Vrfs::Vrf::get_children()
{
    return children;
}

void Aaa::Radius::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

Aaa::Radius::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "radius";
}

Aaa::Radius::Vrfs::~Vrfs()
{
}

bool Aaa::Radius::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Radius::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Radius::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Aaa::Radius::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Radius::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Radius::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Radius::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Radius::Throttle::Throttle()
    :
    	access{YType::uint32, "access"},
	 access_timeout{YType::uint32, "access-timeout"},
	 accounting{YType::uint32, "accounting"}
{
    yang_name = "throttle"; yang_parent_name = "radius";
}

Aaa::Radius::Throttle::~Throttle()
{
}

bool Aaa::Radius::Throttle::has_data() const
{
    return access.is_set
	|| access_timeout.is_set
	|| accounting.is_set;
}

bool Aaa::Radius::Throttle::has_operation() const
{
    return is_set(operation)
	|| is_set(access.operation)
	|| is_set(access_timeout.operation)
	|| is_set(accounting.operation);
}

std::string Aaa::Radius::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";

    return path_buffer.str();

}

EntityPath Aaa::Radius::Throttle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.operation)) leaf_name_data.push_back(access.get_name_leafdata());
    if (access_timeout.is_set || is_set(access_timeout.operation)) leaf_name_data.push_back(access_timeout.get_name_leafdata());
    if (accounting.is_set || is_set(accounting.operation)) leaf_name_data.push_back(accounting.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Radius::Throttle::get_children()
{
    return children;
}

void Aaa::Radius::Throttle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access")
    {
        access = value;
    }
    if(value_path == "access-timeout")
    {
        access_timeout = value;
    }
    if(value_path == "accounting")
    {
        accounting = value;
    }
}

Aaa::Radius::Vsa::Attribute::Ignore::Ignore()
    :
    	unknown{YType::empty, "unknown"}
{
    yang_name = "ignore"; yang_parent_name = "attribute";
}

Aaa::Radius::Vsa::Attribute::Ignore::~Ignore()
{
}

bool Aaa::Radius::Vsa::Attribute::Ignore::has_data() const
{
    return unknown.is_set;
}

bool Aaa::Radius::Vsa::Attribute::Ignore::has_operation() const
{
    return is_set(operation)
	|| is_set(unknown.operation);
}

std::string Aaa::Radius::Vsa::Attribute::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";

    return path_buffer.str();

}

EntityPath Aaa::Radius::Vsa::Attribute::Ignore::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/vsa/attribute/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown.is_set || is_set(unknown.operation)) leaf_name_data.push_back(unknown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::Vsa::Attribute::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Radius::Vsa::Attribute::Ignore::get_children()
{
    return children;
}

void Aaa::Radius::Vsa::Attribute::Ignore::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unknown")
    {
        unknown = value;
    }
}

Aaa::Radius::Vsa::Attribute::Attribute()
    :
    ignore(std::make_unique<Aaa::Radius::Vsa::Attribute::Ignore>())
{
    ignore->parent = this;
    children["ignore"] = ignore.get();

    yang_name = "attribute"; yang_parent_name = "vsa";
}

Aaa::Radius::Vsa::Attribute::~Attribute()
{
}

bool Aaa::Radius::Vsa::Attribute::has_data() const
{
    return (ignore !=  nullptr && ignore->has_data());
}

bool Aaa::Radius::Vsa::Attribute::has_operation() const
{
    return is_set(operation)
	|| (ignore !=  nullptr && is_set(ignore->operation));
}

std::string Aaa::Radius::Vsa::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";

    return path_buffer.str();

}

EntityPath Aaa::Radius::Vsa::Attribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/vsa/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::Vsa::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ignore")
    {
        if(ignore != nullptr)
        {
            children["ignore"] = ignore.get();
        }
        else
        {
            ignore = std::make_unique<Aaa::Radius::Vsa::Attribute::Ignore>();
            ignore->parent = this;
            children["ignore"] = ignore.get();
        }
        return children.at("ignore");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Radius::Vsa::Attribute::get_children()
{
    if(children.find("ignore") == children.end())
    {
        if(ignore != nullptr)
        {
            children["ignore"] = ignore.get();
        }
    }

    return children;
}

void Aaa::Radius::Vsa::Attribute::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Radius::Vsa::Vsa()
    :
    attribute(std::make_unique<Aaa::Radius::Vsa::Attribute>())
{
    attribute->parent = this;
    children["attribute"] = attribute.get();

    yang_name = "vsa"; yang_parent_name = "radius";
}

Aaa::Radius::Vsa::~Vsa()
{
}

bool Aaa::Radius::Vsa::has_data() const
{
    return (attribute !=  nullptr && attribute->has_data());
}

bool Aaa::Radius::Vsa::has_operation() const
{
    return is_set(operation)
	|| (attribute !=  nullptr && is_set(attribute->operation));
}

std::string Aaa::Radius::Vsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsa";

    return path_buffer.str();

}

EntityPath Aaa::Radius::Vsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::Vsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attribute")
    {
        if(attribute != nullptr)
        {
            children["attribute"] = attribute.get();
        }
        else
        {
            attribute = std::make_unique<Aaa::Radius::Vsa::Attribute>();
            attribute->parent = this;
            children["attribute"] = attribute.get();
        }
        return children.at("attribute");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Radius::Vsa::get_children()
{
    if(children.find("attribute") == children.end())
    {
        if(attribute != nullptr)
        {
            children["attribute"] = attribute.get();
        }
    }

    return children;
}

void Aaa::Radius::Vsa::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Radius::Ipv4::Ipv4()
    :
    	dscp{YType::str, "dscp"}
{
    yang_name = "ipv4"; yang_parent_name = "radius";
}

Aaa::Radius::Ipv4::~Ipv4()
{
}

bool Aaa::Radius::Ipv4::has_data() const
{
    return dscp.is_set;
}

bool Aaa::Radius::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp.operation);
}

std::string Aaa::Radius::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath Aaa::Radius::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Radius::Ipv4::get_children()
{
    return children;
}

void Aaa::Radius::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp")
    {
        dscp = value;
    }
}

Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId::IncludeParentSessionId()
    :
    	config{YType::enumeration, "config"}
{
    yang_name = "include-parent-session-id"; yang_parent_name = "acct-multi-session-id";
}

Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId::~IncludeParentSessionId()
{
}

bool Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId::has_data() const
{
    return config.is_set;
}

bool Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId::has_operation() const
{
    return is_set(operation)
	|| is_set(config.operation);
}

std::string Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include-parent-session-id";

    return path_buffer.str();

}

EntityPath Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/radius-attribute/acct-multi-session-id/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config.is_set || is_set(config.operation)) leaf_name_data.push_back(config.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId::get_children()
{
    return children;
}

void Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "config")
    {
        config = value;
    }
}

Aaa::Radius::RadiusAttribute::AcctMultiSessionId::AcctMultiSessionId()
    :
    include_parent_session_id(std::make_unique<Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId>())
{
    include_parent_session_id->parent = this;
    children["include-parent-session-id"] = include_parent_session_id.get();

    yang_name = "acct-multi-session-id"; yang_parent_name = "radius-attribute";
}

Aaa::Radius::RadiusAttribute::AcctMultiSessionId::~AcctMultiSessionId()
{
}

bool Aaa::Radius::RadiusAttribute::AcctMultiSessionId::has_data() const
{
    return (include_parent_session_id !=  nullptr && include_parent_session_id->has_data());
}

bool Aaa::Radius::RadiusAttribute::AcctMultiSessionId::has_operation() const
{
    return is_set(operation)
	|| (include_parent_session_id !=  nullptr && is_set(include_parent_session_id->operation));
}

std::string Aaa::Radius::RadiusAttribute::AcctMultiSessionId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acct-multi-session-id";

    return path_buffer.str();

}

EntityPath Aaa::Radius::RadiusAttribute::AcctMultiSessionId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/radius-attribute/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::RadiusAttribute::AcctMultiSessionId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "include-parent-session-id")
    {
        if(include_parent_session_id != nullptr)
        {
            children["include-parent-session-id"] = include_parent_session_id.get();
        }
        else
        {
            include_parent_session_id = std::make_unique<Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId>();
            include_parent_session_id->parent = this;
            children["include-parent-session-id"] = include_parent_session_id.get();
        }
        return children.at("include-parent-session-id");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Radius::RadiusAttribute::AcctMultiSessionId::get_children()
{
    if(children.find("include-parent-session-id") == children.end())
    {
        if(include_parent_session_id != nullptr)
        {
            children["include-parent-session-id"] = include_parent_session_id.get();
        }
    }

    return children;
}

void Aaa::Radius::RadiusAttribute::AcctMultiSessionId::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId::PrependNasPortId()
    :
    	config{YType::enumeration, "config"}
{
    yang_name = "prepend-nas-port-id"; yang_parent_name = "acct-session-id";
}

Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId::~PrependNasPortId()
{
}

bool Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId::has_data() const
{
    return config.is_set;
}

bool Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId::has_operation() const
{
    return is_set(operation)
	|| is_set(config.operation);
}

std::string Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-nas-port-id";

    return path_buffer.str();

}

EntityPath Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/radius-attribute/acct-session-id/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config.is_set || is_set(config.operation)) leaf_name_data.push_back(config.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId::get_children()
{
    return children;
}

void Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "config")
    {
        config = value;
    }
}

Aaa::Radius::RadiusAttribute::AcctSessionId::AcctSessionId()
    :
    prepend_nas_port_id(std::make_unique<Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId>())
{
    prepend_nas_port_id->parent = this;
    children["prepend-nas-port-id"] = prepend_nas_port_id.get();

    yang_name = "acct-session-id"; yang_parent_name = "radius-attribute";
}

Aaa::Radius::RadiusAttribute::AcctSessionId::~AcctSessionId()
{
}

bool Aaa::Radius::RadiusAttribute::AcctSessionId::has_data() const
{
    return (prepend_nas_port_id !=  nullptr && prepend_nas_port_id->has_data());
}

bool Aaa::Radius::RadiusAttribute::AcctSessionId::has_operation() const
{
    return is_set(operation)
	|| (prepend_nas_port_id !=  nullptr && is_set(prepend_nas_port_id->operation));
}

std::string Aaa::Radius::RadiusAttribute::AcctSessionId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acct-session-id";

    return path_buffer.str();

}

EntityPath Aaa::Radius::RadiusAttribute::AcctSessionId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/radius-attribute/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::RadiusAttribute::AcctSessionId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prepend-nas-port-id")
    {
        if(prepend_nas_port_id != nullptr)
        {
            children["prepend-nas-port-id"] = prepend_nas_port_id.get();
        }
        else
        {
            prepend_nas_port_id = std::make_unique<Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId>();
            prepend_nas_port_id->parent = this;
            children["prepend-nas-port-id"] = prepend_nas_port_id.get();
        }
        return children.at("prepend-nas-port-id");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Radius::RadiusAttribute::AcctSessionId::get_children()
{
    if(children.find("prepend-nas-port-id") == children.end())
    {
        if(prepend_nas_port_id != nullptr)
        {
            children["prepend-nas-port-id"] = prepend_nas_port_id.get();
        }
    }

    return children;
}

void Aaa::Radius::RadiusAttribute::AcctSessionId::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Radius::RadiusAttribute::RadiusAttribute()
    :
    acct_multi_session_id(std::make_unique<Aaa::Radius::RadiusAttribute::AcctMultiSessionId>())
	,acct_session_id(std::make_unique<Aaa::Radius::RadiusAttribute::AcctSessionId>())
{
    acct_multi_session_id->parent = this;
    children["acct-multi-session-id"] = acct_multi_session_id.get();

    acct_session_id->parent = this;
    children["acct-session-id"] = acct_session_id.get();

    yang_name = "radius-attribute"; yang_parent_name = "radius";
}

Aaa::Radius::RadiusAttribute::~RadiusAttribute()
{
}

bool Aaa::Radius::RadiusAttribute::has_data() const
{
    return (acct_multi_session_id !=  nullptr && acct_multi_session_id->has_data())
	|| (acct_session_id !=  nullptr && acct_session_id->has_data());
}

bool Aaa::Radius::RadiusAttribute::has_operation() const
{
    return is_set(operation)
	|| (acct_multi_session_id !=  nullptr && is_set(acct_multi_session_id->operation))
	|| (acct_session_id !=  nullptr && is_set(acct_session_id->operation));
}

std::string Aaa::Radius::RadiusAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius-attribute";

    return path_buffer.str();

}

EntityPath Aaa::Radius::RadiusAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::RadiusAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "acct-multi-session-id")
    {
        if(acct_multi_session_id != nullptr)
        {
            children["acct-multi-session-id"] = acct_multi_session_id.get();
        }
        else
        {
            acct_multi_session_id = std::make_unique<Aaa::Radius::RadiusAttribute::AcctMultiSessionId>();
            acct_multi_session_id->parent = this;
            children["acct-multi-session-id"] = acct_multi_session_id.get();
        }
        return children.at("acct-multi-session-id");
    }

    if(child_yang_name == "acct-session-id")
    {
        if(acct_session_id != nullptr)
        {
            children["acct-session-id"] = acct_session_id.get();
        }
        else
        {
            acct_session_id = std::make_unique<Aaa::Radius::RadiusAttribute::AcctSessionId>();
            acct_session_id->parent = this;
            children["acct-session-id"] = acct_session_id.get();
        }
        return children.at("acct-session-id");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Radius::RadiusAttribute::get_children()
{
    if(children.find("acct-multi-session-id") == children.end())
    {
        if(acct_multi_session_id != nullptr)
        {
            children["acct-multi-session-id"] = acct_multi_session_id.get();
        }
    }

    if(children.find("acct-session-id") == children.end())
    {
        if(acct_session_id != nullptr)
        {
            children["acct-session-id"] = acct_session_id.get();
        }
    }

    return children;
}

void Aaa::Radius::RadiusAttribute::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Radius::Attributes::Attribute::Attribute()
    :
    	attribute_list_name{YType::str, "attribute-list-name"},
	 attribute{YType::str, "attribute"}
{
    yang_name = "attribute"; yang_parent_name = "attributes";
}

Aaa::Radius::Attributes::Attribute::~Attribute()
{
}

bool Aaa::Radius::Attributes::Attribute::has_data() const
{
    return attribute_list_name.is_set
	|| attribute.is_set;
}

bool Aaa::Radius::Attributes::Attribute::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_list_name.operation)
	|| is_set(attribute.operation);
}

std::string Aaa::Radius::Attributes::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute" <<"[attribute-list-name='" <<attribute_list_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Radius::Attributes::Attribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/attributes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_list_name.is_set || is_set(attribute_list_name.operation)) leaf_name_data.push_back(attribute_list_name.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::Attributes::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Radius::Attributes::Attribute::get_children()
{
    return children;
}

void Aaa::Radius::Attributes::Attribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-list-name")
    {
        attribute_list_name = value;
    }
    if(value_path == "attribute")
    {
        attribute = value;
    }
}

Aaa::Radius::Attributes::Attributes()
{
    yang_name = "attributes"; yang_parent_name = "radius";
}

Aaa::Radius::Attributes::~Attributes()
{
}

bool Aaa::Radius::Attributes::has_data() const
{
    for (std::size_t index=0; index<attribute.size(); index++)
    {
        if(attribute[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Radius::Attributes::has_operation() const
{
    for (std::size_t index=0; index<attribute.size(); index++)
    {
        if(attribute[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Radius::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

EntityPath Aaa::Radius::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attribute")
    {
        for(auto const & c : attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Radius::Attributes::Attribute>();
        c->parent = this;
        attribute.push_back(std::move(c));
        children[segment_path] = attribute.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Radius::Attributes::get_children()
{
    for (auto const & c : attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Radius::Attributes::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Radius::SourcePort::SourcePort()
    :
    	extended{YType::empty, "extended"}
{
    yang_name = "source-port"; yang_parent_name = "radius";
}

Aaa::Radius::SourcePort::~SourcePort()
{
}

bool Aaa::Radius::SourcePort::has_data() const
{
    return extended.is_set;
}

bool Aaa::Radius::SourcePort::has_operation() const
{
    return is_set(operation)
	|| is_set(extended.operation);
}

std::string Aaa::Radius::SourcePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-port";

    return path_buffer.str();

}

EntityPath Aaa::Radius::SourcePort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.operation)) leaf_name_data.push_back(extended.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Radius::SourcePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Radius::SourcePort::get_children()
{
    return children;
}

void Aaa::Radius::SourcePort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended")
    {
        extended = value;
    }
}

Aaa::Radius::Radius()
    :
    	dead_time{YType::uint32, "dead-time"},
	 idle_time{YType::uint32, "idle-time"},
	 ignore_accounting_port{YType::boolean, "ignore-accounting-port"},
	 ignore_auth_port{YType::boolean, "ignore-auth-port"},
	 key{YType::str, "key"},
	 retransmit{YType::uint32, "retransmit"},
	 timeout{YType::uint32, "timeout"},
	 username{YType::str, "username"}
    	,
    attributes(std::make_unique<Aaa::Radius::Attributes>())
	,dead_criteria(std::make_unique<Aaa::Radius::DeadCriteria>())
	,disallow(std::make_unique<Aaa::Radius::Disallow>())
	,dynamic_authorization(std::make_unique<Aaa::Radius::DynamicAuthorization>())
	,hosts(std::make_unique<Aaa::Radius::Hosts>())
	,ipv4(std::make_unique<Aaa::Radius::Ipv4>())
	,ipv6(std::make_unique<Aaa::Radius::Ipv6>())
	,load_balance_options(std::make_unique<Aaa::Radius::LoadBalanceOptions>())
	,radius_attribute(std::make_unique<Aaa::Radius::RadiusAttribute>())
	,source_port(std::make_unique<Aaa::Radius::SourcePort>())
	,throttle(std::make_unique<Aaa::Radius::Throttle>())
	,vrfs(std::make_unique<Aaa::Radius::Vrfs>())
	,vsa(std::make_unique<Aaa::Radius::Vsa>())
{
    attributes->parent = this;
    children["attributes"] = attributes.get();

    dead_criteria->parent = this;
    children["dead-criteria"] = dead_criteria.get();

    disallow->parent = this;
    children["disallow"] = disallow.get();

    dynamic_authorization->parent = this;
    children["dynamic-authorization"] = dynamic_authorization.get();

    hosts->parent = this;
    children["hosts"] = hosts.get();

    ipv4->parent = this;
    children["ipv4"] = ipv4.get();

    ipv6->parent = this;
    children["ipv6"] = ipv6.get();

    load_balance_options->parent = this;
    children["load-balance-options"] = load_balance_options.get();

    radius_attribute->parent = this;
    children["radius-attribute"] = radius_attribute.get();

    source_port->parent = this;
    children["source-port"] = source_port.get();

    throttle->parent = this;
    children["throttle"] = throttle.get();

    vrfs->parent = this;
    children["vrfs"] = vrfs.get();

    vsa->parent = this;
    children["vsa"] = vsa.get();

    yang_name = "radius"; yang_parent_name = "aaa";
}

Aaa::Radius::~Radius()
{
}

bool Aaa::Radius::has_data() const
{
    return dead_time.is_set
	|| idle_time.is_set
	|| ignore_accounting_port.is_set
	|| ignore_auth_port.is_set
	|| key.is_set
	|| retransmit.is_set
	|| timeout.is_set
	|| username.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (dead_criteria !=  nullptr && dead_criteria->has_data())
	|| (disallow !=  nullptr && disallow->has_data())
	|| (dynamic_authorization !=  nullptr && dynamic_authorization->has_data())
	|| (hosts !=  nullptr && hosts->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (load_balance_options !=  nullptr && load_balance_options->has_data())
	|| (radius_attribute !=  nullptr && radius_attribute->has_data())
	|| (source_port !=  nullptr && source_port->has_data())
	|| (throttle !=  nullptr && throttle->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data())
	|| (vsa !=  nullptr && vsa->has_data());
}

bool Aaa::Radius::has_operation() const
{
    return is_set(operation)
	|| is_set(dead_time.operation)
	|| is_set(idle_time.operation)
	|| is_set(ignore_accounting_port.operation)
	|| is_set(ignore_auth_port.operation)
	|| is_set(key.operation)
	|| is_set(retransmit.operation)
	|| is_set(timeout.operation)
	|| is_set(username.operation)
	|| (attributes !=  nullptr && is_set(attributes->operation))
	|| (dead_criteria !=  nullptr && is_set(dead_criteria->operation))
	|| (disallow !=  nullptr && is_set(disallow->operation))
	|| (dynamic_authorization !=  nullptr && is_set(dynamic_authorization->operation))
	|| (hosts !=  nullptr && is_set(hosts->operation))
	|| (ipv4 !=  nullptr && is_set(ipv4->operation))
	|| (ipv6 !=  nullptr && is_set(ipv6->operation))
	|| (load_balance_options !=  nullptr && is_set(load_balance_options->operation))
	|| (radius_attribute !=  nullptr && is_set(radius_attribute->operation))
	|| (source_port !=  nullptr && is_set(source_port->operation))
	|| (throttle !=  nullptr && is_set(throttle->operation))
	|| (vrfs !=  nullptr && is_set(vrfs->operation))
	|| (vsa !=  nullptr && is_set(vsa->operation));
}

std::string Aaa::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-protocol-radius-cfg:radius";

    return path_buffer.str();

}

EntityPath Aaa::Radius::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dead_time.is_set || is_set(dead_time.operation)) leaf_name_data.push_back(dead_time.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.operation)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (ignore_accounting_port.is_set || is_set(ignore_accounting_port.operation)) leaf_name_data.push_back(ignore_accounting_port.get_name_leafdata());
    if (ignore_auth_port.is_set || is_set(ignore_auth_port.operation)) leaf_name_data.push_back(ignore_auth_port.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (retransmit.is_set || is_set(retransmit.operation)) leaf_name_data.push_back(retransmit.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


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

    if(child_yang_name == "attributes")
    {
        if(attributes != nullptr)
        {
            children["attributes"] = attributes.get();
        }
        else
        {
            attributes = std::make_unique<Aaa::Radius::Attributes>();
            attributes->parent = this;
            children["attributes"] = attributes.get();
        }
        return children.at("attributes");
    }

    if(child_yang_name == "dead-criteria")
    {
        if(dead_criteria != nullptr)
        {
            children["dead-criteria"] = dead_criteria.get();
        }
        else
        {
            dead_criteria = std::make_unique<Aaa::Radius::DeadCriteria>();
            dead_criteria->parent = this;
            children["dead-criteria"] = dead_criteria.get();
        }
        return children.at("dead-criteria");
    }

    if(child_yang_name == "disallow")
    {
        if(disallow != nullptr)
        {
            children["disallow"] = disallow.get();
        }
        else
        {
            disallow = std::make_unique<Aaa::Radius::Disallow>();
            disallow->parent = this;
            children["disallow"] = disallow.get();
        }
        return children.at("disallow");
    }

    if(child_yang_name == "dynamic-authorization")
    {
        if(dynamic_authorization != nullptr)
        {
            children["dynamic-authorization"] = dynamic_authorization.get();
        }
        else
        {
            dynamic_authorization = std::make_unique<Aaa::Radius::DynamicAuthorization>();
            dynamic_authorization->parent = this;
            children["dynamic-authorization"] = dynamic_authorization.get();
        }
        return children.at("dynamic-authorization");
    }

    if(child_yang_name == "hosts")
    {
        if(hosts != nullptr)
        {
            children["hosts"] = hosts.get();
        }
        else
        {
            hosts = std::make_unique<Aaa::Radius::Hosts>();
            hosts->parent = this;
            children["hosts"] = hosts.get();
        }
        return children.at("hosts");
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4.get();
        }
        else
        {
            ipv4 = std::make_unique<Aaa::Radius::Ipv4>();
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
            ipv6 = std::make_unique<Aaa::Radius::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6.get();
        }
        return children.at("ipv6");
    }

    if(child_yang_name == "load-balance-options")
    {
        if(load_balance_options != nullptr)
        {
            children["load-balance-options"] = load_balance_options.get();
        }
        else
        {
            load_balance_options = std::make_unique<Aaa::Radius::LoadBalanceOptions>();
            load_balance_options->parent = this;
            children["load-balance-options"] = load_balance_options.get();
        }
        return children.at("load-balance-options");
    }

    if(child_yang_name == "radius-attribute")
    {
        if(radius_attribute != nullptr)
        {
            children["radius-attribute"] = radius_attribute.get();
        }
        else
        {
            radius_attribute = std::make_unique<Aaa::Radius::RadiusAttribute>();
            radius_attribute->parent = this;
            children["radius-attribute"] = radius_attribute.get();
        }
        return children.at("radius-attribute");
    }

    if(child_yang_name == "source-port")
    {
        if(source_port != nullptr)
        {
            children["source-port"] = source_port.get();
        }
        else
        {
            source_port = std::make_unique<Aaa::Radius::SourcePort>();
            source_port->parent = this;
            children["source-port"] = source_port.get();
        }
        return children.at("source-port");
    }

    if(child_yang_name == "throttle")
    {
        if(throttle != nullptr)
        {
            children["throttle"] = throttle.get();
        }
        else
        {
            throttle = std::make_unique<Aaa::Radius::Throttle>();
            throttle->parent = this;
            children["throttle"] = throttle.get();
        }
        return children.at("throttle");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
        else
        {
            vrfs = std::make_unique<Aaa::Radius::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs.get();
        }
        return children.at("vrfs");
    }

    if(child_yang_name == "vsa")
    {
        if(vsa != nullptr)
        {
            children["vsa"] = vsa.get();
        }
        else
        {
            vsa = std::make_unique<Aaa::Radius::Vsa>();
            vsa->parent = this;
            children["vsa"] = vsa.get();
        }
        return children.at("vsa");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Radius::get_children()
{
    if(children.find("attributes") == children.end())
    {
        if(attributes != nullptr)
        {
            children["attributes"] = attributes.get();
        }
    }

    if(children.find("dead-criteria") == children.end())
    {
        if(dead_criteria != nullptr)
        {
            children["dead-criteria"] = dead_criteria.get();
        }
    }

    if(children.find("disallow") == children.end())
    {
        if(disallow != nullptr)
        {
            children["disallow"] = disallow.get();
        }
    }

    if(children.find("dynamic-authorization") == children.end())
    {
        if(dynamic_authorization != nullptr)
        {
            children["dynamic-authorization"] = dynamic_authorization.get();
        }
    }

    if(children.find("hosts") == children.end())
    {
        if(hosts != nullptr)
        {
            children["hosts"] = hosts.get();
        }
    }

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

    if(children.find("load-balance-options") == children.end())
    {
        if(load_balance_options != nullptr)
        {
            children["load-balance-options"] = load_balance_options.get();
        }
    }

    if(children.find("radius-attribute") == children.end())
    {
        if(radius_attribute != nullptr)
        {
            children["radius-attribute"] = radius_attribute.get();
        }
    }

    if(children.find("source-port") == children.end())
    {
        if(source_port != nullptr)
        {
            children["source-port"] = source_port.get();
        }
    }

    if(children.find("throttle") == children.end())
    {
        if(throttle != nullptr)
        {
            children["throttle"] = throttle.get();
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
    }

    if(children.find("vsa") == children.end())
    {
        if(vsa != nullptr)
        {
            children["vsa"] = vsa.get();
        }
    }

    return children;
}

void Aaa::Radius::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dead-time")
    {
        dead_time = value;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
    }
    if(value_path == "ignore-accounting-port")
    {
        ignore_accounting_port = value;
    }
    if(value_path == "ignore-auth-port")
    {
        ignore_auth_port = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "retransmit")
    {
        retransmit = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

Aaa::Tacacs::Ipv6::Ipv6()
    :
    	dscp{YType::str, "dscp"}
{
    yang_name = "ipv6"; yang_parent_name = "tacacs";
}

Aaa::Tacacs::Ipv6::~Ipv6()
{
}

bool Aaa::Tacacs::Ipv6::has_data() const
{
    return dscp.is_set;
}

bool Aaa::Tacacs::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp.operation);
}

std::string Aaa::Tacacs::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-tacacs-cfg:tacacs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Tacacs::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Tacacs::Ipv6::get_children()
{
    return children;
}

void Aaa::Tacacs::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp")
    {
        dscp = value;
    }
}

Aaa::Tacacs::Hosts::Host::Host()
    :
    	ip_address{YType::str, "ip-address"},
	 ordering_index{YType::int32, "ordering-index"},
	 port_number{YType::uint32, "port-number"},
	 key{YType::str, "key"},
	 single_connect{YType::boolean, "single-connect"},
	 timeout{YType::uint32, "timeout"}
{
    yang_name = "host"; yang_parent_name = "hosts";
}

Aaa::Tacacs::Hosts::Host::~Host()
{
}

bool Aaa::Tacacs::Hosts::Host::has_data() const
{
    return ip_address.is_set
	|| ordering_index.is_set
	|| port_number.is_set
	|| key.is_set
	|| single_connect.is_set
	|| timeout.is_set;
}

bool Aaa::Tacacs::Hosts::Host::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| is_set(ordering_index.operation)
	|| is_set(port_number.operation)
	|| is_set(key.operation)
	|| is_set(single_connect.operation)
	|| is_set(timeout.operation);
}

std::string Aaa::Tacacs::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host" <<"[ip-address='" <<ip_address.get() <<"']" <<"[ordering-index='" <<ordering_index.get() <<"']" <<"[port-number='" <<port_number.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::Hosts::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-tacacs-cfg:tacacs/hosts/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ordering_index.is_set || is_set(ordering_index.operation)) leaf_name_data.push_back(ordering_index.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.operation)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (single_connect.is_set || is_set(single_connect.operation)) leaf_name_data.push_back(single_connect.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Tacacs::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Tacacs::Hosts::Host::get_children()
{
    return children;
}

void Aaa::Tacacs::Hosts::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "ordering-index")
    {
        ordering_index = value;
    }
    if(value_path == "port-number")
    {
        port_number = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "single-connect")
    {
        single_connect = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Aaa::Tacacs::Hosts::Hosts()
{
    yang_name = "hosts"; yang_parent_name = "tacacs";
}

Aaa::Tacacs::Hosts::~Hosts()
{
}

bool Aaa::Tacacs::Hosts::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Tacacs::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Tacacs::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::Hosts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-tacacs-cfg:tacacs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Tacacs::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Tacacs::Hosts::Host>();
        c->parent = this;
        host.push_back(std::move(c));
        children[segment_path] = host.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Tacacs::Hosts::get_children()
{
    for (auto const & c : host)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Tacacs::Hosts::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Tacacs::Ipv4::Ipv4()
    :
    	dscp{YType::str, "dscp"}
{
    yang_name = "ipv4"; yang_parent_name = "tacacs";
}

Aaa::Tacacs::Ipv4::~Ipv4()
{
}

bool Aaa::Tacacs::Ipv4::has_data() const
{
    return dscp.is_set;
}

bool Aaa::Tacacs::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp.operation);
}

std::string Aaa::Tacacs::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-tacacs-cfg:tacacs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Tacacs::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Tacacs::Ipv4::get_children()
{
    return children;
}

void Aaa::Tacacs::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp")
    {
        dscp = value;
    }
}

Aaa::Tacacs::Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"},
	 source_interface{YType::str, "source-interface"}
{
    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Aaa::Tacacs::Vrfs::Vrf::~Vrf()
{
}

bool Aaa::Tacacs::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| source_interface.is_set;
}

bool Aaa::Tacacs::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(source_interface.operation);
}

std::string Aaa::Tacacs::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-tacacs-cfg:tacacs/vrfs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Tacacs::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Aaa::Tacacs::Vrfs::Vrf::get_children()
{
    return children;
}

void Aaa::Tacacs::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

Aaa::Tacacs::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "tacacs";
}

Aaa::Tacacs::Vrfs::~Vrfs()
{
}

bool Aaa::Tacacs::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Tacacs::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Tacacs::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-tacacs-cfg:tacacs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Aaa::Tacacs::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Aaa::Tacacs::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Tacacs::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Aaa::Tacacs::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Tacacs::Tacacs()
    :
    	key{YType::str, "key"},
	 single_connect{YType::boolean, "single-connect"},
	 timeout{YType::uint32, "timeout"}
    	,
    hosts(std::make_unique<Aaa::Tacacs::Hosts>())
	,ipv4(std::make_unique<Aaa::Tacacs::Ipv4>())
	,ipv6(std::make_unique<Aaa::Tacacs::Ipv6>())
	,vrfs(std::make_unique<Aaa::Tacacs::Vrfs>())
{
    hosts->parent = this;
    children["hosts"] = hosts.get();

    ipv4->parent = this;
    children["ipv4"] = ipv4.get();

    ipv6->parent = this;
    children["ipv6"] = ipv6.get();

    vrfs->parent = this;
    children["vrfs"] = vrfs.get();

    yang_name = "tacacs"; yang_parent_name = "aaa";
}

Aaa::Tacacs::~Tacacs()
{
}

bool Aaa::Tacacs::has_data() const
{
    return key.is_set
	|| single_connect.is_set
	|| timeout.is_set
	|| (hosts !=  nullptr && hosts->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Aaa::Tacacs::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| is_set(single_connect.operation)
	|| is_set(timeout.operation)
	|| (hosts !=  nullptr && is_set(hosts->operation))
	|| (ipv4 !=  nullptr && is_set(ipv4->operation))
	|| (ipv6 !=  nullptr && is_set(ipv6->operation))
	|| (vrfs !=  nullptr && is_set(vrfs->operation));
}

std::string Aaa::Tacacs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-tacacs-cfg:tacacs";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (single_connect.is_set || is_set(single_connect.operation)) leaf_name_data.push_back(single_connect.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


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

    if(child_yang_name == "hosts")
    {
        if(hosts != nullptr)
        {
            children["hosts"] = hosts.get();
        }
        else
        {
            hosts = std::make_unique<Aaa::Tacacs::Hosts>();
            hosts->parent = this;
            children["hosts"] = hosts.get();
        }
        return children.at("hosts");
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4.get();
        }
        else
        {
            ipv4 = std::make_unique<Aaa::Tacacs::Ipv4>();
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
            ipv6 = std::make_unique<Aaa::Tacacs::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6.get();
        }
        return children.at("ipv6");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
        else
        {
            vrfs = std::make_unique<Aaa::Tacacs::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs.get();
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::Tacacs::get_children()
{
    if(children.find("hosts") == children.end())
    {
        if(hosts != nullptr)
        {
            children["hosts"] = hosts.get();
        }
    }

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

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
    }

    return children;
}

void Aaa::Tacacs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "single-connect")
    {
        single_connect = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Aaa::Aaa()
    :
    	default_taskgroup{YType::str, "default-taskgroup"}
    	,
    accounting_update(nullptr) // presence node
	,accountings(std::make_unique<Aaa::Accountings>())
	,authentications(std::make_unique<Aaa::Authentications>())
	,authorizations(std::make_unique<Aaa::Authorizations>())
	,radius(std::make_unique<Aaa::Radius>())
	,server_groups(std::make_unique<Aaa::ServerGroups>())
	,tacacs(std::make_unique<Aaa::Tacacs>())
	,taskgroups(std::make_unique<Aaa::Taskgroups>())
	,usergroups(std::make_unique<Aaa::Usergroups>())
	,usernames(std::make_unique<Aaa::Usernames>())
{
    accountings->parent = this;
    children["accountings"] = accountings.get();

    authentications->parent = this;
    children["authentications"] = authentications.get();

    authorizations->parent = this;
    children["authorizations"] = authorizations.get();

    radius->parent = this;
    children["radius"] = radius.get();

    server_groups->parent = this;
    children["server-groups"] = server_groups.get();

    tacacs->parent = this;
    children["tacacs"] = tacacs.get();

    taskgroups->parent = this;
    children["taskgroups"] = taskgroups.get();

    usergroups->parent = this;
    children["usergroups"] = usergroups.get();

    usernames->parent = this;
    children["usernames"] = usernames.get();

    yang_name = "aaa"; yang_parent_name = "Cisco-IOS-XR-aaa-lib-cfg";
}

Aaa::~Aaa()
{
}

bool Aaa::has_data() const
{
    return default_taskgroup.is_set
	|| (accounting_update !=  nullptr && accounting_update->has_data())
	|| (accountings !=  nullptr && accountings->has_data())
	|| (authentications !=  nullptr && authentications->has_data())
	|| (authorizations !=  nullptr && authorizations->has_data())
	|| (radius !=  nullptr && radius->has_data())
	|| (server_groups !=  nullptr && server_groups->has_data())
	|| (tacacs !=  nullptr && tacacs->has_data())
	|| (taskgroups !=  nullptr && taskgroups->has_data())
	|| (usergroups !=  nullptr && usergroups->has_data())
	|| (usernames !=  nullptr && usernames->has_data());
}

bool Aaa::has_operation() const
{
    return is_set(operation)
	|| is_set(default_taskgroup.operation)
	|| (accounting_update !=  nullptr && is_set(accounting_update->operation))
	|| (accountings !=  nullptr && is_set(accountings->operation))
	|| (authentications !=  nullptr && is_set(authentications->operation))
	|| (authorizations !=  nullptr && is_set(authorizations->operation))
	|| (radius !=  nullptr && is_set(radius->operation))
	|| (server_groups !=  nullptr && is_set(server_groups->operation))
	|| (tacacs !=  nullptr && is_set(tacacs->operation))
	|| (taskgroups !=  nullptr && is_set(taskgroups->operation))
	|| (usergroups !=  nullptr && is_set(usergroups->operation))
	|| (usernames !=  nullptr && is_set(usernames->operation));
}

std::string Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa";

    return path_buffer.str();

}

EntityPath Aaa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_taskgroup.is_set || is_set(default_taskgroup.operation)) leaf_name_data.push_back(default_taskgroup.get_name_leafdata());


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

    if(child_yang_name == "accounting-update")
    {
        if(accounting_update != nullptr)
        {
            children["accounting-update"] = accounting_update.get();
        }
        else
        {
            accounting_update = std::make_unique<Aaa::AccountingUpdate>();
            accounting_update->parent = this;
            children["accounting-update"] = accounting_update.get();
        }
        return children.at("accounting-update");
    }

    if(child_yang_name == "accountings")
    {
        if(accountings != nullptr)
        {
            children["accountings"] = accountings.get();
        }
        else
        {
            accountings = std::make_unique<Aaa::Accountings>();
            accountings->parent = this;
            children["accountings"] = accountings.get();
        }
        return children.at("accountings");
    }

    if(child_yang_name == "authentications")
    {
        if(authentications != nullptr)
        {
            children["authentications"] = authentications.get();
        }
        else
        {
            authentications = std::make_unique<Aaa::Authentications>();
            authentications->parent = this;
            children["authentications"] = authentications.get();
        }
        return children.at("authentications");
    }

    if(child_yang_name == "authorizations")
    {
        if(authorizations != nullptr)
        {
            children["authorizations"] = authorizations.get();
        }
        else
        {
            authorizations = std::make_unique<Aaa::Authorizations>();
            authorizations->parent = this;
            children["authorizations"] = authorizations.get();
        }
        return children.at("authorizations");
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

    if(child_yang_name == "server-groups")
    {
        if(server_groups != nullptr)
        {
            children["server-groups"] = server_groups.get();
        }
        else
        {
            server_groups = std::make_unique<Aaa::ServerGroups>();
            server_groups->parent = this;
            children["server-groups"] = server_groups.get();
        }
        return children.at("server-groups");
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

    if(child_yang_name == "usernames")
    {
        if(usernames != nullptr)
        {
            children["usernames"] = usernames.get();
        }
        else
        {
            usernames = std::make_unique<Aaa::Usernames>();
            usernames->parent = this;
            children["usernames"] = usernames.get();
        }
        return children.at("usernames");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Aaa::get_children()
{
    if(children.find("accounting-update") == children.end())
    {
        if(accounting_update != nullptr)
        {
            children["accounting-update"] = accounting_update.get();
        }
    }

    if(children.find("accountings") == children.end())
    {
        if(accountings != nullptr)
        {
            children["accountings"] = accountings.get();
        }
    }

    if(children.find("authentications") == children.end())
    {
        if(authentications != nullptr)
        {
            children["authentications"] = authentications.get();
        }
    }

    if(children.find("authorizations") == children.end())
    {
        if(authorizations != nullptr)
        {
            children["authorizations"] = authorizations.get();
        }
    }

    if(children.find("radius") == children.end())
    {
        if(radius != nullptr)
        {
            children["radius"] = radius.get();
        }
    }

    if(children.find("server-groups") == children.end())
    {
        if(server_groups != nullptr)
        {
            children["server-groups"] = server_groups.get();
        }
    }

    if(children.find("tacacs") == children.end())
    {
        if(tacacs != nullptr)
        {
            children["tacacs"] = tacacs.get();
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

    if(children.find("usernames") == children.end())
    {
        if(usernames != nullptr)
        {
            children["usernames"] = usernames.get();
        }
    }

    return children;
}

void Aaa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-taskgroup")
    {
        default_taskgroup = value;
    }
}

std::unique_ptr<Entity> Aaa::clone_ptr()
{
    return std::make_unique<Aaa>();
}

const Enum::Value AaaMethodEnum::not_set {0, "not-set"};
const Enum::Value AaaMethodEnum::none {1, "none"};
const Enum::Value AaaMethodEnum::local {2, "local"};
const Enum::Value AaaMethodEnum::radius {3, "radius"};
const Enum::Value AaaMethodEnum::tacacs_plus {4, "tacacs-plus"};
const Enum::Value AaaMethodEnum::dsmd {5, "dsmd"};
const Enum::Value AaaMethodEnum::sgbp {6, "sgbp"};
const Enum::Value AaaMethodEnum::acct_d {7, "acct-d"};
const Enum::Value AaaMethodEnum::error {8, "error"};
const Enum::Value AaaMethodEnum::if_authenticated {9, "if-authenticated"};
const Enum::Value AaaMethodEnum::server_group {10, "server-group"};
const Enum::Value AaaMethodEnum::server_group_not_defined {11, "server-group-not-defined"};
const Enum::Value AaaMethodEnum::line {12, "line"};
const Enum::Value AaaMethodEnum::enable {13, "enable"};
const Enum::Value AaaMethodEnum::kerberos {14, "kerberos"};
const Enum::Value AaaMethodEnum::diameter {15, "diameter"};
const Enum::Value AaaMethodEnum::last {16, "last"};

const Enum::Value AaaAccountingUpdateEnum::none {0, "none"};
const Enum::Value AaaAccountingUpdateEnum::newinfo {3, "newinfo"};
const Enum::Value AaaAccountingUpdateEnum::periodic {4, "periodic"};

const Enum::Value AaaAccountingRpFailoverEnum::not_set {0, "not-set"};
const Enum::Value AaaAccountingRpFailoverEnum::set {1, "set"};

const Enum::Value AaaAccountingEnum::not_set {0, "not-set"};
const Enum::Value AaaAccountingEnum::start_stop {1, "start-stop"};
const Enum::Value AaaAccountingEnum::stop_only {2, "stop-only"};

const Enum::Value AaaAccountingBroadcastEnum::not_set {0, "not-set"};
const Enum::Value AaaAccountingBroadcastEnum::set {1, "set"};


}
}

