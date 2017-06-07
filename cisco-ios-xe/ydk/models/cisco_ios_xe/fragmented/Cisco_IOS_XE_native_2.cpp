
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_2.hpp"
#include "Cisco_IOS_XE_native_6.hpp"
#include "Cisco_IOS_XE_native_3.hpp"
#include "Cisco_IOS_XE_native_5.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Controller::SonetAcr::Au4::CemGroupAtm::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    atm{YType::empty, "atm"}
{
    yang_name = "tug-2"; yang_parent_name = "cem-group-atm";
}

Native::Controller::SonetAcr::Au4::CemGroupAtm::Tug2::~Tug2()
{
}

bool Native::Controller::SonetAcr::Au4::CemGroupAtm::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| atm.is_set;
}

bool Native::Controller::SonetAcr::Au4::CemGroupAtm::Tug2::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(e1.operation)
	|| is_set(atm.operation);
}

std::string Native::Controller::SonetAcr::Au4::CemGroupAtm::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Au4::CemGroupAtm::Tug2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tug2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.operation)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Au4::CemGroupAtm::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Au4::CemGroupAtm::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SonetAcr::Au4::CemGroupAtm::Tug2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "e1")
    {
        e1 = value;
    }
    if(value_path == "atm")
    {
        atm = value;
    }
}

Native::Controller::SonetAcr::Au4::ImaGroup::ImaGroup()
{
    yang_name = "ima-group"; yang_parent_name = "au-4";
}

Native::Controller::SonetAcr::Au4::ImaGroup::~ImaGroup()
{
}

bool Native::Controller::SonetAcr::Au4::ImaGroup::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SonetAcr::Au4::ImaGroup::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Controller::SonetAcr::Au4::ImaGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ima-group";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Au4::ImaGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ImaGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Au4::ImaGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SonetAcr::Au4::ImaGroup::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Au4::ImaGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SonetAcr::Au4::ImaGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::Controller::SonetAcr::Au4::ImaGroup::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    ima_group{YType::int32, "ima-group"}
{
    yang_name = "tug-2"; yang_parent_name = "ima-group";
}

Native::Controller::SonetAcr::Au4::ImaGroup::Tug2::~Tug2()
{
}

bool Native::Controller::SonetAcr::Au4::ImaGroup::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| ima_group.is_set;
}

bool Native::Controller::SonetAcr::Au4::ImaGroup::Tug2::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(e1.operation)
	|| is_set(ima_group.operation);
}

std::string Native::Controller::SonetAcr::Au4::ImaGroup::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[ima-group='" <<ima_group <<"']";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Au4::ImaGroup::Tug2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tug2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.operation)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (ima_group.is_set || is_set(ima_group.operation)) leaf_name_data.push_back(ima_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Au4::ImaGroup::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Au4::ImaGroup::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SonetAcr::Au4::ImaGroup::Tug2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "e1")
    {
        e1 = value;
    }
    if(value_path == "ima-group")
    {
        ima_group = value;
    }
}

Native::Controller::SonetAcr::Aps::Aps()
    :
    hspw_icrm_grp{YType::uint8, "hspw-icrm-grp"},
    working{YType::int8, "working"}
    	,
    group(std::make_shared<Native::Controller::SonetAcr::Aps::Group>())
	,interchassis(std::make_shared<Native::Controller::SonetAcr::Aps::Interchassis>())
	,protect(std::make_shared<Native::Controller::SonetAcr::Aps::Protect>())
{
    group->parent = this;

    interchassis->parent = this;

    protect->parent = this;

    yang_name = "aps"; yang_parent_name = "SONET-ACR";
}

Native::Controller::SonetAcr::Aps::~Aps()
{
}

bool Native::Controller::SonetAcr::Aps::has_data() const
{
    return hspw_icrm_grp.is_set
	|| working.is_set
	|| (group !=  nullptr && group->has_data())
	|| (interchassis !=  nullptr && interchassis->has_data())
	|| (protect !=  nullptr && protect->has_data());
}

bool Native::Controller::SonetAcr::Aps::has_operation() const
{
    return is_set(operation)
	|| is_set(hspw_icrm_grp.operation)
	|| is_set(working.operation)
	|| (group !=  nullptr && group->has_operation())
	|| (interchassis !=  nullptr && interchassis->has_operation())
	|| (protect !=  nullptr && protect->has_operation());
}

std::string Native::Controller::SonetAcr::Aps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aps";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Aps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hspw_icrm_grp.is_set || is_set(hspw_icrm_grp.operation)) leaf_name_data.push_back(hspw_icrm_grp.get_name_leafdata());
    if (working.is_set || is_set(working.operation)) leaf_name_data.push_back(working.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Aps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Controller::SonetAcr::Aps::Group>();
        }
        return group;
    }

    if(child_yang_name == "interchassis")
    {
        if(interchassis == nullptr)
        {
            interchassis = std::make_shared<Native::Controller::SonetAcr::Aps::Interchassis>();
        }
        return interchassis;
    }

    if(child_yang_name == "protect")
    {
        if(protect == nullptr)
        {
            protect = std::make_shared<Native::Controller::SonetAcr::Aps::Protect>();
        }
        return protect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Aps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(interchassis != nullptr)
    {
        children["interchassis"] = interchassis;
    }

    if(protect != nullptr)
    {
        children["protect"] = protect;
    }

    return children;
}

void Native::Controller::SonetAcr::Aps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hspw-icrm-grp")
    {
        hspw_icrm_grp = value;
    }
    if(value_path == "working")
    {
        working = value;
    }
}

Native::Controller::SonetAcr::Aps::Group::Group()
    :
    acr{YType::int8, "acr"},
    group_number{YType::uint8, "group-number"}
{
    yang_name = "group"; yang_parent_name = "aps";
}

Native::Controller::SonetAcr::Aps::Group::~Group()
{
}

bool Native::Controller::SonetAcr::Aps::Group::has_data() const
{
    return acr.is_set
	|| group_number.is_set;
}

bool Native::Controller::SonetAcr::Aps::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(acr.operation)
	|| is_set(group_number.operation);
}

std::string Native::Controller::SonetAcr::Aps::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Aps::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Group' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr.is_set || is_set(acr.operation)) leaf_name_data.push_back(acr.get_name_leafdata());
    if (group_number.is_set || is_set(group_number.operation)) leaf_name_data.push_back(group_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Aps::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Aps::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SonetAcr::Aps::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acr")
    {
        acr = value;
    }
    if(value_path == "group-number")
    {
        group_number = value;
    }
}

Native::Controller::SonetAcr::Aps::Protect::Protect()
    :
    ip_addr{YType::str, "ip-addr"},
    number{YType::int8, "number"}
{
    yang_name = "protect"; yang_parent_name = "aps";
}

Native::Controller::SonetAcr::Aps::Protect::~Protect()
{
}

bool Native::Controller::SonetAcr::Aps::Protect::has_data() const
{
    return ip_addr.is_set
	|| number.is_set;
}

bool Native::Controller::SonetAcr::Aps::Protect::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(number.operation);
}

std::string Native::Controller::SonetAcr::Aps::Protect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Aps::Protect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Aps::Protect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Aps::Protect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SonetAcr::Aps::Protect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Controller::SonetAcr::Aps::Interchassis::Interchassis()
    :
    group{YType::uint8, "group"}
{
    yang_name = "interchassis"; yang_parent_name = "aps";
}

Native::Controller::SonetAcr::Aps::Interchassis::~Interchassis()
{
}

bool Native::Controller::SonetAcr::Aps::Interchassis::has_data() const
{
    return group.is_set;
}

bool Native::Controller::SonetAcr::Aps::Interchassis::has_operation() const
{
    return is_set(operation)
	|| is_set(group.operation);
}

std::string Native::Controller::SonetAcr::Aps::Interchassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interchassis";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Aps::Interchassis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interchassis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Aps::Interchassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Aps::Interchassis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SonetAcr::Aps::Interchassis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Controller::Wanphy::Wanphy()
    :
    name{YType::str, "name"}
{
    yang_name = "wanphy"; yang_parent_name = "controller";
}

Native::Controller::Wanphy::~Wanphy()
{
}

bool Native::Controller::Wanphy::has_data() const
{
    return name.is_set;
}

bool Native::Controller::Wanphy::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Controller::Wanphy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-controller:wanphy" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Controller::Wanphy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/controller/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Controller::Wanphy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Wanphy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::Wanphy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Vrf::Vrf()
{
    yang_name = "vrf"; yang_parent_name = "native";
}

Native::Vrf::~Vrf()
{
}

bool Native::Vrf::has_data() const
{
    for (std::size_t index=0; index<definition.size(); index++)
    {
        if(definition[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Vrf::has_operation() const
{
    for (std::size_t index=0; index<definition.size(); index++)
    {
        if(definition[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Vrf::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "definition")
    {
        for(auto const & c : definition)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition>();
        c->parent = this;
        definition.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : definition)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Vrf::set_value(const std::string & value_path, std::string value)
{
}

Native::Vrf::Definition::Definition()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    rd{YType::str, "rd"}
    	,
    address_family(std::make_shared<Native::Vrf::Definition::AddressFamily>())
	,route_target(std::make_shared<Native::Vrf::Definition::RouteTarget>())
{
    address_family->parent = this;

    route_target->parent = this;

    yang_name = "definition"; yang_parent_name = "vrf";
}

Native::Vrf::Definition::~Definition()
{
}

bool Native::Vrf::Definition::has_data() const
{
    return name.is_set
	|| description.is_set
	|| rd.is_set
	|| (address_family !=  nullptr && address_family->has_data())
	|| (route_target !=  nullptr && route_target->has_data());
}

bool Native::Vrf::Definition::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| is_set(rd.operation)
	|| (address_family !=  nullptr && address_family->has_operation())
	|| (route_target !=  nullptr && route_target->has_operation());
}

std::string Native::Vrf::Definition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "definition" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Vrf::Definition::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vrf::Definition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::Vrf::Definition::AddressFamily>();
        }
        return address_family;
    }

    if(child_yang_name == "route-target")
    {
        if(route_target == nullptr)
        {
            route_target = std::make_shared<Native::Vrf::Definition::RouteTarget>();
        }
        return route_target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    if(route_target != nullptr)
    {
        children["route-target"] = route_target;
    }

    return children;
}

void Native::Vrf::Definition::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "rd")
    {
        rd = value;
    }
}

Native::Vrf::Definition::AddressFamily::AddressFamily()
    :
    ipv4(nullptr) // presence node
	,ipv6(nullptr) // presence node
{
    yang_name = "address-family"; yang_parent_name = "definition";
}

Native::Vrf::Definition::AddressFamily::~AddressFamily()
{
}

bool Native::Vrf::Definition::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Vrf::Definition::AddressFamily::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";

    return path_buffer.str();

}

const EntityPath Native::Vrf::Definition::AddressFamily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressFamily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::get_children() const
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

void Native::Vrf::Definition::AddressFamily::set_value(const std::string & value_path, std::string value)
{
}

Native::Vrf::Definition::AddressFamily::Ipv4::Ipv4()
    :
    export_(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Export_>())
	,maximum(nullptr) // presence node
	,mdt(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt>())
	,route_target(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget>())
{
    export_->parent = this;

    mdt->parent = this;

    route_target->parent = this;

    yang_name = "ipv4"; yang_parent_name = "address-family";
}

Native::Vrf::Definition::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::has_data() const
{
    return (export_ !=  nullptr && export_->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (mdt !=  nullptr && mdt->has_data())
	|| (route_target !=  nullptr && route_target->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::has_operation() const
{
    return is_set(operation)
	|| (export_ !=  nullptr && export_->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (mdt !=  nullptr && mdt->has_operation())
	|| (route_target !=  nullptr && route_target->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Vrf::Definition::AddressFamily::Ipv4::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "export")
    {
        if(export_ == nullptr)
        {
            export_ = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Export_>();
        }
        return export_;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "mdt")
    {
        if(mdt == nullptr)
        {
            mdt = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt>();
        }
        return mdt;
    }

    if(child_yang_name == "route-target")
    {
        if(route_target == nullptr)
        {
            route_target = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget>();
        }
        return route_target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(export_ != nullptr)
    {
        children["export"] = export_;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(mdt != nullptr)
    {
        children["mdt"] = mdt;
    }

    if(route_target != nullptr)
    {
        children["route-target"] = route_target;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

Native::Vrf::Definition::AddressFamily::Ipv4::Export_::Export_()
    :
    map{YType::str, "map"}
{
    yang_name = "export"; yang_parent_name = "ipv4";
}

Native::Vrf::Definition::AddressFamily::Ipv4::Export_::~Export_()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Export_::has_data() const
{
    return map.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Export_::has_operation() const
{
    return is_set(operation)
	|| is_set(map.operation);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Export_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export";

    return path_buffer.str();

}

const EntityPath Native::Vrf::Definition::AddressFamily::Ipv4::Export_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Export_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Export_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Export_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Export_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map")
    {
        map = value;
    }
}

Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::Maximum()
    :
    reinstall{YType::uint16, "reinstall"},
    routes{YType::uint32, "routes"},
    threshold{YType::uint16, "threshold"},
    warning_only{YType::empty, "warning-only"}
{
    yang_name = "maximum"; yang_parent_name = "ipv4";
}

Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::~Maximum()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::has_data() const
{
    return reinstall.is_set
	|| routes.is_set
	|| threshold.is_set
	|| warning_only.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::has_operation() const
{
    return is_set(operation)
	|| is_set(reinstall.operation)
	|| is_set(routes.operation)
	|| is_set(threshold.operation)
	|| is_set(warning_only.operation);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Maximum' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reinstall.is_set || is_set(reinstall.operation)) leaf_name_data.push_back(reinstall.get_name_leafdata());
    if (routes.is_set || is_set(routes.operation)) leaf_name_data.push_back(routes.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.operation)) leaf_name_data.push_back(warning_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reinstall")
    {
        reinstall = value;
    }
    if(value_path == "routes")
    {
        routes = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
    }
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Mdt()
    :
    log_reuse{YType::empty, "log-reuse"},
    preference{YType::enumeration, "preference"}
    	,
    data(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data>())
	,default_(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_>())
{
    data->parent = this;

    default_->parent = this;

    yang_name = "mdt"; yang_parent_name = "ipv4";
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::~Mdt()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::has_data() const
{
    for (auto const & leaf : preference.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return log_reuse.is_set
	|| (data !=  nullptr && data->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::has_operation() const
{
    for (auto const & leaf : preference.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(log_reuse.operation)
	|| is_set(preference.operation)
	|| (data !=  nullptr && data->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt";

    return path_buffer.str();

}

const EntityPath Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mdt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_reuse.is_set || is_set(log_reuse.operation)) leaf_name_data.push_back(log_reuse.get_name_leafdata());

    auto preference_name_datas = preference.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), preference_name_datas.begin(), preference_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data>();
        }
        return data;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log-reuse")
    {
        log_reuse = value;
    }
    if(value_path == "preference")
    {
        preference.append(value);
    }
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Default_()
    :
    address{YType::str, "address"}
    	,
    mpls(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls>())
{
    mpls->parent = this;

    yang_name = "default"; yang_parent_name = "mdt";
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::~Default_()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::has_data() const
{
    return address.is_set
	|| (mpls !=  nullptr && mpls->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::Mpls()
    :
    mldp{YType::str, "mldp"}
{
    yang_name = "mpls"; yang_parent_name = "default";
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::~Mpls()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::has_data() const
{
    return mldp.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::has_operation() const
{
    return is_set(operation)
	|| is_set(mldp.operation);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::get_entity_path(Entity* ancestor) const
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

    if (mldp.is_set || is_set(mldp.operation)) leaf_name_data.push_back(mldp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mldp")
    {
        mldp = value;
    }
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Data()
    :
    list{YType::str, "list"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "data"; yang_parent_name = "mdt";
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::~Data()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::has_data() const
{
    for (std::size_t index=0; index<multicast.size(); index++)
    {
        if(multicast[index]->has_data())
            return true;
    }
    return list.is_set
	|| threshold.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::has_operation() const
{
    for (std::size_t index=0; index<multicast.size(); index++)
    {
        if(multicast[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(list.operation)
	|| is_set(threshold.operation);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::get_entity_path(Entity* ancestor) const
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

    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        for(auto const & c : multicast)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast>();
        c->parent = this;
        multicast.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : multicast)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "list")
    {
        list = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::Multicast()
    :
    address{YType::str, "address"},
    wildcard{YType::str, "wildcard"}
{
    yang_name = "multicast"; yang_parent_name = "data";
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::~Multicast()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::has_data() const
{
    return address.is_set
	|| wildcard.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(wildcard.operation);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast" <<"[address='" <<address <<"']" <<"[wildcard='" <<wildcard <<"']";

    return path_buffer.str();

}

const EntityPath Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multicast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (wildcard.is_set || is_set(wildcard.operation)) leaf_name_data.push_back(wildcard.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "wildcard")
    {
        wildcard = value;
    }
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::RouteTarget()
{
    yang_name = "route-target"; yang_parent_name = "ipv4";
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::~RouteTarget()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::has_data() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::has_operation() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";

    return path_buffer.str();

}

const EntityPath Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteTarget' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "export")
    {
        for(auto const & c : export_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_>();
        c->parent = this;
        export_.push_back(c);
        return c;
    }

    if(child_yang_name == "import")
    {
        for(auto const & c : import)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import>();
        c->parent = this;
        import.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : export_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : import)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::set_value(const std::string & value_path, std::string value)
{
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::Export_()
    :
    asn_ip{YType::str, "asn-ip"}
{
    yang_name = "export"; yang_parent_name = "route-target";
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::~Export_()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::has_data() const
{
    return asn_ip.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::has_operation() const
{
    return is_set(operation)
	|| is_set(asn_ip.operation);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export" <<"[asn-ip='" <<asn_ip <<"']";

    return path_buffer.str();

}

const EntityPath Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Export_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.operation)) leaf_name_data.push_back(asn_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
    }
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::Import()
    :
    asn_ip{YType::str, "asn-ip"}
{
    yang_name = "import"; yang_parent_name = "route-target";
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::~Import()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::has_data() const
{
    return asn_ip.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::has_operation() const
{
    return is_set(operation)
	|| is_set(asn_ip.operation);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import" <<"[asn-ip='" <<asn_ip <<"']";

    return path_buffer.str();

}

const EntityPath Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Import' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.operation)) leaf_name_data.push_back(asn_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
    }
}

Native::Vrf::Definition::AddressFamily::Ipv6::Ipv6()
    :
    route_target(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget>())
{
    route_target->parent = this;

    yang_name = "ipv6"; yang_parent_name = "address-family";
}

Native::Vrf::Definition::AddressFamily::Ipv6::~Ipv6()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::has_data() const
{
    return (route_target !=  nullptr && route_target->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::has_operation() const
{
    return is_set(operation)
	|| (route_target !=  nullptr && route_target->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Vrf::Definition::AddressFamily::Ipv6::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-target")
    {
        if(route_target == nullptr)
        {
            route_target = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget>();
        }
        return route_target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_target != nullptr)
    {
        children["route-target"] = route_target;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::RouteTarget()
{
    yang_name = "route-target"; yang_parent_name = "ipv6";
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::~RouteTarget()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::has_data() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::has_operation() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";

    return path_buffer.str();

}

const EntityPath Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteTarget' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "export")
    {
        for(auto const & c : export_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_>();
        c->parent = this;
        export_.push_back(c);
        return c;
    }

    if(child_yang_name == "import")
    {
        for(auto const & c : import)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import>();
        c->parent = this;
        import.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : export_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : import)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::set_value(const std::string & value_path, std::string value)
{
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::Export_()
    :
    asn_ip{YType::str, "asn-ip"}
{
    yang_name = "export"; yang_parent_name = "route-target";
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::~Export_()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::has_data() const
{
    return asn_ip.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::has_operation() const
{
    return is_set(operation)
	|| is_set(asn_ip.operation);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export" <<"[asn-ip='" <<asn_ip <<"']";

    return path_buffer.str();

}

const EntityPath Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Export_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.operation)) leaf_name_data.push_back(asn_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
    }
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::Import()
    :
    asn_ip{YType::str, "asn-ip"}
{
    yang_name = "import"; yang_parent_name = "route-target";
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::~Import()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::has_data() const
{
    return asn_ip.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::has_operation() const
{
    return is_set(operation)
	|| is_set(asn_ip.operation);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import" <<"[asn-ip='" <<asn_ip <<"']";

    return path_buffer.str();

}

const EntityPath Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Import' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.operation)) leaf_name_data.push_back(asn_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
    }
}

Native::Vrf::Definition::RouteTarget::RouteTarget()
{
    yang_name = "route-target"; yang_parent_name = "definition";
}

Native::Vrf::Definition::RouteTarget::~RouteTarget()
{
}

bool Native::Vrf::Definition::RouteTarget::has_data() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Vrf::Definition::RouteTarget::has_operation() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Vrf::Definition::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";

    return path_buffer.str();

}

const EntityPath Native::Vrf::Definition::RouteTarget::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteTarget' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vrf::Definition::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "export")
    {
        for(auto const & c : export_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition::RouteTarget::Export_>();
        c->parent = this;
        export_.push_back(c);
        return c;
    }

    if(child_yang_name == "import")
    {
        for(auto const & c : import)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition::RouteTarget::Import>();
        c->parent = this;
        import.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : export_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : import)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Vrf::Definition::RouteTarget::set_value(const std::string & value_path, std::string value)
{
}

Native::Vrf::Definition::RouteTarget::Export_::Export_()
    :
    asn_ip{YType::str, "asn-ip"}
{
    yang_name = "export"; yang_parent_name = "route-target";
}

Native::Vrf::Definition::RouteTarget::Export_::~Export_()
{
}

bool Native::Vrf::Definition::RouteTarget::Export_::has_data() const
{
    return asn_ip.is_set;
}

bool Native::Vrf::Definition::RouteTarget::Export_::has_operation() const
{
    return is_set(operation)
	|| is_set(asn_ip.operation);
}

std::string Native::Vrf::Definition::RouteTarget::Export_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export" <<"[asn-ip='" <<asn_ip <<"']";

    return path_buffer.str();

}

const EntityPath Native::Vrf::Definition::RouteTarget::Export_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Export_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.operation)) leaf_name_data.push_back(asn_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vrf::Definition::RouteTarget::Export_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::RouteTarget::Export_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::RouteTarget::Export_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
    }
}

Native::Vrf::Definition::RouteTarget::Import::Import()
    :
    asn_ip{YType::str, "asn-ip"}
{
    yang_name = "import"; yang_parent_name = "route-target";
}

Native::Vrf::Definition::RouteTarget::Import::~Import()
{
}

bool Native::Vrf::Definition::RouteTarget::Import::has_data() const
{
    return asn_ip.is_set;
}

bool Native::Vrf::Definition::RouteTarget::Import::has_operation() const
{
    return is_set(operation)
	|| is_set(asn_ip.operation);
}

std::string Native::Vrf::Definition::RouteTarget::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import" <<"[asn-ip='" <<asn_ip <<"']";

    return path_buffer.str();

}

const EntityPath Native::Vrf::Definition::RouteTarget::Import::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Import' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.operation)) leaf_name_data.push_back(asn_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vrf::Definition::RouteTarget::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::RouteTarget::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::RouteTarget::Import::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
    }
}

Native::Rmon::Rmon()
{
    yang_name = "rmon"; yang_parent_name = "native";
}

Native::Rmon::~Rmon()
{
}

bool Native::Rmon::has_data() const
{
    for (std::size_t index=0; index<alarm.size(); index++)
    {
        if(alarm[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<event.size(); index++)
    {
        if(event[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Rmon::has_operation() const
{
    for (std::size_t index=0; index<alarm.size(); index++)
    {
        if(alarm[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<event.size(); index++)
    {
        if(event[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Rmon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rmon";

    return path_buffer.str();

}

const EntityPath Native::Rmon::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Rmon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm")
    {
        for(auto const & c : alarm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Rmon::Alarm>();
        c->parent = this;
        alarm.push_back(c);
        return c;
    }

    if(child_yang_name == "event")
    {
        for(auto const & c : event)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Rmon::Event>();
        c->parent = this;
        event.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Rmon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : alarm)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : event)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Rmon::set_value(const std::string & value_path, std::string value)
{
}

Native::Rmon::Alarm::Alarm()
    :
    number{YType::uint16, "number"},
    falling_event{YType::uint16, "falling-event"},
    falling_threshold{YType::int32, "falling-threshold"},
    mib_object{YType::str, "mib-object"},
    owner{YType::str, "owner"},
    rising_event{YType::uint16, "rising-event"},
    rising_threshold{YType::int32, "rising-threshold"},
    sample_interval{YType::uint32, "sample-interval"},
    test_mode{YType::enumeration, "test-mode"}
{
    yang_name = "alarm"; yang_parent_name = "rmon";
}

Native::Rmon::Alarm::~Alarm()
{
}

bool Native::Rmon::Alarm::has_data() const
{
    return number.is_set
	|| falling_event.is_set
	|| falling_threshold.is_set
	|| mib_object.is_set
	|| owner.is_set
	|| rising_event.is_set
	|| rising_threshold.is_set
	|| sample_interval.is_set
	|| test_mode.is_set;
}

bool Native::Rmon::Alarm::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(falling_event.operation)
	|| is_set(falling_threshold.operation)
	|| is_set(mib_object.operation)
	|| is_set(owner.operation)
	|| is_set(rising_event.operation)
	|| is_set(rising_threshold.operation)
	|| is_set(sample_interval.operation)
	|| is_set(test_mode.operation);
}

std::string Native::Rmon::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Rmon::Alarm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/rmon/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (falling_event.is_set || is_set(falling_event.operation)) leaf_name_data.push_back(falling_event.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (mib_object.is_set || is_set(mib_object.operation)) leaf_name_data.push_back(mib_object.get_name_leafdata());
    if (owner.is_set || is_set(owner.operation)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (rising_event.is_set || is_set(rising_event.operation)) leaf_name_data.push_back(rising_event.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (test_mode.is_set || is_set(test_mode.operation)) leaf_name_data.push_back(test_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Rmon::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Rmon::Alarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Rmon::Alarm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "falling-event")
    {
        falling_event = value;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "mib-object")
    {
        mib_object = value;
    }
    if(value_path == "owner")
    {
        owner = value;
    }
    if(value_path == "rising-event")
    {
        rising_event = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
    if(value_path == "test-mode")
    {
        test_mode = value;
    }
}

Native::Rmon::Event::Event()
    :
    number{YType::uint16, "number"}
    	,
    log(nullptr) // presence node
{
    yang_name = "event"; yang_parent_name = "rmon";
}

Native::Rmon::Event::~Event()
{
}

bool Native::Rmon::Event::has_data() const
{
    return number.is_set
	|| (log !=  nullptr && log->has_data());
}

bool Native::Rmon::Event::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Rmon::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Rmon::Event::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/rmon/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Rmon::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Rmon::Event::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Rmon::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(log != nullptr)
    {
        children["log"] = log;
    }

    return children;
}

void Native::Rmon::Event::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Rmon::Event::Log::Log()
    :
    description{YType::str, "description"},
    owner{YType::str, "owner"},
    trap{YType::str, "trap"}
{
    yang_name = "log"; yang_parent_name = "event";
}

Native::Rmon::Event::Log::~Log()
{
}

bool Native::Rmon::Event::Log::has_data() const
{
    return description.is_set
	|| owner.is_set
	|| trap.is_set;
}

bool Native::Rmon::Event::Log::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(owner.operation)
	|| is_set(trap.operation);
}

std::string Native::Rmon::Event::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";

    return path_buffer.str();

}

const EntityPath Native::Rmon::Event::Log::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Log' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (owner.is_set || is_set(owner.operation)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (trap.is_set || is_set(trap.operation)) leaf_name_data.push_back(trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Rmon::Event::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Rmon::Event::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Rmon::Event::Log::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "owner")
    {
        owner = value;
    }
    if(value_path == "trap")
    {
        trap = value;
    }
}

Native::Sampler::Sampler()
    :
    name{YType::str, "name"},
    description{YType::str, "Cisco-IOS-XE-flow:description"}
    	,
    granularity(std::make_shared<Native::Sampler::Granularity>())
	,mode(std::make_shared<Native::Sampler::Mode>())
{
    granularity->parent = this;

    mode->parent = this;

    yang_name = "sampler"; yang_parent_name = "native";
}

Native::Sampler::~Sampler()
{
}

bool Native::Sampler::has_data() const
{
    return name.is_set
	|| description.is_set
	|| (granularity !=  nullptr && granularity->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Sampler::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| (granularity !=  nullptr && granularity->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Sampler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sampler" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Sampler::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Sampler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "granularity")
    {
        if(granularity == nullptr)
        {
            granularity = std::make_shared<Native::Sampler::Granularity>();
        }
        return granularity;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Sampler::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sampler::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(granularity != nullptr)
    {
        children["granularity"] = granularity;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Sampler::set_value(const std::string & value_path, std::string value)
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

Native::Sampler::Mode::Mode()
    :
    deterministic(std::make_shared<Native::Sampler::Mode::Deterministic>())
	,hash(std::make_shared<Native::Sampler::Mode::Hash>())
	,random(std::make_shared<Native::Sampler::Mode::Random>())
{
    deterministic->parent = this;

    hash->parent = this;

    random->parent = this;

    yang_name = "mode"; yang_parent_name = "sampler";
}

Native::Sampler::Mode::~Mode()
{
}

bool Native::Sampler::Mode::has_data() const
{
    return (deterministic !=  nullptr && deterministic->has_data())
	|| (hash !=  nullptr && hash->has_data())
	|| (random !=  nullptr && random->has_data());
}

bool Native::Sampler::Mode::has_operation() const
{
    return is_set(operation)
	|| (deterministic !=  nullptr && deterministic->has_operation())
	|| (hash !=  nullptr && hash->has_operation())
	|| (random !=  nullptr && random->has_operation());
}

std::string Native::Sampler::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:mode";

    return path_buffer.str();

}

const EntityPath Native::Sampler::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Sampler::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deterministic")
    {
        if(deterministic == nullptr)
        {
            deterministic = std::make_shared<Native::Sampler::Mode::Deterministic>();
        }
        return deterministic;
    }

    if(child_yang_name == "hash")
    {
        if(hash == nullptr)
        {
            hash = std::make_shared<Native::Sampler::Mode::Hash>();
        }
        return hash;
    }

    if(child_yang_name == "random")
    {
        if(random == nullptr)
        {
            random = std::make_shared<Native::Sampler::Mode::Random>();
        }
        return random;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sampler::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deterministic != nullptr)
    {
        children["deterministic"] = deterministic;
    }

    if(hash != nullptr)
    {
        children["hash"] = hash;
    }

    if(random != nullptr)
    {
        children["random"] = random;
    }

    return children;
}

void Native::Sampler::Mode::set_value(const std::string & value_path, std::string value)
{
}

Native::Sampler::Mode::Deterministic::Deterministic()
    :
    number{YType::uint8, "number"},
    out_of{YType::uint16, "out-of"}
{
    yang_name = "deterministic"; yang_parent_name = "mode";
}

Native::Sampler::Mode::Deterministic::~Deterministic()
{
}

bool Native::Sampler::Mode::Deterministic::has_data() const
{
    return number.is_set
	|| out_of.is_set;
}

bool Native::Sampler::Mode::Deterministic::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(out_of.operation);
}

std::string Native::Sampler::Mode::Deterministic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deterministic";

    return path_buffer.str();

}

const EntityPath Native::Sampler::Mode::Deterministic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Deterministic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (out_of.is_set || is_set(out_of.operation)) leaf_name_data.push_back(out_of.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Sampler::Mode::Deterministic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sampler::Mode::Deterministic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Sampler::Mode::Deterministic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "out-of")
    {
        out_of = value;
    }
}

Native::Sampler::Mode::Hash::Hash()
    :
    number{YType::uint8, "number"},
    out_of{YType::uint16, "out-of"}
{
    yang_name = "hash"; yang_parent_name = "mode";
}

Native::Sampler::Mode::Hash::~Hash()
{
}

bool Native::Sampler::Mode::Hash::has_data() const
{
    return number.is_set
	|| out_of.is_set;
}

bool Native::Sampler::Mode::Hash::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(out_of.operation);
}

std::string Native::Sampler::Mode::Hash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hash";

    return path_buffer.str();

}

const EntityPath Native::Sampler::Mode::Hash::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hash' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (out_of.is_set || is_set(out_of.operation)) leaf_name_data.push_back(out_of.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Sampler::Mode::Hash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sampler::Mode::Hash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Sampler::Mode::Hash::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "out-of")
    {
        out_of = value;
    }
}

Native::Sampler::Mode::Random::Random()
    :
    number{YType::uint8, "number"},
    out_of{YType::uint16, "out-of"}
{
    yang_name = "random"; yang_parent_name = "mode";
}

Native::Sampler::Mode::Random::~Random()
{
}

bool Native::Sampler::Mode::Random::has_data() const
{
    return number.is_set
	|| out_of.is_set;
}

bool Native::Sampler::Mode::Random::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(out_of.operation);
}

std::string Native::Sampler::Mode::Random::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "random";

    return path_buffer.str();

}

const EntityPath Native::Sampler::Mode::Random::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Random' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (out_of.is_set || is_set(out_of.operation)) leaf_name_data.push_back(out_of.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Sampler::Mode::Random::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sampler::Mode::Random::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Sampler::Mode::Random::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "out-of")
    {
        out_of = value;
    }
}

Native::Sampler::Granularity::Granularity()
    :
    connection{YType::empty, "connection"},
    packet{YType::empty, "packet"}
{
    yang_name = "granularity"; yang_parent_name = "sampler";
}

Native::Sampler::Granularity::~Granularity()
{
}

bool Native::Sampler::Granularity::has_data() const
{
    return connection.is_set
	|| packet.is_set;
}

bool Native::Sampler::Granularity::has_operation() const
{
    return is_set(operation)
	|| is_set(connection.operation)
	|| is_set(packet.operation);
}

std::string Native::Sampler::Granularity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:granularity";

    return path_buffer.str();

}

const EntityPath Native::Sampler::Granularity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Granularity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection.is_set || is_set(connection.operation)) leaf_name_data.push_back(connection.get_name_leafdata());
    if (packet.is_set || is_set(packet.operation)) leaf_name_data.push_back(packet.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Sampler::Granularity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sampler::Granularity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Sampler::Granularity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connection")
    {
        connection = value;
    }
    if(value_path == "packet")
    {
        packet = value;
    }
}

Native::Flow::Flow()
{
    yang_name = "flow"; yang_parent_name = "native";
}

Native::Flow::~Flow()
{
}

bool Native::Flow::has_data() const
{
    for (std::size_t index=0; index<exporter.size(); index++)
    {
        if(exporter[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<monitor.size(); index++)
    {
        if(monitor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<record.size(); index++)
    {
        if(record[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Flow::has_operation() const
{
    for (std::size_t index=0; index<exporter.size(); index++)
    {
        if(exporter[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<monitor.size(); index++)
    {
        if(monitor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<record.size(); index++)
    {
        if(record[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";

    return path_buffer.str();

}

const EntityPath Native::Flow::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Native::Flow::Exporter>();
        c->parent = this;
        exporter.push_back(c);
        return c;
    }

    if(child_yang_name == "monitor")
    {
        for(auto const & c : monitor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Flow::Monitor>();
        c->parent = this;
        monitor.push_back(c);
        return c;
    }

    if(child_yang_name == "record")
    {
        for(auto const & c : record)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Flow::Record>();
        c->parent = this;
        record.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exporter)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : monitor)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : record)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Flow::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Record()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    type{YType::enumeration, "type"}
    	,
    collect(std::make_shared<Native::Flow::Record::Collect>())
	,default_(std::make_shared<Native::Flow::Record::Default_>())
	,match(std::make_shared<Native::Flow::Record::Match>())
{
    collect->parent = this;

    default_->parent = this;

    match->parent = this;

    yang_name = "record"; yang_parent_name = "flow";
}

Native::Flow::Record::~Record()
{
}

bool Native::Flow::Record::has_data() const
{
    return name.is_set
	|| description.is_set
	|| type.is_set
	|| (collect !=  nullptr && collect->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (match !=  nullptr && match->has_data());
}

bool Native::Flow::Record::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| is_set(type.operation)
	|| (collect !=  nullptr && collect->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Flow::Record::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:record" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "collect")
    {
        if(collect == nullptr)
        {
            collect = std::make_shared<Native::Flow::Record::Collect>();
        }
        return collect;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Flow::Record::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Flow::Record::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(collect != nullptr)
    {
        children["collect"] = collect;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Flow::Record::set_value(const std::string & value_path, std::string value)
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

Native::Flow::Record::Collect::Collect()
    :
    application(std::make_shared<Native::Flow::Record::Collect::Application>())
	,connection(std::make_shared<Native::Flow::Record::Collect::Connection>())
	,counter(std::make_shared<Native::Flow::Record::Collect::Counter>())
	,datalink(std::make_shared<Native::Flow::Record::Collect::Datalink>())
	,flow(std::make_shared<Native::Flow::Record::Collect::Flow_>())
	,interface(std::make_shared<Native::Flow::Record::Collect::Interface>())
	,ipv4(std::make_shared<Native::Flow::Record::Collect::Ipv4>())
	,ipv6(std::make_shared<Native::Flow::Record::Collect::Ipv6>())
	,metadata(std::make_shared<Native::Flow::Record::Collect::Metadata>())
	,monitor(std::make_shared<Native::Flow::Record::Collect::Monitor>())
	,mpls(std::make_shared<Native::Flow::Record::Collect::Mpls>())
	,network(std::make_shared<Native::Flow::Record::Collect::Network>())
	,pfr(std::make_shared<Native::Flow::Record::Collect::Pfr>())
	,policy(std::make_shared<Native::Flow::Record::Collect::Policy>())
	,routing(std::make_shared<Native::Flow::Record::Collect::Routing>())
	,services(std::make_shared<Native::Flow::Record::Collect::Services>())
	,timestamp(std::make_shared<Native::Flow::Record::Collect::Timestamp>())
	,transport(std::make_shared<Native::Flow::Record::Collect::Transport>())
{
    application->parent = this;

    connection->parent = this;

    counter->parent = this;

    datalink->parent = this;

    flow->parent = this;

    interface->parent = this;

    ipv4->parent = this;

    ipv6->parent = this;

    metadata->parent = this;

    monitor->parent = this;

    mpls->parent = this;

    network->parent = this;

    pfr->parent = this;

    policy->parent = this;

    routing->parent = this;

    services->parent = this;

    timestamp->parent = this;

    transport->parent = this;

    yang_name = "collect"; yang_parent_name = "record";
}

Native::Flow::Record::Collect::~Collect()
{
}

bool Native::Flow::Record::Collect::has_data() const
{
    return (application !=  nullptr && application->has_data())
	|| (connection !=  nullptr && connection->has_data())
	|| (counter !=  nullptr && counter->has_data())
	|| (datalink !=  nullptr && datalink->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (metadata !=  nullptr && metadata->has_data())
	|| (monitor !=  nullptr && monitor->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (pfr !=  nullptr && pfr->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (routing !=  nullptr && routing->has_data())
	|| (services !=  nullptr && services->has_data())
	|| (timestamp !=  nullptr && timestamp->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Collect::has_operation() const
{
    return is_set(operation)
	|| (application !=  nullptr && application->has_operation())
	|| (connection !=  nullptr && connection->has_operation())
	|| (counter !=  nullptr && counter->has_operation())
	|| (datalink !=  nullptr && datalink->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (metadata !=  nullptr && metadata->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (pfr !=  nullptr && pfr->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (routing !=  nullptr && routing->has_operation())
	|| (services !=  nullptr && services->has_operation())
	|| (timestamp !=  nullptr && timestamp->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Collect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collect";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Collect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Flow::Record::Collect::Application>();
        }
        return application;
    }

    if(child_yang_name == "connection")
    {
        if(connection == nullptr)
        {
            connection = std::make_shared<Native::Flow::Record::Collect::Connection>();
        }
        return connection;
    }

    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Collect::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "datalink")
    {
        if(datalink == nullptr)
        {
            datalink = std::make_shared<Native::Flow::Record::Collect::Datalink>();
        }
        return datalink;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Flow::Record::Collect::Flow_>();
        }
        return flow;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Flow::Record::Collect::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Collect::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Collect::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "metadata")
    {
        if(metadata == nullptr)
        {
            metadata = std::make_shared<Native::Flow::Record::Collect::Metadata>();
        }
        return metadata;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Flow::Record::Collect::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Flow::Record::Collect::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Flow::Record::Collect::Network>();
        }
        return network;
    }

    if(child_yang_name == "pfr")
    {
        if(pfr == nullptr)
        {
            pfr = std::make_shared<Native::Flow::Record::Collect::Pfr>();
        }
        return pfr;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Flow::Record::Collect::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "routing")
    {
        if(routing == nullptr)
        {
            routing = std::make_shared<Native::Flow::Record::Collect::Routing>();
        }
        return routing;
    }

    if(child_yang_name == "services")
    {
        if(services == nullptr)
        {
            services = std::make_shared<Native::Flow::Record::Collect::Services>();
        }
        return services;
    }

    if(child_yang_name == "timestamp")
    {
        if(timestamp == nullptr)
        {
            timestamp = std::make_shared<Native::Flow::Record::Collect::Timestamp>();
        }
        return timestamp;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Collect::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(connection != nullptr)
    {
        children["connection"] = connection;
    }

    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(datalink != nullptr)
    {
        children["datalink"] = datalink;
    }

    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(metadata != nullptr)
    {
        children["metadata"] = metadata;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(pfr != nullptr)
    {
        children["pfr"] = pfr;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(routing != nullptr)
    {
        children["routing"] = routing;
    }

    if(services != nullptr)
    {
        children["services"] = services;
    }

    if(timestamp != nullptr)
    {
        children["timestamp"] = timestamp;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Flow::Record::Collect::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Collect::Application::Application()
    :
    vendor{YType::empty, "vendor"},
    version{YType::empty, "version"}
    	,
    dns(std::make_shared<Native::Flow::Record::Collect::Application::Dns>())
	,http(std::make_shared<Native::Flow::Record::Collect::Application::Http>())
	,media(std::make_shared<Native::Flow::Record::Collect::Application::Media>())
	,name(nullptr) // presence node
	,nntp(std::make_shared<Native::Flow::Record::Collect::Application::Nntp>())
	,pop3(std::make_shared<Native::Flow::Record::Collect::Application::Pop3>())
	,rtmp(std::make_shared<Native::Flow::Record::Collect::Application::Rtmp>())
	,rtsp(std::make_shared<Native::Flow::Record::Collect::Application::Rtsp>())
	,sip(std::make_shared<Native::Flow::Record::Collect::Application::Sip>())
	,smtp(std::make_shared<Native::Flow::Record::Collect::Application::Smtp>())
	,ssl(std::make_shared<Native::Flow::Record::Collect::Application::Ssl>())
{
    dns->parent = this;

    http->parent = this;

    media->parent = this;

    nntp->parent = this;

    pop3->parent = this;

    rtmp->parent = this;

    rtsp->parent = this;

    sip->parent = this;

    smtp->parent = this;

    ssl->parent = this;

    yang_name = "application"; yang_parent_name = "collect";
}

Native::Flow::Record::Collect::Application::~Application()
{
}

bool Native::Flow::Record::Collect::Application::has_data() const
{
    return vendor.is_set
	|| version.is_set
	|| (dns !=  nullptr && dns->has_data())
	|| (http !=  nullptr && http->has_data())
	|| (media !=  nullptr && media->has_data())
	|| (name !=  nullptr && name->has_data())
	|| (nntp !=  nullptr && nntp->has_data())
	|| (pop3 !=  nullptr && pop3->has_data())
	|| (rtmp !=  nullptr && rtmp->has_data())
	|| (rtsp !=  nullptr && rtsp->has_data())
	|| (sip !=  nullptr && sip->has_data())
	|| (smtp !=  nullptr && smtp->has_data())
	|| (ssl !=  nullptr && ssl->has_data());
}

bool Native::Flow::Record::Collect::Application::has_operation() const
{
    return is_set(operation)
	|| is_set(vendor.operation)
	|| is_set(version.operation)
	|| (dns !=  nullptr && dns->has_operation())
	|| (http !=  nullptr && http->has_operation())
	|| (media !=  nullptr && media->has_operation())
	|| (name !=  nullptr && name->has_operation())
	|| (nntp !=  nullptr && nntp->has_operation())
	|| (pop3 !=  nullptr && pop3->has_operation())
	|| (rtmp !=  nullptr && rtmp->has_operation())
	|| (rtsp !=  nullptr && rtsp->has_operation())
	|| (sip !=  nullptr && sip->has_operation())
	|| (smtp !=  nullptr && smtp->has_operation())
	|| (ssl !=  nullptr && ssl->has_operation());
}

std::string Native::Flow::Record::Collect::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Application::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Application' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.operation)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<Native::Flow::Record::Collect::Application::Dns>();
        }
        return dns;
    }

    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Flow::Record::Collect::Application::Http>();
        }
        return http;
    }

    if(child_yang_name == "media")
    {
        if(media == nullptr)
        {
            media = std::make_shared<Native::Flow::Record::Collect::Application::Media>();
        }
        return media;
    }

    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::Flow::Record::Collect::Application::Name>();
        }
        return name;
    }

    if(child_yang_name == "nntp")
    {
        if(nntp == nullptr)
        {
            nntp = std::make_shared<Native::Flow::Record::Collect::Application::Nntp>();
        }
        return nntp;
    }

    if(child_yang_name == "pop3")
    {
        if(pop3 == nullptr)
        {
            pop3 = std::make_shared<Native::Flow::Record::Collect::Application::Pop3>();
        }
        return pop3;
    }

    if(child_yang_name == "rtmp")
    {
        if(rtmp == nullptr)
        {
            rtmp = std::make_shared<Native::Flow::Record::Collect::Application::Rtmp>();
        }
        return rtmp;
    }

    if(child_yang_name == "rtsp")
    {
        if(rtsp == nullptr)
        {
            rtsp = std::make_shared<Native::Flow::Record::Collect::Application::Rtsp>();
        }
        return rtsp;
    }

    if(child_yang_name == "sip")
    {
        if(sip == nullptr)
        {
            sip = std::make_shared<Native::Flow::Record::Collect::Application::Sip>();
        }
        return sip;
    }

    if(child_yang_name == "smtp")
    {
        if(smtp == nullptr)
        {
            smtp = std::make_shared<Native::Flow::Record::Collect::Application::Smtp>();
        }
        return smtp;
    }

    if(child_yang_name == "ssl")
    {
        if(ssl == nullptr)
        {
            ssl = std::make_shared<Native::Flow::Record::Collect::Application::Ssl>();
        }
        return ssl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dns != nullptr)
    {
        children["dns"] = dns;
    }

    if(http != nullptr)
    {
        children["http"] = http;
    }

    if(media != nullptr)
    {
        children["media"] = media;
    }

    if(name != nullptr)
    {
        children["name"] = name;
    }

    if(nntp != nullptr)
    {
        children["nntp"] = nntp;
    }

    if(pop3 != nullptr)
    {
        children["pop3"] = pop3;
    }

    if(rtmp != nullptr)
    {
        children["rtmp"] = rtmp;
    }

    if(rtsp != nullptr)
    {
        children["rtsp"] = rtsp;
    }

    if(sip != nullptr)
    {
        children["sip"] = sip;
    }

    if(smtp != nullptr)
    {
        children["smtp"] = smtp;
    }

    if(ssl != nullptr)
    {
        children["ssl"] = ssl;
    }

    return children;
}

void Native::Flow::Record::Collect::Application::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vendor")
    {
        vendor = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Flow::Record::Collect::Application::Dns::Dns()
    :
    domain_name{YType::empty, "domain-name"}
{
    yang_name = "dns"; yang_parent_name = "application";
}

Native::Flow::Record::Collect::Application::Dns::~Dns()
{
}

bool Native::Flow::Record::Collect::Application::Dns::has_data() const
{
    return domain_name.is_set;
}

bool Native::Flow::Record::Collect::Application::Dns::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_name.operation);
}

std::string Native::Flow::Record::Collect::Application::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Application::Dns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dns' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Dns::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
}

Native::Flow::Record::Collect::Application::Http::Http()
    :
    host{YType::empty, "host"},
    referer{YType::empty, "referer"},
    url{YType::empty, "url"},
    user_agent{YType::empty, "user-agent"}
    	,
    uri(std::make_shared<Native::Flow::Record::Collect::Application::Http::Uri>())
{
    uri->parent = this;

    yang_name = "http"; yang_parent_name = "application";
}

Native::Flow::Record::Collect::Application::Http::~Http()
{
}

bool Native::Flow::Record::Collect::Application::Http::has_data() const
{
    return host.is_set
	|| referer.is_set
	|| url.is_set
	|| user_agent.is_set
	|| (uri !=  nullptr && uri->has_data());
}

bool Native::Flow::Record::Collect::Application::Http::has_operation() const
{
    return is_set(operation)
	|| is_set(host.operation)
	|| is_set(referer.operation)
	|| is_set(url.operation)
	|| is_set(user_agent.operation)
	|| (uri !=  nullptr && uri->has_operation());
}

std::string Native::Flow::Record::Collect::Application::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Application::Http::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Http' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (referer.is_set || is_set(referer.operation)) leaf_name_data.push_back(referer.get_name_leafdata());
    if (url.is_set || is_set(url.operation)) leaf_name_data.push_back(url.get_name_leafdata());
    if (user_agent.is_set || is_set(user_agent.operation)) leaf_name_data.push_back(user_agent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uri")
    {
        if(uri == nullptr)
        {
            uri = std::make_shared<Native::Flow::Record::Collect::Application::Http::Uri>();
        }
        return uri;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(uri != nullptr)
    {
        children["uri"] = uri;
    }

    return children;
}

void Native::Flow::Record::Collect::Application::Http::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "referer")
    {
        referer = value;
    }
    if(value_path == "url")
    {
        url = value;
    }
    if(value_path == "user-agent")
    {
        user_agent = value;
    }
}

Native::Flow::Record::Collect::Application::Http::Uri::Uri()
    :
    statistics{YType::empty, "statistics"}
{
    yang_name = "uri"; yang_parent_name = "http";
}

Native::Flow::Record::Collect::Application::Http::Uri::~Uri()
{
}

bool Native::Flow::Record::Collect::Application::Http::Uri::has_data() const
{
    return statistics.is_set;
}

bool Native::Flow::Record::Collect::Application::Http::Uri::has_operation() const
{
    return is_set(operation)
	|| is_set(statistics.operation);
}

std::string Native::Flow::Record::Collect::Application::Http::Uri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uri";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Application::Http::Uri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uri' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (statistics.is_set || is_set(statistics.operation)) leaf_name_data.push_back(statistics.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Http::Uri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Http::Uri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Http::Uri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "statistics")
    {
        statistics = value;
    }
}

Native::Flow::Record::Collect::Application::Media::Media()
    :
    event{YType::empty, "event"}
    	,
    bytes(std::make_shared<Native::Flow::Record::Collect::Application::Media::Bytes>())
	,packets(std::make_shared<Native::Flow::Record::Collect::Application::Media::Packets>())
{
    bytes->parent = this;

    packets->parent = this;

    yang_name = "media"; yang_parent_name = "application";
}

Native::Flow::Record::Collect::Application::Media::~Media()
{
}

bool Native::Flow::Record::Collect::Application::Media::has_data() const
{
    return event.is_set
	|| (bytes !=  nullptr && bytes->has_data())
	|| (packets !=  nullptr && packets->has_data());
}

bool Native::Flow::Record::Collect::Application::Media::has_operation() const
{
    return is_set(operation)
	|| is_set(event.operation)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (packets !=  nullptr && packets->has_operation());
}

std::string Native::Flow::Record::Collect::Application::Media::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Application::Media::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Media' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event.is_set || is_set(event.operation)) leaf_name_data.push_back(event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Collect::Application::Media::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "packets")
    {
        if(packets == nullptr)
        {
            packets = std::make_shared<Native::Flow::Record::Collect::Application::Media::Packets>();
        }
        return packets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bytes != nullptr)
    {
        children["bytes"] = bytes;
    }

    if(packets != nullptr)
    {
        children["packets"] = packets;
    }

    return children;
}

void Native::Flow::Record::Collect::Application::Media::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event")
    {
        event = value;
    }
}

Native::Flow::Record::Collect::Application::Media::Bytes::Bytes()
    :
    counter(nullptr) // presence node
	,rate(nullptr) // presence node
{
    yang_name = "bytes"; yang_parent_name = "media";
}

Native::Flow::Record::Collect::Application::Media::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::has_data() const
{
    return (counter !=  nullptr && counter->has_data())
	|| (rate !=  nullptr && rate->has_data());
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::has_operation() const
{
    return is_set(operation)
	|| (counter !=  nullptr && counter->has_operation())
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Flow::Record::Collect::Application::Media::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Application::Media::Bytes::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Collect::Application::Media::Bytes::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Flow::Record::Collect::Application::Media::Bytes::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::Flow::Record::Collect::Application::Media::Bytes::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Collect::Application::Media::Bytes::Counter::Counter()
    :
    long_{YType::empty, "long"}
{
    yang_name = "counter"; yang_parent_name = "bytes";
}

Native::Flow::Record::Collect::Application::Media::Bytes::Counter::~Counter()
{
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Counter::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Counter::has_operation() const
{
    return is_set(operation)
	|| is_set(long_.operation);
}

std::string Native::Flow::Record::Collect::Application::Media::Bytes::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Application::Media::Bytes::Counter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::Bytes::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::Bytes::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Media::Bytes::Counter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "long")
    {
        long_ = value;
    }
}

Native::Flow::Record::Collect::Application::Media::Bytes::Rate::Rate()
    :
    per_flow(nullptr) // presence node
{
    yang_name = "rate"; yang_parent_name = "bytes";
}

Native::Flow::Record::Collect::Application::Media::Bytes::Rate::~Rate()
{
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Rate::has_data() const
{
    return (per_flow !=  nullptr && per_flow->has_data());
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Rate::has_operation() const
{
    return is_set(operation)
	|| (per_flow !=  nullptr && per_flow->has_operation());
}

std::string Native::Flow::Record::Collect::Application::Media::Bytes::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Application::Media::Bytes::Rate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::Bytes::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-flow")
    {
        if(per_flow == nullptr)
        {
            per_flow = std::make_shared<Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow>();
        }
        return per_flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::Bytes::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_flow != nullptr)
    {
        children["per-flow"] = per_flow;
    }

    return children;
}

void Native::Flow::Record::Collect::Application::Media::Bytes::Rate::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::PerFlow()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"}
{
    yang_name = "per-flow"; yang_parent_name = "rate";
}

Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::~PerFlow()
{
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-flow";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerFlow' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

Native::Flow::Record::Collect::Application::Media::Packets::Packets()
    :
    counter(nullptr) // presence node
	,rate(nullptr) // presence node
{
    yang_name = "packets"; yang_parent_name = "media";
}

Native::Flow::Record::Collect::Application::Media::Packets::~Packets()
{
}

bool Native::Flow::Record::Collect::Application::Media::Packets::has_data() const
{
    return (counter !=  nullptr && counter->has_data())
	|| (rate !=  nullptr && rate->has_data());
}

bool Native::Flow::Record::Collect::Application::Media::Packets::has_operation() const
{
    return is_set(operation)
	|| (counter !=  nullptr && counter->has_operation())
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Flow::Record::Collect::Application::Media::Packets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packets";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Application::Media::Packets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Packets' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::Packets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Collect::Application::Media::Packets::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Flow::Record::Collect::Application::Media::Packets::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::Packets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::Flow::Record::Collect::Application::Media::Packets::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Collect::Application::Media::Packets::Counter::Counter()
    :
    long_{YType::empty, "long"}
{
    yang_name = "counter"; yang_parent_name = "packets";
}

Native::Flow::Record::Collect::Application::Media::Packets::Counter::~Counter()
{
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Counter::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Counter::has_operation() const
{
    return is_set(operation)
	|| is_set(long_.operation);
}

std::string Native::Flow::Record::Collect::Application::Media::Packets::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Application::Media::Packets::Counter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::Packets::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::Packets::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Media::Packets::Counter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "long")
    {
        long_ = value;
    }
}

Native::Flow::Record::Collect::Application::Media::Packets::Rate::Rate()
    :
    variation(nullptr) // presence node
{
    yang_name = "rate"; yang_parent_name = "packets";
}

Native::Flow::Record::Collect::Application::Media::Packets::Rate::~Rate()
{
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Rate::has_data() const
{
    return (variation !=  nullptr && variation->has_data());
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Rate::has_operation() const
{
    return is_set(operation)
	|| (variation !=  nullptr && variation->has_operation());
}

std::string Native::Flow::Record::Collect::Application::Media::Packets::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Application::Media::Packets::Rate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::Packets::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "variation")
    {
        if(variation == nullptr)
        {
            variation = std::make_shared<Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation>();
        }
        return variation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::Packets::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(variation != nullptr)
    {
        children["variation"] = variation;
    }

    return children;
}

void Native::Flow::Record::Collect::Application::Media::Packets::Rate::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::Variation()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{
    yang_name = "variation"; yang_parent_name = "rate";
}

Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::~Variation()
{
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::has_data() const
{
    return max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation)
	|| is_set(sum.operation);
}

std::string Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "variation";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Variation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.operation)) leaf_name_data.push_back(sum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
    if(value_path == "sum")
    {
        sum = value;
    }
}

Native::Flow::Record::Collect::Application::Name::Name()
    :
    account_on_resolution{YType::empty, "account-on-resolution"}
{
    yang_name = "name"; yang_parent_name = "application";
}

Native::Flow::Record::Collect::Application::Name::~Name()
{
}

bool Native::Flow::Record::Collect::Application::Name::has_data() const
{
    return account_on_resolution.is_set;
}

bool Native::Flow::Record::Collect::Application::Name::has_operation() const
{
    return is_set(operation)
	|| is_set(account_on_resolution.operation);
}

std::string Native::Flow::Record::Collect::Application::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Application::Name::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Name' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Name::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "account-on-resolution")
    {
        account_on_resolution = value;
    }
}

Native::Flow::Record::Collect::Application::Nntp::Nntp()
    :
    group_name{YType::empty, "group-name"}
{
    yang_name = "nntp"; yang_parent_name = "application";
}

Native::Flow::Record::Collect::Application::Nntp::~Nntp()
{
}

bool Native::Flow::Record::Collect::Application::Nntp::has_data() const
{
    return group_name.is_set;
}

bool Native::Flow::Record::Collect::Application::Nntp::has_operation() const
{
    return is_set(operation)
	|| is_set(group_name.operation);
}

std::string Native::Flow::Record::Collect::Application::Nntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nntp";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Application::Nntp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nntp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Nntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Nntp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Nntp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-name")
    {
        group_name = value;
    }
}

Native::Flow::Record::Collect::Application::Pop3::Pop3()
    :
    server{YType::empty, "server"}
{
    yang_name = "pop3"; yang_parent_name = "application";
}

Native::Flow::Record::Collect::Application::Pop3::~Pop3()
{
}

bool Native::Flow::Record::Collect::Application::Pop3::has_data() const
{
    return server.is_set;
}

bool Native::Flow::Record::Collect::Application::Pop3::has_operation() const
{
    return is_set(operation)
	|| is_set(server.operation);
}

std::string Native::Flow::Record::Collect::Application::Pop3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop3";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Application::Pop3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pop3' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Pop3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Pop3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Pop3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server")
    {
        server = value;
    }
}

Native::Flow::Record::Collect::Application::Rtmp::Rtmp()
    :
    pageurl{YType::empty, "pageUrl"}
{
    yang_name = "rtmp"; yang_parent_name = "application";
}

Native::Flow::Record::Collect::Application::Rtmp::~Rtmp()
{
}

bool Native::Flow::Record::Collect::Application::Rtmp::has_data() const
{
    return pageurl.is_set;
}

bool Native::Flow::Record::Collect::Application::Rtmp::has_operation() const
{
    return is_set(operation)
	|| is_set(pageurl.operation);
}

std::string Native::Flow::Record::Collect::Application::Rtmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtmp";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Application::Rtmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rtmp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pageurl.is_set || is_set(pageurl.operation)) leaf_name_data.push_back(pageurl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Rtmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Rtmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Rtmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pageUrl")
    {
        pageurl = value;
    }
}

Native::Flow::Record::Collect::Application::Rtsp::Rtsp()
    :
    host{YType::empty, "host"}
{
    yang_name = "rtsp"; yang_parent_name = "application";
}

Native::Flow::Record::Collect::Application::Rtsp::~Rtsp()
{
}

bool Native::Flow::Record::Collect::Application::Rtsp::has_data() const
{
    return host.is_set;
}

bool Native::Flow::Record::Collect::Application::Rtsp::has_operation() const
{
    return is_set(operation)
	|| is_set(host.operation);
}

std::string Native::Flow::Record::Collect::Application::Rtsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtsp";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Application::Rtsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rtsp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Rtsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Rtsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Rtsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host")
    {
        host = value;
    }
}

Native::Flow::Record::Collect::Application::Sip::Sip()
    :
    destination{YType::empty, "destination"},
    source{YType::empty, "source"}
{
    yang_name = "sip"; yang_parent_name = "application";
}

Native::Flow::Record::Collect::Application::Sip::~Sip()
{
}

bool Native::Flow::Record::Collect::Application::Sip::has_data() const
{
    return destination.is_set
	|| source.is_set;
}

bool Native::Flow::Record::Collect::Application::Sip::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(source.operation);
}

std::string Native::Flow::Record::Collect::Application::Sip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sip";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Application::Sip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Sip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Sip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Sip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

Native::Flow::Record::Collect::Application::Smtp::Smtp()
    :
    sender{YType::empty, "sender"},
    server{YType::empty, "server"}
{
    yang_name = "smtp"; yang_parent_name = "application";
}

Native::Flow::Record::Collect::Application::Smtp::~Smtp()
{
}

bool Native::Flow::Record::Collect::Application::Smtp::has_data() const
{
    return sender.is_set
	|| server.is_set;
}

bool Native::Flow::Record::Collect::Application::Smtp::has_operation() const
{
    return is_set(operation)
	|| is_set(sender.operation)
	|| is_set(server.operation);
}

std::string Native::Flow::Record::Collect::Application::Smtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "smtp";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Application::Smtp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Smtp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sender.is_set || is_set(sender.operation)) leaf_name_data.push_back(sender.get_name_leafdata());
    if (server.is_set || is_set(server.operation)) leaf_name_data.push_back(server.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Smtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Smtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Smtp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sender")
    {
        sender = value;
    }
    if(value_path == "server")
    {
        server = value;
    }
}

Native::Flow::Record::Collect::Application::Ssl::Ssl()
    :
    common_name{YType::empty, "common-name"}
{
    yang_name = "ssl"; yang_parent_name = "application";
}

Native::Flow::Record::Collect::Application::Ssl::~Ssl()
{
}

bool Native::Flow::Record::Collect::Application::Ssl::has_data() const
{
    return common_name.is_set;
}

bool Native::Flow::Record::Collect::Application::Ssl::has_operation() const
{
    return is_set(operation)
	|| is_set(common_name.operation);
}

std::string Native::Flow::Record::Collect::Application::Ssl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssl";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Application::Ssl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ssl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_name.is_set || is_set(common_name.operation)) leaf_name_data.push_back(common_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Ssl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Ssl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Ssl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common-name")
    {
        common_name = value;
    }
}

Native::Flow::Record::Collect::Connection::Connection()
    :
    id{YType::empty, "id"},
    initiator{YType::empty, "initiator"},
    new_connections{YType::empty, "new-connections"},
    sum_duration{YType::empty, "sum-duration"},
    transaction_id{YType::empty, "transaction-id"}
    	,
    client(std::make_shared<Native::Flow::Record::Collect::Connection::Client>())
	,delay(std::make_shared<Native::Flow::Record::Collect::Connection::Delay>())
	,server(std::make_shared<Native::Flow::Record::Collect::Connection::Server>())
	,transaction(std::make_shared<Native::Flow::Record::Collect::Connection::Transaction>())
{
    client->parent = this;

    delay->parent = this;

    server->parent = this;

    transaction->parent = this;

    yang_name = "connection"; yang_parent_name = "collect";
}

Native::Flow::Record::Collect::Connection::~Connection()
{
}

bool Native::Flow::Record::Collect::Connection::has_data() const
{
    return id.is_set
	|| initiator.is_set
	|| new_connections.is_set
	|| sum_duration.is_set
	|| transaction_id.is_set
	|| (client !=  nullptr && client->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (transaction !=  nullptr && transaction->has_data());
}

bool Native::Flow::Record::Collect::Connection::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(initiator.operation)
	|| is_set(new_connections.operation)
	|| is_set(sum_duration.operation)
	|| is_set(transaction_id.operation)
	|| (client !=  nullptr && client->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (transaction !=  nullptr && transaction->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connection' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (initiator.is_set || is_set(initiator.operation)) leaf_name_data.push_back(initiator.get_name_leafdata());
    if (new_connections.is_set || is_set(new_connections.operation)) leaf_name_data.push_back(new_connections.get_name_leafdata());
    if (sum_duration.is_set || is_set(sum_duration.operation)) leaf_name_data.push_back(sum_duration.get_name_leafdata());
    if (transaction_id.is_set || is_set(transaction_id.operation)) leaf_name_data.push_back(transaction_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Flow::Record::Collect::Connection::Client>();
        }
        return client;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Flow::Record::Collect::Connection::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Flow::Record::Collect::Connection::Server>();
        }
        return server;
    }

    if(child_yang_name == "transaction")
    {
        if(transaction == nullptr)
        {
            transaction = std::make_shared<Native::Flow::Record::Collect::Connection::Transaction>();
        }
        return transaction;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    if(transaction != nullptr)
    {
        children["transaction"] = transaction;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "initiator")
    {
        initiator = value;
    }
    if(value_path == "new-connections")
    {
        new_connections = value;
    }
    if(value_path == "sum-duration")
    {
        sum_duration = value;
    }
    if(value_path == "transaction-id")
    {
        transaction_id = value;
    }
}

Native::Flow::Record::Collect::Connection::Client::Client()
    :
    all{YType::empty, "all"}
    	,
    counter(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter>())
	,ipv4(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Ipv4>())
	,ipv6(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Ipv6>())
	,transport(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Transport>())
{
    counter->parent = this;

    ipv4->parent = this;

    ipv6->parent = this;

    transport->parent = this;

    yang_name = "client"; yang_parent_name = "connection";
}

Native::Flow::Record::Collect::Connection::Client::~Client()
{
}

bool Native::Flow::Record::Collect::Connection::Client::has_data() const
{
    return all.is_set
	|| (counter !=  nullptr && counter->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Collect::Connection::Client::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| (counter !=  nullptr && counter->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Client' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Flow::Record::Collect::Connection::Client::Counter::Counter()
    :
    bytes(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Bytes>())
	,packets(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Packets>())
{
    bytes->parent = this;

    packets->parent = this;

    yang_name = "counter"; yang_parent_name = "client";
}

Native::Flow::Record::Collect::Connection::Client::Counter::~Counter()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::has_data() const
{
    return (bytes !=  nullptr && bytes->has_data())
	|| (packets !=  nullptr && packets->has_data());
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::has_operation() const
{
    return is_set(operation)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (packets !=  nullptr && packets->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Client::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Client::Counter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Client::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "packets")
    {
        if(packets == nullptr)
        {
            packets = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Packets>();
        }
        return packets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Client::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bytes != nullptr)
    {
        children["bytes"] = bytes;
    }

    if(packets != nullptr)
    {
        children["packets"] = packets;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::Client::Counter::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Bytes()
    :
    long_{YType::empty, "long"},
    retransmitted{YType::empty, "retransmitted"}
    	,
    network(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network>())
	,transport(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport>())
{
    network->parent = this;

    transport->parent = this;

    yang_name = "bytes"; yang_parent_name = "counter";
}

Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::has_data() const
{
    return long_.is_set
	|| retransmitted.is_set
	|| (network !=  nullptr && network->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::has_operation() const
{
    return is_set(operation)
	|| is_set(long_.operation)
	|| is_set(retransmitted.operation)
	|| (network !=  nullptr && network->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::get_entity_path(Entity* ancestor) const
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

    if (long_.is_set || is_set(long_.operation)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (retransmitted.is_set || is_set(retransmitted.operation)) leaf_name_data.push_back(retransmitted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network>();
        }
        return network;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "long")
    {
        long_ = value;
    }
    if(value_path == "retransmitted")
    {
        retransmitted = value;
    }
}

Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::Network()
    :
    long_{YType::empty, "long"}
{
    yang_name = "network"; yang_parent_name = "bytes";
}

Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::~Network()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::has_operation() const
{
    return is_set(operation)
	|| is_set(long_.operation);
}

std::string Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::get_entity_path(Entity* ancestor) const
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

    if (long_.is_set || is_set(long_.operation)) leaf_name_data.push_back(long_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "long")
    {
        long_ = value;
    }
}

Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::Transport()
    :
    long_{YType::empty, "long"}
{
    yang_name = "transport"; yang_parent_name = "bytes";
}

Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::~Transport()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::has_operation() const
{
    return is_set(operation)
	|| is_set(long_.operation);
}

std::string Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::get_entity_path(Entity* ancestor) const
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

    if (long_.is_set || is_set(long_.operation)) leaf_name_data.push_back(long_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "long")
    {
        long_ = value;
    }
}

Native::Flow::Record::Collect::Connection::Client::Counter::Packets::Packets()
    :
    long_{YType::empty, "long"},
    retransmitted{YType::empty, "retransmitted"}
{
    yang_name = "packets"; yang_parent_name = "counter";
}

Native::Flow::Record::Collect::Connection::Client::Counter::Packets::~Packets()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Packets::has_data() const
{
    return long_.is_set
	|| retransmitted.is_set;
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Packets::has_operation() const
{
    return is_set(operation)
	|| is_set(long_.operation)
	|| is_set(retransmitted.operation);
}

std::string Native::Flow::Record::Collect::Connection::Client::Counter::Packets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packets";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Client::Counter::Packets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Packets' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.operation)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (retransmitted.is_set || is_set(retransmitted.operation)) leaf_name_data.push_back(retransmitted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Client::Counter::Packets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Client::Counter::Packets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Client::Counter::Packets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "long")
    {
        long_ = value;
    }
    if(value_path == "retransmitted")
    {
        retransmitted = value;
    }
}

Native::Flow::Record::Collect::Connection::Client::Ipv4::Ipv4()
    :
    address{YType::empty, "address"}
{
    yang_name = "ipv4"; yang_parent_name = "client";
}

Native::Flow::Record::Collect::Connection::Client::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Ipv4::has_data() const
{
    return address.is_set;
}

bool Native::Flow::Record::Collect::Connection::Client::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::Flow::Record::Collect::Connection::Client::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Client::Ipv4::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Client::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Client::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Client::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Flow::Record::Collect::Connection::Client::Ipv6::Ipv6()
    :
    address{YType::empty, "address"}
{
    yang_name = "ipv6"; yang_parent_name = "client";
}

Native::Flow::Record::Collect::Connection::Client::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Ipv6::has_data() const
{
    return address.is_set;
}

bool Native::Flow::Record::Collect::Connection::Client::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::Flow::Record::Collect::Connection::Client::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Client::Ipv6::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Client::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Client::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Client::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Flow::Record::Collect::Connection::Client::Transport::Transport()
    :
    port{YType::empty, "port"}
{
    yang_name = "transport"; yang_parent_name = "client";
}

Native::Flow::Record::Collect::Connection::Client::Transport::~Transport()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Transport::has_data() const
{
    return port.is_set;
}

bool Native::Flow::Record::Collect::Connection::Client::Transport::has_operation() const
{
    return is_set(operation)
	|| is_set(port.operation);
}

std::string Native::Flow::Record::Collect::Connection::Client::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Client::Transport::get_entity_path(Entity* ancestor) const
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

    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Client::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Client::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Client::Transport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port")
    {
        port = value;
    }
}

Native::Flow::Record::Collect::Connection::Delay::Delay()
    :
    all{YType::empty, "all"}
    	,
    application(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Application>())
	,network(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network>())
	,response(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Response>())
{
    application->parent = this;

    network->parent = this;

    response->parent = this;

    yang_name = "delay"; yang_parent_name = "connection";
}

Native::Flow::Record::Collect::Connection::Delay::~Delay()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::has_data() const
{
    return all.is_set
	|| (application !=  nullptr && application->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (response !=  nullptr && response->has_data());
}

bool Native::Flow::Record::Collect::Connection::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| (application !=  nullptr && application->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (response !=  nullptr && response->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Delay::get_entity_path(Entity* ancestor) const
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

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Application>();
        }
        return application;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network>();
        }
        return network;
    }

    if(child_yang_name == "response")
    {
        if(response == nullptr)
        {
            response = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Response>();
        }
        return response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(response != nullptr)
    {
        children["response"] = response;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Flow::Record::Collect::Connection::Delay::Application::Application()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{
    yang_name = "application"; yang_parent_name = "delay";
}

Native::Flow::Record::Collect::Connection::Delay::Application::~Application()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Application::has_data() const
{
    return max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Application::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation)
	|| is_set(sum.operation);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Delay::Application::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Application' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.operation)) leaf_name_data.push_back(sum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Application::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
    if(value_path == "sum")
    {
        sum = value;
    }
}

Native::Flow::Record::Collect::Connection::Delay::Network::Network()
    :
    client_to_server(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer>())
	,long_lived(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived>())
	,to_client(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::ToClient>())
	,to_server(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::ToServer>())
{
    client_to_server->parent = this;

    long_lived->parent = this;

    to_client->parent = this;

    to_server->parent = this;

    yang_name = "network"; yang_parent_name = "delay";
}

Native::Flow::Record::Collect::Connection::Delay::Network::~Network()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::has_data() const
{
    return (client_to_server !=  nullptr && client_to_server->has_data())
	|| (long_lived !=  nullptr && long_lived->has_data())
	|| (to_client !=  nullptr && to_client->has_data())
	|| (to_server !=  nullptr && to_server->has_data());
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::has_operation() const
{
    return is_set(operation)
	|| (client_to_server !=  nullptr && client_to_server->has_operation())
	|| (long_lived !=  nullptr && long_lived->has_operation())
	|| (to_client !=  nullptr && to_client->has_operation())
	|| (to_server !=  nullptr && to_server->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Delay::Network::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-to-server")
    {
        if(client_to_server == nullptr)
        {
            client_to_server = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer>();
        }
        return client_to_server;
    }

    if(child_yang_name == "long-lived")
    {
        if(long_lived == nullptr)
        {
            long_lived = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived>();
        }
        return long_lived;
    }

    if(child_yang_name == "to-client")
    {
        if(to_client == nullptr)
        {
            to_client = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::ToClient>();
        }
        return to_client;
    }

    if(child_yang_name == "to-server")
    {
        if(to_server == nullptr)
        {
            to_server = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::ToServer>();
        }
        return to_server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_to_server != nullptr)
    {
        children["client-to-server"] = client_to_server;
    }

    if(long_lived != nullptr)
    {
        children["long-lived"] = long_lived;
    }

    if(to_client != nullptr)
    {
        children["to-client"] = to_client;
    }

    if(to_server != nullptr)
    {
        children["to-server"] = to_server;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::ClientToServer()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    num_samples{YType::empty, "num-samples"},
    sum{YType::empty, "sum"}
{
    yang_name = "client-to-server"; yang_parent_name = "network";
}

Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::~ClientToServer()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::has_data() const
{
    return max.is_set
	|| min.is_set
	|| num_samples.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation)
	|| is_set(num_samples.operation)
	|| is_set(sum.operation);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-to-server";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientToServer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());
    if (num_samples.is_set || is_set(num_samples.operation)) leaf_name_data.push_back(num_samples.get_name_leafdata());
    if (sum.is_set || is_set(sum.operation)) leaf_name_data.push_back(sum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
    if(value_path == "num-samples")
    {
        num_samples = value;
    }
    if(value_path == "sum")
    {
        sum = value;
    }
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::LongLived()
    :
    client_to_serve(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe>())
	,to_client(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient>())
	,to_serve(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe>())
{
    client_to_serve->parent = this;

    to_client->parent = this;

    to_serve->parent = this;

    yang_name = "long-lived"; yang_parent_name = "network";
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::~LongLived()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::has_data() const
{
    return (client_to_serve !=  nullptr && client_to_serve->has_data())
	|| (to_client !=  nullptr && to_client->has_data())
	|| (to_serve !=  nullptr && to_serve->has_data());
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::has_operation() const
{
    return is_set(operation)
	|| (client_to_serve !=  nullptr && client_to_serve->has_operation())
	|| (to_client !=  nullptr && to_client->has_operation())
	|| (to_serve !=  nullptr && to_serve->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "long-lived";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LongLived' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-to-serve")
    {
        if(client_to_serve == nullptr)
        {
            client_to_serve = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe>();
        }
        return client_to_serve;
    }

    if(child_yang_name == "to-client")
    {
        if(to_client == nullptr)
        {
            to_client = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient>();
        }
        return to_client;
    }

    if(child_yang_name == "to-serve")
    {
        if(to_serve == nullptr)
        {
            to_serve = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe>();
        }
        return to_serve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_to_serve != nullptr)
    {
        children["client-to-serve"] = client_to_serve;
    }

    if(to_client != nullptr)
    {
        children["to-client"] = to_client;
    }

    if(to_serve != nullptr)
    {
        children["to-serve"] = to_serve;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::ClientToServe()
    :
    sum{YType::empty, "sum"}
{
    yang_name = "client-to-serve"; yang_parent_name = "long-lived";
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::~ClientToServe()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::has_data() const
{
    return sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::has_operation() const
{
    return is_set(operation)
	|| is_set(sum.operation);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-to-serve";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientToServe' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sum")
    {
        sum = value;
    }
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::ToClient()
    :
    sum{YType::empty, "sum"}
{
    yang_name = "to-client"; yang_parent_name = "long-lived";
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::~ToClient()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::has_data() const
{
    return sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::has_operation() const
{
    return is_set(operation)
	|| is_set(sum.operation);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-client";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ToClient' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sum")
    {
        sum = value;
    }
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::ToServe()
    :
    sum{YType::empty, "sum"}
{
    yang_name = "to-serve"; yang_parent_name = "long-lived";
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::~ToServe()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::has_data() const
{
    return sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::has_operation() const
{
    return is_set(operation)
	|| is_set(sum.operation);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-serve";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ToServe' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sum")
    {
        sum = value;
    }
}

Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::ToClient()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    num_samples{YType::empty, "num-samples"},
    sum{YType::empty, "sum"}
{
    yang_name = "to-client"; yang_parent_name = "network";
}

Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::~ToClient()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::has_data() const
{
    return max.is_set
	|| min.is_set
	|| num_samples.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation)
	|| is_set(num_samples.operation)
	|| is_set(sum.operation);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-client";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ToClient' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());
    if (num_samples.is_set || is_set(num_samples.operation)) leaf_name_data.push_back(num_samples.get_name_leafdata());
    if (sum.is_set || is_set(sum.operation)) leaf_name_data.push_back(sum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
    if(value_path == "num-samples")
    {
        num_samples = value;
    }
    if(value_path == "sum")
    {
        sum = value;
    }
}

Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::ToServer()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    num_samples{YType::empty, "num-samples"},
    sum{YType::empty, "sum"}
{
    yang_name = "to-server"; yang_parent_name = "network";
}

Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::~ToServer()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::has_data() const
{
    return max.is_set
	|| min.is_set
	|| num_samples.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation)
	|| is_set(num_samples.operation)
	|| is_set(sum.operation);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-server";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ToServer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());
    if (num_samples.is_set || is_set(num_samples.operation)) leaf_name_data.push_back(num_samples.get_name_leafdata());
    if (sum.is_set || is_set(sum.operation)) leaf_name_data.push_back(sum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
    if(value_path == "num-samples")
    {
        num_samples = value;
    }
    if(value_path == "sum")
    {
        sum = value;
    }
}

Native::Flow::Record::Collect::Connection::Delay::Response::Response()
    :
    client_to_server(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer>())
	,to_server(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Response::ToServer>())
{
    client_to_server->parent = this;

    to_server->parent = this;

    yang_name = "response"; yang_parent_name = "delay";
}

Native::Flow::Record::Collect::Connection::Delay::Response::~Response()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::has_data() const
{
    return (client_to_server !=  nullptr && client_to_server->has_data())
	|| (to_server !=  nullptr && to_server->has_data());
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::has_operation() const
{
    return is_set(operation)
	|| (client_to_server !=  nullptr && client_to_server->has_operation())
	|| (to_server !=  nullptr && to_server->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Delay::Response::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "response";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Delay::Response::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Response' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Response::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-to-server")
    {
        if(client_to_server == nullptr)
        {
            client_to_server = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer>();
        }
        return client_to_server;
    }

    if(child_yang_name == "to-server")
    {
        if(to_server == nullptr)
        {
            to_server = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Response::ToServer>();
        }
        return to_server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Response::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_to_server != nullptr)
    {
        children["client-to-server"] = client_to_server;
    }

    if(to_server != nullptr)
    {
        children["to-server"] = to_server;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Response::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::ClientToServer()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{
    yang_name = "client-to-server"; yang_parent_name = "response";
}

Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::~ClientToServer()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::has_data() const
{
    return max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation)
	|| is_set(sum.operation);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-to-server";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientToServer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.operation)) leaf_name_data.push_back(sum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
    if(value_path == "sum")
    {
        sum = value;
    }
}

Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::ToServer()
    :
    histogram{YType::empty, "histogram"},
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{
    yang_name = "to-server"; yang_parent_name = "response";
}

Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::~ToServer()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::has_data() const
{
    return histogram.is_set
	|| max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::has_operation() const
{
    return is_set(operation)
	|| is_set(histogram.operation)
	|| is_set(max.operation)
	|| is_set(min.operation)
	|| is_set(sum.operation);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-server";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ToServer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (histogram.is_set || is_set(histogram.operation)) leaf_name_data.push_back(histogram.get_name_leafdata());
    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.operation)) leaf_name_data.push_back(sum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "histogram")
    {
        histogram = value;
    }
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
    if(value_path == "sum")
    {
        sum = value;
    }
}

Native::Flow::Record::Collect::Connection::Server::Server()
    :
    all{YType::empty, "all"}
    	,
    counter(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter>())
	,ipv4(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Ipv4>())
	,ipv6(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Ipv6>())
	,transport(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Transport>())
{
    counter->parent = this;

    ipv4->parent = this;

    ipv6->parent = this;

    transport->parent = this;

    yang_name = "server"; yang_parent_name = "connection";
}

Native::Flow::Record::Collect::Connection::Server::~Server()
{
}

bool Native::Flow::Record::Collect::Connection::Server::has_data() const
{
    return all.is_set
	|| (counter !=  nullptr && counter->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Collect::Connection::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| (counter !=  nullptr && counter->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Server' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Flow::Record::Collect::Connection::Server::Counter::Counter()
    :
    responses{YType::empty, "responses"}
    	,
    bytes(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Bytes>())
	,packets(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Packets>())
{
    bytes->parent = this;

    packets->parent = this;

    yang_name = "counter"; yang_parent_name = "server";
}

Native::Flow::Record::Collect::Connection::Server::Counter::~Counter()
{
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::has_data() const
{
    return responses.is_set
	|| (bytes !=  nullptr && bytes->has_data())
	|| (packets !=  nullptr && packets->has_data());
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::has_operation() const
{
    return is_set(operation)
	|| is_set(responses.operation)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (packets !=  nullptr && packets->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Server::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Server::Counter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (responses.is_set || is_set(responses.operation)) leaf_name_data.push_back(responses.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Server::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "packets")
    {
        if(packets == nullptr)
        {
            packets = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Packets>();
        }
        return packets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Server::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bytes != nullptr)
    {
        children["bytes"] = bytes;
    }

    if(packets != nullptr)
    {
        children["packets"] = packets;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::Server::Counter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "responses")
    {
        responses = value;
    }
}

Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Bytes()
    :
    long_{YType::empty, "long"},
    retransmitted{YType::empty, "retransmitted"}
    	,
    network(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network>())
	,transport(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport>())
{
    network->parent = this;

    transport->parent = this;

    yang_name = "bytes"; yang_parent_name = "counter";
}

Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::has_data() const
{
    return long_.is_set
	|| retransmitted.is_set
	|| (network !=  nullptr && network->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::has_operation() const
{
    return is_set(operation)
	|| is_set(long_.operation)
	|| is_set(retransmitted.operation)
	|| (network !=  nullptr && network->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::get_entity_path(Entity* ancestor) const
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

    if (long_.is_set || is_set(long_.operation)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (retransmitted.is_set || is_set(retransmitted.operation)) leaf_name_data.push_back(retransmitted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network>();
        }
        return network;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "long")
    {
        long_ = value;
    }
    if(value_path == "retransmitted")
    {
        retransmitted = value;
    }
}

Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::Network()
    :
    long_{YType::empty, "long"}
{
    yang_name = "network"; yang_parent_name = "bytes";
}

Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::~Network()
{
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::has_operation() const
{
    return is_set(operation)
	|| is_set(long_.operation);
}

std::string Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::get_entity_path(Entity* ancestor) const
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

    if (long_.is_set || is_set(long_.operation)) leaf_name_data.push_back(long_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "long")
    {
        long_ = value;
    }
}

Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::Transport()
    :
    long_{YType::empty, "long"}
{
    yang_name = "transport"; yang_parent_name = "bytes";
}

Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::~Transport()
{
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::has_operation() const
{
    return is_set(operation)
	|| is_set(long_.operation);
}

std::string Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::get_entity_path(Entity* ancestor) const
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

    if (long_.is_set || is_set(long_.operation)) leaf_name_data.push_back(long_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "long")
    {
        long_ = value;
    }
}

Native::Flow::Record::Collect::Connection::Server::Counter::Packets::Packets()
    :
    long_{YType::empty, "long"},
    retransmitted{YType::empty, "retransmitted"}
{
    yang_name = "packets"; yang_parent_name = "counter";
}

Native::Flow::Record::Collect::Connection::Server::Counter::Packets::~Packets()
{
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Packets::has_data() const
{
    return long_.is_set
	|| retransmitted.is_set;
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Packets::has_operation() const
{
    return is_set(operation)
	|| is_set(long_.operation)
	|| is_set(retransmitted.operation);
}

std::string Native::Flow::Record::Collect::Connection::Server::Counter::Packets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packets";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Server::Counter::Packets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Packets' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.operation)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (retransmitted.is_set || is_set(retransmitted.operation)) leaf_name_data.push_back(retransmitted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Server::Counter::Packets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Server::Counter::Packets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Server::Counter::Packets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "long")
    {
        long_ = value;
    }
    if(value_path == "retransmitted")
    {
        retransmitted = value;
    }
}

Native::Flow::Record::Collect::Connection::Server::Ipv4::Ipv4()
    :
    address{YType::empty, "address"}
{
    yang_name = "ipv4"; yang_parent_name = "server";
}

Native::Flow::Record::Collect::Connection::Server::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Collect::Connection::Server::Ipv4::has_data() const
{
    return address.is_set;
}

bool Native::Flow::Record::Collect::Connection::Server::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::Flow::Record::Collect::Connection::Server::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Server::Ipv4::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Server::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Server::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Server::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Flow::Record::Collect::Connection::Server::Ipv6::Ipv6()
    :
    address{YType::empty, "address"}
{
    yang_name = "ipv6"; yang_parent_name = "server";
}

Native::Flow::Record::Collect::Connection::Server::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Collect::Connection::Server::Ipv6::has_data() const
{
    return address.is_set;
}

bool Native::Flow::Record::Collect::Connection::Server::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::Flow::Record::Collect::Connection::Server::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Server::Ipv6::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Server::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Server::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Server::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Flow::Record::Collect::Connection::Server::Transport::Transport()
    :
    port{YType::empty, "port"}
{
    yang_name = "transport"; yang_parent_name = "server";
}

Native::Flow::Record::Collect::Connection::Server::Transport::~Transport()
{
}

bool Native::Flow::Record::Collect::Connection::Server::Transport::has_data() const
{
    return port.is_set;
}

bool Native::Flow::Record::Collect::Connection::Server::Transport::has_operation() const
{
    return is_set(operation)
	|| is_set(port.operation);
}

std::string Native::Flow::Record::Collect::Connection::Server::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Server::Transport::get_entity_path(Entity* ancestor) const
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

    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Server::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Server::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Server::Transport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port")
    {
        port = value;
    }
}

Native::Flow::Record::Collect::Connection::Transaction::Transaction()
    :
    all{YType::empty, "all"}
    	,
    counter(std::make_shared<Native::Flow::Record::Collect::Connection::Transaction::Counter>())
	,duration(std::make_shared<Native::Flow::Record::Collect::Connection::Transaction::Duration>())
{
    counter->parent = this;

    duration->parent = this;

    yang_name = "transaction"; yang_parent_name = "connection";
}

Native::Flow::Record::Collect::Connection::Transaction::~Transaction()
{
}

bool Native::Flow::Record::Collect::Connection::Transaction::has_data() const
{
    return all.is_set
	|| (counter !=  nullptr && counter->has_data())
	|| (duration !=  nullptr && duration->has_data());
}

bool Native::Flow::Record::Collect::Connection::Transaction::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| (counter !=  nullptr && counter->has_operation())
	|| (duration !=  nullptr && duration->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Transaction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transaction";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Transaction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transaction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Transaction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Collect::Connection::Transaction::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "duration")
    {
        if(duration == nullptr)
        {
            duration = std::make_shared<Native::Flow::Record::Collect::Connection::Transaction::Duration>();
        }
        return duration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Transaction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(duration != nullptr)
    {
        children["duration"] = duration;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::Transaction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Flow::Record::Collect::Connection::Transaction::Counter::Counter()
    :
    complete{YType::empty, "complete"}
{
    yang_name = "counter"; yang_parent_name = "transaction";
}

Native::Flow::Record::Collect::Connection::Transaction::Counter::~Counter()
{
}

bool Native::Flow::Record::Collect::Connection::Transaction::Counter::has_data() const
{
    return complete.is_set;
}

bool Native::Flow::Record::Collect::Connection::Transaction::Counter::has_operation() const
{
    return is_set(operation)
	|| is_set(complete.operation);
}

std::string Native::Flow::Record::Collect::Connection::Transaction::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Transaction::Counter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete.is_set || is_set(complete.operation)) leaf_name_data.push_back(complete.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Transaction::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Transaction::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Transaction::Counter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "complete")
    {
        complete = value;
    }
}

Native::Flow::Record::Collect::Connection::Transaction::Duration::Duration()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{
    yang_name = "duration"; yang_parent_name = "transaction";
}

Native::Flow::Record::Collect::Connection::Transaction::Duration::~Duration()
{
}

bool Native::Flow::Record::Collect::Connection::Transaction::Duration::has_data() const
{
    return max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Transaction::Duration::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation)
	|| is_set(sum.operation);
}

std::string Native::Flow::Record::Collect::Connection::Transaction::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Connection::Transaction::Duration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Duration' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.operation)) leaf_name_data.push_back(sum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Transaction::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Transaction::Duration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Transaction::Duration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
    if(value_path == "sum")
    {
        sum = value;
    }
}

Native::Flow::Record::Collect::Counter::Counter()
    :
    flows{YType::empty, "flows"}
    	,
    bytes(nullptr) // presence node
	,packets(nullptr) // presence node
{
    yang_name = "counter"; yang_parent_name = "collect";
}

Native::Flow::Record::Collect::Counter::~Counter()
{
}

bool Native::Flow::Record::Collect::Counter::has_data() const
{
    return flows.is_set
	|| (bytes !=  nullptr && bytes->has_data())
	|| (packets !=  nullptr && packets->has_data());
}

bool Native::Flow::Record::Collect::Counter::has_operation() const
{
    return is_set(operation)
	|| is_set(flows.operation)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (packets !=  nullptr && packets->has_operation());
}

std::string Native::Flow::Record::Collect::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Counter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flows.is_set || is_set(flows.operation)) leaf_name_data.push_back(flows.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Collect::Counter::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "packets")
    {
        if(packets == nullptr)
        {
            packets = std::make_shared<Native::Flow::Record::Collect::Counter::Packets>();
        }
        return packets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bytes != nullptr)
    {
        children["bytes"] = bytes;
    }

    if(packets != nullptr)
    {
        children["packets"] = packets;
    }

    return children;
}

void Native::Flow::Record::Collect::Counter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flows")
    {
        flows = value;
    }
}

Native::Flow::Record::Collect::Counter::Bytes::Bytes()
    :
    long_{YType::empty, "long"}
    	,
    rate(nullptr) // presence node
	,squared(std::make_shared<Native::Flow::Record::Collect::Counter::Bytes::Squared>())
{
    squared->parent = this;

    yang_name = "bytes"; yang_parent_name = "counter";
}

Native::Flow::Record::Collect::Counter::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Collect::Counter::Bytes::has_data() const
{
    return long_.is_set
	|| (rate !=  nullptr && rate->has_data())
	|| (squared !=  nullptr && squared->has_data());
}

bool Native::Flow::Record::Collect::Counter::Bytes::has_operation() const
{
    return is_set(operation)
	|| is_set(long_.operation)
	|| (rate !=  nullptr && rate->has_operation())
	|| (squared !=  nullptr && squared->has_operation());
}

std::string Native::Flow::Record::Collect::Counter::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Counter::Bytes::get_entity_path(Entity* ancestor) const
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

    if (long_.is_set || is_set(long_.operation)) leaf_name_data.push_back(long_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Counter::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Flow::Record::Collect::Counter::Bytes::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "squared")
    {
        if(squared == nullptr)
        {
            squared = std::make_shared<Native::Flow::Record::Collect::Counter::Bytes::Squared>();
        }
        return squared;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Counter::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    if(squared != nullptr)
    {
        children["squared"] = squared;
    }

    return children;
}

void Native::Flow::Record::Collect::Counter::Bytes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "long")
    {
        long_ = value;
    }
}

Native::Flow::Record::Collect::Counter::Bytes::Rate::Rate()
    :
    per_flow(nullptr) // presence node
{
    yang_name = "rate"; yang_parent_name = "bytes";
}

Native::Flow::Record::Collect::Counter::Bytes::Rate::~Rate()
{
}

bool Native::Flow::Record::Collect::Counter::Bytes::Rate::has_data() const
{
    return (per_flow !=  nullptr && per_flow->has_data());
}

bool Native::Flow::Record::Collect::Counter::Bytes::Rate::has_operation() const
{
    return is_set(operation)
	|| (per_flow !=  nullptr && per_flow->has_operation());
}

std::string Native::Flow::Record::Collect::Counter::Bytes::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Counter::Bytes::Rate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Counter::Bytes::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-flow")
    {
        if(per_flow == nullptr)
        {
            per_flow = std::make_shared<Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow>();
        }
        return per_flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Counter::Bytes::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_flow != nullptr)
    {
        children["per-flow"] = per_flow;
    }

    return children;
}

void Native::Flow::Record::Collect::Counter::Bytes::Rate::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow::PerFlow()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"}
{
    yang_name = "per-flow"; yang_parent_name = "rate";
}

Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow::~PerFlow()
{
}

bool Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-flow";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerFlow' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

Native::Flow::Record::Collect::Counter::Bytes::Squared::Squared()
    :
    long_{YType::empty, "long"}
{
    yang_name = "squared"; yang_parent_name = "bytes";
}

Native::Flow::Record::Collect::Counter::Bytes::Squared::~Squared()
{
}

bool Native::Flow::Record::Collect::Counter::Bytes::Squared::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Collect::Counter::Bytes::Squared::has_operation() const
{
    return is_set(operation)
	|| is_set(long_.operation);
}

std::string Native::Flow::Record::Collect::Counter::Bytes::Squared::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "squared";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Counter::Bytes::Squared::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Squared' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Counter::Bytes::Squared::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Counter::Bytes::Squared::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Counter::Bytes::Squared::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "long")
    {
        long_ = value;
    }
}

Native::Flow::Record::Collect::Counter::Packets::Packets()
    :
    dropped{YType::empty, "dropped"},
    long_{YType::empty, "long"}
    	,
    rate(nullptr) // presence node
{
    yang_name = "packets"; yang_parent_name = "counter";
}

Native::Flow::Record::Collect::Counter::Packets::~Packets()
{
}

bool Native::Flow::Record::Collect::Counter::Packets::has_data() const
{
    return dropped.is_set
	|| long_.is_set
	|| (rate !=  nullptr && rate->has_data());
}

bool Native::Flow::Record::Collect::Counter::Packets::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped.operation)
	|| is_set(long_.operation)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Flow::Record::Collect::Counter::Packets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packets";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Counter::Packets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Packets' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (long_.is_set || is_set(long_.operation)) leaf_name_data.push_back(long_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Counter::Packets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Flow::Record::Collect::Counter::Packets::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Counter::Packets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::Flow::Record::Collect::Counter::Packets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "long")
    {
        long_ = value;
    }
}

Native::Flow::Record::Collect::Counter::Packets::Rate::Rate()
    :
    per_flow(nullptr) // presence node
{
    yang_name = "rate"; yang_parent_name = "packets";
}

Native::Flow::Record::Collect::Counter::Packets::Rate::~Rate()
{
}

bool Native::Flow::Record::Collect::Counter::Packets::Rate::has_data() const
{
    return (per_flow !=  nullptr && per_flow->has_data());
}

bool Native::Flow::Record::Collect::Counter::Packets::Rate::has_operation() const
{
    return is_set(operation)
	|| (per_flow !=  nullptr && per_flow->has_operation());
}

std::string Native::Flow::Record::Collect::Counter::Packets::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Counter::Packets::Rate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Counter::Packets::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-flow")
    {
        if(per_flow == nullptr)
        {
            per_flow = std::make_shared<Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow>();
        }
        return per_flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Counter::Packets::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_flow != nullptr)
    {
        children["per-flow"] = per_flow;
    }

    return children;
}

void Native::Flow::Record::Collect::Counter::Packets::Rate::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow::PerFlow()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"}
{
    yang_name = "per-flow"; yang_parent_name = "rate";
}

Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow::~PerFlow()
{
}

bool Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-flow";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerFlow' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

Native::Flow::Record::Collect::Datalink::Datalink()
    :
    destination_vlan_id{YType::empty, "destination-vlan-id"},
    ethertype{YType::empty, "ethertype"},
    source_vlan_id{YType::empty, "source-vlan-id"}
    	,
    dot1q(std::make_shared<Native::Flow::Record::Collect::Datalink::Dot1Q>())
	,mac(std::make_shared<Native::Flow::Record::Collect::Datalink::Mac>())
{
    dot1q->parent = this;

    mac->parent = this;

    yang_name = "datalink"; yang_parent_name = "collect";
}

Native::Flow::Record::Collect::Datalink::~Datalink()
{
}

bool Native::Flow::Record::Collect::Datalink::has_data() const
{
    return destination_vlan_id.is_set
	|| ethertype.is_set
	|| source_vlan_id.is_set
	|| (dot1q !=  nullptr && dot1q->has_data())
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Flow::Record::Collect::Datalink::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_vlan_id.operation)
	|| is_set(ethertype.operation)
	|| is_set(source_vlan_id.operation)
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Flow::Record::Collect::Datalink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datalink";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Datalink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Datalink' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_vlan_id.is_set || is_set(destination_vlan_id.operation)) leaf_name_data.push_back(destination_vlan_id.get_name_leafdata());
    if (ethertype.is_set || is_set(ethertype.operation)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (source_vlan_id.is_set || is_set(source_vlan_id.operation)) leaf_name_data.push_back(source_vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Datalink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Flow::Record::Collect::Datalink::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Flow::Record::Collect::Datalink::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Datalink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1q != nullptr)
    {
        children["dot1q"] = dot1q;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Flow::Record::Collect::Datalink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-vlan-id")
    {
        destination_vlan_id = value;
    }
    if(value_path == "ethertype")
    {
        ethertype = value;
    }
    if(value_path == "source-vlan-id")
    {
        source_vlan_id = value;
    }
}

Native::Flow::Record::Collect::Datalink::Dot1Q::Dot1Q()
    :
    priority{YType::empty, "priority"}
    	,
    vlan(std::make_shared<Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan>())
{
    vlan->parent = this;

    yang_name = "dot1q"; yang_parent_name = "datalink";
}

Native::Flow::Record::Collect::Datalink::Dot1Q::~Dot1Q()
{
}

bool Native::Flow::Record::Collect::Datalink::Dot1Q::has_data() const
{
    return priority.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Flow::Record::Collect::Datalink::Dot1Q::has_operation() const
{
    return is_set(operation)
	|| is_set(priority.operation)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Flow::Record::Collect::Datalink::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Datalink::Dot1Q::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot1Q' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Datalink::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Datalink::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Flow::Record::Collect::Datalink::Dot1Q::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority")
    {
        priority = value;
    }
}

Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan::Vlan()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{
    yang_name = "vlan"; yang_parent_name = "dot1q";
}

Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan::~Vlan()
{
}

bool Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan::has_operation() const
{
    return is_set(operation)
	|| is_set(input.operation)
	|| is_set(output.operation);
}

std::string Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan::set_value(const std::string & value_path, std::string value)
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

Native::Flow::Record::Collect::Datalink::Mac::Mac()
    :
    destination(std::make_shared<Native::Flow::Record::Collect::Datalink::Mac::Destination>())
	,source(std::make_shared<Native::Flow::Record::Collect::Datalink::Mac::Source>())
{
    destination->parent = this;

    source->parent = this;

    yang_name = "mac"; yang_parent_name = "datalink";
}

Native::Flow::Record::Collect::Datalink::Mac::~Mac()
{
}

bool Native::Flow::Record::Collect::Datalink::Mac::has_data() const
{
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Flow::Record::Collect::Datalink::Mac::has_operation() const
{
    return is_set(operation)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Flow::Record::Collect::Datalink::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Datalink::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Datalink::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Collect::Datalink::Mac::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Collect::Datalink::Mac::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Datalink::Mac::get_children() const
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

void Native::Flow::Record::Collect::Datalink::Mac::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Collect::Datalink::Mac::Destination::Destination()
    :
    address(std::make_shared<Native::Flow::Record::Collect::Datalink::Mac::Destination::Address>())
{
    address->parent = this;

    yang_name = "destination"; yang_parent_name = "mac";
}

Native::Flow::Record::Collect::Datalink::Mac::Destination::~Destination()
{
}

bool Native::Flow::Record::Collect::Datalink::Mac::Destination::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Flow::Record::Collect::Datalink::Mac::Destination::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Flow::Record::Collect::Datalink::Mac::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Datalink::Mac::Destination::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Datalink::Mac::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Flow::Record::Collect::Datalink::Mac::Destination::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Datalink::Mac::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Flow::Record::Collect::Datalink::Mac::Destination::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Collect::Datalink::Mac::Destination::Address::Address()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{
    yang_name = "address"; yang_parent_name = "destination";
}

Native::Flow::Record::Collect::Datalink::Mac::Destination::Address::~Address()
{
}

bool Native::Flow::Record::Collect::Datalink::Mac::Destination::Address::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Native::Flow::Record::Collect::Datalink::Mac::Destination::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(input.operation)
	|| is_set(output.operation);
}

std::string Native::Flow::Record::Collect::Datalink::Mac::Destination::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Datalink::Mac::Destination::Address::get_entity_path(Entity* ancestor) const
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

    if (input.is_set || is_set(input.operation)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Datalink::Mac::Destination::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Datalink::Mac::Destination::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Datalink::Mac::Destination::Address::set_value(const std::string & value_path, std::string value)
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

Native::Flow::Record::Collect::Datalink::Mac::Source::Source()
    :
    address(std::make_shared<Native::Flow::Record::Collect::Datalink::Mac::Source::Address>())
{
    address->parent = this;

    yang_name = "source"; yang_parent_name = "mac";
}

Native::Flow::Record::Collect::Datalink::Mac::Source::~Source()
{
}

bool Native::Flow::Record::Collect::Datalink::Mac::Source::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Flow::Record::Collect::Datalink::Mac::Source::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Flow::Record::Collect::Datalink::Mac::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Datalink::Mac::Source::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Datalink::Mac::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Flow::Record::Collect::Datalink::Mac::Source::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Datalink::Mac::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Flow::Record::Collect::Datalink::Mac::Source::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Collect::Datalink::Mac::Source::Address::Address()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{
    yang_name = "address"; yang_parent_name = "source";
}

Native::Flow::Record::Collect::Datalink::Mac::Source::Address::~Address()
{
}

bool Native::Flow::Record::Collect::Datalink::Mac::Source::Address::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Native::Flow::Record::Collect::Datalink::Mac::Source::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(input.operation)
	|| is_set(output.operation);
}

std::string Native::Flow::Record::Collect::Datalink::Mac::Source::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Datalink::Mac::Source::Address::get_entity_path(Entity* ancestor) const
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

    if (input.is_set || is_set(input.operation)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Datalink::Mac::Source::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Datalink::Mac::Source::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Datalink::Mac::Source::Address::set_value(const std::string & value_path, std::string value)
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

Native::Flow::Record::Collect::Flow_::Flow_()
    :
    direction{YType::empty, "direction"},
    end_reason{YType::empty, "end-reason"},
    sampler{YType::empty, "sampler"}
    	,
    cts(std::make_shared<Native::Flow::Record::Collect::Flow_::Cts>())
	,observation(std::make_shared<Native::Flow::Record::Collect::Flow_::Observation>())
{
    cts->parent = this;

    observation->parent = this;

    yang_name = "flow"; yang_parent_name = "collect";
}

Native::Flow::Record::Collect::Flow_::~Flow_()
{
}

bool Native::Flow::Record::Collect::Flow_::has_data() const
{
    return direction.is_set
	|| end_reason.is_set
	|| sampler.is_set
	|| (cts !=  nullptr && cts->has_data())
	|| (observation !=  nullptr && observation->has_data());
}

bool Native::Flow::Record::Collect::Flow_::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(end_reason.operation)
	|| is_set(sampler.operation)
	|| (cts !=  nullptr && cts->has_operation())
	|| (observation !=  nullptr && observation->has_operation());
}

std::string Native::Flow::Record::Collect::Flow_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Flow_::get_entity_path(Entity* ancestor) const
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

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (end_reason.is_set || is_set(end_reason.operation)) leaf_name_data.push_back(end_reason.get_name_leafdata());
    if (sampler.is_set || is_set(sampler.operation)) leaf_name_data.push_back(sampler.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Flow_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Flow::Record::Collect::Flow_::Cts>();
        }
        return cts;
    }

    if(child_yang_name == "observation")
    {
        if(observation == nullptr)
        {
            observation = std::make_shared<Native::Flow::Record::Collect::Flow_::Observation>();
        }
        return observation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Flow_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cts != nullptr)
    {
        children["cts"] = cts;
    }

    if(observation != nullptr)
    {
        children["observation"] = observation;
    }

    return children;
}

void Native::Flow::Record::Collect::Flow_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "end-reason")
    {
        end_reason = value;
    }
    if(value_path == "sampler")
    {
        sampler = value;
    }
}

Native::Flow::Record::Collect::Flow_::Cts::Cts()
    :
    destination(std::make_shared<Native::Flow::Record::Collect::Flow_::Cts::Destination>())
	,source(std::make_shared<Native::Flow::Record::Collect::Flow_::Cts::Source>())
{
    destination->parent = this;

    source->parent = this;

    yang_name = "cts"; yang_parent_name = "flow";
}

Native::Flow::Record::Collect::Flow_::Cts::~Cts()
{
}

bool Native::Flow::Record::Collect::Flow_::Cts::has_data() const
{
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Flow::Record::Collect::Flow_::Cts::has_operation() const
{
    return is_set(operation)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Flow::Record::Collect::Flow_::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Flow_::Cts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cts' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Flow_::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Collect::Flow_::Cts::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Collect::Flow_::Cts::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Flow_::Cts::get_children() const
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

void Native::Flow::Record::Collect::Flow_::Cts::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Collect::Flow_::Cts::Destination::Destination()
    :
    group_tag{YType::empty, "group-tag"}
{
    yang_name = "destination"; yang_parent_name = "cts";
}

Native::Flow::Record::Collect::Flow_::Cts::Destination::~Destination()
{
}

bool Native::Flow::Record::Collect::Flow_::Cts::Destination::has_data() const
{
    return group_tag.is_set;
}

bool Native::Flow::Record::Collect::Flow_::Cts::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(group_tag.operation);
}

std::string Native::Flow::Record::Collect::Flow_::Cts::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Flow_::Cts::Destination::get_entity_path(Entity* ancestor) const
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

    if (group_tag.is_set || is_set(group_tag.operation)) leaf_name_data.push_back(group_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Flow_::Cts::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Flow_::Cts::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Flow_::Cts::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-tag")
    {
        group_tag = value;
    }
}

Native::Flow::Record::Collect::Flow_::Cts::Source::Source()
    :
    group_tag{YType::empty, "group-tag"}
{
    yang_name = "source"; yang_parent_name = "cts";
}

Native::Flow::Record::Collect::Flow_::Cts::Source::~Source()
{
}

bool Native::Flow::Record::Collect::Flow_::Cts::Source::has_data() const
{
    return group_tag.is_set;
}

bool Native::Flow::Record::Collect::Flow_::Cts::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(group_tag.operation);
}

std::string Native::Flow::Record::Collect::Flow_::Cts::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Flow_::Cts::Source::get_entity_path(Entity* ancestor) const
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

    if (group_tag.is_set || is_set(group_tag.operation)) leaf_name_data.push_back(group_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Flow_::Cts::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Flow_::Cts::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Flow_::Cts::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-tag")
    {
        group_tag = value;
    }
}

Native::Flow::Record::Collect::Flow_::Observation::Observation()
    :
    point{YType::empty, "point"}
{
    yang_name = "observation"; yang_parent_name = "flow";
}

Native::Flow::Record::Collect::Flow_::Observation::~Observation()
{
}

bool Native::Flow::Record::Collect::Flow_::Observation::has_data() const
{
    return point.is_set;
}

bool Native::Flow::Record::Collect::Flow_::Observation::has_operation() const
{
    return is_set(operation)
	|| is_set(point.operation);
}

std::string Native::Flow::Record::Collect::Flow_::Observation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "observation";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Flow_::Observation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Observation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (point.is_set || is_set(point.operation)) leaf_name_data.push_back(point.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Flow_::Observation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Flow_::Observation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Flow_::Observation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "point")
    {
        point = value;
    }
}

Native::Flow::Record::Collect::Interface::Interface()
    :
    input(nullptr) // presence node
	,output(nullptr) // presence node
{
    yang_name = "interface"; yang_parent_name = "collect";
}

Native::Flow::Record::Collect::Interface::~Interface()
{
}

bool Native::Flow::Record::Collect::Interface::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Flow::Record::Collect::Interface::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Flow::Record::Collect::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Flow::Record::Collect::Interface::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Flow::Record::Collect::Interface::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::Flow::Record::Collect::Interface::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Collect::Interface::Input::Input()
    :
    snmp{YType::empty, "snmp"}
{
    yang_name = "input"; yang_parent_name = "interface";
}

Native::Flow::Record::Collect::Interface::Input::~Input()
{
}

bool Native::Flow::Record::Collect::Interface::Input::has_data() const
{
    return snmp.is_set;
}

bool Native::Flow::Record::Collect::Interface::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(snmp.operation);
}

std::string Native::Flow::Record::Collect::Interface::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Interface::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmp.is_set || is_set(snmp.operation)) leaf_name_data.push_back(snmp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Interface::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Interface::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Interface::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "snmp")
    {
        snmp = value;
    }
}

Native::Flow::Record::Collect::Interface::Output::Output()
    :
    snmp{YType::empty, "snmp"}
{
    yang_name = "output"; yang_parent_name = "interface";
}

Native::Flow::Record::Collect::Interface::Output::~Output()
{
}

bool Native::Flow::Record::Collect::Interface::Output::has_data() const
{
    return snmp.is_set;
}

bool Native::Flow::Record::Collect::Interface::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(snmp.operation);
}

std::string Native::Flow::Record::Collect::Interface::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Interface::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmp.is_set || is_set(snmp.operation)) leaf_name_data.push_back(snmp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Interface::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Interface::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Interface::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "snmp")
    {
        snmp = value;
    }
}

Native::Flow::Record::Collect::Ipv4::Ipv4()
    :
    dscp{YType::empty, "dscp"},
    header_length{YType::empty, "header-length"},
    id{YType::empty, "id"},
    precedence{YType::empty, "precedence"},
    protocol{YType::empty, "protocol"},
    tos{YType::empty, "tos"},
    version{YType::empty, "version"}
    	,
    destination(std::make_shared<Native::Flow::Record::Collect::Ipv4::Destination>())
	,fragmentation(std::make_shared<Native::Flow::Record::Collect::Ipv4::Fragmentation>())
	,length(std::make_shared<Native::Flow::Record::Collect::Ipv4::Length>())
	,option(std::make_shared<Native::Flow::Record::Collect::Ipv4::Option>())
	,section(std::make_shared<Native::Flow::Record::Collect::Ipv4::Section>())
	,source(std::make_shared<Native::Flow::Record::Collect::Ipv4::Source>())
	,total_length(nullptr) // presence node
	,ttl(nullptr) // presence node
{
    destination->parent = this;

    fragmentation->parent = this;

    length->parent = this;

    option->parent = this;

    section->parent = this;

    source->parent = this;

    yang_name = "ipv4"; yang_parent_name = "collect";
}

Native::Flow::Record::Collect::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Collect::Ipv4::has_data() const
{
    return dscp.is_set
	|| header_length.is_set
	|| id.is_set
	|| precedence.is_set
	|| protocol.is_set
	|| tos.is_set
	|| version.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (fragmentation !=  nullptr && fragmentation->has_data())
	|| (length !=  nullptr && length->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (section !=  nullptr && section->has_data())
	|| (source !=  nullptr && source->has_data())
	|| (total_length !=  nullptr && total_length->has_data())
	|| (ttl !=  nullptr && ttl->has_data());
}

bool Native::Flow::Record::Collect::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp.operation)
	|| is_set(header_length.operation)
	|| is_set(id.operation)
	|| is_set(precedence.operation)
	|| is_set(protocol.operation)
	|| is_set(tos.operation)
	|| is_set(version.operation)
	|| (destination !=  nullptr && destination->has_operation())
	|| (fragmentation !=  nullptr && fragmentation->has_operation())
	|| (length !=  nullptr && length->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (section !=  nullptr && section->has_operation())
	|| (source !=  nullptr && source->has_operation())
	|| (total_length !=  nullptr && total_length->has_operation())
	|| (ttl !=  nullptr && ttl->has_operation());
}

std::string Native::Flow::Record::Collect::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv4::get_entity_path(Entity* ancestor) const
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

    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (header_length.is_set || is_set(header_length.operation)) leaf_name_data.push_back(header_length.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (tos.is_set || is_set(tos.operation)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Collect::Ipv4::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "fragmentation")
    {
        if(fragmentation == nullptr)
        {
            fragmentation = std::make_shared<Native::Flow::Record::Collect::Ipv4::Fragmentation>();
        }
        return fragmentation;
    }

    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::Flow::Record::Collect::Ipv4::Length>();
        }
        return length;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Flow::Record::Collect::Ipv4::Option>();
        }
        return option;
    }

    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<Native::Flow::Record::Collect::Ipv4::Section>();
        }
        return section;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Collect::Ipv4::Source>();
        }
        return source;
    }

    if(child_yang_name == "total-length")
    {
        if(total_length == nullptr)
        {
            total_length = std::make_shared<Native::Flow::Record::Collect::Ipv4::TotalLength>();
        }
        return total_length;
    }

    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Native::Flow::Record::Collect::Ipv4::Ttl>();
        }
        return ttl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(fragmentation != nullptr)
    {
        children["fragmentation"] = fragmentation;
    }

    if(length != nullptr)
    {
        children["length"] = length;
    }

    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(section != nullptr)
    {
        children["section"] = section;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(total_length != nullptr)
    {
        children["total-length"] = total_length;
    }

    if(ttl != nullptr)
    {
        children["ttl"] = ttl;
    }

    return children;
}

void Native::Flow::Record::Collect::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "header-length")
    {
        header_length = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "tos")
    {
        tos = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Flow::Record::Collect::Ipv4::Destination::Destination()
    :
    address{YType::empty, "address"}
    	,
    mask(nullptr) // presence node
	,prefix(nullptr) // presence node
{
    yang_name = "destination"; yang_parent_name = "ipv4";
}

Native::Flow::Record::Collect::Ipv4::Destination::~Destination()
{
}

bool Native::Flow::Record::Collect::Ipv4::Destination::has_data() const
{
    return address.is_set
	|| (mask !=  nullptr && mask->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Collect::Ipv4::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (mask !=  nullptr && mask->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Collect::Ipv4::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv4::Destination::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Collect::Ipv4::Destination::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Collect::Ipv4::Destination::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Destination::get_children() const
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

void Native::Flow::Record::Collect::Ipv4::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Flow::Record::Collect::Ipv4::Destination::Mask::Mask()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{
    yang_name = "mask"; yang_parent_name = "destination";
}

Native::Flow::Record::Collect::Ipv4::Destination::Mask::~Mask()
{
}

bool Native::Flow::Record::Collect::Ipv4::Destination::Mask::has_data() const
{
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Collect::Ipv4::Destination::Mask::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum_mask.operation);
}

std::string Native::Flow::Record::Collect::Ipv4::Destination::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv4::Destination::Mask::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Destination::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Destination::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv4::Destination::Mask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
    }
}

Native::Flow::Record::Collect::Ipv4::Destination::Prefix::Prefix()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{
    yang_name = "prefix"; yang_parent_name = "destination";
}

Native::Flow::Record::Collect::Ipv4::Destination::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Collect::Ipv4::Destination::Prefix::has_data() const
{
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Collect::Ipv4::Destination::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum_mask.operation);
}

std::string Native::Flow::Record::Collect::Ipv4::Destination::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv4::Destination::Prefix::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Destination::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Destination::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv4::Destination::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
    }
}

Native::Flow::Record::Collect::Ipv4::Fragmentation::Fragmentation()
    :
    flags{YType::empty, "flags"},
    offset{YType::empty, "offset"}
{
    yang_name = "fragmentation"; yang_parent_name = "ipv4";
}

Native::Flow::Record::Collect::Ipv4::Fragmentation::~Fragmentation()
{
}

bool Native::Flow::Record::Collect::Ipv4::Fragmentation::has_data() const
{
    return flags.is_set
	|| offset.is_set;
}

bool Native::Flow::Record::Collect::Ipv4::Fragmentation::has_operation() const
{
    return is_set(operation)
	|| is_set(flags.operation)
	|| is_set(offset.operation);
}

std::string Native::Flow::Record::Collect::Ipv4::Fragmentation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fragmentation";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv4::Fragmentation::get_entity_path(Entity* ancestor) const
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
    if (offset.is_set || is_set(offset.operation)) leaf_name_data.push_back(offset.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Fragmentation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Fragmentation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv4::Fragmentation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "offset")
    {
        offset = value;
    }
}

Native::Flow::Record::Collect::Ipv4::Length::Length()
    :
    header{YType::empty, "header"},
    payload{YType::empty, "payload"}
    	,
    total(nullptr) // presence node
{
    yang_name = "length"; yang_parent_name = "ipv4";
}

Native::Flow::Record::Collect::Ipv4::Length::~Length()
{
}

bool Native::Flow::Record::Collect::Ipv4::Length::has_data() const
{
    return header.is_set
	|| payload.is_set
	|| (total !=  nullptr && total->has_data());
}

bool Native::Flow::Record::Collect::Ipv4::Length::has_operation() const
{
    return is_set(operation)
	|| is_set(header.operation)
	|| is_set(payload.operation)
	|| (total !=  nullptr && total->has_operation());
}

std::string Native::Flow::Record::Collect::Ipv4::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv4::Length::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Native::Flow::Record::Collect::Ipv4::Length::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(total != nullptr)
    {
        children["total"] = total;
    }

    return children;
}

void Native::Flow::Record::Collect::Ipv4::Length::set_value(const std::string & value_path, std::string value)
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

Native::Flow::Record::Collect::Ipv4::Length::Total::Total()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
{
    yang_name = "total"; yang_parent_name = "length";
}

Native::Flow::Record::Collect::Ipv4::Length::Total::~Total()
{
}

bool Native::Flow::Record::Collect::Ipv4::Length::Total::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Flow::Record::Collect::Ipv4::Length::Total::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation);
}

std::string Native::Flow::Record::Collect::Ipv4::Length::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv4::Length::Total::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Length::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Length::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv4::Length::Total::set_value(const std::string & value_path, std::string value)
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

Native::Flow::Record::Collect::Ipv4::Option::Option()
    :
    map{YType::empty, "map"}
{
    yang_name = "option"; yang_parent_name = "ipv4";
}

Native::Flow::Record::Collect::Ipv4::Option::~Option()
{
}

bool Native::Flow::Record::Collect::Ipv4::Option::has_data() const
{
    return map.is_set;
}

bool Native::Flow::Record::Collect::Ipv4::Option::has_operation() const
{
    return is_set(operation)
	|| is_set(map.operation);
}

std::string Native::Flow::Record::Collect::Ipv4::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv4::Option::get_entity_path(Entity* ancestor) const
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

    if (map.is_set || is_set(map.operation)) leaf_name_data.push_back(map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv4::Option::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map")
    {
        map = value;
    }
}

Native::Flow::Record::Collect::Ipv4::Section::Section()
    :
    header(std::make_shared<Native::Flow::Record::Collect::Ipv4::Section::Header>())
	,payload(std::make_shared<Native::Flow::Record::Collect::Ipv4::Section::Payload>())
{
    header->parent = this;

    payload->parent = this;

    yang_name = "section"; yang_parent_name = "ipv4";
}

Native::Flow::Record::Collect::Ipv4::Section::~Section()
{
}

bool Native::Flow::Record::Collect::Ipv4::Section::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (payload !=  nullptr && payload->has_data());
}

bool Native::Flow::Record::Collect::Ipv4::Section::has_operation() const
{
    return is_set(operation)
	|| (header !=  nullptr && header->has_operation())
	|| (payload !=  nullptr && payload->has_operation());
}

std::string Native::Flow::Record::Collect::Ipv4::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv4::Section::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<Native::Flow::Record::Collect::Ipv4::Section::Header>();
        }
        return header;
    }

    if(child_yang_name == "payload")
    {
        if(payload == nullptr)
        {
            payload = std::make_shared<Native::Flow::Record::Collect::Ipv4::Section::Payload>();
        }
        return payload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Section::get_children() const
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

void Native::Flow::Record::Collect::Ipv4::Section::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Collect::Ipv4::Section::Header::Header()
    :
    size{YType::uint16, "size"}
{
    yang_name = "header"; yang_parent_name = "section";
}

Native::Flow::Record::Collect::Ipv4::Section::Header::~Header()
{
}

bool Native::Flow::Record::Collect::Ipv4::Section::Header::has_data() const
{
    return size.is_set;
}

bool Native::Flow::Record::Collect::Ipv4::Section::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(size.operation);
}

std::string Native::Flow::Record::Collect::Ipv4::Section::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv4::Section::Header::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Section::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Section::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv4::Section::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "size")
    {
        size = value;
    }
}

Native::Flow::Record::Collect::Ipv4::Section::Payload::Payload()
    :
    size{YType::uint16, "size"}
{
    yang_name = "payload"; yang_parent_name = "section";
}

Native::Flow::Record::Collect::Ipv4::Section::Payload::~Payload()
{
}

bool Native::Flow::Record::Collect::Ipv4::Section::Payload::has_data() const
{
    return size.is_set;
}

bool Native::Flow::Record::Collect::Ipv4::Section::Payload::has_operation() const
{
    return is_set(operation)
	|| is_set(size.operation);
}

std::string Native::Flow::Record::Collect::Ipv4::Section::Payload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "payload";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv4::Section::Payload::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Section::Payload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Section::Payload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv4::Section::Payload::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "size")
    {
        size = value;
    }
}

Native::Flow::Record::Collect::Ipv4::Source::Source()
    :
    address{YType::empty, "address"}
    	,
    mask(nullptr) // presence node
	,prefix(nullptr) // presence node
{
    yang_name = "source"; yang_parent_name = "ipv4";
}

Native::Flow::Record::Collect::Ipv4::Source::~Source()
{
}

bool Native::Flow::Record::Collect::Ipv4::Source::has_data() const
{
    return address.is_set
	|| (mask !=  nullptr && mask->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Collect::Ipv4::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (mask !=  nullptr && mask->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Collect::Ipv4::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv4::Source::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Collect::Ipv4::Source::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Collect::Ipv4::Source::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Source::get_children() const
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

void Native::Flow::Record::Collect::Ipv4::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Flow::Record::Collect::Ipv4::Source::Mask::Mask()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{
    yang_name = "mask"; yang_parent_name = "source";
}

Native::Flow::Record::Collect::Ipv4::Source::Mask::~Mask()
{
}

bool Native::Flow::Record::Collect::Ipv4::Source::Mask::has_data() const
{
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Collect::Ipv4::Source::Mask::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum_mask.operation);
}

std::string Native::Flow::Record::Collect::Ipv4::Source::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv4::Source::Mask::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Source::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Source::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv4::Source::Mask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
    }
}

Native::Flow::Record::Collect::Ipv4::Source::Prefix::Prefix()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{
    yang_name = "prefix"; yang_parent_name = "source";
}

Native::Flow::Record::Collect::Ipv4::Source::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Collect::Ipv4::Source::Prefix::has_data() const
{
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Collect::Ipv4::Source::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum_mask.operation);
}

std::string Native::Flow::Record::Collect::Ipv4::Source::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv4::Source::Prefix::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Source::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Source::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv4::Source::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
    }
}

Native::Flow::Record::Collect::Ipv4::TotalLength::TotalLength()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
{
    yang_name = "total-length"; yang_parent_name = "ipv4";
}

Native::Flow::Record::Collect::Ipv4::TotalLength::~TotalLength()
{
}

bool Native::Flow::Record::Collect::Ipv4::TotalLength::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Flow::Record::Collect::Ipv4::TotalLength::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation);
}

std::string Native::Flow::Record::Collect::Ipv4::TotalLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-length";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv4::TotalLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TotalLength' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::TotalLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::TotalLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv4::TotalLength::set_value(const std::string & value_path, std::string value)
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

Native::Flow::Record::Collect::Ipv4::Ttl::Ttl()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
{
    yang_name = "ttl"; yang_parent_name = "ipv4";
}

Native::Flow::Record::Collect::Ipv4::Ttl::~Ttl()
{
}

bool Native::Flow::Record::Collect::Ipv4::Ttl::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Flow::Record::Collect::Ipv4::Ttl::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation);
}

std::string Native::Flow::Record::Collect::Ipv4::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv4::Ttl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ttl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv4::Ttl::set_value(const std::string & value_path, std::string value)
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

Native::Flow::Record::Collect::Ipv6::Ipv6()
    :
    dscp{YType::empty, "dscp"},
    flow_label{YType::empty, "flow-label"},
    next_header{YType::empty, "next-header"},
    payload_length{YType::empty, "payload-length"},
    precedence{YType::empty, "precedence"},
    protocol{YType::empty, "protocol"},
    traffic_class{YType::empty, "traffic-class"},
    version{YType::empty, "version"}
    	,
    destination(std::make_shared<Native::Flow::Record::Collect::Ipv6::Destination>())
	,extension(std::make_shared<Native::Flow::Record::Collect::Ipv6::Extension>())
	,fragmentation(std::make_shared<Native::Flow::Record::Collect::Ipv6::Fragmentation>())
	,hop_limit(nullptr) // presence node
	,length(std::make_shared<Native::Flow::Record::Collect::Ipv6::Length>())
	,section(std::make_shared<Native::Flow::Record::Collect::Ipv6::Section>())
	,source(std::make_shared<Native::Flow::Record::Collect::Ipv6::Source>())
{
    destination->parent = this;

    extension->parent = this;

    fragmentation->parent = this;

    length->parent = this;

    section->parent = this;

    source->parent = this;

    yang_name = "ipv6"; yang_parent_name = "collect";
}

Native::Flow::Record::Collect::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Collect::Ipv6::has_data() const
{
    return dscp.is_set
	|| flow_label.is_set
	|| next_header.is_set
	|| payload_length.is_set
	|| precedence.is_set
	|| protocol.is_set
	|| traffic_class.is_set
	|| version.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (extension !=  nullptr && extension->has_data())
	|| (fragmentation !=  nullptr && fragmentation->has_data())
	|| (hop_limit !=  nullptr && hop_limit->has_data())
	|| (length !=  nullptr && length->has_data())
	|| (section !=  nullptr && section->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Flow::Record::Collect::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp.operation)
	|| is_set(flow_label.operation)
	|| is_set(next_header.operation)
	|| is_set(payload_length.operation)
	|| is_set(precedence.operation)
	|| is_set(protocol.operation)
	|| is_set(traffic_class.operation)
	|| is_set(version.operation)
	|| (destination !=  nullptr && destination->has_operation())
	|| (extension !=  nullptr && extension->has_operation())
	|| (fragmentation !=  nullptr && fragmentation->has_operation())
	|| (hop_limit !=  nullptr && hop_limit->has_operation())
	|| (length !=  nullptr && length->has_operation())
	|| (section !=  nullptr && section->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Flow::Record::Collect::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv6::get_entity_path(Entity* ancestor) const
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

    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (flow_label.is_set || is_set(flow_label.operation)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (next_header.is_set || is_set(next_header.operation)) leaf_name_data.push_back(next_header.get_name_leafdata());
    if (payload_length.is_set || is_set(payload_length.operation)) leaf_name_data.push_back(payload_length.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.operation)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Collect::Ipv6::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "extension")
    {
        if(extension == nullptr)
        {
            extension = std::make_shared<Native::Flow::Record::Collect::Ipv6::Extension>();
        }
        return extension;
    }

    if(child_yang_name == "fragmentation")
    {
        if(fragmentation == nullptr)
        {
            fragmentation = std::make_shared<Native::Flow::Record::Collect::Ipv6::Fragmentation>();
        }
        return fragmentation;
    }

    if(child_yang_name == "hop-limit")
    {
        if(hop_limit == nullptr)
        {
            hop_limit = std::make_shared<Native::Flow::Record::Collect::Ipv6::HopLimit>();
        }
        return hop_limit;
    }

    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::Flow::Record::Collect::Ipv6::Length>();
        }
        return length;
    }

    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<Native::Flow::Record::Collect::Ipv6::Section>();
        }
        return section;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Collect::Ipv6::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(extension != nullptr)
    {
        children["extension"] = extension;
    }

    if(fragmentation != nullptr)
    {
        children["fragmentation"] = fragmentation;
    }

    if(hop_limit != nullptr)
    {
        children["hop-limit"] = hop_limit;
    }

    if(length != nullptr)
    {
        children["length"] = length;
    }

    if(section != nullptr)
    {
        children["section"] = section;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Flow::Record::Collect::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "flow-label")
    {
        flow_label = value;
    }
    if(value_path == "next-header")
    {
        next_header = value;
    }
    if(value_path == "payload-length")
    {
        payload_length = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "traffic-class")
    {
        traffic_class = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Flow::Record::Collect::Ipv6::Destination::Destination()
    :
    address{YType::empty, "address"}
    	,
    mask(nullptr) // presence node
	,prefix(nullptr) // presence node
{
    yang_name = "destination"; yang_parent_name = "ipv6";
}

Native::Flow::Record::Collect::Ipv6::Destination::~Destination()
{
}

bool Native::Flow::Record::Collect::Ipv6::Destination::has_data() const
{
    return address.is_set
	|| (mask !=  nullptr && mask->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Collect::Ipv6::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (mask !=  nullptr && mask->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Collect::Ipv6::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv6::Destination::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv6::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Collect::Ipv6::Destination::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Collect::Ipv6::Destination::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv6::Destination::get_children() const
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

void Native::Flow::Record::Collect::Ipv6::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Flow::Record::Collect::Ipv6::Destination::Mask::Mask()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{
    yang_name = "mask"; yang_parent_name = "destination";
}

Native::Flow::Record::Collect::Ipv6::Destination::Mask::~Mask()
{
}

bool Native::Flow::Record::Collect::Ipv6::Destination::Mask::has_data() const
{
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Collect::Ipv6::Destination::Mask::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum_mask.operation);
}

std::string Native::Flow::Record::Collect::Ipv6::Destination::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv6::Destination::Mask::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv6::Destination::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv6::Destination::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv6::Destination::Mask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
    }
}

Native::Flow::Record::Collect::Ipv6::Destination::Prefix::Prefix()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{
    yang_name = "prefix"; yang_parent_name = "destination";
}

Native::Flow::Record::Collect::Ipv6::Destination::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Collect::Ipv6::Destination::Prefix::has_data() const
{
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Collect::Ipv6::Destination::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum_mask.operation);
}

std::string Native::Flow::Record::Collect::Ipv6::Destination::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv6::Destination::Prefix::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv6::Destination::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv6::Destination::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv6::Destination::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
    }
}

Native::Flow::Record::Collect::Ipv6::Extension::Extension()
    :
    map{YType::empty, "map"}
{
    yang_name = "extension"; yang_parent_name = "ipv6";
}

Native::Flow::Record::Collect::Ipv6::Extension::~Extension()
{
}

bool Native::Flow::Record::Collect::Ipv6::Extension::has_data() const
{
    return map.is_set;
}

bool Native::Flow::Record::Collect::Ipv6::Extension::has_operation() const
{
    return is_set(operation)
	|| is_set(map.operation);
}

std::string Native::Flow::Record::Collect::Ipv6::Extension::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extension";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv6::Extension::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv6::Extension::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv6::Extension::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv6::Extension::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map")
    {
        map = value;
    }
}

Native::Flow::Record::Collect::Ipv6::Fragmentation::Fragmentation()
    :
    flags{YType::empty, "flags"},
    id{YType::empty, "id"},
    offset{YType::empty, "offset"}
{
    yang_name = "fragmentation"; yang_parent_name = "ipv6";
}

Native::Flow::Record::Collect::Ipv6::Fragmentation::~Fragmentation()
{
}

bool Native::Flow::Record::Collect::Ipv6::Fragmentation::has_data() const
{
    return flags.is_set
	|| id.is_set
	|| offset.is_set;
}

bool Native::Flow::Record::Collect::Ipv6::Fragmentation::has_operation() const
{
    return is_set(operation)
	|| is_set(flags.operation)
	|| is_set(id.operation)
	|| is_set(offset.operation);
}

std::string Native::Flow::Record::Collect::Ipv6::Fragmentation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fragmentation";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv6::Fragmentation::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv6::Fragmentation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv6::Fragmentation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv6::Fragmentation::set_value(const std::string & value_path, std::string value)
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

Native::Flow::Record::Collect::Ipv6::HopLimit::HopLimit()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
{
    yang_name = "hop-limit"; yang_parent_name = "ipv6";
}

Native::Flow::Record::Collect::Ipv6::HopLimit::~HopLimit()
{
}

bool Native::Flow::Record::Collect::Ipv6::HopLimit::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Flow::Record::Collect::Ipv6::HopLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation);
}

std::string Native::Flow::Record::Collect::Ipv6::HopLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop-limit";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv6::HopLimit::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv6::HopLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv6::HopLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv6::HopLimit::set_value(const std::string & value_path, std::string value)
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

Native::Flow::Record::Collect::Ipv6::Length::Length()
    :
    header{YType::empty, "header"},
    payload{YType::empty, "payload"}
    	,
    total(nullptr) // presence node
{
    yang_name = "length"; yang_parent_name = "ipv6";
}

Native::Flow::Record::Collect::Ipv6::Length::~Length()
{
}

bool Native::Flow::Record::Collect::Ipv6::Length::has_data() const
{
    return header.is_set
	|| payload.is_set
	|| (total !=  nullptr && total->has_data());
}

bool Native::Flow::Record::Collect::Ipv6::Length::has_operation() const
{
    return is_set(operation)
	|| is_set(header.operation)
	|| is_set(payload.operation)
	|| (total !=  nullptr && total->has_operation());
}

std::string Native::Flow::Record::Collect::Ipv6::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv6::Length::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv6::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Native::Flow::Record::Collect::Ipv6::Length::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv6::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(total != nullptr)
    {
        children["total"] = total;
    }

    return children;
}

void Native::Flow::Record::Collect::Ipv6::Length::set_value(const std::string & value_path, std::string value)
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

Native::Flow::Record::Collect::Ipv6::Length::Total::Total()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
{
    yang_name = "total"; yang_parent_name = "length";
}

Native::Flow::Record::Collect::Ipv6::Length::Total::~Total()
{
}

bool Native::Flow::Record::Collect::Ipv6::Length::Total::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Flow::Record::Collect::Ipv6::Length::Total::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation);
}

std::string Native::Flow::Record::Collect::Ipv6::Length::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv6::Length::Total::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv6::Length::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv6::Length::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv6::Length::Total::set_value(const std::string & value_path, std::string value)
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

Native::Flow::Record::Collect::Ipv6::Section::Section()
    :
    header(std::make_shared<Native::Flow::Record::Collect::Ipv6::Section::Header>())
	,payload(std::make_shared<Native::Flow::Record::Collect::Ipv6::Section::Payload>())
{
    header->parent = this;

    payload->parent = this;

    yang_name = "section"; yang_parent_name = "ipv6";
}

Native::Flow::Record::Collect::Ipv6::Section::~Section()
{
}

bool Native::Flow::Record::Collect::Ipv6::Section::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (payload !=  nullptr && payload->has_data());
}

bool Native::Flow::Record::Collect::Ipv6::Section::has_operation() const
{
    return is_set(operation)
	|| (header !=  nullptr && header->has_operation())
	|| (payload !=  nullptr && payload->has_operation());
}

std::string Native::Flow::Record::Collect::Ipv6::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv6::Section::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv6::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<Native::Flow::Record::Collect::Ipv6::Section::Header>();
        }
        return header;
    }

    if(child_yang_name == "payload")
    {
        if(payload == nullptr)
        {
            payload = std::make_shared<Native::Flow::Record::Collect::Ipv6::Section::Payload>();
        }
        return payload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv6::Section::get_children() const
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

void Native::Flow::Record::Collect::Ipv6::Section::set_value(const std::string & value_path, std::string value)
{
}

Native::Flow::Record::Collect::Ipv6::Section::Header::Header()
    :
    size{YType::uint16, "size"}
{
    yang_name = "header"; yang_parent_name = "section";
}

Native::Flow::Record::Collect::Ipv6::Section::Header::~Header()
{
}

bool Native::Flow::Record::Collect::Ipv6::Section::Header::has_data() const
{
    return size.is_set;
}

bool Native::Flow::Record::Collect::Ipv6::Section::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(size.operation);
}

std::string Native::Flow::Record::Collect::Ipv6::Section::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv6::Section::Header::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv6::Section::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv6::Section::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv6::Section::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "size")
    {
        size = value;
    }
}

Native::Flow::Record::Collect::Ipv6::Section::Payload::Payload()
    :
    size{YType::uint16, "size"}
{
    yang_name = "payload"; yang_parent_name = "section";
}

Native::Flow::Record::Collect::Ipv6::Section::Payload::~Payload()
{
}

bool Native::Flow::Record::Collect::Ipv6::Section::Payload::has_data() const
{
    return size.is_set;
}

bool Native::Flow::Record::Collect::Ipv6::Section::Payload::has_operation() const
{
    return is_set(operation)
	|| is_set(size.operation);
}

std::string Native::Flow::Record::Collect::Ipv6::Section::Payload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "payload";

    return path_buffer.str();

}

const EntityPath Native::Flow::Record::Collect::Ipv6::Section::Payload::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv6::Section::Payload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv6::Section::Payload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv6::Section::Payload::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "size")
    {
        size = value;
    }
}

const Enum::YLeaf Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::PreferenceEnum::mldp {0, "mldp"};
const Enum::YLeaf Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::PreferenceEnum::pim {1, "pim"};

const Enum::YLeaf Native::Rmon::Alarm::TestModeEnum::absolute {0, "absolute"};
const Enum::YLeaf Native::Rmon::Alarm::TestModeEnum::delta {1, "delta"};

const Enum::YLeaf Native::Flow::Record::TypeEnum::performance_monitor {0, "performance-monitor"};


}
}

