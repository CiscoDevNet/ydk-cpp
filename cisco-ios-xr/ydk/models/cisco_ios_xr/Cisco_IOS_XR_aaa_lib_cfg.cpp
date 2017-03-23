
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_aaa_lib_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_aaa_lib_cfg {

Aaa::Aaa()
    :
    default_taskgroup{YType::str, "Cisco-IOS-XR-aaa-locald-cfg:default-taskgroup"}
    	,
    aaa_dot1x(std::make_shared<Aaa::AaaDot1X>())
	,aaa_mobile(std::make_shared<Aaa::AaaMobile>())
	,aaa_subscriber(std::make_shared<Aaa::AaaSubscriber>())
	,accounting_update(nullptr) // presence node
	,accountings(std::make_shared<Aaa::Accountings>())
	,authentications(std::make_shared<Aaa::Authentications>())
	,authorizations(std::make_shared<Aaa::Authorizations>())
	,banner(std::make_shared<Aaa::Banner>())
	,diameter(std::make_shared<Aaa::Diameter>())
	,radius(std::make_shared<Aaa::Radius>())
	,radius_attribute(std::make_shared<Aaa::RadiusAttribute>())
	,server_groups(std::make_shared<Aaa::ServerGroups>())
	,tacacs(std::make_shared<Aaa::Tacacs>())
	,taskgroups(std::make_shared<Aaa::Taskgroups>())
	,usergroups(std::make_shared<Aaa::Usergroups>())
	,usernames(std::make_shared<Aaa::Usernames>())
{
    aaa_dot1x->parent = this;
    children["aaa-dot1x"] = aaa_dot1x;

    aaa_mobile->parent = this;
    children["aaa-mobile"] = aaa_mobile;

    aaa_subscriber->parent = this;
    children["aaa-subscriber"] = aaa_subscriber;

    accountings->parent = this;
    children["accountings"] = accountings;

    authentications->parent = this;
    children["authentications"] = authentications;

    authorizations->parent = this;
    children["authorizations"] = authorizations;

    banner->parent = this;
    children["banner"] = banner;

    diameter->parent = this;
    children["diameter"] = diameter;

    radius->parent = this;
    children["radius"] = radius;

    radius_attribute->parent = this;
    children["radius-attribute"] = radius_attribute;

    server_groups->parent = this;
    children["server-groups"] = server_groups;

    tacacs->parent = this;
    children["tacacs"] = tacacs;

    taskgroups->parent = this;
    children["taskgroups"] = taskgroups;

    usergroups->parent = this;
    children["usergroups"] = usergroups;

    usernames->parent = this;
    children["usernames"] = usernames;

    yang_name = "aaa"; yang_parent_name = "Cisco-IOS-XR-aaa-lib-cfg";
}

Aaa::~Aaa()
{
}

bool Aaa::has_data() const
{
    return default_taskgroup.is_set
	|| (aaa_dot1x !=  nullptr && aaa_dot1x->has_data())
	|| (aaa_mobile !=  nullptr && aaa_mobile->has_data())
	|| (aaa_subscriber !=  nullptr && aaa_subscriber->has_data())
	|| (accounting_update !=  nullptr && accounting_update->has_data())
	|| (accountings !=  nullptr && accountings->has_data())
	|| (authentications !=  nullptr && authentications->has_data())
	|| (authorizations !=  nullptr && authorizations->has_data())
	|| (banner !=  nullptr && banner->has_data())
	|| (diameter !=  nullptr && diameter->has_data())
	|| (radius !=  nullptr && radius->has_data())
	|| (radius_attribute !=  nullptr && radius_attribute->has_data())
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
	|| (aaa_dot1x !=  nullptr && aaa_dot1x->has_operation())
	|| (aaa_mobile !=  nullptr && aaa_mobile->has_operation())
	|| (aaa_subscriber !=  nullptr && aaa_subscriber->has_operation())
	|| (accounting_update !=  nullptr && accounting_update->has_operation())
	|| (accountings !=  nullptr && accountings->has_operation())
	|| (authentications !=  nullptr && authentications->has_operation())
	|| (authorizations !=  nullptr && authorizations->has_operation())
	|| (banner !=  nullptr && banner->has_operation())
	|| (diameter !=  nullptr && diameter->has_operation())
	|| (radius !=  nullptr && radius->has_operation())
	|| (radius_attribute !=  nullptr && radius_attribute->has_operation())
	|| (server_groups !=  nullptr && server_groups->has_operation())
	|| (tacacs !=  nullptr && tacacs->has_operation())
	|| (taskgroups !=  nullptr && taskgroups->has_operation())
	|| (usergroups !=  nullptr && usergroups->has_operation())
	|| (usernames !=  nullptr && usernames->has_operation());
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
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_taskgroup.is_set || is_set(default_taskgroup.operation)) leaf_name_data.push_back(default_taskgroup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "aaa-dot1x")
    {
        if(aaa_dot1x != nullptr)
        {
            children["aaa-dot1x"] = aaa_dot1x;
        }
        else
        {
            aaa_dot1x = std::make_shared<Aaa::AaaDot1X>();
            aaa_dot1x->parent = this;
            children["aaa-dot1x"] = aaa_dot1x;
        }
        return children.at("aaa-dot1x");
    }

    if(child_yang_name == "aaa-mobile")
    {
        if(aaa_mobile != nullptr)
        {
            children["aaa-mobile"] = aaa_mobile;
        }
        else
        {
            aaa_mobile = std::make_shared<Aaa::AaaMobile>();
            aaa_mobile->parent = this;
            children["aaa-mobile"] = aaa_mobile;
        }
        return children.at("aaa-mobile");
    }

    if(child_yang_name == "aaa-subscriber")
    {
        if(aaa_subscriber != nullptr)
        {
            children["aaa-subscriber"] = aaa_subscriber;
        }
        else
        {
            aaa_subscriber = std::make_shared<Aaa::AaaSubscriber>();
            aaa_subscriber->parent = this;
            children["aaa-subscriber"] = aaa_subscriber;
        }
        return children.at("aaa-subscriber");
    }

    if(child_yang_name == "accounting-update")
    {
        if(accounting_update != nullptr)
        {
            children["accounting-update"] = accounting_update;
        }
        else
        {
            accounting_update = std::make_shared<Aaa::AccountingUpdate>();
            accounting_update->parent = this;
            children["accounting-update"] = accounting_update;
        }
        return children.at("accounting-update");
    }

    if(child_yang_name == "accountings")
    {
        if(accountings != nullptr)
        {
            children["accountings"] = accountings;
        }
        else
        {
            accountings = std::make_shared<Aaa::Accountings>();
            accountings->parent = this;
            children["accountings"] = accountings;
        }
        return children.at("accountings");
    }

    if(child_yang_name == "authentications")
    {
        if(authentications != nullptr)
        {
            children["authentications"] = authentications;
        }
        else
        {
            authentications = std::make_shared<Aaa::Authentications>();
            authentications->parent = this;
            children["authentications"] = authentications;
        }
        return children.at("authentications");
    }

    if(child_yang_name == "authorizations")
    {
        if(authorizations != nullptr)
        {
            children["authorizations"] = authorizations;
        }
        else
        {
            authorizations = std::make_shared<Aaa::Authorizations>();
            authorizations->parent = this;
            children["authorizations"] = authorizations;
        }
        return children.at("authorizations");
    }

    if(child_yang_name == "banner")
    {
        if(banner != nullptr)
        {
            children["banner"] = banner;
        }
        else
        {
            banner = std::make_shared<Aaa::Banner>();
            banner->parent = this;
            children["banner"] = banner;
        }
        return children.at("banner");
    }

    if(child_yang_name == "diameter")
    {
        if(diameter != nullptr)
        {
            children["diameter"] = diameter;
        }
        else
        {
            diameter = std::make_shared<Aaa::Diameter>();
            diameter->parent = this;
            children["diameter"] = diameter;
        }
        return children.at("diameter");
    }

    if(child_yang_name == "radius")
    {
        if(radius != nullptr)
        {
            children["radius"] = radius;
        }
        else
        {
            radius = std::make_shared<Aaa::Radius>();
            radius->parent = this;
            children["radius"] = radius;
        }
        return children.at("radius");
    }

    if(child_yang_name == "radius-attribute")
    {
        if(radius_attribute != nullptr)
        {
            children["radius-attribute"] = radius_attribute;
        }
        else
        {
            radius_attribute = std::make_shared<Aaa::RadiusAttribute>();
            radius_attribute->parent = this;
            children["radius-attribute"] = radius_attribute;
        }
        return children.at("radius-attribute");
    }

    if(child_yang_name == "server-groups")
    {
        if(server_groups != nullptr)
        {
            children["server-groups"] = server_groups;
        }
        else
        {
            server_groups = std::make_shared<Aaa::ServerGroups>();
            server_groups->parent = this;
            children["server-groups"] = server_groups;
        }
        return children.at("server-groups");
    }

    if(child_yang_name == "tacacs")
    {
        if(tacacs != nullptr)
        {
            children["tacacs"] = tacacs;
        }
        else
        {
            tacacs = std::make_shared<Aaa::Tacacs>();
            tacacs->parent = this;
            children["tacacs"] = tacacs;
        }
        return children.at("tacacs");
    }

    if(child_yang_name == "taskgroups")
    {
        if(taskgroups != nullptr)
        {
            children["taskgroups"] = taskgroups;
        }
        else
        {
            taskgroups = std::make_shared<Aaa::Taskgroups>();
            taskgroups->parent = this;
            children["taskgroups"] = taskgroups;
        }
        return children.at("taskgroups");
    }

    if(child_yang_name == "usergroups")
    {
        if(usergroups != nullptr)
        {
            children["usergroups"] = usergroups;
        }
        else
        {
            usergroups = std::make_shared<Aaa::Usergroups>();
            usergroups->parent = this;
            children["usergroups"] = usergroups;
        }
        return children.at("usergroups");
    }

    if(child_yang_name == "usernames")
    {
        if(usernames != nullptr)
        {
            children["usernames"] = usernames;
        }
        else
        {
            usernames = std::make_shared<Aaa::Usernames>();
            usernames->parent = this;
            children["usernames"] = usernames;
        }
        return children.at("usernames");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::get_children()
{
    if(children.find("aaa-dot1x") == children.end())
    {
        if(aaa_dot1x != nullptr)
        {
            children["aaa-dot1x"] = aaa_dot1x;
        }
    }

    if(children.find("aaa-mobile") == children.end())
    {
        if(aaa_mobile != nullptr)
        {
            children["aaa-mobile"] = aaa_mobile;
        }
    }

    if(children.find("aaa-subscriber") == children.end())
    {
        if(aaa_subscriber != nullptr)
        {
            children["aaa-subscriber"] = aaa_subscriber;
        }
    }

    if(children.find("accounting-update") == children.end())
    {
        if(accounting_update != nullptr)
        {
            children["accounting-update"] = accounting_update;
        }
    }

    if(children.find("accountings") == children.end())
    {
        if(accountings != nullptr)
        {
            children["accountings"] = accountings;
        }
    }

    if(children.find("authentications") == children.end())
    {
        if(authentications != nullptr)
        {
            children["authentications"] = authentications;
        }
    }

    if(children.find("authorizations") == children.end())
    {
        if(authorizations != nullptr)
        {
            children["authorizations"] = authorizations;
        }
    }

    if(children.find("banner") == children.end())
    {
        if(banner != nullptr)
        {
            children["banner"] = banner;
        }
    }

    if(children.find("diameter") == children.end())
    {
        if(diameter != nullptr)
        {
            children["diameter"] = diameter;
        }
    }

    if(children.find("radius") == children.end())
    {
        if(radius != nullptr)
        {
            children["radius"] = radius;
        }
    }

    if(children.find("radius-attribute") == children.end())
    {
        if(radius_attribute != nullptr)
        {
            children["radius-attribute"] = radius_attribute;
        }
    }

    if(children.find("server-groups") == children.end())
    {
        if(server_groups != nullptr)
        {
            children["server-groups"] = server_groups;
        }
    }

    if(children.find("tacacs") == children.end())
    {
        if(tacacs != nullptr)
        {
            children["tacacs"] = tacacs;
        }
    }

    if(children.find("taskgroups") == children.end())
    {
        if(taskgroups != nullptr)
        {
            children["taskgroups"] = taskgroups;
        }
    }

    if(children.find("usergroups") == children.end())
    {
        if(usergroups != nullptr)
        {
            children["usergroups"] = usergroups;
        }
    }

    if(children.find("usernames") == children.end())
    {
        if(usernames != nullptr)
        {
            children["usernames"] = usernames;
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

std::shared_ptr<Entity> Aaa::clone_ptr() const
{
    return std::make_shared<Aaa>();
}

std::string Aaa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Aaa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Aaa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Accountings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Accountings::Accounting>();
        c->parent = this;
        accounting.push_back(std::move(c));
        children[segment_path] = accounting.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Accountings::get_children()
{
    for (auto const & c : accounting)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Accountings::set_value(const std::string & value_path, std::string value)
{
}

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
    for (auto const & leaf : method.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
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
    for (auto const & leaf : method.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(listname.operation)
	|| is_set(type.operation)
	|| is_set(broadcast.operation)
	|| is_set(method.operation)
	|| is_set(rp_failover.operation)
	|| is_set(server_group_name.operation)
	|| is_set(type_xr.operation);
}

std::string Aaa::Accountings::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting" <<"[listname='" <<listname <<"']" <<"[type='" <<type <<"']";

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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
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

std::shared_ptr<Entity> Aaa::Accountings::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Accountings::Accounting::get_children()
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Authorizations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Authorizations::Authorization>();
        c->parent = this;
        authorization.push_back(std::move(c));
        children[segment_path] = authorization.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Authorizations::get_children()
{
    for (auto const & c : authorization)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Authorizations::set_value(const std::string & value_path, std::string value)
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
    for (auto const & leaf : method.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return listname.is_set
	|| type.is_set;
}

bool Aaa::Authorizations::Authorization::has_operation() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(listname.operation)
	|| is_set(type.operation)
	|| is_set(method.operation)
	|| is_set(server_group_name.operation);
}

std::string Aaa::Authorizations::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization" <<"[listname='" <<listname <<"']" <<"[type='" <<type <<"']";

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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
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

std::shared_ptr<Entity> Aaa::Authorizations::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Authorizations::Authorization::get_children()
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (periodic_interval.is_set || is_set(periodic_interval.operation)) leaf_name_data.push_back(periodic_interval.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::AccountingUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::AccountingUpdate::get_children()
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

Aaa::Banner::Banner()
    :
    login{YType::str, "login"}
{
    yang_name = "banner"; yang_parent_name = "aaa";
}

Aaa::Banner::~Banner()
{
}

bool Aaa::Banner::has_data() const
{
    return login.is_set;
}

bool Aaa::Banner::has_operation() const
{
    return is_set(operation)
	|| is_set(login.operation);
}

std::string Aaa::Banner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "banner";

    return path_buffer.str();

}

EntityPath Aaa::Banner::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (login.is_set || is_set(login.operation)) leaf_name_data.push_back(login.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Banner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Banner::get_children()
{
    return children;
}

void Aaa::Banner::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "login")
    {
        login = value;
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Authentications::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Authentications::Authentication>();
        c->parent = this;
        authentication.push_back(std::move(c));
        children[segment_path] = authentication.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Authentications::get_children()
{
    for (auto const & c : authentication)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Authentications::set_value(const std::string & value_path, std::string value)
{
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
    for (auto const & leaf : method.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return listname.is_set
	|| type.is_set;
}

bool Aaa::Authentications::Authentication::has_operation() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(listname.operation)
	|| is_set(type.operation)
	|| is_set(method.operation)
	|| is_set(server_group_name.operation);
}

std::string Aaa::Authentications::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication" <<"[listname='" <<listname <<"']" <<"[type='" <<type <<"']";

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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
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

std::shared_ptr<Entity> Aaa::Authentications::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Authentications::Authentication::get_children()
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

Aaa::ServerGroups::ServerGroups()
    :
    diameter_server_groups(std::make_shared<Aaa::ServerGroups::DiameterServerGroups>())
	,radius_server_groups(std::make_shared<Aaa::ServerGroups::RadiusServerGroups>())
	,tacacs_server_groups(std::make_shared<Aaa::ServerGroups::TacacsServerGroups>())
{
    diameter_server_groups->parent = this;
    children["diameter-server-groups"] = diameter_server_groups;

    radius_server_groups->parent = this;
    children["radius-server-groups"] = radius_server_groups;

    tacacs_server_groups->parent = this;
    children["tacacs-server-groups"] = tacacs_server_groups;

    yang_name = "server-groups"; yang_parent_name = "aaa";
}

Aaa::ServerGroups::~ServerGroups()
{
}

bool Aaa::ServerGroups::has_data() const
{
    return (diameter_server_groups !=  nullptr && diameter_server_groups->has_data())
	|| (radius_server_groups !=  nullptr && radius_server_groups->has_data())
	|| (tacacs_server_groups !=  nullptr && tacacs_server_groups->has_data());
}

bool Aaa::ServerGroups::has_operation() const
{
    return is_set(operation)
	|| (diameter_server_groups !=  nullptr && diameter_server_groups->has_operation())
	|| (radius_server_groups !=  nullptr && radius_server_groups->has_operation())
	|| (tacacs_server_groups !=  nullptr && tacacs_server_groups->has_operation());
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "diameter-server-groups")
    {
        if(diameter_server_groups != nullptr)
        {
            children["diameter-server-groups"] = diameter_server_groups;
        }
        else
        {
            diameter_server_groups = std::make_shared<Aaa::ServerGroups::DiameterServerGroups>();
            diameter_server_groups->parent = this;
            children["diameter-server-groups"] = diameter_server_groups;
        }
        return children.at("diameter-server-groups");
    }

    if(child_yang_name == "radius-server-groups")
    {
        if(radius_server_groups != nullptr)
        {
            children["radius-server-groups"] = radius_server_groups;
        }
        else
        {
            radius_server_groups = std::make_shared<Aaa::ServerGroups::RadiusServerGroups>();
            radius_server_groups->parent = this;
            children["radius-server-groups"] = radius_server_groups;
        }
        return children.at("radius-server-groups");
    }

    if(child_yang_name == "tacacs-server-groups")
    {
        if(tacacs_server_groups != nullptr)
        {
            children["tacacs-server-groups"] = tacacs_server_groups;
        }
        else
        {
            tacacs_server_groups = std::make_shared<Aaa::ServerGroups::TacacsServerGroups>();
            tacacs_server_groups->parent = this;
            children["tacacs-server-groups"] = tacacs_server_groups;
        }
        return children.at("tacacs-server-groups");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::get_children()
{
    if(children.find("diameter-server-groups") == children.end())
    {
        if(diameter_server_groups != nullptr)
        {
            children["diameter-server-groups"] = diameter_server_groups;
        }
    }

    if(children.find("radius-server-groups") == children.end())
    {
        if(radius_server_groups != nullptr)
        {
            children["radius-server-groups"] = radius_server_groups;
        }
    }

    if(children.find("tacacs-server-groups") == children.end())
    {
        if(tacacs_server_groups != nullptr)
        {
            children["tacacs-server-groups"] = tacacs_server_groups;
        }
    }

    return children;
}

void Aaa::ServerGroups::set_value(const std::string & value_path, std::string value)
{
}

Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroups()
{
    yang_name = "diameter-server-groups"; yang_parent_name = "server-groups";
}

Aaa::ServerGroups::DiameterServerGroups::~DiameterServerGroups()
{
}

bool Aaa::ServerGroups::DiameterServerGroups::has_data() const
{
    for (std::size_t index=0; index<diameter_server_group.size(); index++)
    {
        if(diameter_server_group[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::ServerGroups::DiameterServerGroups::has_operation() const
{
    for (std::size_t index=0; index<diameter_server_group.size(); index++)
    {
        if(diameter_server_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::ServerGroups::DiameterServerGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-diameter-cfg:diameter-server-groups";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::DiameterServerGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-locald-cfg:server-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::DiameterServerGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "diameter-server-group")
    {
        for(auto const & c : diameter_server_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup>();
        c->parent = this;
        diameter_server_group.push_back(std::move(c));
        children[segment_path] = diameter_server_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::DiameterServerGroups::get_children()
{
    for (auto const & c : diameter_server_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::ServerGroups::DiameterServerGroups::set_value(const std::string & value_path, std::string value)
{
}

Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::DiameterServerGroup()
    :
    server_group_name{YType::str, "server-group-name"}
    	,
    servers(std::make_shared<Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers>())
{
    servers->parent = this;
    children["servers"] = servers;

    yang_name = "diameter-server-group"; yang_parent_name = "diameter-server-groups";
}

Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::~DiameterServerGroup()
{
}

bool Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::has_data() const
{
    return server_group_name.is_set
	|| (servers !=  nullptr && servers->has_data());
}

bool Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(server_group_name.operation)
	|| (servers !=  nullptr && servers->has_operation());
}

std::string Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diameter-server-group" <<"[server-group-name='" <<server_group_name <<"']";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-locald-cfg:server-groups/Cisco-IOS-XR-aaa-diameter-cfg:diameter-server-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_group_name.is_set || is_set(server_group_name.operation)) leaf_name_data.push_back(server_group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "servers")
    {
        if(servers != nullptr)
        {
            children["servers"] = servers;
        }
        else
        {
            servers = std::make_shared<Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers>();
            servers->parent = this;
            children["servers"] = servers;
        }
        return children.at("servers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::get_children()
{
    if(children.find("servers") == children.end())
    {
        if(servers != nullptr)
        {
            children["servers"] = servers;
        }
    }

    return children;
}

void Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server-group-name")
    {
        server_group_name = value;
    }
}

Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Servers()
{
    yang_name = "servers"; yang_parent_name = "diameter-server-group";
}

Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::~Servers()
{
}

bool Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "servers";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Servers' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server>();
        c->parent = this;
        server.push_back(std::move(c));
        children[segment_path] = server.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::get_children()
{
    for (auto const & c : server)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::set_value(const std::string & value_path, std::string value)
{
}

Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server::Server()
    :
    ordering_index{YType::int32, "ordering-index"},
    peer_name{YType::str, "peer-name"}
{
    yang_name = "server"; yang_parent_name = "servers";
}

Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server::~Server()
{
}

bool Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server::has_data() const
{
    return ordering_index.is_set
	|| peer_name.is_set;
}

bool Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(ordering_index.operation)
	|| is_set(peer_name.operation);
}

std::string Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server" <<"[ordering-index='" <<ordering_index <<"']" <<"[peer-name='" <<peer_name <<"']";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Server' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ordering_index.is_set || is_set(ordering_index.operation)) leaf_name_data.push_back(ordering_index.get_name_leafdata());
    if (peer_name.is_set || is_set(peer_name.operation)) leaf_name_data.push_back(peer_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server::get_children()
{
    return children;
}

void Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ordering-index")
    {
        ordering_index = value;
    }
    if(value_path == "peer-name")
    {
        peer_name = value;
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::TacacsServerGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup>();
        c->parent = this;
        tacacs_server_group.push_back(std::move(c));
        children[segment_path] = tacacs_server_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::TacacsServerGroups::get_children()
{
    for (auto const & c : tacacs_server_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::ServerGroups::TacacsServerGroups::set_value(const std::string & value_path, std::string value)
{
}

Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::TacacsServerGroup()
    :
    server_group_name{YType::str, "server-group-name"},
    vrf{YType::str, "vrf"}
    	,
    private_servers(std::make_shared<Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers>())
	,servers(std::make_shared<Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers>())
{
    private_servers->parent = this;
    children["private-servers"] = private_servers;

    servers->parent = this;
    children["servers"] = servers;

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
	|| (private_servers !=  nullptr && private_servers->has_operation())
	|| (servers !=  nullptr && servers->has_operation());
}

std::string Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacs-server-group" <<"[server-group-name='" <<server_group_name <<"']";

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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_group_name.is_set || is_set(server_group_name.operation)) leaf_name_data.push_back(server_group_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["private-servers"] = private_servers;
        }
        else
        {
            private_servers = std::make_shared<Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers>();
            private_servers->parent = this;
            children["private-servers"] = private_servers;
        }
        return children.at("private-servers");
    }

    if(child_yang_name == "servers")
    {
        if(servers != nullptr)
        {
            children["servers"] = servers;
        }
        else
        {
            servers = std::make_shared<Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers>();
            servers->parent = this;
            children["servers"] = servers;
        }
        return children.at("servers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::get_children()
{
    if(children.find("private-servers") == children.end())
    {
        if(private_servers != nullptr)
        {
            children["private-servers"] = private_servers;
        }
    }

    if(children.find("servers") == children.end())
    {
        if(servers != nullptr)
        {
            children["servers"] = servers;
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
        throw(YCPPInvalidArgumentError{"ancestor for 'Servers' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server>();
        c->parent = this;
        server.push_back(std::move(c));
        children[segment_path] = server.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::get_children()
{
    for (auto const & c : server)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::set_value(const std::string & value_path, std::string value)
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
    path_buffer << "server" <<"[ip-address='" <<ip_address <<"']" <<"[ordering-index='" <<ordering_index <<"']";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Server' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ordering_index.is_set || is_set(ordering_index.operation)) leaf_name_data.push_back(ordering_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server::get_children()
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
        throw(YCPPInvalidArgumentError{"ancestor for 'PrivateServers' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer>();
        c->parent = this;
        private_server.push_back(std::move(c));
        children[segment_path] = private_server.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::get_children()
{
    for (auto const & c : private_server)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::set_value(const std::string & value_path, std::string value)
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
    path_buffer << "private-server" <<"[ip-address='" <<ip_address <<"']" <<"[ordering-index='" <<ordering_index <<"']" <<"[port-number='" <<port_number <<"']";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrivateServer' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
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

std::shared_ptr<Entity> Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer::get_children()
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::RadiusServerGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup>();
        c->parent = this;
        radius_server_group.push_back(std::move(c));
        children[segment_path] = radius_server_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::RadiusServerGroups::get_children()
{
    for (auto const & c : radius_server_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::ServerGroups::RadiusServerGroups::set_value(const std::string & value_path, std::string value)
{
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::RadiusServerGroup()
    :
    server_group_name{YType::str, "server-group-name"},
    dead_time{YType::uint32, "dead-time"},
    source_interface{YType::str, "source-interface"},
    vrf{YType::str, "vrf"}
    	,
    accounting(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting>())
	,authorization(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization>())
	,load_balance(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance>())
	,private_servers(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers>())
	,server_group_throttle(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle>())
	,servers(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers>())
{
    accounting->parent = this;
    children["accounting"] = accounting;

    authorization->parent = this;
    children["authorization"] = authorization;

    load_balance->parent = this;
    children["load-balance"] = load_balance;

    private_servers->parent = this;
    children["private-servers"] = private_servers;

    server_group_throttle->parent = this;
    children["server-group-throttle"] = server_group_throttle;

    servers->parent = this;
    children["servers"] = servers;

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
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (load_balance !=  nullptr && load_balance->has_operation())
	|| (private_servers !=  nullptr && private_servers->has_operation())
	|| (server_group_throttle !=  nullptr && server_group_throttle->has_operation())
	|| (servers !=  nullptr && servers->has_operation());
}

std::string Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius-server-group" <<"[server-group-name='" <<server_group_name <<"']";

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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_group_name.is_set || is_set(server_group_name.operation)) leaf_name_data.push_back(server_group_name.get_name_leafdata());
    if (dead_time.is_set || is_set(dead_time.operation)) leaf_name_data.push_back(dead_time.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["accounting"] = accounting;
        }
        else
        {
            accounting = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting>();
            accounting->parent = this;
            children["accounting"] = accounting;
        }
        return children.at("accounting");
    }

    if(child_yang_name == "authorization")
    {
        if(authorization != nullptr)
        {
            children["authorization"] = authorization;
        }
        else
        {
            authorization = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization>();
            authorization->parent = this;
            children["authorization"] = authorization;
        }
        return children.at("authorization");
    }

    if(child_yang_name == "load-balance")
    {
        if(load_balance != nullptr)
        {
            children["load-balance"] = load_balance;
        }
        else
        {
            load_balance = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance>();
            load_balance->parent = this;
            children["load-balance"] = load_balance;
        }
        return children.at("load-balance");
    }

    if(child_yang_name == "private-servers")
    {
        if(private_servers != nullptr)
        {
            children["private-servers"] = private_servers;
        }
        else
        {
            private_servers = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers>();
            private_servers->parent = this;
            children["private-servers"] = private_servers;
        }
        return children.at("private-servers");
    }

    if(child_yang_name == "server-group-throttle")
    {
        if(server_group_throttle != nullptr)
        {
            children["server-group-throttle"] = server_group_throttle;
        }
        else
        {
            server_group_throttle = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle>();
            server_group_throttle->parent = this;
            children["server-group-throttle"] = server_group_throttle;
        }
        return children.at("server-group-throttle");
    }

    if(child_yang_name == "servers")
    {
        if(servers != nullptr)
        {
            children["servers"] = servers;
        }
        else
        {
            servers = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers>();
            servers->parent = this;
            children["servers"] = servers;
        }
        return children.at("servers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::get_children()
{
    if(children.find("accounting") == children.end())
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting;
        }
    }

    if(children.find("authorization") == children.end())
    {
        if(authorization != nullptr)
        {
            children["authorization"] = authorization;
        }
    }

    if(children.find("load-balance") == children.end())
    {
        if(load_balance != nullptr)
        {
            children["load-balance"] = load_balance;
        }
    }

    if(children.find("private-servers") == children.end())
    {
        if(private_servers != nullptr)
        {
            children["private-servers"] = private_servers;
        }
    }

    if(children.find("server-group-throttle") == children.end())
    {
        if(server_group_throttle != nullptr)
        {
            children["server-group-throttle"] = server_group_throttle;
        }
    }

    if(children.find("servers") == children.end())
    {
        if(servers != nullptr)
        {
            children["servers"] = servers;
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

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Accounting()
    :
    reply(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply>())
	,request(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request>())
{
    reply->parent = this;
    children["reply"] = reply;

    request->parent = this;
    children["request"] = request;

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
	|| (reply !=  nullptr && reply->has_operation())
	|| (request !=  nullptr && request->has_operation());
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
        throw(YCPPInvalidArgumentError{"ancestor for 'Accounting' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["reply"] = reply;
        }
        else
        {
            reply = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply>();
            reply->parent = this;
            children["reply"] = reply;
        }
        return children.at("reply");
    }

    if(child_yang_name == "request")
    {
        if(request != nullptr)
        {
            children["request"] = request;
        }
        else
        {
            request = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request>();
            request->parent = this;
            children["request"] = request;
        }
        return children.at("request");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::get_children()
{
    if(children.find("reply") == children.end())
    {
        if(reply != nullptr)
        {
            children["reply"] = reply;
        }
    }

    if(children.find("request") == children.end())
    {
        if(request != nullptr)
        {
            children["request"] = request;
        }
    }

    return children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::set_value(const std::string & value_path, std::string value)
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
        throw(YCPPInvalidArgumentError{"ancestor for 'Request' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (attribute_list_name.is_set || is_set(attribute_list_name.operation)) leaf_name_data.push_back(attribute_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request::get_children()
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
        throw(YCPPInvalidArgumentError{"ancestor for 'Reply' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (attribute_list_name.is_set || is_set(attribute_list_name.operation)) leaf_name_data.push_back(attribute_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply::get_children()
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
        throw(YCPPInvalidArgumentError{"ancestor for 'Servers' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server>();
        c->parent = this;
        server.push_back(std::move(c));
        children[segment_path] = server.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::get_children()
{
    for (auto const & c : server)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::set_value(const std::string & value_path, std::string value)
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
    path_buffer << "server" <<"[acct-port-number='" <<acct_port_number <<"']" <<"[auth-port-number='" <<auth_port_number <<"']" <<"[ip-address='" <<ip_address <<"']" <<"[ordering-index='" <<ordering_index <<"']";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Server' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acct_port_number.is_set || is_set(acct_port_number.operation)) leaf_name_data.push_back(acct_port_number.get_name_leafdata());
    if (auth_port_number.is_set || is_set(auth_port_number.operation)) leaf_name_data.push_back(auth_port_number.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ordering_index.is_set || is_set(ordering_index.operation)) leaf_name_data.push_back(ordering_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server::get_children()
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
        throw(YCPPInvalidArgumentError{"ancestor for 'PrivateServers' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer>();
        c->parent = this;
        private_server.push_back(std::move(c));
        children[segment_path] = private_server.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::get_children()
{
    for (auto const & c : private_server)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::set_value(const std::string & value_path, std::string value)
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
    path_buffer << "private-server" <<"[acct-port-number='" <<acct_port_number <<"']" <<"[auth-port-number='" <<auth_port_number <<"']" <<"[ip-address='" <<ip_address <<"']" <<"[ordering-index='" <<ordering_index <<"']";

    return path_buffer.str();

}

EntityPath Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrivateServer' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
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

std::shared_ptr<Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer::get_children()
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
        throw(YCPPInvalidArgumentError{"ancestor for 'ServerGroupThrottle' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.operation)) leaf_name_data.push_back(access.get_name_leafdata());
    if (access_timeout.is_set || is_set(access_timeout.operation)) leaf_name_data.push_back(access_timeout.get_name_leafdata());
    if (accounting.is_set || is_set(accounting.operation)) leaf_name_data.push_back(accounting.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle::get_children()
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

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::LoadBalance()
    :
    method(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method>())
{
    method->parent = this;
    children["method"] = method;

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
	|| (method !=  nullptr && method->has_operation());
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
        throw(YCPPInvalidArgumentError{"ancestor for 'LoadBalance' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["method"] = method;
        }
        else
        {
            method = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method>();
            method->parent = this;
            children["method"] = method;
        }
        return children.at("method");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::get_children()
{
    if(children.find("method") == children.end())
    {
        if(method != nullptr)
        {
            children["method"] = method;
        }
    }

    return children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::set_value(const std::string & value_path, std::string value)
{
}

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Method()
    :
    name(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name>())
{
    name->parent = this;
    children["name"] = name;

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
	|| (name !=  nullptr && name->has_operation());
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
        throw(YCPPInvalidArgumentError{"ancestor for 'Method' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["name"] = name;
        }
        else
        {
            name = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name>();
            name->parent = this;
            children["name"] = name;
        }
        return children.at("name");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::get_children()
{
    if(children.find("name") == children.end())
    {
        if(name != nullptr)
        {
            children["name"] = name;
        }
    }

    return children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::set_value(const std::string & value_path, std::string value)
{
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
        throw(YCPPInvalidArgumentError{"ancestor for 'Name' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (batch_size.is_set || is_set(batch_size.operation)) leaf_name_data.push_back(batch_size.get_name_leafdata());
    if (ignore_preferred_server.is_set || is_set(ignore_preferred_server.operation)) leaf_name_data.push_back(ignore_preferred_server.get_name_leafdata());
    if (least_outstanding.is_set || is_set(least_outstanding.operation)) leaf_name_data.push_back(least_outstanding.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name::get_children()
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

Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Authorization()
    :
    reply(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply>())
	,request(std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request>())
{
    reply->parent = this;
    children["reply"] = reply;

    request->parent = this;
    children["request"] = request;

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
	|| (reply !=  nullptr && reply->has_operation())
	|| (request !=  nullptr && request->has_operation());
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
        throw(YCPPInvalidArgumentError{"ancestor for 'Authorization' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["reply"] = reply;
        }
        else
        {
            reply = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply>();
            reply->parent = this;
            children["reply"] = reply;
        }
        return children.at("reply");
    }

    if(child_yang_name == "request")
    {
        if(request != nullptr)
        {
            children["request"] = request;
        }
        else
        {
            request = std::make_shared<Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request>();
            request->parent = this;
            children["request"] = request;
        }
        return children.at("request");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::get_children()
{
    if(children.find("reply") == children.end())
    {
        if(reply != nullptr)
        {
            children["reply"] = reply;
        }
    }

    if(children.find("request") == children.end())
    {
        if(request != nullptr)
        {
            children["request"] = request;
        }
    }

    return children;
}

void Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::set_value(const std::string & value_path, std::string value)
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
        throw(YCPPInvalidArgumentError{"ancestor for 'Request' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (attribute_list_name.is_set || is_set(attribute_list_name.operation)) leaf_name_data.push_back(attribute_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request::get_children()
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
        throw(YCPPInvalidArgumentError{"ancestor for 'Reply' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (attribute_list_name.is_set || is_set(attribute_list_name.operation)) leaf_name_data.push_back(attribute_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply::get_children()
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Usernames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Usernames::Username>();
        c->parent = this;
        username.push_back(std::move(c));
        children[segment_path] = username.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Usernames::get_children()
{
    for (auto const & c : username)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Usernames::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Usernames::Username::Username()
    :
    name{YType::str, "name"},
    ordering_index{YType::int32, "ordering-index"},
    password{YType::str, "password"},
    secret{YType::str, "secret"}
    	,
    usergroup_under_usernames(std::make_shared<Aaa::Usernames::Username::UsergroupUnderUsernames>())
{
    usergroup_under_usernames->parent = this;
    children["usergroup-under-usernames"] = usergroup_under_usernames;

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
	|| (usergroup_under_usernames !=  nullptr && usergroup_under_usernames->has_operation());
}

std::string Aaa::Usernames::Username::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username" <<"[name='" <<name <<"']" <<"[ordering-index='" <<ordering_index <<"']";

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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ordering_index.is_set || is_set(ordering_index.operation)) leaf_name_data.push_back(ordering_index.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (secret.is_set || is_set(secret.operation)) leaf_name_data.push_back(secret.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Usernames::Username::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["usergroup-under-usernames"] = usergroup_under_usernames;
        }
        else
        {
            usergroup_under_usernames = std::make_shared<Aaa::Usernames::Username::UsergroupUnderUsernames>();
            usergroup_under_usernames->parent = this;
            children["usergroup-under-usernames"] = usergroup_under_usernames;
        }
        return children.at("usergroup-under-usernames");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Usernames::Username::get_children()
{
    if(children.find("usergroup-under-usernames") == children.end())
    {
        if(usergroup_under_usernames != nullptr)
        {
            children["usergroup-under-usernames"] = usergroup_under_usernames;
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
        throw(YCPPInvalidArgumentError{"ancestor for 'UsergroupUnderUsernames' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Usernames::Username::UsergroupUnderUsernames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername>();
        c->parent = this;
        usergroup_under_username.push_back(std::move(c));
        children[segment_path] = usergroup_under_username.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Usernames::Username::UsergroupUnderUsernames::get_children()
{
    for (auto const & c : usergroup_under_username)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Usernames::Username::UsergroupUnderUsernames::set_value(const std::string & value_path, std::string value)
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
    path_buffer << "usergroup-under-username" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsergroupUnderUsername' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername::get_children()
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Taskgroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Taskgroups::Taskgroup>();
        c->parent = this;
        taskgroup.push_back(std::move(c));
        children[segment_path] = taskgroup.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Taskgroups::get_children()
{
    for (auto const & c : taskgroup)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Taskgroups::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Taskgroups::Taskgroup::Taskgroup()
    :
    name{YType::str, "name"},
    description{YType::str, "description"}
    	,
    taskgroup_under_taskgroups(std::make_shared<Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups>())
	,tasks(std::make_shared<Aaa::Taskgroups::Taskgroup::Tasks>())
{
    taskgroup_under_taskgroups->parent = this;
    children["taskgroup-under-taskgroups"] = taskgroup_under_taskgroups;

    tasks->parent = this;
    children["tasks"] = tasks;

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
	|| (taskgroup_under_taskgroups !=  nullptr && taskgroup_under_taskgroups->has_operation())
	|| (tasks !=  nullptr && tasks->has_operation());
}

std::string Aaa::Taskgroups::Taskgroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "taskgroup" <<"[name='" <<name <<"']";

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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Taskgroups::Taskgroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["taskgroup-under-taskgroups"] = taskgroup_under_taskgroups;
        }
        else
        {
            taskgroup_under_taskgroups = std::make_shared<Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups>();
            taskgroup_under_taskgroups->parent = this;
            children["taskgroup-under-taskgroups"] = taskgroup_under_taskgroups;
        }
        return children.at("taskgroup-under-taskgroups");
    }

    if(child_yang_name == "tasks")
    {
        if(tasks != nullptr)
        {
            children["tasks"] = tasks;
        }
        else
        {
            tasks = std::make_shared<Aaa::Taskgroups::Taskgroup::Tasks>();
            tasks->parent = this;
            children["tasks"] = tasks;
        }
        return children.at("tasks");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Taskgroups::Taskgroup::get_children()
{
    if(children.find("taskgroup-under-taskgroups") == children.end())
    {
        if(taskgroup_under_taskgroups != nullptr)
        {
            children["taskgroup-under-taskgroups"] = taskgroup_under_taskgroups;
        }
    }

    if(children.find("tasks") == children.end())
    {
        if(tasks != nullptr)
        {
            children["tasks"] = tasks;
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
        throw(YCPPInvalidArgumentError{"ancestor for 'TaskgroupUnderTaskgroups' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup>();
        c->parent = this;
        taskgroup_under_taskgroup.push_back(std::move(c));
        children[segment_path] = taskgroup_under_taskgroup.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::get_children()
{
    for (auto const & c : taskgroup_under_taskgroup)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::set_value(const std::string & value_path, std::string value)
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
    path_buffer << "taskgroup-under-taskgroup" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TaskgroupUnderTaskgroup' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup::get_children()
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
        throw(YCPPInvalidArgumentError{"ancestor for 'Tasks' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Taskgroups::Taskgroup::Tasks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Taskgroups::Taskgroup::Tasks::Task>();
        c->parent = this;
        task.push_back(std::move(c));
        children[segment_path] = task.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Taskgroups::Taskgroup::Tasks::get_children()
{
    for (auto const & c : task)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Taskgroups::Taskgroup::Tasks::set_value(const std::string & value_path, std::string value)
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
    path_buffer << "task" <<"[task-id='" <<task_id <<"']" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Taskgroups::Taskgroup::Tasks::Task::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Task' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (task_id.is_set || is_set(task_id.operation)) leaf_name_data.push_back(task_id.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Taskgroups::Taskgroup::Tasks::Task::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Taskgroups::Taskgroup::Tasks::Task::get_children()
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Usergroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Usergroups::Usergroup>();
        c->parent = this;
        usergroup.push_back(std::move(c));
        children[segment_path] = usergroup.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Usergroups::get_children()
{
    for (auto const & c : usergroup)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Usergroups::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Usergroups::Usergroup::Usergroup()
    :
    name{YType::str, "name"},
    description{YType::str, "description"}
    	,
    taskgroup_under_usergroups(std::make_shared<Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups>())
	,usergroup_under_usergroups(std::make_shared<Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups>())
{
    taskgroup_under_usergroups->parent = this;
    children["taskgroup-under-usergroups"] = taskgroup_under_usergroups;

    usergroup_under_usergroups->parent = this;
    children["usergroup-under-usergroups"] = usergroup_under_usergroups;

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
	|| (taskgroup_under_usergroups !=  nullptr && taskgroup_under_usergroups->has_operation())
	|| (usergroup_under_usergroups !=  nullptr && usergroup_under_usergroups->has_operation());
}

std::string Aaa::Usergroups::Usergroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usergroup" <<"[name='" <<name <<"']";

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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Usergroups::Usergroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["taskgroup-under-usergroups"] = taskgroup_under_usergroups;
        }
        else
        {
            taskgroup_under_usergroups = std::make_shared<Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups>();
            taskgroup_under_usergroups->parent = this;
            children["taskgroup-under-usergroups"] = taskgroup_under_usergroups;
        }
        return children.at("taskgroup-under-usergroups");
    }

    if(child_yang_name == "usergroup-under-usergroups")
    {
        if(usergroup_under_usergroups != nullptr)
        {
            children["usergroup-under-usergroups"] = usergroup_under_usergroups;
        }
        else
        {
            usergroup_under_usergroups = std::make_shared<Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups>();
            usergroup_under_usergroups->parent = this;
            children["usergroup-under-usergroups"] = usergroup_under_usergroups;
        }
        return children.at("usergroup-under-usergroups");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Usergroups::Usergroup::get_children()
{
    if(children.find("taskgroup-under-usergroups") == children.end())
    {
        if(taskgroup_under_usergroups != nullptr)
        {
            children["taskgroup-under-usergroups"] = taskgroup_under_usergroups;
        }
    }

    if(children.find("usergroup-under-usergroups") == children.end())
    {
        if(usergroup_under_usergroups != nullptr)
        {
            children["usergroup-under-usergroups"] = usergroup_under_usergroups;
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
        throw(YCPPInvalidArgumentError{"ancestor for 'TaskgroupUnderUsergroups' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup>();
        c->parent = this;
        taskgroup_under_usergroup.push_back(std::move(c));
        children[segment_path] = taskgroup_under_usergroup.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::get_children()
{
    for (auto const & c : taskgroup_under_usergroup)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::set_value(const std::string & value_path, std::string value)
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
    path_buffer << "taskgroup-under-usergroup" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TaskgroupUnderUsergroup' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup::get_children()
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
        throw(YCPPInvalidArgumentError{"ancestor for 'UsergroupUnderUsergroups' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup>();
        c->parent = this;
        usergroup_under_usergroup.push_back(std::move(c));
        children[segment_path] = usergroup_under_usergroup.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::get_children()
{
    for (auto const & c : usergroup_under_usergroup)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::set_value(const std::string & value_path, std::string value)
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
    path_buffer << "usergroup-under-usergroup" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsergroupUnderUsergroup' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup::get_children()
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

Aaa::Diameter::Diameter()
    :
    source_interface{YType::str, "source-interface"}
    	,
    diameter_timer(std::make_shared<Aaa::Diameter::DiameterTimer>())
	,diameter_tls(std::make_shared<Aaa::Diameter::DiameterTls>())
	,diams(std::make_shared<Aaa::Diameter::Diams>())
	,gx(std::make_shared<Aaa::Diameter::Gx>())
	,gy(std::make_shared<Aaa::Diameter::Gy>())
	,nas(std::make_shared<Aaa::Diameter::Nas>())
	,origin(std::make_shared<Aaa::Diameter::Origin>())
	,peers(std::make_shared<Aaa::Diameter::Peers>())
	,vendor(std::make_shared<Aaa::Diameter::Vendor>())
{
    diameter_timer->parent = this;
    children["diameter-timer"] = diameter_timer;

    diameter_tls->parent = this;
    children["diameter-tls"] = diameter_tls;

    diams->parent = this;
    children["diams"] = diams;

    gx->parent = this;
    children["gx"] = gx;

    gy->parent = this;
    children["gy"] = gy;

    nas->parent = this;
    children["nas"] = nas;

    origin->parent = this;
    children["origin"] = origin;

    peers->parent = this;
    children["peers"] = peers;

    vendor->parent = this;
    children["vendor"] = vendor;

    yang_name = "diameter"; yang_parent_name = "aaa";
}

Aaa::Diameter::~Diameter()
{
}

bool Aaa::Diameter::has_data() const
{
    return source_interface.is_set
	|| (diameter_timer !=  nullptr && diameter_timer->has_data())
	|| (diameter_tls !=  nullptr && diameter_tls->has_data())
	|| (diams !=  nullptr && diams->has_data())
	|| (gx !=  nullptr && gx->has_data())
	|| (gy !=  nullptr && gy->has_data())
	|| (nas !=  nullptr && nas->has_data())
	|| (origin !=  nullptr && origin->has_data())
	|| (peers !=  nullptr && peers->has_data())
	|| (vendor !=  nullptr && vendor->has_data());
}

bool Aaa::Diameter::has_operation() const
{
    return is_set(operation)
	|| is_set(source_interface.operation)
	|| (diameter_timer !=  nullptr && diameter_timer->has_operation())
	|| (diameter_tls !=  nullptr && diameter_tls->has_operation())
	|| (diams !=  nullptr && diams->has_operation())
	|| (gx !=  nullptr && gx->has_operation())
	|| (gy !=  nullptr && gy->has_operation())
	|| (nas !=  nullptr && nas->has_operation())
	|| (origin !=  nullptr && origin->has_operation())
	|| (peers !=  nullptr && peers->has_operation())
	|| (vendor !=  nullptr && vendor->has_operation());
}

std::string Aaa::Diameter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-diameter-cfg:diameter";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "diameter-timer")
    {
        if(diameter_timer != nullptr)
        {
            children["diameter-timer"] = diameter_timer;
        }
        else
        {
            diameter_timer = std::make_shared<Aaa::Diameter::DiameterTimer>();
            diameter_timer->parent = this;
            children["diameter-timer"] = diameter_timer;
        }
        return children.at("diameter-timer");
    }

    if(child_yang_name == "diameter-tls")
    {
        if(diameter_tls != nullptr)
        {
            children["diameter-tls"] = diameter_tls;
        }
        else
        {
            diameter_tls = std::make_shared<Aaa::Diameter::DiameterTls>();
            diameter_tls->parent = this;
            children["diameter-tls"] = diameter_tls;
        }
        return children.at("diameter-tls");
    }

    if(child_yang_name == "diams")
    {
        if(diams != nullptr)
        {
            children["diams"] = diams;
        }
        else
        {
            diams = std::make_shared<Aaa::Diameter::Diams>();
            diams->parent = this;
            children["diams"] = diams;
        }
        return children.at("diams");
    }

    if(child_yang_name == "gx")
    {
        if(gx != nullptr)
        {
            children["gx"] = gx;
        }
        else
        {
            gx = std::make_shared<Aaa::Diameter::Gx>();
            gx->parent = this;
            children["gx"] = gx;
        }
        return children.at("gx");
    }

    if(child_yang_name == "gy")
    {
        if(gy != nullptr)
        {
            children["gy"] = gy;
        }
        else
        {
            gy = std::make_shared<Aaa::Diameter::Gy>();
            gy->parent = this;
            children["gy"] = gy;
        }
        return children.at("gy");
    }

    if(child_yang_name == "nas")
    {
        if(nas != nullptr)
        {
            children["nas"] = nas;
        }
        else
        {
            nas = std::make_shared<Aaa::Diameter::Nas>();
            nas->parent = this;
            children["nas"] = nas;
        }
        return children.at("nas");
    }

    if(child_yang_name == "origin")
    {
        if(origin != nullptr)
        {
            children["origin"] = origin;
        }
        else
        {
            origin = std::make_shared<Aaa::Diameter::Origin>();
            origin->parent = this;
            children["origin"] = origin;
        }
        return children.at("origin");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<Aaa::Diameter::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    if(child_yang_name == "vendor")
    {
        if(vendor != nullptr)
        {
            children["vendor"] = vendor;
        }
        else
        {
            vendor = std::make_shared<Aaa::Diameter::Vendor>();
            vendor->parent = this;
            children["vendor"] = vendor;
        }
        return children.at("vendor");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::get_children()
{
    if(children.find("diameter-timer") == children.end())
    {
        if(diameter_timer != nullptr)
        {
            children["diameter-timer"] = diameter_timer;
        }
    }

    if(children.find("diameter-tls") == children.end())
    {
        if(diameter_tls != nullptr)
        {
            children["diameter-tls"] = diameter_tls;
        }
    }

    if(children.find("diams") == children.end())
    {
        if(diams != nullptr)
        {
            children["diams"] = diams;
        }
    }

    if(children.find("gx") == children.end())
    {
        if(gx != nullptr)
        {
            children["gx"] = gx;
        }
    }

    if(children.find("gy") == children.end())
    {
        if(gy != nullptr)
        {
            children["gy"] = gy;
        }
    }

    if(children.find("nas") == children.end())
    {
        if(nas != nullptr)
        {
            children["nas"] = nas;
        }
    }

    if(children.find("origin") == children.end())
    {
        if(origin != nullptr)
        {
            children["origin"] = origin;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    if(children.find("vendor") == children.end())
    {
        if(vendor != nullptr)
        {
            children["vendor"] = vendor;
        }
    }

    return children;
}

void Aaa::Diameter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

Aaa::Diameter::Gy::Gy()
    :
    dest_host{YType::str, "dest-host"},
    retransmit{YType::uint32, "retransmit"},
    tx_timer{YType::uint32, "tx-timer"}
{
    yang_name = "gy"; yang_parent_name = "diameter";
}

Aaa::Diameter::Gy::~Gy()
{
}

bool Aaa::Diameter::Gy::has_data() const
{
    return dest_host.is_set
	|| retransmit.is_set
	|| tx_timer.is_set;
}

bool Aaa::Diameter::Gy::has_operation() const
{
    return is_set(operation)
	|| is_set(dest_host.operation)
	|| is_set(retransmit.operation)
	|| is_set(tx_timer.operation);
}

std::string Aaa::Diameter::Gy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gy";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::Gy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_host.is_set || is_set(dest_host.operation)) leaf_name_data.push_back(dest_host.get_name_leafdata());
    if (retransmit.is_set || is_set(retransmit.operation)) leaf_name_data.push_back(retransmit.get_name_leafdata());
    if (tx_timer.is_set || is_set(tx_timer.operation)) leaf_name_data.push_back(tx_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::Gy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::Gy::get_children()
{
    return children;
}

void Aaa::Diameter::Gy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dest-host")
    {
        dest_host = value;
    }
    if(value_path == "retransmit")
    {
        retransmit = value;
    }
    if(value_path == "tx-timer")
    {
        tx_timer = value;
    }
}

Aaa::Diameter::Origin::Origin()
    :
    host{YType::str, "host"},
    realm{YType::str, "realm"}
{
    yang_name = "origin"; yang_parent_name = "diameter";
}

Aaa::Diameter::Origin::~Origin()
{
}

bool Aaa::Diameter::Origin::has_data() const
{
    return host.is_set
	|| realm.is_set;
}

bool Aaa::Diameter::Origin::has_operation() const
{
    return is_set(operation)
	|| is_set(host.operation)
	|| is_set(realm.operation);
}

std::string Aaa::Diameter::Origin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "origin";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::Origin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (realm.is_set || is_set(realm.operation)) leaf_name_data.push_back(realm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::Origin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::Origin::get_children()
{
    return children;
}

void Aaa::Diameter::Origin::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "realm")
    {
        realm = value;
    }
}

Aaa::Diameter::Nas::Nas()
    :
    dest_host{YType::str, "dest-host"}
{
    yang_name = "nas"; yang_parent_name = "diameter";
}

Aaa::Diameter::Nas::~Nas()
{
}

bool Aaa::Diameter::Nas::has_data() const
{
    return dest_host.is_set;
}

bool Aaa::Diameter::Nas::has_operation() const
{
    return is_set(operation)
	|| is_set(dest_host.operation);
}

std::string Aaa::Diameter::Nas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nas";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::Nas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_host.is_set || is_set(dest_host.operation)) leaf_name_data.push_back(dest_host.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::Nas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::Nas::get_children()
{
    return children;
}

void Aaa::Diameter::Nas::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dest-host")
    {
        dest_host = value;
    }
}

Aaa::Diameter::DiameterTls::DiameterTls()
    :
    trustpoint{YType::str, "trustpoint"}
{
    yang_name = "diameter-tls"; yang_parent_name = "diameter";
}

Aaa::Diameter::DiameterTls::~DiameterTls()
{
}

bool Aaa::Diameter::DiameterTls::has_data() const
{
    return trustpoint.is_set;
}

bool Aaa::Diameter::DiameterTls::has_operation() const
{
    return is_set(operation)
	|| is_set(trustpoint.operation);
}

std::string Aaa::Diameter::DiameterTls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diameter-tls";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::DiameterTls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trustpoint.is_set || is_set(trustpoint.operation)) leaf_name_data.push_back(trustpoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::DiameterTls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::DiameterTls::get_children()
{
    return children;
}

void Aaa::Diameter::DiameterTls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "trustpoint")
    {
        trustpoint = value;
    }
}

Aaa::Diameter::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "diameter";
}

Aaa::Diameter::Peers::~Peers()
{
}

bool Aaa::Diameter::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Diameter::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Diameter::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Diameter::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Diameter::Peers::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Diameter::Peers::Peer::Peer()
    :
    peer_name{YType::str, "peer-name"},
    host_destination{YType::str, "host-destination"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    realm_destination{YType::str, "realm-destination"},
    source_interface{YType::str, "source-interface"},
    tcp_transport{YType::uint32, "tcp-transport"},
    tls_transport{YType::uint32, "tls-transport"},
    vrf_ip{YType::str, "vrf-ip"}
    	,
    peer_timer(std::make_shared<Aaa::Diameter::Peers::Peer::PeerTimer>())
	,peer_type(std::make_shared<Aaa::Diameter::Peers::Peer::PeerType>())
{
    peer_timer->parent = this;
    children["peer-timer"] = peer_timer;

    peer_type->parent = this;
    children["peer-type"] = peer_type;

    yang_name = "peer"; yang_parent_name = "peers";
}

Aaa::Diameter::Peers::Peer::~Peer()
{
}

bool Aaa::Diameter::Peers::Peer::has_data() const
{
    return peer_name.is_set
	|| host_destination.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| realm_destination.is_set
	|| source_interface.is_set
	|| tcp_transport.is_set
	|| tls_transport.is_set
	|| vrf_ip.is_set
	|| (peer_timer !=  nullptr && peer_timer->has_data())
	|| (peer_type !=  nullptr && peer_type->has_data());
}

bool Aaa::Diameter::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_name.operation)
	|| is_set(host_destination.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(realm_destination.operation)
	|| is_set(source_interface.operation)
	|| is_set(tcp_transport.operation)
	|| is_set(tls_transport.operation)
	|| is_set(vrf_ip.operation)
	|| (peer_timer !=  nullptr && peer_timer->has_operation())
	|| (peer_type !=  nullptr && peer_type->has_operation());
}

std::string Aaa::Diameter::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[peer-name='" <<peer_name <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_name.is_set || is_set(peer_name.operation)) leaf_name_data.push_back(peer_name.get_name_leafdata());
    if (host_destination.is_set || is_set(host_destination.operation)) leaf_name_data.push_back(host_destination.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (realm_destination.is_set || is_set(realm_destination.operation)) leaf_name_data.push_back(realm_destination.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (tcp_transport.is_set || is_set(tcp_transport.operation)) leaf_name_data.push_back(tcp_transport.get_name_leafdata());
    if (tls_transport.is_set || is_set(tls_transport.operation)) leaf_name_data.push_back(tls_transport.get_name_leafdata());
    if (vrf_ip.is_set || is_set(vrf_ip.operation)) leaf_name_data.push_back(vrf_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-timer")
    {
        if(peer_timer != nullptr)
        {
            children["peer-timer"] = peer_timer;
        }
        else
        {
            peer_timer = std::make_shared<Aaa::Diameter::Peers::Peer::PeerTimer>();
            peer_timer->parent = this;
            children["peer-timer"] = peer_timer;
        }
        return children.at("peer-timer");
    }

    if(child_yang_name == "peer-type")
    {
        if(peer_type != nullptr)
        {
            children["peer-type"] = peer_type;
        }
        else
        {
            peer_type = std::make_shared<Aaa::Diameter::Peers::Peer::PeerType>();
            peer_type->parent = this;
            children["peer-type"] = peer_type;
        }
        return children.at("peer-type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::Peers::Peer::get_children()
{
    if(children.find("peer-timer") == children.end())
    {
        if(peer_timer != nullptr)
        {
            children["peer-timer"] = peer_timer;
        }
    }

    if(children.find("peer-type") == children.end())
    {
        if(peer_type != nullptr)
        {
            children["peer-type"] = peer_type;
        }
    }

    return children;
}

void Aaa::Diameter::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-name")
    {
        peer_name = value;
    }
    if(value_path == "host-destination")
    {
        host_destination = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "realm-destination")
    {
        realm_destination = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
    if(value_path == "tcp-transport")
    {
        tcp_transport = value;
    }
    if(value_path == "tls-transport")
    {
        tls_transport = value;
    }
    if(value_path == "vrf-ip")
    {
        vrf_ip = value;
    }
}

Aaa::Diameter::Peers::Peer::PeerTimer::PeerTimer()
    :
    connection{YType::uint32, "connection"},
    transaction{YType::uint32, "transaction"},
    watchdog{YType::uint32, "watchdog"}
{
    yang_name = "peer-timer"; yang_parent_name = "peer";
}

Aaa::Diameter::Peers::Peer::PeerTimer::~PeerTimer()
{
}

bool Aaa::Diameter::Peers::Peer::PeerTimer::has_data() const
{
    return connection.is_set
	|| transaction.is_set
	|| watchdog.is_set;
}

bool Aaa::Diameter::Peers::Peer::PeerTimer::has_operation() const
{
    return is_set(operation)
	|| is_set(connection.operation)
	|| is_set(transaction.operation)
	|| is_set(watchdog.operation);
}

std::string Aaa::Diameter::Peers::Peer::PeerTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-timer";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::Peers::Peer::PeerTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerTimer' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection.is_set || is_set(connection.operation)) leaf_name_data.push_back(connection.get_name_leafdata());
    if (transaction.is_set || is_set(transaction.operation)) leaf_name_data.push_back(transaction.get_name_leafdata());
    if (watchdog.is_set || is_set(watchdog.operation)) leaf_name_data.push_back(watchdog.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::Peers::Peer::PeerTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::Peers::Peer::PeerTimer::get_children()
{
    return children;
}

void Aaa::Diameter::Peers::Peer::PeerTimer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connection")
    {
        connection = value;
    }
    if(value_path == "transaction")
    {
        transaction = value;
    }
    if(value_path == "watchdog")
    {
        watchdog = value;
    }
}

Aaa::Diameter::Peers::Peer::PeerType::PeerType()
    :
    server{YType::boolean, "server"}
{
    yang_name = "peer-type"; yang_parent_name = "peer";
}

Aaa::Diameter::Peers::Peer::PeerType::~PeerType()
{
}

bool Aaa::Diameter::Peers::Peer::PeerType::has_data() const
{
    return server.is_set;
}

bool Aaa::Diameter::Peers::Peer::PeerType::has_operation() const
{
    return is_set(operation)
	|| is_set(server.operation);
}

std::string Aaa::Diameter::Peers::Peer::PeerType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-type";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::Peers::Peer::PeerType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerType' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server.is_set || is_set(server.operation)) leaf_name_data.push_back(server.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::Peers::Peer::PeerType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::Peers::Peer::PeerType::get_children()
{
    return children;
}

void Aaa::Diameter::Peers::Peer::PeerType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server")
    {
        server = value;
    }
}

Aaa::Diameter::Diams::Diams()
{
    yang_name = "diams"; yang_parent_name = "diameter";
}

Aaa::Diameter::Diams::~Diams()
{
}

bool Aaa::Diameter::Diams::has_data() const
{
    for (std::size_t index=0; index<diam.size(); index++)
    {
        if(diam[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Diameter::Diams::has_operation() const
{
    for (std::size_t index=0; index<diam.size(); index++)
    {
        if(diam[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Diameter::Diams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diams";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::Diams::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::Diams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "diam")
    {
        for(auto const & c : diam)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Diameter::Diams::Diam>();
        c->parent = this;
        diam.push_back(std::move(c));
        children[segment_path] = diam.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::Diams::get_children()
{
    for (auto const & c : diam)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Diameter::Diams::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Diameter::Diams::Diam::Diam()
    :
    list_id{YType::uint32, "list-id"}
    	,
    diam_attr_defs(std::make_shared<Aaa::Diameter::Diams::Diam::DiamAttrDefs>())
{
    diam_attr_defs->parent = this;
    children["diam-attr-defs"] = diam_attr_defs;

    yang_name = "diam"; yang_parent_name = "diams";
}

Aaa::Diameter::Diams::Diam::~Diam()
{
}

bool Aaa::Diameter::Diams::Diam::has_data() const
{
    return list_id.is_set
	|| (diam_attr_defs !=  nullptr && diam_attr_defs->has_data());
}

bool Aaa::Diameter::Diams::Diam::has_operation() const
{
    return is_set(operation)
	|| is_set(list_id.operation)
	|| (diam_attr_defs !=  nullptr && diam_attr_defs->has_operation());
}

std::string Aaa::Diameter::Diams::Diam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diam" <<"[list-id='" <<list_id <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::Diams::Diam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/diams/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list_id.is_set || is_set(list_id.operation)) leaf_name_data.push_back(list_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::Diams::Diam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "diam-attr-defs")
    {
        if(diam_attr_defs != nullptr)
        {
            children["diam-attr-defs"] = diam_attr_defs;
        }
        else
        {
            diam_attr_defs = std::make_shared<Aaa::Diameter::Diams::Diam::DiamAttrDefs>();
            diam_attr_defs->parent = this;
            children["diam-attr-defs"] = diam_attr_defs;
        }
        return children.at("diam-attr-defs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::Diams::Diam::get_children()
{
    if(children.find("diam-attr-defs") == children.end())
    {
        if(diam_attr_defs != nullptr)
        {
            children["diam-attr-defs"] = diam_attr_defs;
        }
    }

    return children;
}

void Aaa::Diameter::Diams::Diam::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "list-id")
    {
        list_id = value;
    }
}

Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDefs()
{
    yang_name = "diam-attr-defs"; yang_parent_name = "diam";
}

Aaa::Diameter::Diams::Diam::DiamAttrDefs::~DiamAttrDefs()
{
}

bool Aaa::Diameter::Diams::Diam::DiamAttrDefs::has_data() const
{
    for (std::size_t index=0; index<diam_attr_def.size(); index++)
    {
        if(diam_attr_def[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Diameter::Diams::Diam::DiamAttrDefs::has_operation() const
{
    for (std::size_t index=0; index<diam_attr_def.size(); index++)
    {
        if(diam_attr_def[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Diameter::Diams::Diam::DiamAttrDefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diam-attr-defs";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::Diams::Diam::DiamAttrDefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiamAttrDefs' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::Diams::Diam::DiamAttrDefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "diam-attr-def")
    {
        for(auto const & c : diam_attr_def)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef>();
        c->parent = this;
        diam_attr_def.push_back(std::move(c));
        children[segment_path] = diam_attr_def.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::Diams::Diam::DiamAttrDefs::get_children()
{
    for (auto const & c : diam_attr_def)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Diameter::Diams::Diam::DiamAttrDefs::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrDef()
    :
    attribute_id{YType::uint32, "attribute-id"},
    vendor_id{YType::uint32, "vendor-id"}
    	,
    diam_attr_value(std::make_shared<Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue>())
{
    diam_attr_value->parent = this;
    children["diam-attr-value"] = diam_attr_value;

    yang_name = "diam-attr-def"; yang_parent_name = "diam-attr-defs";
}

Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::~DiamAttrDef()
{
}

bool Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::has_data() const
{
    return attribute_id.is_set
	|| vendor_id.is_set
	|| (diam_attr_value !=  nullptr && diam_attr_value->has_data());
}

bool Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_id.operation)
	|| is_set(vendor_id.operation)
	|| (diam_attr_value !=  nullptr && diam_attr_value->has_operation());
}

std::string Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diam-attr-def" <<"[attribute-id='" <<attribute_id <<"']" <<"[vendor-id='" <<vendor_id <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiamAttrDef' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_id.is_set || is_set(attribute_id.operation)) leaf_name_data.push_back(attribute_id.get_name_leafdata());
    if (vendor_id.is_set || is_set(vendor_id.operation)) leaf_name_data.push_back(vendor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "diam-attr-value")
    {
        if(diam_attr_value != nullptr)
        {
            children["diam-attr-value"] = diam_attr_value;
        }
        else
        {
            diam_attr_value = std::make_shared<Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue>();
            diam_attr_value->parent = this;
            children["diam-attr-value"] = diam_attr_value;
        }
        return children.at("diam-attr-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::get_children()
{
    if(children.find("diam-attr-value") == children.end())
    {
        if(diam_attr_value != nullptr)
        {
            children["diam-attr-value"] = diam_attr_value;
        }
    }

    return children;
}

void Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-id")
    {
        attribute_id = value;
    }
    if(value_path == "vendor-id")
    {
        vendor_id = value;
    }
}

Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue::DiamAttrValue()
    :
    data_type{YType::uint32, "data-type"},
    mandatory{YType::uint32, "mandatory"},
    type_binary{YType::str, "type-binary"},
    type_boolean{YType::uint32, "type-boolean"},
    type_enum{YType::uint32, "type-enum"},
    type_grouped{YType::uint32, "type-grouped"},
    type_identity{YType::str, "type-identity"},
    type_ipv4_address{YType::str, "type-ipv4-address"},
    type_string{YType::str, "type-string"},
    type_ulong{YType::uint32, "type-ulong"}
{
    yang_name = "diam-attr-value"; yang_parent_name = "diam-attr-def";
}

Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue::~DiamAttrValue()
{
}

bool Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue::has_data() const
{
    return data_type.is_set
	|| mandatory.is_set
	|| type_binary.is_set
	|| type_boolean.is_set
	|| type_enum.is_set
	|| type_grouped.is_set
	|| type_identity.is_set
	|| type_ipv4_address.is_set
	|| type_string.is_set
	|| type_ulong.is_set;
}

bool Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(mandatory.operation)
	|| is_set(type_binary.operation)
	|| is_set(type_boolean.operation)
	|| is_set(type_enum.operation)
	|| is_set(type_grouped.operation)
	|| is_set(type_identity.operation)
	|| is_set(type_ipv4_address.operation)
	|| is_set(type_string.operation)
	|| is_set(type_ulong.operation);
}

std::string Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diam-attr-value";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiamAttrValue' in Cisco_IOS_XR_aaa_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (mandatory.is_set || is_set(mandatory.operation)) leaf_name_data.push_back(mandatory.get_name_leafdata());
    if (type_binary.is_set || is_set(type_binary.operation)) leaf_name_data.push_back(type_binary.get_name_leafdata());
    if (type_boolean.is_set || is_set(type_boolean.operation)) leaf_name_data.push_back(type_boolean.get_name_leafdata());
    if (type_enum.is_set || is_set(type_enum.operation)) leaf_name_data.push_back(type_enum.get_name_leafdata());
    if (type_grouped.is_set || is_set(type_grouped.operation)) leaf_name_data.push_back(type_grouped.get_name_leafdata());
    if (type_identity.is_set || is_set(type_identity.operation)) leaf_name_data.push_back(type_identity.get_name_leafdata());
    if (type_ipv4_address.is_set || is_set(type_ipv4_address.operation)) leaf_name_data.push_back(type_ipv4_address.get_name_leafdata());
    if (type_string.is_set || is_set(type_string.operation)) leaf_name_data.push_back(type_string.get_name_leafdata());
    if (type_ulong.is_set || is_set(type_ulong.operation)) leaf_name_data.push_back(type_ulong.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue::get_children()
{
    return children;
}

void Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "mandatory")
    {
        mandatory = value;
    }
    if(value_path == "type-binary")
    {
        type_binary = value;
    }
    if(value_path == "type-boolean")
    {
        type_boolean = value;
    }
    if(value_path == "type-enum")
    {
        type_enum = value;
    }
    if(value_path == "type-grouped")
    {
        type_grouped = value;
    }
    if(value_path == "type-identity")
    {
        type_identity = value;
    }
    if(value_path == "type-ipv4-address")
    {
        type_ipv4_address = value;
    }
    if(value_path == "type-string")
    {
        type_string = value;
    }
    if(value_path == "type-ulong")
    {
        type_ulong = value;
    }
}

Aaa::Diameter::Gx::Gx()
    :
    dest_host{YType::str, "dest-host"},
    retransmit{YType::uint32, "retransmit"},
    tx_timer{YType::uint32, "tx-timer"}
{
    yang_name = "gx"; yang_parent_name = "diameter";
}

Aaa::Diameter::Gx::~Gx()
{
}

bool Aaa::Diameter::Gx::has_data() const
{
    return dest_host.is_set
	|| retransmit.is_set
	|| tx_timer.is_set;
}

bool Aaa::Diameter::Gx::has_operation() const
{
    return is_set(operation)
	|| is_set(dest_host.operation)
	|| is_set(retransmit.operation)
	|| is_set(tx_timer.operation);
}

std::string Aaa::Diameter::Gx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gx";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::Gx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_host.is_set || is_set(dest_host.operation)) leaf_name_data.push_back(dest_host.get_name_leafdata());
    if (retransmit.is_set || is_set(retransmit.operation)) leaf_name_data.push_back(retransmit.get_name_leafdata());
    if (tx_timer.is_set || is_set(tx_timer.operation)) leaf_name_data.push_back(tx_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::Gx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::Gx::get_children()
{
    return children;
}

void Aaa::Diameter::Gx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dest-host")
    {
        dest_host = value;
    }
    if(value_path == "retransmit")
    {
        retransmit = value;
    }
    if(value_path == "tx-timer")
    {
        tx_timer = value;
    }
}

Aaa::Diameter::DiameterTimer::DiameterTimer()
    :
    connection{YType::uint32, "connection"},
    transaction{YType::uint32, "transaction"},
    watchdog{YType::uint32, "watchdog"}
{
    yang_name = "diameter-timer"; yang_parent_name = "diameter";
}

Aaa::Diameter::DiameterTimer::~DiameterTimer()
{
}

bool Aaa::Diameter::DiameterTimer::has_data() const
{
    return connection.is_set
	|| transaction.is_set
	|| watchdog.is_set;
}

bool Aaa::Diameter::DiameterTimer::has_operation() const
{
    return is_set(operation)
	|| is_set(connection.operation)
	|| is_set(transaction.operation)
	|| is_set(watchdog.operation);
}

std::string Aaa::Diameter::DiameterTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diameter-timer";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::DiameterTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection.is_set || is_set(connection.operation)) leaf_name_data.push_back(connection.get_name_leafdata());
    if (transaction.is_set || is_set(transaction.operation)) leaf_name_data.push_back(transaction.get_name_leafdata());
    if (watchdog.is_set || is_set(watchdog.operation)) leaf_name_data.push_back(watchdog.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::DiameterTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::DiameterTimer::get_children()
{
    return children;
}

void Aaa::Diameter::DiameterTimer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connection")
    {
        connection = value;
    }
    if(value_path == "transaction")
    {
        transaction = value;
    }
    if(value_path == "watchdog")
    {
        watchdog = value;
    }
}

Aaa::Diameter::Vendor::Vendor()
    :
    supported(std::make_shared<Aaa::Diameter::Vendor::Supported>())
{
    supported->parent = this;
    children["supported"] = supported;

    yang_name = "vendor"; yang_parent_name = "diameter";
}

Aaa::Diameter::Vendor::~Vendor()
{
}

bool Aaa::Diameter::Vendor::has_data() const
{
    return (supported !=  nullptr && supported->has_data());
}

bool Aaa::Diameter::Vendor::has_operation() const
{
    return is_set(operation)
	|| (supported !=  nullptr && supported->has_operation());
}

std::string Aaa::Diameter::Vendor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vendor";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::Vendor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::Vendor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "supported")
    {
        if(supported != nullptr)
        {
            children["supported"] = supported;
        }
        else
        {
            supported = std::make_shared<Aaa::Diameter::Vendor::Supported>();
            supported->parent = this;
            children["supported"] = supported;
        }
        return children.at("supported");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::Vendor::get_children()
{
    if(children.find("supported") == children.end())
    {
        if(supported != nullptr)
        {
            children["supported"] = supported;
        }
    }

    return children;
}

void Aaa::Diameter::Vendor::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Diameter::Vendor::Supported::Supported()
    :
    cisco{YType::boolean, "cisco"},
    etsi{YType::boolean, "etsi"},
    threegpp{YType::boolean, "threegpp"},
    vodafone{YType::boolean, "vodafone"}
{
    yang_name = "supported"; yang_parent_name = "vendor";
}

Aaa::Diameter::Vendor::Supported::~Supported()
{
}

bool Aaa::Diameter::Vendor::Supported::has_data() const
{
    return cisco.is_set
	|| etsi.is_set
	|| threegpp.is_set
	|| vodafone.is_set;
}

bool Aaa::Diameter::Vendor::Supported::has_operation() const
{
    return is_set(operation)
	|| is_set(cisco.operation)
	|| is_set(etsi.operation)
	|| is_set(threegpp.operation)
	|| is_set(vodafone.operation);
}

std::string Aaa::Diameter::Vendor::Supported::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supported";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::Vendor::Supported::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/vendor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.operation)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (etsi.is_set || is_set(etsi.operation)) leaf_name_data.push_back(etsi.get_name_leafdata());
    if (threegpp.is_set || is_set(threegpp.operation)) leaf_name_data.push_back(threegpp.get_name_leafdata());
    if (vodafone.is_set || is_set(vodafone.operation)) leaf_name_data.push_back(vodafone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::Vendor::Supported::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::Vendor::Supported::get_children()
{
    return children;
}

void Aaa::Diameter::Vendor::Supported::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cisco")
    {
        cisco = value;
    }
    if(value_path == "etsi")
    {
        etsi = value;
    }
    if(value_path == "threegpp")
    {
        threegpp = value;
    }
    if(value_path == "vodafone")
    {
        vodafone = value;
    }
}

Aaa::Tacacs::Tacacs()
    :
    key{YType::str, "key"},
    single_connect{YType::boolean, "single-connect"},
    timeout{YType::uint32, "timeout"}
    	,
    hosts(std::make_shared<Aaa::Tacacs::Hosts>())
	,ipv4(std::make_shared<Aaa::Tacacs::Ipv4>())
	,ipv6(std::make_shared<Aaa::Tacacs::Ipv6>())
	,vrfs(std::make_shared<Aaa::Tacacs::Vrfs>())
{
    hosts->parent = this;
    children["hosts"] = hosts;

    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv6->parent = this;
    children["ipv6"] = ipv6;

    vrfs->parent = this;
    children["vrfs"] = vrfs;

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
	|| (hosts !=  nullptr && hosts->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (single_connect.is_set || is_set(single_connect.operation)) leaf_name_data.push_back(single_connect.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Tacacs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["hosts"] = hosts;
        }
        else
        {
            hosts = std::make_shared<Aaa::Tacacs::Hosts>();
            hosts->parent = this;
            children["hosts"] = hosts;
        }
        return children.at("hosts");
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<Aaa::Tacacs::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
        else
        {
            ipv6 = std::make_shared<Aaa::Tacacs::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6;
        }
        return children.at("ipv6");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
        else
        {
            vrfs = std::make_shared<Aaa::Tacacs::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs;
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Tacacs::get_children()
{
    if(children.find("hosts") == children.end())
    {
        if(hosts != nullptr)
        {
            children["hosts"] = hosts;
        }
    }

    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Tacacs::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Tacacs::Ipv6::get_children()
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Tacacs::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Tacacs::Hosts::Host>();
        c->parent = this;
        host.push_back(std::move(c));
        children[segment_path] = host.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Tacacs::Hosts::get_children()
{
    for (auto const & c : host)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Tacacs::Hosts::set_value(const std::string & value_path, std::string value)
{
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
    path_buffer << "host" <<"[ip-address='" <<ip_address <<"']" <<"[ordering-index='" <<ordering_index <<"']" <<"[port-number='" <<port_number <<"']";

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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
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

std::shared_ptr<Entity> Aaa::Tacacs::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Tacacs::Hosts::Host::get_children()
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Tacacs::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Tacacs::Ipv4::get_children()
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Tacacs::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Tacacs::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Tacacs::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Tacacs::Vrfs::set_value(const std::string & value_path, std::string value)
{
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
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Tacacs::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Tacacs::Vrfs::Vrf::get_children()
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
    attributes(std::make_shared<Aaa::Radius::Attributes>())
	,dead_criteria(std::make_shared<Aaa::Radius::DeadCriteria>())
	,disallow(std::make_shared<Aaa::Radius::Disallow>())
	,dynamic_authorization(std::make_shared<Aaa::Radius::DynamicAuthorization>())
	,hosts(std::make_shared<Aaa::Radius::Hosts>())
	,ipv4(std::make_shared<Aaa::Radius::Ipv4>())
	,ipv6(std::make_shared<Aaa::Radius::Ipv6>())
	,load_balance_options(std::make_shared<Aaa::Radius::LoadBalanceOptions>())
	,radius_attribute(std::make_shared<Aaa::Radius::RadiusAttribute>())
	,source_port(std::make_shared<Aaa::Radius::SourcePort>())
	,throttle(std::make_shared<Aaa::Radius::Throttle>())
	,vrfs(std::make_shared<Aaa::Radius::Vrfs>())
	,vsa(std::make_shared<Aaa::Radius::Vsa>())
{
    attributes->parent = this;
    children["attributes"] = attributes;

    dead_criteria->parent = this;
    children["dead-criteria"] = dead_criteria;

    disallow->parent = this;
    children["disallow"] = disallow;

    dynamic_authorization->parent = this;
    children["dynamic-authorization"] = dynamic_authorization;

    hosts->parent = this;
    children["hosts"] = hosts;

    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv6->parent = this;
    children["ipv6"] = ipv6;

    load_balance_options->parent = this;
    children["load-balance-options"] = load_balance_options;

    radius_attribute->parent = this;
    children["radius-attribute"] = radius_attribute;

    source_port->parent = this;
    children["source-port"] = source_port;

    throttle->parent = this;
    children["throttle"] = throttle;

    vrfs->parent = this;
    children["vrfs"] = vrfs;

    vsa->parent = this;
    children["vsa"] = vsa;

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
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (dead_criteria !=  nullptr && dead_criteria->has_operation())
	|| (disallow !=  nullptr && disallow->has_operation())
	|| (dynamic_authorization !=  nullptr && dynamic_authorization->has_operation())
	|| (hosts !=  nullptr && hosts->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (load_balance_options !=  nullptr && load_balance_options->has_operation())
	|| (radius_attribute !=  nullptr && radius_attribute->has_operation())
	|| (source_port !=  nullptr && source_port->has_operation())
	|| (throttle !=  nullptr && throttle->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation())
	|| (vsa !=  nullptr && vsa->has_operation());
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
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

std::shared_ptr<Entity> Aaa::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["attributes"] = attributes;
        }
        else
        {
            attributes = std::make_shared<Aaa::Radius::Attributes>();
            attributes->parent = this;
            children["attributes"] = attributes;
        }
        return children.at("attributes");
    }

    if(child_yang_name == "dead-criteria")
    {
        if(dead_criteria != nullptr)
        {
            children["dead-criteria"] = dead_criteria;
        }
        else
        {
            dead_criteria = std::make_shared<Aaa::Radius::DeadCriteria>();
            dead_criteria->parent = this;
            children["dead-criteria"] = dead_criteria;
        }
        return children.at("dead-criteria");
    }

    if(child_yang_name == "disallow")
    {
        if(disallow != nullptr)
        {
            children["disallow"] = disallow;
        }
        else
        {
            disallow = std::make_shared<Aaa::Radius::Disallow>();
            disallow->parent = this;
            children["disallow"] = disallow;
        }
        return children.at("disallow");
    }

    if(child_yang_name == "dynamic-authorization")
    {
        if(dynamic_authorization != nullptr)
        {
            children["dynamic-authorization"] = dynamic_authorization;
        }
        else
        {
            dynamic_authorization = std::make_shared<Aaa::Radius::DynamicAuthorization>();
            dynamic_authorization->parent = this;
            children["dynamic-authorization"] = dynamic_authorization;
        }
        return children.at("dynamic-authorization");
    }

    if(child_yang_name == "hosts")
    {
        if(hosts != nullptr)
        {
            children["hosts"] = hosts;
        }
        else
        {
            hosts = std::make_shared<Aaa::Radius::Hosts>();
            hosts->parent = this;
            children["hosts"] = hosts;
        }
        return children.at("hosts");
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<Aaa::Radius::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
        else
        {
            ipv6 = std::make_shared<Aaa::Radius::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6;
        }
        return children.at("ipv6");
    }

    if(child_yang_name == "load-balance-options")
    {
        if(load_balance_options != nullptr)
        {
            children["load-balance-options"] = load_balance_options;
        }
        else
        {
            load_balance_options = std::make_shared<Aaa::Radius::LoadBalanceOptions>();
            load_balance_options->parent = this;
            children["load-balance-options"] = load_balance_options;
        }
        return children.at("load-balance-options");
    }

    if(child_yang_name == "radius-attribute")
    {
        if(radius_attribute != nullptr)
        {
            children["radius-attribute"] = radius_attribute;
        }
        else
        {
            radius_attribute = std::make_shared<Aaa::Radius::RadiusAttribute>();
            radius_attribute->parent = this;
            children["radius-attribute"] = radius_attribute;
        }
        return children.at("radius-attribute");
    }

    if(child_yang_name == "source-port")
    {
        if(source_port != nullptr)
        {
            children["source-port"] = source_port;
        }
        else
        {
            source_port = std::make_shared<Aaa::Radius::SourcePort>();
            source_port->parent = this;
            children["source-port"] = source_port;
        }
        return children.at("source-port");
    }

    if(child_yang_name == "throttle")
    {
        if(throttle != nullptr)
        {
            children["throttle"] = throttle;
        }
        else
        {
            throttle = std::make_shared<Aaa::Radius::Throttle>();
            throttle->parent = this;
            children["throttle"] = throttle;
        }
        return children.at("throttle");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
        else
        {
            vrfs = std::make_shared<Aaa::Radius::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs;
        }
        return children.at("vrfs");
    }

    if(child_yang_name == "vsa")
    {
        if(vsa != nullptr)
        {
            children["vsa"] = vsa;
        }
        else
        {
            vsa = std::make_shared<Aaa::Radius::Vsa>();
            vsa->parent = this;
            children["vsa"] = vsa;
        }
        return children.at("vsa");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::get_children()
{
    if(children.find("attributes") == children.end())
    {
        if(attributes != nullptr)
        {
            children["attributes"] = attributes;
        }
    }

    if(children.find("dead-criteria") == children.end())
    {
        if(dead_criteria != nullptr)
        {
            children["dead-criteria"] = dead_criteria;
        }
    }

    if(children.find("disallow") == children.end())
    {
        if(disallow != nullptr)
        {
            children["disallow"] = disallow;
        }
    }

    if(children.find("dynamic-authorization") == children.end())
    {
        if(dynamic_authorization != nullptr)
        {
            children["dynamic-authorization"] = dynamic_authorization;
        }
    }

    if(children.find("hosts") == children.end())
    {
        if(hosts != nullptr)
        {
            children["hosts"] = hosts;
        }
    }

    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
    }

    if(children.find("load-balance-options") == children.end())
    {
        if(load_balance_options != nullptr)
        {
            children["load-balance-options"] = load_balance_options;
        }
    }

    if(children.find("radius-attribute") == children.end())
    {
        if(radius_attribute != nullptr)
        {
            children["radius-attribute"] = radius_attribute;
        }
    }

    if(children.find("source-port") == children.end())
    {
        if(source_port != nullptr)
        {
            children["source-port"] = source_port;
        }
    }

    if(children.find("throttle") == children.end())
    {
        if(throttle != nullptr)
        {
            children["throttle"] = throttle;
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
    }

    if(children.find("vsa") == children.end())
    {
        if(vsa != nullptr)
        {
            children["vsa"] = vsa;
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Radius::Hosts::Host>();
        c->parent = this;
        host.push_back(std::move(c));
        children[segment_path] = host.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::Hosts::get_children()
{
    for (auto const & c : host)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Radius::Hosts::set_value(const std::string & value_path, std::string value)
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
    path_buffer << "host" <<"[acct-port-number='" <<acct_port_number <<"']" <<"[auth-port-number='" <<auth_port_number <<"']" <<"[ip-address='" <<ip_address <<"']" <<"[ordering-index='" <<ordering_index <<"']";

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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
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

std::shared_ptr<Entity> Aaa::Radius::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::Hosts::Host::get_children()
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());
    if (tries.is_set || is_set(tries.operation)) leaf_name_data.push_back(tries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::DeadCriteria::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::DeadCriteria::get_children()
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null_username.is_set || is_set(null_username.operation)) leaf_name_data.push_back(null_username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::Disallow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::Disallow::get_children()
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::Ipv6::get_children()
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

Aaa::Radius::DynamicAuthorization::DynamicAuthorization()
    :
    authentication_type{YType::enumeration, "authentication-type"},
    ignore{YType::enumeration, "ignore"},
    port{YType::uint32, "port"},
    server_key{YType::str, "server-key"}
    	,
    clients(std::make_shared<Aaa::Radius::DynamicAuthorization::Clients>())
{
    clients->parent = this;
    children["clients"] = clients;

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
	|| (clients !=  nullptr && clients->has_operation());
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_type.is_set || is_set(authentication_type.operation)) leaf_name_data.push_back(authentication_type.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (server_key.is_set || is_set(server_key.operation)) leaf_name_data.push_back(server_key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::DynamicAuthorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["clients"] = clients;
        }
        else
        {
            clients = std::make_shared<Aaa::Radius::DynamicAuthorization::Clients>();
            clients->parent = this;
            children["clients"] = clients;
        }
        return children.at("clients");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::DynamicAuthorization::get_children()
{
    if(children.find("clients") == children.end())
    {
        if(clients != nullptr)
        {
            children["clients"] = clients;
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::DynamicAuthorization::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Radius::DynamicAuthorization::Clients::Client>();
        c->parent = this;
        client.push_back(std::move(c));
        children[segment_path] = client.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "client-vrf-name")
    {
        for(auto const & c : client_vrf_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName>();
        c->parent = this;
        client_vrf_name.push_back(std::move(c));
        children[segment_path] = client_vrf_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::DynamicAuthorization::Clients::get_children()
{
    for (auto const & c : client)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : client_vrf_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Radius::DynamicAuthorization::Clients::set_value(const std::string & value_path, std::string value)
{
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
    path_buffer << "client" <<"[ip-address='" <<ip_address <<"']";

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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (server_key.is_set || is_set(server_key.operation)) leaf_name_data.push_back(server_key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::DynamicAuthorization::Clients::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::DynamicAuthorization::Clients::Client::get_children()
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
    path_buffer << "client-vrf-name" <<"[ip-address='" <<ip_address <<"']" <<"[vrf-name='" <<vrf_name <<"']";

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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (server_key.is_set || is_set(server_key.operation)) leaf_name_data.push_back(server_key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName::get_children()
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

Aaa::Radius::LoadBalanceOptions::LoadBalanceOptions()
    :
    load_balance_method(std::make_shared<Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod>())
{
    load_balance_method->parent = this;
    children["load-balance-method"] = load_balance_method;

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
	|| (load_balance_method !=  nullptr && load_balance_method->has_operation());
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::LoadBalanceOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["load-balance-method"] = load_balance_method;
        }
        else
        {
            load_balance_method = std::make_shared<Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod>();
            load_balance_method->parent = this;
            children["load-balance-method"] = load_balance_method;
        }
        return children.at("load-balance-method");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::LoadBalanceOptions::get_children()
{
    if(children.find("load-balance-method") == children.end())
    {
        if(load_balance_method != nullptr)
        {
            children["load-balance-method"] = load_balance_method;
        }
    }

    return children;
}

void Aaa::Radius::LoadBalanceOptions::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::LoadBalanceMethod()
    :
    batch_size(std::make_shared<Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize>())
{
    batch_size->parent = this;
    children["batch-size"] = batch_size;

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
	|| (batch_size !=  nullptr && batch_size->has_operation());
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["batch-size"] = batch_size;
        }
        else
        {
            batch_size = std::make_shared<Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize>();
            batch_size->parent = this;
            children["batch-size"] = batch_size;
        }
        return children.at("batch-size");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::get_children()
{
    if(children.find("batch-size") == children.end())
    {
        if(batch_size != nullptr)
        {
            children["batch-size"] = batch_size;
        }
    }

    return children;
}

void Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::set_value(const std::string & value_path, std::string value)
{
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (batch_size.is_set || is_set(batch_size.operation)) leaf_name_data.push_back(batch_size.get_name_leafdata());
    if (ignore_preferred_server.is_set || is_set(ignore_preferred_server.operation)) leaf_name_data.push_back(ignore_preferred_server.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize::get_children()
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Radius::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Radius::Vrfs::set_value(const std::string & value_path, std::string value)
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
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::Vrfs::Vrf::get_children()
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.operation)) leaf_name_data.push_back(access.get_name_leafdata());
    if (access_timeout.is_set || is_set(access_timeout.operation)) leaf_name_data.push_back(access_timeout.get_name_leafdata());
    if (accounting.is_set || is_set(accounting.operation)) leaf_name_data.push_back(accounting.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::Throttle::get_children()
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

Aaa::Radius::Vsa::Vsa()
    :
    attribute(std::make_shared<Aaa::Radius::Vsa::Attribute>())
{
    attribute->parent = this;
    children["attribute"] = attribute;

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
	|| (attribute !=  nullptr && attribute->has_operation());
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::Vsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["attribute"] = attribute;
        }
        else
        {
            attribute = std::make_shared<Aaa::Radius::Vsa::Attribute>();
            attribute->parent = this;
            children["attribute"] = attribute;
        }
        return children.at("attribute");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::Vsa::get_children()
{
    if(children.find("attribute") == children.end())
    {
        if(attribute != nullptr)
        {
            children["attribute"] = attribute;
        }
    }

    return children;
}

void Aaa::Radius::Vsa::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Radius::Vsa::Attribute::Attribute()
    :
    ignore(std::make_shared<Aaa::Radius::Vsa::Attribute::Ignore>())
{
    ignore->parent = this;
    children["ignore"] = ignore;

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
	|| (ignore !=  nullptr && ignore->has_operation());
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::Vsa::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["ignore"] = ignore;
        }
        else
        {
            ignore = std::make_shared<Aaa::Radius::Vsa::Attribute::Ignore>();
            ignore->parent = this;
            children["ignore"] = ignore;
        }
        return children.at("ignore");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::Vsa::Attribute::get_children()
{
    if(children.find("ignore") == children.end())
    {
        if(ignore != nullptr)
        {
            children["ignore"] = ignore;
        }
    }

    return children;
}

void Aaa::Radius::Vsa::Attribute::set_value(const std::string & value_path, std::string value)
{
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown.is_set || is_set(unknown.operation)) leaf_name_data.push_back(unknown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::Vsa::Attribute::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::Vsa::Attribute::Ignore::get_children()
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::Ipv4::get_children()
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

Aaa::Radius::RadiusAttribute::RadiusAttribute()
    :
    acct_multi_session_id(std::make_shared<Aaa::Radius::RadiusAttribute::AcctMultiSessionId>())
	,acct_session_id(std::make_shared<Aaa::Radius::RadiusAttribute::AcctSessionId>())
	,filter_id_11(std::make_shared<Aaa::Radius::RadiusAttribute::FilterId11>())
{
    acct_multi_session_id->parent = this;
    children["acct-multi-session-id"] = acct_multi_session_id;

    acct_session_id->parent = this;
    children["acct-session-id"] = acct_session_id;

    filter_id_11->parent = this;
    children["filter-id-11"] = filter_id_11;

    yang_name = "radius-attribute"; yang_parent_name = "radius";
}

Aaa::Radius::RadiusAttribute::~RadiusAttribute()
{
}

bool Aaa::Radius::RadiusAttribute::has_data() const
{
    return (acct_multi_session_id !=  nullptr && acct_multi_session_id->has_data())
	|| (acct_session_id !=  nullptr && acct_session_id->has_data())
	|| (filter_id_11 !=  nullptr && filter_id_11->has_data());
}

bool Aaa::Radius::RadiusAttribute::has_operation() const
{
    return is_set(operation)
	|| (acct_multi_session_id !=  nullptr && acct_multi_session_id->has_operation())
	|| (acct_session_id !=  nullptr && acct_session_id->has_operation())
	|| (filter_id_11 !=  nullptr && filter_id_11->has_operation());
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::RadiusAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["acct-multi-session-id"] = acct_multi_session_id;
        }
        else
        {
            acct_multi_session_id = std::make_shared<Aaa::Radius::RadiusAttribute::AcctMultiSessionId>();
            acct_multi_session_id->parent = this;
            children["acct-multi-session-id"] = acct_multi_session_id;
        }
        return children.at("acct-multi-session-id");
    }

    if(child_yang_name == "acct-session-id")
    {
        if(acct_session_id != nullptr)
        {
            children["acct-session-id"] = acct_session_id;
        }
        else
        {
            acct_session_id = std::make_shared<Aaa::Radius::RadiusAttribute::AcctSessionId>();
            acct_session_id->parent = this;
            children["acct-session-id"] = acct_session_id;
        }
        return children.at("acct-session-id");
    }

    if(child_yang_name == "filter-id-11")
    {
        if(filter_id_11 != nullptr)
        {
            children["filter-id-11"] = filter_id_11;
        }
        else
        {
            filter_id_11 = std::make_shared<Aaa::Radius::RadiusAttribute::FilterId11>();
            filter_id_11->parent = this;
            children["filter-id-11"] = filter_id_11;
        }
        return children.at("filter-id-11");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::RadiusAttribute::get_children()
{
    if(children.find("acct-multi-session-id") == children.end())
    {
        if(acct_multi_session_id != nullptr)
        {
            children["acct-multi-session-id"] = acct_multi_session_id;
        }
    }

    if(children.find("acct-session-id") == children.end())
    {
        if(acct_session_id != nullptr)
        {
            children["acct-session-id"] = acct_session_id;
        }
    }

    if(children.find("filter-id-11") == children.end())
    {
        if(filter_id_11 != nullptr)
        {
            children["filter-id-11"] = filter_id_11;
        }
    }

    return children;
}

void Aaa::Radius::RadiusAttribute::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Radius::RadiusAttribute::FilterId11::FilterId11()
    :
    defaults(std::make_shared<Aaa::Radius::RadiusAttribute::FilterId11::Defaults>())
{
    defaults->parent = this;
    children["defaults"] = defaults;

    yang_name = "filter-id-11"; yang_parent_name = "radius-attribute";
}

Aaa::Radius::RadiusAttribute::FilterId11::~FilterId11()
{
}

bool Aaa::Radius::RadiusAttribute::FilterId11::has_data() const
{
    return (defaults !=  nullptr && defaults->has_data());
}

bool Aaa::Radius::RadiusAttribute::FilterId11::has_operation() const
{
    return is_set(operation)
	|| (defaults !=  nullptr && defaults->has_operation());
}

std::string Aaa::Radius::RadiusAttribute::FilterId11::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-id-11";

    return path_buffer.str();

}

EntityPath Aaa::Radius::RadiusAttribute::FilterId11::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/radius-attribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::RadiusAttribute::FilterId11::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "defaults")
    {
        if(defaults != nullptr)
        {
            children["defaults"] = defaults;
        }
        else
        {
            defaults = std::make_shared<Aaa::Radius::RadiusAttribute::FilterId11::Defaults>();
            defaults->parent = this;
            children["defaults"] = defaults;
        }
        return children.at("defaults");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::RadiusAttribute::FilterId11::get_children()
{
    if(children.find("defaults") == children.end())
    {
        if(defaults != nullptr)
        {
            children["defaults"] = defaults;
        }
    }

    return children;
}

void Aaa::Radius::RadiusAttribute::FilterId11::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Radius::RadiusAttribute::FilterId11::Defaults::Defaults()
    :
    direction{YType::enumeration, "direction"}
{
    yang_name = "defaults"; yang_parent_name = "filter-id-11";
}

Aaa::Radius::RadiusAttribute::FilterId11::Defaults::~Defaults()
{
}

bool Aaa::Radius::RadiusAttribute::FilterId11::Defaults::has_data() const
{
    return direction.is_set;
}

bool Aaa::Radius::RadiusAttribute::FilterId11::Defaults::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation);
}

std::string Aaa::Radius::RadiusAttribute::FilterId11::Defaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defaults";

    return path_buffer.str();

}

EntityPath Aaa::Radius::RadiusAttribute::FilterId11::Defaults::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-protocol-radius-cfg:radius/radius-attribute/filter-id-11/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::RadiusAttribute::FilterId11::Defaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::RadiusAttribute::FilterId11::Defaults::get_children()
{
    return children;
}

void Aaa::Radius::RadiusAttribute::FilterId11::Defaults::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
}

Aaa::Radius::RadiusAttribute::AcctMultiSessionId::AcctMultiSessionId()
    :
    include_parent_session_id(std::make_shared<Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId>())
{
    include_parent_session_id->parent = this;
    children["include-parent-session-id"] = include_parent_session_id;

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
	|| (include_parent_session_id !=  nullptr && include_parent_session_id->has_operation());
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::RadiusAttribute::AcctMultiSessionId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["include-parent-session-id"] = include_parent_session_id;
        }
        else
        {
            include_parent_session_id = std::make_shared<Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId>();
            include_parent_session_id->parent = this;
            children["include-parent-session-id"] = include_parent_session_id;
        }
        return children.at("include-parent-session-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::RadiusAttribute::AcctMultiSessionId::get_children()
{
    if(children.find("include-parent-session-id") == children.end())
    {
        if(include_parent_session_id != nullptr)
        {
            children["include-parent-session-id"] = include_parent_session_id;
        }
    }

    return children;
}

void Aaa::Radius::RadiusAttribute::AcctMultiSessionId::set_value(const std::string & value_path, std::string value)
{
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config.is_set || is_set(config.operation)) leaf_name_data.push_back(config.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId::get_children()
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

Aaa::Radius::RadiusAttribute::AcctSessionId::AcctSessionId()
    :
    prepend_nas_port_id(std::make_shared<Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId>())
{
    prepend_nas_port_id->parent = this;
    children["prepend-nas-port-id"] = prepend_nas_port_id;

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
	|| (prepend_nas_port_id !=  nullptr && prepend_nas_port_id->has_operation());
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::RadiusAttribute::AcctSessionId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["prepend-nas-port-id"] = prepend_nas_port_id;
        }
        else
        {
            prepend_nas_port_id = std::make_shared<Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId>();
            prepend_nas_port_id->parent = this;
            children["prepend-nas-port-id"] = prepend_nas_port_id;
        }
        return children.at("prepend-nas-port-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::RadiusAttribute::AcctSessionId::get_children()
{
    if(children.find("prepend-nas-port-id") == children.end())
    {
        if(prepend_nas_port_id != nullptr)
        {
            children["prepend-nas-port-id"] = prepend_nas_port_id;
        }
    }

    return children;
}

void Aaa::Radius::RadiusAttribute::AcctSessionId::set_value(const std::string & value_path, std::string value)
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config.is_set || is_set(config.operation)) leaf_name_data.push_back(config.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId::get_children()
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Radius::Attributes::Attribute>();
        c->parent = this;
        attribute.push_back(std::move(c));
        children[segment_path] = attribute.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::Attributes::get_children()
{
    for (auto const & c : attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Radius::Attributes::set_value(const std::string & value_path, std::string value)
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
    path_buffer << "attribute" <<"[attribute-list-name='" <<attribute_list_name <<"']";

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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_list_name.is_set || is_set(attribute_list_name.operation)) leaf_name_data.push_back(attribute_list_name.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::Attributes::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::Attributes::Attribute::get_children()
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
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.operation)) leaf_name_data.push_back(extended.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::SourcePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::SourcePort::get_children()
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

Aaa::AaaSubscriber::AaaSubscriber()
    :
    accountings(std::make_shared<Aaa::AaaSubscriber::Accountings>())
	,authentications(std::make_shared<Aaa::AaaSubscriber::Authentications>())
	,authorizations(std::make_shared<Aaa::AaaSubscriber::Authorizations>())
	,policy_if_authors(std::make_shared<Aaa::AaaSubscriber::PolicyIfAuthors>())
	,prepaid_authors(std::make_shared<Aaa::AaaSubscriber::PrepaidAuthors>())
	,service_accounting(std::make_shared<Aaa::AaaSubscriber::ServiceAccounting>())
{
    accountings->parent = this;
    children["accountings"] = accountings;

    authentications->parent = this;
    children["authentications"] = authentications;

    authorizations->parent = this;
    children["authorizations"] = authorizations;

    policy_if_authors->parent = this;
    children["policy-if-authors"] = policy_if_authors;

    prepaid_authors->parent = this;
    children["prepaid-authors"] = prepaid_authors;

    service_accounting->parent = this;
    children["service-accounting"] = service_accounting;

    yang_name = "aaa-subscriber"; yang_parent_name = "aaa";
}

Aaa::AaaSubscriber::~AaaSubscriber()
{
}

bool Aaa::AaaSubscriber::has_data() const
{
    return (accountings !=  nullptr && accountings->has_data())
	|| (authentications !=  nullptr && authentications->has_data())
	|| (authorizations !=  nullptr && authorizations->has_data())
	|| (policy_if_authors !=  nullptr && policy_if_authors->has_data())
	|| (prepaid_authors !=  nullptr && prepaid_authors->has_data())
	|| (service_accounting !=  nullptr && service_accounting->has_data());
}

bool Aaa::AaaSubscriber::has_operation() const
{
    return is_set(operation)
	|| (accountings !=  nullptr && accountings->has_operation())
	|| (authentications !=  nullptr && authentications->has_operation())
	|| (authorizations !=  nullptr && authorizations->has_operation())
	|| (policy_if_authors !=  nullptr && policy_if_authors->has_operation())
	|| (prepaid_authors !=  nullptr && prepaid_authors->has_operation())
	|| (service_accounting !=  nullptr && service_accounting->has_operation());
}

std::string Aaa::AaaSubscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber";

    return path_buffer.str();

}

EntityPath Aaa::AaaSubscriber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::AaaSubscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accountings")
    {
        if(accountings != nullptr)
        {
            children["accountings"] = accountings;
        }
        else
        {
            accountings = std::make_shared<Aaa::AaaSubscriber::Accountings>();
            accountings->parent = this;
            children["accountings"] = accountings;
        }
        return children.at("accountings");
    }

    if(child_yang_name == "authentications")
    {
        if(authentications != nullptr)
        {
            children["authentications"] = authentications;
        }
        else
        {
            authentications = std::make_shared<Aaa::AaaSubscriber::Authentications>();
            authentications->parent = this;
            children["authentications"] = authentications;
        }
        return children.at("authentications");
    }

    if(child_yang_name == "authorizations")
    {
        if(authorizations != nullptr)
        {
            children["authorizations"] = authorizations;
        }
        else
        {
            authorizations = std::make_shared<Aaa::AaaSubscriber::Authorizations>();
            authorizations->parent = this;
            children["authorizations"] = authorizations;
        }
        return children.at("authorizations");
    }

    if(child_yang_name == "policy-if-authors")
    {
        if(policy_if_authors != nullptr)
        {
            children["policy-if-authors"] = policy_if_authors;
        }
        else
        {
            policy_if_authors = std::make_shared<Aaa::AaaSubscriber::PolicyIfAuthors>();
            policy_if_authors->parent = this;
            children["policy-if-authors"] = policy_if_authors;
        }
        return children.at("policy-if-authors");
    }

    if(child_yang_name == "prepaid-authors")
    {
        if(prepaid_authors != nullptr)
        {
            children["prepaid-authors"] = prepaid_authors;
        }
        else
        {
            prepaid_authors = std::make_shared<Aaa::AaaSubscriber::PrepaidAuthors>();
            prepaid_authors->parent = this;
            children["prepaid-authors"] = prepaid_authors;
        }
        return children.at("prepaid-authors");
    }

    if(child_yang_name == "service-accounting")
    {
        if(service_accounting != nullptr)
        {
            children["service-accounting"] = service_accounting;
        }
        else
        {
            service_accounting = std::make_shared<Aaa::AaaSubscriber::ServiceAccounting>();
            service_accounting->parent = this;
            children["service-accounting"] = service_accounting;
        }
        return children.at("service-accounting");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::AaaSubscriber::get_children()
{
    if(children.find("accountings") == children.end())
    {
        if(accountings != nullptr)
        {
            children["accountings"] = accountings;
        }
    }

    if(children.find("authentications") == children.end())
    {
        if(authentications != nullptr)
        {
            children["authentications"] = authentications;
        }
    }

    if(children.find("authorizations") == children.end())
    {
        if(authorizations != nullptr)
        {
            children["authorizations"] = authorizations;
        }
    }

    if(children.find("policy-if-authors") == children.end())
    {
        if(policy_if_authors != nullptr)
        {
            children["policy-if-authors"] = policy_if_authors;
        }
    }

    if(children.find("prepaid-authors") == children.end())
    {
        if(prepaid_authors != nullptr)
        {
            children["prepaid-authors"] = prepaid_authors;
        }
    }

    if(children.find("service-accounting") == children.end())
    {
        if(service_accounting != nullptr)
        {
            children["service-accounting"] = service_accounting;
        }
    }

    return children;
}

void Aaa::AaaSubscriber::set_value(const std::string & value_path, std::string value)
{
}

Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthors()
{
    yang_name = "policy-if-authors"; yang_parent_name = "aaa-subscriber";
}

Aaa::AaaSubscriber::PolicyIfAuthors::~PolicyIfAuthors()
{
}

bool Aaa::AaaSubscriber::PolicyIfAuthors::has_data() const
{
    for (std::size_t index=0; index<policy_if_author.size(); index++)
    {
        if(policy_if_author[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::AaaSubscriber::PolicyIfAuthors::has_operation() const
{
    for (std::size_t index=0; index<policy_if_author.size(); index++)
    {
        if(policy_if_author[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::AaaSubscriber::PolicyIfAuthors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-if-authors";

    return path_buffer.str();

}

EntityPath Aaa::AaaSubscriber::PolicyIfAuthors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::AaaSubscriber::PolicyIfAuthors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-if-author")
    {
        for(auto const & c : policy_if_author)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor>();
        c->parent = this;
        policy_if_author.push_back(std::move(c));
        children[segment_path] = policy_if_author.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::AaaSubscriber::PolicyIfAuthors::get_children()
{
    for (auto const & c : policy_if_author)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::AaaSubscriber::PolicyIfAuthors::set_value(const std::string & value_path, std::string value)
{
}

Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor::PolicyIfAuthor()
    :
    listname{YType::str, "listname"},
    type{YType::str, "type"},
    method{YType::enumeration, "method"},
    server_group_name{YType::str, "server-group-name"}
{
    yang_name = "policy-if-author"; yang_parent_name = "policy-if-authors";
}

Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor::~PolicyIfAuthor()
{
}

bool Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor::has_data() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return listname.is_set
	|| type.is_set;
}

bool Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor::has_operation() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(listname.operation)
	|| is_set(type.operation)
	|| is_set(method.operation)
	|| is_set(server_group_name.operation);
}

std::string Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-if-author" <<"[listname='" <<listname <<"']" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

EntityPath Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber/policy-if-authors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
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

std::shared_ptr<Entity> Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor::get_children()
{
    return children;
}

void Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor::set_value(const std::string & value_path, std::string value)
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

Aaa::AaaSubscriber::Accountings::Accountings()
{
    yang_name = "accountings"; yang_parent_name = "aaa-subscriber";
}

Aaa::AaaSubscriber::Accountings::~Accountings()
{
}

bool Aaa::AaaSubscriber::Accountings::has_data() const
{
    for (std::size_t index=0; index<accounting.size(); index++)
    {
        if(accounting[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::AaaSubscriber::Accountings::has_operation() const
{
    for (std::size_t index=0; index<accounting.size(); index++)
    {
        if(accounting[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::AaaSubscriber::Accountings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accountings";

    return path_buffer.str();

}

EntityPath Aaa::AaaSubscriber::Accountings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::AaaSubscriber::Accountings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::AaaSubscriber::Accountings::Accounting>();
        c->parent = this;
        accounting.push_back(std::move(c));
        children[segment_path] = accounting.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::AaaSubscriber::Accountings::get_children()
{
    for (auto const & c : accounting)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::AaaSubscriber::Accountings::set_value(const std::string & value_path, std::string value)
{
}

Aaa::AaaSubscriber::Accountings::Accounting::Accounting()
    :
    listname{YType::str, "listname"},
    type{YType::str, "type"},
    broadcast{YType::enumeration, "broadcast"},
    method{YType::enumeration, "method"},
    server_group_name{YType::str, "server-group-name"}
{
    yang_name = "accounting"; yang_parent_name = "accountings";
}

Aaa::AaaSubscriber::Accountings::Accounting::~Accounting()
{
}

bool Aaa::AaaSubscriber::Accountings::Accounting::has_data() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return listname.is_set
	|| type.is_set
	|| broadcast.is_set;
}

bool Aaa::AaaSubscriber::Accountings::Accounting::has_operation() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(listname.operation)
	|| is_set(type.operation)
	|| is_set(broadcast.operation)
	|| is_set(method.operation)
	|| is_set(server_group_name.operation);
}

std::string Aaa::AaaSubscriber::Accountings::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting" <<"[listname='" <<listname <<"']" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

EntityPath Aaa::AaaSubscriber::Accountings::Accounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber/accountings/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (listname.is_set || is_set(listname.operation)) leaf_name_data.push_back(listname.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());

    auto method_name_datas = method.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), method_name_datas.begin(), method_name_datas.end());
    auto server_group_name_name_datas = server_group_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), server_group_name_name_datas.begin(), server_group_name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::AaaSubscriber::Accountings::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::AaaSubscriber::Accountings::Accounting::get_children()
{
    return children;
}

void Aaa::AaaSubscriber::Accountings::Accounting::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "server-group-name")
    {
        server_group_name.append(value);
    }
}

Aaa::AaaSubscriber::ServiceAccounting::ServiceAccounting()
    :
    type{YType::enumeration, "type"}
{
    yang_name = "service-accounting"; yang_parent_name = "aaa-subscriber";
}

Aaa::AaaSubscriber::ServiceAccounting::~ServiceAccounting()
{
}

bool Aaa::AaaSubscriber::ServiceAccounting::has_data() const
{
    return type.is_set;
}

bool Aaa::AaaSubscriber::ServiceAccounting::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation);
}

std::string Aaa::AaaSubscriber::ServiceAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-accounting";

    return path_buffer.str();

}

EntityPath Aaa::AaaSubscriber::ServiceAccounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber/" << get_segment_path();
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

std::shared_ptr<Entity> Aaa::AaaSubscriber::ServiceAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::AaaSubscriber::ServiceAccounting::get_children()
{
    return children;
}

void Aaa::AaaSubscriber::ServiceAccounting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthors()
{
    yang_name = "prepaid-authors"; yang_parent_name = "aaa-subscriber";
}

Aaa::AaaSubscriber::PrepaidAuthors::~PrepaidAuthors()
{
}

bool Aaa::AaaSubscriber::PrepaidAuthors::has_data() const
{
    for (std::size_t index=0; index<prepaid_author.size(); index++)
    {
        if(prepaid_author[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::AaaSubscriber::PrepaidAuthors::has_operation() const
{
    for (std::size_t index=0; index<prepaid_author.size(); index++)
    {
        if(prepaid_author[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::AaaSubscriber::PrepaidAuthors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepaid-authors";

    return path_buffer.str();

}

EntityPath Aaa::AaaSubscriber::PrepaidAuthors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::AaaSubscriber::PrepaidAuthors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prepaid-author")
    {
        for(auto const & c : prepaid_author)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor>();
        c->parent = this;
        prepaid_author.push_back(std::move(c));
        children[segment_path] = prepaid_author.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::AaaSubscriber::PrepaidAuthors::get_children()
{
    for (auto const & c : prepaid_author)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::AaaSubscriber::PrepaidAuthors::set_value(const std::string & value_path, std::string value)
{
}

Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor::PrepaidAuthor()
    :
    listname{YType::str, "listname"},
    type{YType::str, "type"},
    method{YType::enumeration, "method"},
    server_group_name{YType::str, "server-group-name"}
{
    yang_name = "prepaid-author"; yang_parent_name = "prepaid-authors";
}

Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor::~PrepaidAuthor()
{
}

bool Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor::has_data() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return listname.is_set
	|| type.is_set;
}

bool Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor::has_operation() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(listname.operation)
	|| is_set(type.operation)
	|| is_set(method.operation)
	|| is_set(server_group_name.operation);
}

std::string Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepaid-author" <<"[listname='" <<listname <<"']" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

EntityPath Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber/prepaid-authors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
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

std::shared_ptr<Entity> Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor::get_children()
{
    return children;
}

void Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor::set_value(const std::string & value_path, std::string value)
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

Aaa::AaaSubscriber::Authorizations::Authorizations()
{
    yang_name = "authorizations"; yang_parent_name = "aaa-subscriber";
}

Aaa::AaaSubscriber::Authorizations::~Authorizations()
{
}

bool Aaa::AaaSubscriber::Authorizations::has_data() const
{
    for (std::size_t index=0; index<authorization.size(); index++)
    {
        if(authorization[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::AaaSubscriber::Authorizations::has_operation() const
{
    for (std::size_t index=0; index<authorization.size(); index++)
    {
        if(authorization[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::AaaSubscriber::Authorizations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorizations";

    return path_buffer.str();

}

EntityPath Aaa::AaaSubscriber::Authorizations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::AaaSubscriber::Authorizations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::AaaSubscriber::Authorizations::Authorization>();
        c->parent = this;
        authorization.push_back(std::move(c));
        children[segment_path] = authorization.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::AaaSubscriber::Authorizations::get_children()
{
    for (auto const & c : authorization)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::AaaSubscriber::Authorizations::set_value(const std::string & value_path, std::string value)
{
}

Aaa::AaaSubscriber::Authorizations::Authorization::Authorization()
    :
    listname{YType::str, "listname"},
    type{YType::str, "type"},
    method{YType::enumeration, "method"},
    server_group_name{YType::str, "server-group-name"}
{
    yang_name = "authorization"; yang_parent_name = "authorizations";
}

Aaa::AaaSubscriber::Authorizations::Authorization::~Authorization()
{
}

bool Aaa::AaaSubscriber::Authorizations::Authorization::has_data() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return listname.is_set
	|| type.is_set;
}

bool Aaa::AaaSubscriber::Authorizations::Authorization::has_operation() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(listname.operation)
	|| is_set(type.operation)
	|| is_set(method.operation)
	|| is_set(server_group_name.operation);
}

std::string Aaa::AaaSubscriber::Authorizations::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization" <<"[listname='" <<listname <<"']" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

EntityPath Aaa::AaaSubscriber::Authorizations::Authorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber/authorizations/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
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

std::shared_ptr<Entity> Aaa::AaaSubscriber::Authorizations::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::AaaSubscriber::Authorizations::Authorization::get_children()
{
    return children;
}

void Aaa::AaaSubscriber::Authorizations::Authorization::set_value(const std::string & value_path, std::string value)
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

Aaa::AaaSubscriber::Authentications::Authentications()
{
    yang_name = "authentications"; yang_parent_name = "aaa-subscriber";
}

Aaa::AaaSubscriber::Authentications::~Authentications()
{
}

bool Aaa::AaaSubscriber::Authentications::has_data() const
{
    for (std::size_t index=0; index<authentication.size(); index++)
    {
        if(authentication[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::AaaSubscriber::Authentications::has_operation() const
{
    for (std::size_t index=0; index<authentication.size(); index++)
    {
        if(authentication[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::AaaSubscriber::Authentications::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentications";

    return path_buffer.str();

}

EntityPath Aaa::AaaSubscriber::Authentications::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::AaaSubscriber::Authentications::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::AaaSubscriber::Authentications::Authentication>();
        c->parent = this;
        authentication.push_back(std::move(c));
        children[segment_path] = authentication.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::AaaSubscriber::Authentications::get_children()
{
    for (auto const & c : authentication)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::AaaSubscriber::Authentications::set_value(const std::string & value_path, std::string value)
{
}

Aaa::AaaSubscriber::Authentications::Authentication::Authentication()
    :
    listname{YType::str, "listname"},
    type{YType::str, "type"},
    method{YType::enumeration, "method"},
    server_group_name{YType::str, "server-group-name"}
{
    yang_name = "authentication"; yang_parent_name = "authentications";
}

Aaa::AaaSubscriber::Authentications::Authentication::~Authentication()
{
}

bool Aaa::AaaSubscriber::Authentications::Authentication::has_data() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return listname.is_set
	|| type.is_set;
}

bool Aaa::AaaSubscriber::Authentications::Authentication::has_operation() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(listname.operation)
	|| is_set(type.operation)
	|| is_set(method.operation)
	|| is_set(server_group_name.operation);
}

std::string Aaa::AaaSubscriber::Authentications::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication" <<"[listname='" <<listname <<"']" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

EntityPath Aaa::AaaSubscriber::Authentications::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-subscriber/authentications/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
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

std::shared_ptr<Entity> Aaa::AaaSubscriber::Authentications::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::AaaSubscriber::Authentications::Authentication::get_children()
{
    return children;
}

void Aaa::AaaSubscriber::Authentications::Authentication::set_value(const std::string & value_path, std::string value)
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

Aaa::AaaMobile::AaaMobile()
    :
    mobiles(std::make_shared<Aaa::AaaMobile::Mobiles>())
{
    mobiles->parent = this;
    children["mobiles"] = mobiles;

    yang_name = "aaa-mobile"; yang_parent_name = "aaa";
}

Aaa::AaaMobile::~AaaMobile()
{
}

bool Aaa::AaaMobile::has_data() const
{
    return (mobiles !=  nullptr && mobiles->has_data());
}

bool Aaa::AaaMobile::has_operation() const
{
    return is_set(operation)
	|| (mobiles !=  nullptr && mobiles->has_operation());
}

std::string Aaa::AaaMobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-aaacore-cfg:aaa-mobile";

    return path_buffer.str();

}

EntityPath Aaa::AaaMobile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::AaaMobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mobiles")
    {
        if(mobiles != nullptr)
        {
            children["mobiles"] = mobiles;
        }
        else
        {
            mobiles = std::make_shared<Aaa::AaaMobile::Mobiles>();
            mobiles->parent = this;
            children["mobiles"] = mobiles;
        }
        return children.at("mobiles");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::AaaMobile::get_children()
{
    if(children.find("mobiles") == children.end())
    {
        if(mobiles != nullptr)
        {
            children["mobiles"] = mobiles;
        }
    }

    return children;
}

void Aaa::AaaMobile::set_value(const std::string & value_path, std::string value)
{
}

Aaa::AaaMobile::Mobiles::Mobiles()
{
    yang_name = "mobiles"; yang_parent_name = "aaa-mobile";
}

Aaa::AaaMobile::Mobiles::~Mobiles()
{
}

bool Aaa::AaaMobile::Mobiles::has_data() const
{
    for (std::size_t index=0; index<mobile.size(); index++)
    {
        if(mobile[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::AaaMobile::Mobiles::has_operation() const
{
    for (std::size_t index=0; index<mobile.size(); index++)
    {
        if(mobile[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::AaaMobile::Mobiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobiles";

    return path_buffer.str();

}

EntityPath Aaa::AaaMobile::Mobiles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-mobile/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::AaaMobile::Mobiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mobile")
    {
        for(auto const & c : mobile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::AaaMobile::Mobiles::Mobile>();
        c->parent = this;
        mobile.push_back(std::move(c));
        children[segment_path] = mobile.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::AaaMobile::Mobiles::get_children()
{
    for (auto const & c : mobile)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::AaaMobile::Mobiles::set_value(const std::string & value_path, std::string value)
{
}

Aaa::AaaMobile::Mobiles::Mobile::Mobile()
    :
    listname{YType::str, "listname"},
    broadcast{YType::enumeration, "broadcast"},
    method{YType::enumeration, "method"},
    server_group_name{YType::str, "server-group-name"}
{
    yang_name = "mobile"; yang_parent_name = "mobiles";
}

Aaa::AaaMobile::Mobiles::Mobile::~Mobile()
{
}

bool Aaa::AaaMobile::Mobiles::Mobile::has_data() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return listname.is_set
	|| broadcast.is_set;
}

bool Aaa::AaaMobile::Mobiles::Mobile::has_operation() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(listname.operation)
	|| is_set(broadcast.operation)
	|| is_set(method.operation)
	|| is_set(server_group_name.operation);
}

std::string Aaa::AaaMobile::Mobiles::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile" <<"[listname='" <<listname <<"']";

    return path_buffer.str();

}

EntityPath Aaa::AaaMobile::Mobiles::Mobile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-mobile/mobiles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (listname.is_set || is_set(listname.operation)) leaf_name_data.push_back(listname.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());

    auto method_name_datas = method.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), method_name_datas.begin(), method_name_datas.end());
    auto server_group_name_name_datas = server_group_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), server_group_name_name_datas.begin(), server_group_name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::AaaMobile::Mobiles::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::AaaMobile::Mobiles::Mobile::get_children()
{
    return children;
}

void Aaa::AaaMobile::Mobiles::Mobile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "listname")
    {
        listname = value;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
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

Aaa::AaaDot1X::AaaDot1X()
    :
    authentications(std::make_shared<Aaa::AaaDot1X::Authentications>())
{
    authentications->parent = this;
    children["authentications"] = authentications;

    yang_name = "aaa-dot1x"; yang_parent_name = "aaa";
}

Aaa::AaaDot1X::~AaaDot1X()
{
}

bool Aaa::AaaDot1X::has_data() const
{
    return (authentications !=  nullptr && authentications->has_data());
}

bool Aaa::AaaDot1X::has_operation() const
{
    return is_set(operation)
	|| (authentications !=  nullptr && authentications->has_operation());
}

std::string Aaa::AaaDot1X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-aaacore-cfg:aaa-dot1x";

    return path_buffer.str();

}

EntityPath Aaa::AaaDot1X::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::AaaDot1X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentications")
    {
        if(authentications != nullptr)
        {
            children["authentications"] = authentications;
        }
        else
        {
            authentications = std::make_shared<Aaa::AaaDot1X::Authentications>();
            authentications->parent = this;
            children["authentications"] = authentications;
        }
        return children.at("authentications");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::AaaDot1X::get_children()
{
    if(children.find("authentications") == children.end())
    {
        if(authentications != nullptr)
        {
            children["authentications"] = authentications;
        }
    }

    return children;
}

void Aaa::AaaDot1X::set_value(const std::string & value_path, std::string value)
{
}

Aaa::AaaDot1X::Authentications::Authentications()
{
    yang_name = "authentications"; yang_parent_name = "aaa-dot1x";
}

Aaa::AaaDot1X::Authentications::~Authentications()
{
}

bool Aaa::AaaDot1X::Authentications::has_data() const
{
    for (std::size_t index=0; index<authentication.size(); index++)
    {
        if(authentication[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::AaaDot1X::Authentications::has_operation() const
{
    for (std::size_t index=0; index<authentication.size(); index++)
    {
        if(authentication[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::AaaDot1X::Authentications::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentications";

    return path_buffer.str();

}

EntityPath Aaa::AaaDot1X::Authentications::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-dot1x/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::AaaDot1X::Authentications::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::AaaDot1X::Authentications::Authentication>();
        c->parent = this;
        authentication.push_back(std::move(c));
        children[segment_path] = authentication.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::AaaDot1X::Authentications::get_children()
{
    for (auto const & c : authentication)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::AaaDot1X::Authentications::set_value(const std::string & value_path, std::string value)
{
}

Aaa::AaaDot1X::Authentications::Authentication::Authentication()
    :
    listname{YType::str, "listname"},
    type{YType::str, "type"},
    method{YType::enumeration, "method"},
    server_group_name{YType::str, "server-group-name"}
{
    yang_name = "authentication"; yang_parent_name = "authentications";
}

Aaa::AaaDot1X::Authentications::Authentication::~Authentication()
{
}

bool Aaa::AaaDot1X::Authentications::Authentication::has_data() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return listname.is_set
	|| type.is_set;
}

bool Aaa::AaaDot1X::Authentications::Authentication::has_operation() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : server_group_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(listname.operation)
	|| is_set(type.operation)
	|| is_set(method.operation)
	|| is_set(server_group_name.operation);
}

std::string Aaa::AaaDot1X::Authentications::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication" <<"[listname='" <<listname <<"']" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

EntityPath Aaa::AaaDot1X::Authentications::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:aaa-dot1x/authentications/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
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

std::shared_ptr<Entity> Aaa::AaaDot1X::Authentications::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::AaaDot1X::Authentications::Authentication::get_children()
{
    return children;
}

void Aaa::AaaDot1X::Authentications::Authentication::set_value(const std::string & value_path, std::string value)
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

Aaa::RadiusAttribute::RadiusAttribute()
    :
    called_station(std::make_shared<Aaa::RadiusAttribute::CalledStation>())
	,calling_station(std::make_shared<Aaa::RadiusAttribute::CallingStation>())
	,format_others(std::make_shared<Aaa::RadiusAttribute::FormatOthers>())
	,nas_port(std::make_shared<Aaa::RadiusAttribute::NasPort>())
	,nas_port_id(std::make_shared<Aaa::RadiusAttribute::NasPortId>())
{
    called_station->parent = this;
    children["called-station"] = called_station;

    calling_station->parent = this;
    children["calling-station"] = calling_station;

    format_others->parent = this;
    children["format-others"] = format_others;

    nas_port->parent = this;
    children["nas-port"] = nas_port;

    nas_port_id->parent = this;
    children["nas-port-id"] = nas_port_id;

    yang_name = "radius-attribute"; yang_parent_name = "aaa";
}

Aaa::RadiusAttribute::~RadiusAttribute()
{
}

bool Aaa::RadiusAttribute::has_data() const
{
    return (called_station !=  nullptr && called_station->has_data())
	|| (calling_station !=  nullptr && calling_station->has_data())
	|| (format_others !=  nullptr && format_others->has_data())
	|| (nas_port !=  nullptr && nas_port->has_data())
	|| (nas_port_id !=  nullptr && nas_port_id->has_data());
}

bool Aaa::RadiusAttribute::has_operation() const
{
    return is_set(operation)
	|| (called_station !=  nullptr && called_station->has_operation())
	|| (calling_station !=  nullptr && calling_station->has_operation())
	|| (format_others !=  nullptr && format_others->has_operation())
	|| (nas_port !=  nullptr && nas_port->has_operation())
	|| (nas_port_id !=  nullptr && nas_port_id->has_operation());
}

std::string Aaa::RadiusAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute";

    return path_buffer.str();

}

EntityPath Aaa::RadiusAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::RadiusAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "called-station")
    {
        if(called_station != nullptr)
        {
            children["called-station"] = called_station;
        }
        else
        {
            called_station = std::make_shared<Aaa::RadiusAttribute::CalledStation>();
            called_station->parent = this;
            children["called-station"] = called_station;
        }
        return children.at("called-station");
    }

    if(child_yang_name == "calling-station")
    {
        if(calling_station != nullptr)
        {
            children["calling-station"] = calling_station;
        }
        else
        {
            calling_station = std::make_shared<Aaa::RadiusAttribute::CallingStation>();
            calling_station->parent = this;
            children["calling-station"] = calling_station;
        }
        return children.at("calling-station");
    }

    if(child_yang_name == "format-others")
    {
        if(format_others != nullptr)
        {
            children["format-others"] = format_others;
        }
        else
        {
            format_others = std::make_shared<Aaa::RadiusAttribute::FormatOthers>();
            format_others->parent = this;
            children["format-others"] = format_others;
        }
        return children.at("format-others");
    }

    if(child_yang_name == "nas-port")
    {
        if(nas_port != nullptr)
        {
            children["nas-port"] = nas_port;
        }
        else
        {
            nas_port = std::make_shared<Aaa::RadiusAttribute::NasPort>();
            nas_port->parent = this;
            children["nas-port"] = nas_port;
        }
        return children.at("nas-port");
    }

    if(child_yang_name == "nas-port-id")
    {
        if(nas_port_id != nullptr)
        {
            children["nas-port-id"] = nas_port_id;
        }
        else
        {
            nas_port_id = std::make_shared<Aaa::RadiusAttribute::NasPortId>();
            nas_port_id->parent = this;
            children["nas-port-id"] = nas_port_id;
        }
        return children.at("nas-port-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::RadiusAttribute::get_children()
{
    if(children.find("called-station") == children.end())
    {
        if(called_station != nullptr)
        {
            children["called-station"] = called_station;
        }
    }

    if(children.find("calling-station") == children.end())
    {
        if(calling_station != nullptr)
        {
            children["calling-station"] = calling_station;
        }
    }

    if(children.find("format-others") == children.end())
    {
        if(format_others != nullptr)
        {
            children["format-others"] = format_others;
        }
    }

    if(children.find("nas-port") == children.end())
    {
        if(nas_port != nullptr)
        {
            children["nas-port"] = nas_port;
        }
    }

    if(children.find("nas-port-id") == children.end())
    {
        if(nas_port_id != nullptr)
        {
            children["nas-port-id"] = nas_port_id;
        }
    }

    return children;
}

void Aaa::RadiusAttribute::set_value(const std::string & value_path, std::string value)
{
}

Aaa::RadiusAttribute::NasPortId::NasPortId()
    :
    formats(std::make_shared<Aaa::RadiusAttribute::NasPortId::Formats>())
{
    formats->parent = this;
    children["formats"] = formats;

    yang_name = "nas-port-id"; yang_parent_name = "radius-attribute";
}

Aaa::RadiusAttribute::NasPortId::~NasPortId()
{
}

bool Aaa::RadiusAttribute::NasPortId::has_data() const
{
    return (formats !=  nullptr && formats->has_data());
}

bool Aaa::RadiusAttribute::NasPortId::has_operation() const
{
    return is_set(operation)
	|| (formats !=  nullptr && formats->has_operation());
}

std::string Aaa::RadiusAttribute::NasPortId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nas-port-id";

    return path_buffer.str();

}

EntityPath Aaa::RadiusAttribute::NasPortId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::RadiusAttribute::NasPortId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "formats")
    {
        if(formats != nullptr)
        {
            children["formats"] = formats;
        }
        else
        {
            formats = std::make_shared<Aaa::RadiusAttribute::NasPortId::Formats>();
            formats->parent = this;
            children["formats"] = formats;
        }
        return children.at("formats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::RadiusAttribute::NasPortId::get_children()
{
    if(children.find("formats") == children.end())
    {
        if(formats != nullptr)
        {
            children["formats"] = formats;
        }
    }

    return children;
}

void Aaa::RadiusAttribute::NasPortId::set_value(const std::string & value_path, std::string value)
{
}

Aaa::RadiusAttribute::NasPortId::Formats::Formats()
{
    yang_name = "formats"; yang_parent_name = "nas-port-id";
}

Aaa::RadiusAttribute::NasPortId::Formats::~Formats()
{
}

bool Aaa::RadiusAttribute::NasPortId::Formats::has_data() const
{
    for (std::size_t index=0; index<format.size(); index++)
    {
        if(format[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::RadiusAttribute::NasPortId::Formats::has_operation() const
{
    for (std::size_t index=0; index<format.size(); index++)
    {
        if(format[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::RadiusAttribute::NasPortId::Formats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "formats";

    return path_buffer.str();

}

EntityPath Aaa::RadiusAttribute::NasPortId::Formats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/nas-port-id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::RadiusAttribute::NasPortId::Formats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "format")
    {
        for(auto const & c : format)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::RadiusAttribute::NasPortId::Formats::Format>();
        c->parent = this;
        format.push_back(std::move(c));
        children[segment_path] = format.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::RadiusAttribute::NasPortId::Formats::get_children()
{
    for (auto const & c : format)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::RadiusAttribute::NasPortId::Formats::set_value(const std::string & value_path, std::string value)
{
}

Aaa::RadiusAttribute::NasPortId::Formats::Format::Format()
    :
    type{YType::uint32, "type"},
    format_name{YType::str, "format-name"}
{
    yang_name = "format"; yang_parent_name = "formats";
}

Aaa::RadiusAttribute::NasPortId::Formats::Format::~Format()
{
}

bool Aaa::RadiusAttribute::NasPortId::Formats::Format::has_data() const
{
    return type.is_set
	|| format_name.is_set;
}

bool Aaa::RadiusAttribute::NasPortId::Formats::Format::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(format_name.operation);
}

std::string Aaa::RadiusAttribute::NasPortId::Formats::Format::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

EntityPath Aaa::RadiusAttribute::NasPortId::Formats::Format::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/nas-port-id/formats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (format_name.is_set || is_set(format_name.operation)) leaf_name_data.push_back(format_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::RadiusAttribute::NasPortId::Formats::Format::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::RadiusAttribute::NasPortId::Formats::Format::get_children()
{
    return children;
}

void Aaa::RadiusAttribute::NasPortId::Formats::Format::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "format-name")
    {
        format_name = value;
    }
}

Aaa::RadiusAttribute::CallingStation::CallingStation()
    :
    formats(std::make_shared<Aaa::RadiusAttribute::CallingStation::Formats>())
{
    formats->parent = this;
    children["formats"] = formats;

    yang_name = "calling-station"; yang_parent_name = "radius-attribute";
}

Aaa::RadiusAttribute::CallingStation::~CallingStation()
{
}

bool Aaa::RadiusAttribute::CallingStation::has_data() const
{
    return (formats !=  nullptr && formats->has_data());
}

bool Aaa::RadiusAttribute::CallingStation::has_operation() const
{
    return is_set(operation)
	|| (formats !=  nullptr && formats->has_operation());
}

std::string Aaa::RadiusAttribute::CallingStation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "calling-station";

    return path_buffer.str();

}

EntityPath Aaa::RadiusAttribute::CallingStation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::RadiusAttribute::CallingStation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "formats")
    {
        if(formats != nullptr)
        {
            children["formats"] = formats;
        }
        else
        {
            formats = std::make_shared<Aaa::RadiusAttribute::CallingStation::Formats>();
            formats->parent = this;
            children["formats"] = formats;
        }
        return children.at("formats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::RadiusAttribute::CallingStation::get_children()
{
    if(children.find("formats") == children.end())
    {
        if(formats != nullptr)
        {
            children["formats"] = formats;
        }
    }

    return children;
}

void Aaa::RadiusAttribute::CallingStation::set_value(const std::string & value_path, std::string value)
{
}

Aaa::RadiusAttribute::CallingStation::Formats::Formats()
{
    yang_name = "formats"; yang_parent_name = "calling-station";
}

Aaa::RadiusAttribute::CallingStation::Formats::~Formats()
{
}

bool Aaa::RadiusAttribute::CallingStation::Formats::has_data() const
{
    for (std::size_t index=0; index<format.size(); index++)
    {
        if(format[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::RadiusAttribute::CallingStation::Formats::has_operation() const
{
    for (std::size_t index=0; index<format.size(); index++)
    {
        if(format[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::RadiusAttribute::CallingStation::Formats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "formats";

    return path_buffer.str();

}

EntityPath Aaa::RadiusAttribute::CallingStation::Formats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/calling-station/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::RadiusAttribute::CallingStation::Formats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "format")
    {
        for(auto const & c : format)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::RadiusAttribute::CallingStation::Formats::Format>();
        c->parent = this;
        format.push_back(std::move(c));
        children[segment_path] = format.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::RadiusAttribute::CallingStation::Formats::get_children()
{
    for (auto const & c : format)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::RadiusAttribute::CallingStation::Formats::set_value(const std::string & value_path, std::string value)
{
}

Aaa::RadiusAttribute::CallingStation::Formats::Format::Format()
    :
    type{YType::uint32, "type"},
    format_name{YType::str, "format-name"}
{
    yang_name = "format"; yang_parent_name = "formats";
}

Aaa::RadiusAttribute::CallingStation::Formats::Format::~Format()
{
}

bool Aaa::RadiusAttribute::CallingStation::Formats::Format::has_data() const
{
    return type.is_set
	|| format_name.is_set;
}

bool Aaa::RadiusAttribute::CallingStation::Formats::Format::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(format_name.operation);
}

std::string Aaa::RadiusAttribute::CallingStation::Formats::Format::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

EntityPath Aaa::RadiusAttribute::CallingStation::Formats::Format::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/calling-station/formats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (format_name.is_set || is_set(format_name.operation)) leaf_name_data.push_back(format_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::RadiusAttribute::CallingStation::Formats::Format::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::RadiusAttribute::CallingStation::Formats::Format::get_children()
{
    return children;
}

void Aaa::RadiusAttribute::CallingStation::Formats::Format::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "format-name")
    {
        format_name = value;
    }
}

Aaa::RadiusAttribute::CalledStation::CalledStation()
    :
    formats(std::make_shared<Aaa::RadiusAttribute::CalledStation::Formats>())
{
    formats->parent = this;
    children["formats"] = formats;

    yang_name = "called-station"; yang_parent_name = "radius-attribute";
}

Aaa::RadiusAttribute::CalledStation::~CalledStation()
{
}

bool Aaa::RadiusAttribute::CalledStation::has_data() const
{
    return (formats !=  nullptr && formats->has_data());
}

bool Aaa::RadiusAttribute::CalledStation::has_operation() const
{
    return is_set(operation)
	|| (formats !=  nullptr && formats->has_operation());
}

std::string Aaa::RadiusAttribute::CalledStation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "called-station";

    return path_buffer.str();

}

EntityPath Aaa::RadiusAttribute::CalledStation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::RadiusAttribute::CalledStation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "formats")
    {
        if(formats != nullptr)
        {
            children["formats"] = formats;
        }
        else
        {
            formats = std::make_shared<Aaa::RadiusAttribute::CalledStation::Formats>();
            formats->parent = this;
            children["formats"] = formats;
        }
        return children.at("formats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::RadiusAttribute::CalledStation::get_children()
{
    if(children.find("formats") == children.end())
    {
        if(formats != nullptr)
        {
            children["formats"] = formats;
        }
    }

    return children;
}

void Aaa::RadiusAttribute::CalledStation::set_value(const std::string & value_path, std::string value)
{
}

Aaa::RadiusAttribute::CalledStation::Formats::Formats()
{
    yang_name = "formats"; yang_parent_name = "called-station";
}

Aaa::RadiusAttribute::CalledStation::Formats::~Formats()
{
}

bool Aaa::RadiusAttribute::CalledStation::Formats::has_data() const
{
    for (std::size_t index=0; index<format.size(); index++)
    {
        if(format[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::RadiusAttribute::CalledStation::Formats::has_operation() const
{
    for (std::size_t index=0; index<format.size(); index++)
    {
        if(format[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::RadiusAttribute::CalledStation::Formats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "formats";

    return path_buffer.str();

}

EntityPath Aaa::RadiusAttribute::CalledStation::Formats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/called-station/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::RadiusAttribute::CalledStation::Formats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "format")
    {
        for(auto const & c : format)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::RadiusAttribute::CalledStation::Formats::Format>();
        c->parent = this;
        format.push_back(std::move(c));
        children[segment_path] = format.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::RadiusAttribute::CalledStation::Formats::get_children()
{
    for (auto const & c : format)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::RadiusAttribute::CalledStation::Formats::set_value(const std::string & value_path, std::string value)
{
}

Aaa::RadiusAttribute::CalledStation::Formats::Format::Format()
    :
    type{YType::uint32, "type"},
    format_name{YType::str, "format-name"}
{
    yang_name = "format"; yang_parent_name = "formats";
}

Aaa::RadiusAttribute::CalledStation::Formats::Format::~Format()
{
}

bool Aaa::RadiusAttribute::CalledStation::Formats::Format::has_data() const
{
    return type.is_set
	|| format_name.is_set;
}

bool Aaa::RadiusAttribute::CalledStation::Formats::Format::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(format_name.operation);
}

std::string Aaa::RadiusAttribute::CalledStation::Formats::Format::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

EntityPath Aaa::RadiusAttribute::CalledStation::Formats::Format::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/called-station/formats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (format_name.is_set || is_set(format_name.operation)) leaf_name_data.push_back(format_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::RadiusAttribute::CalledStation::Formats::Format::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::RadiusAttribute::CalledStation::Formats::Format::get_children()
{
    return children;
}

void Aaa::RadiusAttribute::CalledStation::Formats::Format::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "format-name")
    {
        format_name = value;
    }
}

Aaa::RadiusAttribute::NasPort::NasPort()
    :
    format_extendeds(std::make_shared<Aaa::RadiusAttribute::NasPort::FormatExtendeds>())
{
    format_extendeds->parent = this;
    children["format-extendeds"] = format_extendeds;

    yang_name = "nas-port"; yang_parent_name = "radius-attribute";
}

Aaa::RadiusAttribute::NasPort::~NasPort()
{
}

bool Aaa::RadiusAttribute::NasPort::has_data() const
{
    return (format_extendeds !=  nullptr && format_extendeds->has_data());
}

bool Aaa::RadiusAttribute::NasPort::has_operation() const
{
    return is_set(operation)
	|| (format_extendeds !=  nullptr && format_extendeds->has_operation());
}

std::string Aaa::RadiusAttribute::NasPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nas-port";

    return path_buffer.str();

}

EntityPath Aaa::RadiusAttribute::NasPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::RadiusAttribute::NasPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "format-extendeds")
    {
        if(format_extendeds != nullptr)
        {
            children["format-extendeds"] = format_extendeds;
        }
        else
        {
            format_extendeds = std::make_shared<Aaa::RadiusAttribute::NasPort::FormatExtendeds>();
            format_extendeds->parent = this;
            children["format-extendeds"] = format_extendeds;
        }
        return children.at("format-extendeds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::RadiusAttribute::NasPort::get_children()
{
    if(children.find("format-extendeds") == children.end())
    {
        if(format_extendeds != nullptr)
        {
            children["format-extendeds"] = format_extendeds;
        }
    }

    return children;
}

void Aaa::RadiusAttribute::NasPort::set_value(const std::string & value_path, std::string value)
{
}

Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtendeds()
{
    yang_name = "format-extendeds"; yang_parent_name = "nas-port";
}

Aaa::RadiusAttribute::NasPort::FormatExtendeds::~FormatExtendeds()
{
}

bool Aaa::RadiusAttribute::NasPort::FormatExtendeds::has_data() const
{
    for (std::size_t index=0; index<format_extended.size(); index++)
    {
        if(format_extended[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::RadiusAttribute::NasPort::FormatExtendeds::has_operation() const
{
    for (std::size_t index=0; index<format_extended.size(); index++)
    {
        if(format_extended[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::RadiusAttribute::NasPort::FormatExtendeds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format-extendeds";

    return path_buffer.str();

}

EntityPath Aaa::RadiusAttribute::NasPort::FormatExtendeds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/nas-port/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::RadiusAttribute::NasPort::FormatExtendeds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "format-extended")
    {
        for(auto const & c : format_extended)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended>();
        c->parent = this;
        format_extended.push_back(std::move(c));
        children[segment_path] = format_extended.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::RadiusAttribute::NasPort::FormatExtendeds::get_children()
{
    for (auto const & c : format_extended)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::RadiusAttribute::NasPort::FormatExtendeds::set_value(const std::string & value_path, std::string value)
{
}

Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended::FormatExtended()
    :
    type{YType::uint32, "type"},
    value_{YType::str, "value"},
    format_identifier{YType::str, "format-identifier"}
{
    yang_name = "format-extended"; yang_parent_name = "format-extendeds";
}

Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended::~FormatExtended()
{
}

bool Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended::has_data() const
{
    return type.is_set
	|| value_.is_set
	|| format_identifier.is_set;
}

bool Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(value_.operation)
	|| is_set(format_identifier.operation);
}

std::string Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format-extended" <<"[type='" <<type <<"']" <<"[value='" <<value_ <<"']";

    return path_buffer.str();

}

EntityPath Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/nas-port/format-extendeds/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (format_identifier.is_set || is_set(format_identifier.operation)) leaf_name_data.push_back(format_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended::get_children()
{
    return children;
}

void Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
    if(value_path == "format-identifier")
    {
        format_identifier = value;
    }
}

Aaa::RadiusAttribute::FormatOthers::FormatOthers()
{
    yang_name = "format-others"; yang_parent_name = "radius-attribute";
}

Aaa::RadiusAttribute::FormatOthers::~FormatOthers()
{
}

bool Aaa::RadiusAttribute::FormatOthers::has_data() const
{
    for (std::size_t index=0; index<format_other.size(); index++)
    {
        if(format_other[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::RadiusAttribute::FormatOthers::has_operation() const
{
    for (std::size_t index=0; index<format_other.size(); index++)
    {
        if(format_other[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::RadiusAttribute::FormatOthers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format-others";

    return path_buffer.str();

}

EntityPath Aaa::RadiusAttribute::FormatOthers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::RadiusAttribute::FormatOthers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "format-other")
    {
        for(auto const & c : format_other)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::RadiusAttribute::FormatOthers::FormatOther>();
        c->parent = this;
        format_other.push_back(std::move(c));
        children[segment_path] = format_other.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::RadiusAttribute::FormatOthers::get_children()
{
    for (auto const & c : format_other)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::RadiusAttribute::FormatOthers::set_value(const std::string & value_path, std::string value)
{
}

Aaa::RadiusAttribute::FormatOthers::FormatOther::FormatOther()
    :
    nas_port_type_name{YType::str, "nas-port-type-name"},
    attribute_config1{YType::str, "attribute-config1"},
    attribute_config10{YType::str, "attribute-config10"},
    attribute_config11{YType::str, "attribute-config11"},
    attribute_config12{YType::str, "attribute-config12"},
    attribute_config13{YType::str, "attribute-config13"},
    attribute_config14{YType::str, "attribute-config14"},
    attribute_config15{YType::str, "attribute-config15"},
    attribute_config16{YType::str, "attribute-config16"},
    attribute_config17{YType::str, "attribute-config17"},
    attribute_config18{YType::str, "attribute-config18"},
    attribute_config19{YType::uint32, "attribute-config19"},
    attribute_config2{YType::str, "attribute-config2"},
    attribute_config3{YType::str, "attribute-config3"},
    attribute_config4{YType::str, "attribute-config4"},
    attribute_config5{YType::str, "attribute-config5"},
    attribute_config6{YType::str, "attribute-config6"},
    attribute_config7{YType::str, "attribute-config7"},
    attribute_config8{YType::str, "attribute-config8"},
    attribute_config9{YType::str, "attribute-config9"}
{
    yang_name = "format-other"; yang_parent_name = "format-others";
}

Aaa::RadiusAttribute::FormatOthers::FormatOther::~FormatOther()
{
}

bool Aaa::RadiusAttribute::FormatOthers::FormatOther::has_data() const
{
    return nas_port_type_name.is_set
	|| attribute_config1.is_set
	|| attribute_config10.is_set
	|| attribute_config11.is_set
	|| attribute_config12.is_set
	|| attribute_config13.is_set
	|| attribute_config14.is_set
	|| attribute_config15.is_set
	|| attribute_config16.is_set
	|| attribute_config17.is_set
	|| attribute_config18.is_set
	|| attribute_config19.is_set
	|| attribute_config2.is_set
	|| attribute_config3.is_set
	|| attribute_config4.is_set
	|| attribute_config5.is_set
	|| attribute_config6.is_set
	|| attribute_config7.is_set
	|| attribute_config8.is_set
	|| attribute_config9.is_set;
}

bool Aaa::RadiusAttribute::FormatOthers::FormatOther::has_operation() const
{
    return is_set(operation)
	|| is_set(nas_port_type_name.operation)
	|| is_set(attribute_config1.operation)
	|| is_set(attribute_config10.operation)
	|| is_set(attribute_config11.operation)
	|| is_set(attribute_config12.operation)
	|| is_set(attribute_config13.operation)
	|| is_set(attribute_config14.operation)
	|| is_set(attribute_config15.operation)
	|| is_set(attribute_config16.operation)
	|| is_set(attribute_config17.operation)
	|| is_set(attribute_config18.operation)
	|| is_set(attribute_config19.operation)
	|| is_set(attribute_config2.operation)
	|| is_set(attribute_config3.operation)
	|| is_set(attribute_config4.operation)
	|| is_set(attribute_config5.operation)
	|| is_set(attribute_config6.operation)
	|| is_set(attribute_config7.operation)
	|| is_set(attribute_config8.operation)
	|| is_set(attribute_config9.operation);
}

std::string Aaa::RadiusAttribute::FormatOthers::FormatOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format-other" <<"[nas-port-type-name='" <<nas_port_type_name <<"']";

    return path_buffer.str();

}

EntityPath Aaa::RadiusAttribute::FormatOthers::FormatOther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/format-others/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nas_port_type_name.is_set || is_set(nas_port_type_name.operation)) leaf_name_data.push_back(nas_port_type_name.get_name_leafdata());
    if (attribute_config1.is_set || is_set(attribute_config1.operation)) leaf_name_data.push_back(attribute_config1.get_name_leafdata());
    if (attribute_config10.is_set || is_set(attribute_config10.operation)) leaf_name_data.push_back(attribute_config10.get_name_leafdata());
    if (attribute_config11.is_set || is_set(attribute_config11.operation)) leaf_name_data.push_back(attribute_config11.get_name_leafdata());
    if (attribute_config12.is_set || is_set(attribute_config12.operation)) leaf_name_data.push_back(attribute_config12.get_name_leafdata());
    if (attribute_config13.is_set || is_set(attribute_config13.operation)) leaf_name_data.push_back(attribute_config13.get_name_leafdata());
    if (attribute_config14.is_set || is_set(attribute_config14.operation)) leaf_name_data.push_back(attribute_config14.get_name_leafdata());
    if (attribute_config15.is_set || is_set(attribute_config15.operation)) leaf_name_data.push_back(attribute_config15.get_name_leafdata());
    if (attribute_config16.is_set || is_set(attribute_config16.operation)) leaf_name_data.push_back(attribute_config16.get_name_leafdata());
    if (attribute_config17.is_set || is_set(attribute_config17.operation)) leaf_name_data.push_back(attribute_config17.get_name_leafdata());
    if (attribute_config18.is_set || is_set(attribute_config18.operation)) leaf_name_data.push_back(attribute_config18.get_name_leafdata());
    if (attribute_config19.is_set || is_set(attribute_config19.operation)) leaf_name_data.push_back(attribute_config19.get_name_leafdata());
    if (attribute_config2.is_set || is_set(attribute_config2.operation)) leaf_name_data.push_back(attribute_config2.get_name_leafdata());
    if (attribute_config3.is_set || is_set(attribute_config3.operation)) leaf_name_data.push_back(attribute_config3.get_name_leafdata());
    if (attribute_config4.is_set || is_set(attribute_config4.operation)) leaf_name_data.push_back(attribute_config4.get_name_leafdata());
    if (attribute_config5.is_set || is_set(attribute_config5.operation)) leaf_name_data.push_back(attribute_config5.get_name_leafdata());
    if (attribute_config6.is_set || is_set(attribute_config6.operation)) leaf_name_data.push_back(attribute_config6.get_name_leafdata());
    if (attribute_config7.is_set || is_set(attribute_config7.operation)) leaf_name_data.push_back(attribute_config7.get_name_leafdata());
    if (attribute_config8.is_set || is_set(attribute_config8.operation)) leaf_name_data.push_back(attribute_config8.get_name_leafdata());
    if (attribute_config9.is_set || is_set(attribute_config9.operation)) leaf_name_data.push_back(attribute_config9.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::RadiusAttribute::FormatOthers::FormatOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::RadiusAttribute::FormatOthers::FormatOther::get_children()
{
    return children;
}

void Aaa::RadiusAttribute::FormatOthers::FormatOther::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nas-port-type-name")
    {
        nas_port_type_name = value;
    }
    if(value_path == "attribute-config1")
    {
        attribute_config1 = value;
    }
    if(value_path == "attribute-config10")
    {
        attribute_config10 = value;
    }
    if(value_path == "attribute-config11")
    {
        attribute_config11 = value;
    }
    if(value_path == "attribute-config12")
    {
        attribute_config12 = value;
    }
    if(value_path == "attribute-config13")
    {
        attribute_config13 = value;
    }
    if(value_path == "attribute-config14")
    {
        attribute_config14 = value;
    }
    if(value_path == "attribute-config15")
    {
        attribute_config15 = value;
    }
    if(value_path == "attribute-config16")
    {
        attribute_config16 = value;
    }
    if(value_path == "attribute-config17")
    {
        attribute_config17 = value;
    }
    if(value_path == "attribute-config18")
    {
        attribute_config18 = value;
    }
    if(value_path == "attribute-config19")
    {
        attribute_config19 = value;
    }
    if(value_path == "attribute-config2")
    {
        attribute_config2 = value;
    }
    if(value_path == "attribute-config3")
    {
        attribute_config3 = value;
    }
    if(value_path == "attribute-config4")
    {
        attribute_config4 = value;
    }
    if(value_path == "attribute-config5")
    {
        attribute_config5 = value;
    }
    if(value_path == "attribute-config6")
    {
        attribute_config6 = value;
    }
    if(value_path == "attribute-config7")
    {
        attribute_config7 = value;
    }
    if(value_path == "attribute-config8")
    {
        attribute_config8 = value;
    }
    if(value_path == "attribute-config9")
    {
        attribute_config9 = value;
    }
}


}
}
